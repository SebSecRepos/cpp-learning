#include "Socketclient.h"
#include <unistd.h>


Socketclient::Socketclient(){
}
Socketclient::~Socketclient()
{
}

bool Socketclient::connect_to_server(){
    descriptor = socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
    if (descriptor < 0)
        return false;
    
    info.sin_family = AF_INET;
    info.sin_addr.s_addr = INADDR_ANY;
    info.sin_port = htons(4050);
    memset(&info.sin_zero,0,sizeof(info.sin_zero));

    if ( connect(descriptor, (sockaddr*)&info, (socklen_t)sizeof(info)) < 0)
        return false;

    
    pthread_t thread;
    pthread_create(&thread,0,Socketclient::controller,(void*)this);

    return true;       
}

void *Socketclient::controller(void *obj){

}