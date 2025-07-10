#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    float fee;
    Student()
    {
        cout << "enter name=";
        cin >> name;
        cout << "enter roll number=";
        cin >> roll;
        cout << "enter fee=";
        cin >> fee;
    }
    void display()
    {
        cout << "name: " << name << endl;
        cout << "roll numbr: " << roll << endl;
        cout << "fee: " << fee << endl;
    }
};
int main()
{
    Student s1, s2;
    s1.display();
    s2.display();
    return 0;
}