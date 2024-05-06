#ifndef SOCKETSERVER_H
#define SOCKETSERVER_H
#include <iostream>
#include <sys/socket.h>
#include <sys/types.h>
#include <netdb.h>
#include <string.h>
#include <string>
#include <pthread.h>
#include <vector>

using namespace std;

//Estructura para los cliente spasar como argumento a un hilo
typedef struct dataSocket{
    int descriptor;     
    sockaddr info;
}DATA_SOCKET_T;


class SocketServer
{
private:
    int descriptor;
    sockaddr_in info;
    bool create_socket();
    bool link_to_kernel();
    static void *clientController(void *obj);
    vector<int> clients;
public:
    SocketServer(/* args */);
    ~SocketServer();
    void run();
    void setMessage( const char *msg);
};



#endif