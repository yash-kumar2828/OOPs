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
};
void change(Person *p)
{
    // (*p).age = 22; 
    p->age=23; //its same
}
int main()
{
    Person p1("yash kumar", 20);
    Person *ptr = &p1;
    cout << "age : " << (*ptr).age << endl;
    (*ptr).age = 21;
    cout << "age : " << (*ptr).age << endl;
    change(&p1);
    cout << "age : " << p1.age << endl;
    return 0;
}