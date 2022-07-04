#ifndef UDPCLIENT_H
#define UDPCLIENT_H

#include <QObject>
#include <QUdpSocket>
#include "VDP_Simulator/vehicledataprovider.h"

class UdpClient : public QObject
{
    Q_OBJECT
public:
    explicit UdpClient(QObject *parent = nullptr);
    void sendData();
    void setData(VehicleDataProvider data_values);
    VehicleDataProvider getData();
signals:

public slots:


/*!
* \brief socket
*/
private:
    QUdpSocket *socket;
    VehicleDataProvider data;
};


#endif // UDPCLIENT_H
