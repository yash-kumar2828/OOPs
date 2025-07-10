#include <iostream>
using namespace std;
class vehicle
{
public:
    vehicle()
    {
        cout << "this is a vehicle" << endl;
    }
};
class fourwheeler
{
public:
    fourwheeler()
    {
        cout << "this vehicle is a fourwheeler" << endl;
    }
};
class car : public vehicle, public fourwheeler
{
public:
    car()
    {
        cout << "this fourwheeler vehicle is a car" << endl;
    }
};
int main()
{
    car obj;
    return 0;
}