#include "Socketserver.h"
#include <unistd.h>


SocketServer::SocketServer()
{
}


SocketServer::~SocketServer()
{
}



bool SocketServer::create_socket()
{
    descriptor = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

    if ( descriptor < 0 )
        return false;

    info.sin_family = AF_INET;
    info.sin_addr.s_addr = INADDR_ANY;  //Podemos restringir conexiones
    info.sin_port = htons(4050);
    memset(&info.sin_zero,0,sizeof(info.sin_zero));
    return true; 
}

/*
bind()
0. Descriptor de archivo al socket
1. Puntero a sockaddr utilizando su direcciń de memoria
2. Variable tipo socklen_t con el tamaño de la variable sockaddr
*/

bool SocketServer::link_to_kernel(){
    if( bind(descriptor,(sockaddr*)&info,(socklen_t)sizeof(info) ) < 0)
        return false;

    listen(descriptor, 5);
    return true;
}


void SocketServer::run(){  //Corremos el servidor

    if ( !create_socket() )
        throw string("Error creating socket");

    if ( !link_to_kernel() )
        throw string("Error linking socket to kernel");
    

    while (true)   //Crear estructura para pasar como argumento a un hilo
    {
        DATA_SOCKET_T data;  //Inicializamos la estructura de los datos de referencia al socket, del servidor
        sockaddr *info_p=&data.info;
        socklen_t dinfo_size=sizeof(data.info);
        data.descriptor = accept(descriptor, (sockaddr*)&data.info, &dinfo_size);  //Se detiene el bucle, a la escucha


        // data.descriptor almacena el descriptor a la conexión del cliente NO del servidor
        if (data.descriptor < 0)
            return throw string("Error creating socket info data structure in order to accept client");
        else{
            clients.push_back(data.descriptor);
            pthread_t thread;
            pthread_create(&thread,0,SocketServer::clientController,(void *)&data); //EL cuarto parametro se le pasa al clientController
            pthread_detach(thread);                                                 //De forma indirecta clientController recibe &data, pero casteado a void
        }
    }

    
    close(descriptor);
    
}


//Esta función corresponde al hilo que maneja la conexión del cliente

void *SocketServer::clientController(void *obj){ //Se pasa a void para poder meterlo en la función
    pthread_exit(NULL);
    DATA_SOCKET_T *data = (DATA_SOCKET_T *)&obj;  //Luego lo casteamos al tipo de dato que tenía originalmente
                                                  //Esto debido a que pthread_create requiere un puntero a void en el 4to parámetro  
    string message;

    while (true)
    {
        while (true) //While para recorrer cada buffer de datos
        {
            char buffer[10] = {0};
            int bytes = recv( data->descriptor, buffer, sizeof(buffer), 0);
            message.append(buffer, sizeof(bytes));

            if (bytes <= 0)
            {
                close(data->descriptor);
                pthread_exit(NULL);
            }
            

            if (bytes < 10)  //Validamos si ya termino el mensaje
                break;
        }
        cout<< message <<endl;    
    }
    close(data->descriptor);
    pthread_exit(NULL);
}

// Las funciones accept() y recv() Son bloqueantes


void SocketServer::setMessage( const char *msg ){

    for (int i = 0; i < clients.size(); i++)
    {
        cout<< "Info: " << send(clients[i],msg,strlen(msg),0) <<endl;
    }



}