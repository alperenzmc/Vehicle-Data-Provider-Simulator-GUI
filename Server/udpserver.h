#ifndef UDPSERVER_H
#define UDPSERVER_H

#include <QObject>
#include <QUdpSocket>
#include"VDP_Simulator/vehicledataprovider.h"
#include "mythread.h"


/*!
 * \brief The UdpServer class
 */
class UdpServer : public QObject
{
    Q_OBJECT
public:

    explicit UdpServer(QObject *parent = nullptr);
    VehicleDataProvider data;
    void run();
signals:

public slots:
    void readReady();
private:
     QUdpSocket* socket;

};

#endif // UDPSERVER_H
