#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    float sgpa;
};
class car
{
public:
    string name;
    int price;
    int seat;
    string type;
};
int main()
{
    Student s1;
    s1.name = "yash kumar";
    s1.roll = 101;
    s1.sgpa = 8.17;
    cout << "first student detail:" << endl;
    cout << "name : " << s1.name << endl;
    cout << "roll : " << s1.roll << endl;
    cout << "sgpa : " << s1.sgpa << endl;

    Student s2;
    s2.name = "kalpana kumari";
    s2.roll = 102;
    s2.sgpa = 8.5;
    cout << "second student detail:" << endl;
    cout << "name : " << s2.name << endl;
    cout << "roll : " << s2.roll << endl;
    cout << "sgpa : " << s2.sgpa << endl;

    car c1;
    c1.name = "honda city";
    c1.price = 1500000;
    c1.seat = 5;
    c1.type = "sedan";
    cout << "car detail:" << endl;
    cout << "car name : " << c1.name << endl;
    cout << "car price : " << c1.price << endl;
    cout << "car seat : " << c1.seat << endl;
    cout << "car type : " << c1.type << endl;
    return 0;
}