#include "Socketserver.h"

SocketServer *server;

void *serverRun(void *){

    try
    {
        server->run();
    }
    catch(string ex)
    {
        std::cerr << ex << '\n';
    }
    pthread_exit(NULL);
    
}


int main(int argc, char const *argv[])
{
    server = new SocketServer;
    pthread_t server_thread;
    pthread_create(&server_thread, 0, serverRun, NULL);
    pthread_detach(server_thread);
    
    while (true)
    {
        string msg="";
        cin>>msg;
        server->setMessage(msg.c_str());
    }
    

    delete server;
    return 0;
}
