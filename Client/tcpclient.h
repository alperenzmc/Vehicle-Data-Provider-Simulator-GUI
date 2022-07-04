#ifndef TCPCLIENT_H
#define TCPCLIENT_H

#include <QObject>
#include <QTcpSocket>
#include <QDebug>
#include "VDP_Simulator/vehicledataprovider.h"


class TcpClient : public QObject
{
    Q_OBJECT
public:
    explicit TcpClient(QObject *parent = nullptr);

    void run();
    void setData(VehicleDataProvider data_values);
    VehicleDataProvider getData();

public slots:
    void connectedd();
    void disconnectedd();
    void bytesWrittenn(qint64 bytes);
    void readyReadd();
private:
    QTcpSocket* socket;
    VehicleDataProvider data;
signals:

};

#endif // TCPCLIENT_H
