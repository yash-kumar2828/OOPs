#include <iostream>
using namespace std;
class Person
{
public:
    string name;
    int age;

    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void show()
    {
        cout << "name :" << this->name << endl;
        cout << "age :" << this->age << endl;
    }
};
int main()
{
    Person p1("yash kumar", 20);
    p1.show();
    return 0;
}