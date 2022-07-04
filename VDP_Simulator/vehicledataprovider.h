#ifndef VEHICLEDATAPROVIDER_H
#define VEHICLEDATAPROVIDER_H


class VehicleDataProvider
{

private:
        double latitude_m;
        double longitude_m;
        double velocity_m;
        double acceleration_m;
public:
    VehicleDataProvider() = default;


    ~VehicleDataProvider() = default;

    double get_longitude() {return longitude_m;}
    double get_latitude() {return latitude_m;}
    double get_velocity() {return velocity_m;}
    double get_acceleration() {return acceleration_m;}

    void set_longitude(double longitude_val);
    void set_latitude(double latitude_val);
    void set_velocity(double velocity_val);
    void set_acceleration(double acceleration_val);

    void display ();




};

#endif // VEHICLEDATAPROVIDER_H
