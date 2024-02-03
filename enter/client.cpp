#include "client.h"

client::client()
{

    socket = new QTcpSocket();
    socket->connectToHost("127.0.0.1", 8484);

}

void client::socket_readyRead() {
    QByteArray data = socket->readAll();

}


