#include "VDP_Simulator/mainwindow.h"
#include <iostream>
#include "VDP_Simulator/vehicledataprovider.h"
#include <memory>
#include <QApplication>
//commit

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

w.activateWindow();



    w.show();
    return a.exec();
}
