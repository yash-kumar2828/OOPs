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
class car : public vehicle
{
public:
    car()
    {
        cout << "this vehicle is a car" << endl;
    }
};
int main()
{
    car obj;
    return 0;
}