#ifndef SOCKETCLIENT_H
#define SOCKETCLIENT_H
#include <iostream>
#include <sys/socket.h>
#include <sys/types.h>
#include <netdb.h>
#include <string.h>
#include <string>
#include <pthread.h>
#include <vector>

using namespace std;

class Socketclient
{
private:
    int descriptor;
    sockaddr_in info;
    static void *controller(void *obj);
public:
    Socketclient(/* args */);
    ~Socketclient();
    void setMessage( const char *msg);
    bool connect_to_server();
};




#endif