#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    float fee;
    Student();
    void display()
    {
        cout<<"students detail are :"<<endl;
        cout << "name: " << name << endl;
        cout << "roll numbr: " << roll << endl;
        cout << "fee: " << fee << endl;
    }
};
Student ::Student()
{
    {
        cout<<"enter students detail :"<<endl;
        cout << "enter name=";
        cin >> name;
        cout << "enter roll number=";
        cin >> roll;
        cout << "enter fee=";
        cin >> fee;
    }
}
int main()
{
    Student s1, s2;
    s1.display();
    s2.display();
    return 0;
}