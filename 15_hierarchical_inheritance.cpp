#include <iostream>
using namespace std;
class vehicle
{
public:
    vehicle()
    {
        cout << "this is a vehicle." << endl;
    }
};
class car : public vehicle
{
public:
    car()
    {
        cout << "this vehicle is a car. ";
    }
};
class bus : public vehicle
{
public:
    bus()
    {
        cout << "this vehicle is a bus. " ;
    }
};
class bike : public vehicle
{
public:
    bike()
    {
        cout << "this vehicle is a bike.";
    }
};
int main()
{
    car obj;
    bus obj2;
    bike obj3;
    return 0;
}