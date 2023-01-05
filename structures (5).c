#include <stdio.h>
typedef struct car
{
    char engine[50];
    char fuel_type[10];
    int fuel_tank_cap;
    int seating_cap;
    float city_milage;
}car;
int main()
{
    struct car c1={"DDIS 190 Engine","Diesel",37,5,19.74};
    struct car c2={"Kappa","petrol",22,8,14.5};
}
