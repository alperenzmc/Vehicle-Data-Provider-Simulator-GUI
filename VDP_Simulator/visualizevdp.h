#ifndef VISUALIZEVDP_H
#define VISUALIZEVDP_H
#include "vehicledataprovider.h"


class VisualizeVDP
{
private:
    VehicleDataProvider vdp_m;
    bool is_tcp_m;
    bool is_udp_m;

public:
    VisualizeVDP(VehicleDataProvider vdp_value,bool is_tcp_value,bool is_udp_value);
};

#endif // VISUALIZEVDP_H
