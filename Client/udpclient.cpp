#include "udpclient.h"


/*!
 * \brief UdpClient::UdpClient
 * \param parent
 */
UdpClient::UdpClient(QObject *parent)
    : QObject{parent}
{

}

/*!
 * \brief UdpClient::sendData
 */
void UdpClient::sendData()
{
    this->socket = new QUdpSocket(this);

    qDebug() << "Starting...";

    QString latittude = QString::number(data.get_latitude());

    QString longitude = QString::number(data.get_longitude());

    QString velocity = QString::number(data.get_velocity());

    QString acceleration = QString::number(data.get_acceleration());

    QByteArray qbyte_data {latittude.toUtf8()};
    qbyte_data.append(" " + longitude.toUtf8() + " " + velocity.toUtf8() + " " + acceleration.toUtf8());

    socket->writeDatagram(qbyte_data,QHostAddress("127.0.0.1"),1235);
    qDebug() << "Sent data:" << qbyte_data;
}

/*!
 * \brief UdpClient::setData
 * \param data_values
 */
void UdpClient::setData(VehicleDataProvider data_values)
{
    this->data = data_values;
}

/*!
 * \brief UdpClient::getData
 * \return
 */
VehicleDataProvider UdpClient::getData()
{
    return this->data;
}
