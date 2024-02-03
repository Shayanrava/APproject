#ifndef CLIENT_H
#define CLIENT_H
#include <qtcpsocket.h>

class client
{
    QTcpSocket *socket = nullptr;

public:


    void socket_readyRead();


    client();
};

#endif // CLIENT_H
