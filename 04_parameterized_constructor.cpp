#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    float sgpa;
    Student(string s, int r, float g)
    {
        name = s;
        roll = r;
        sgpa = g;
    }
};
int main()
{
    Student s1("yash kumar", 101, 8.17);
    cout << "first student detail:" << endl;
    cout << "name : " << s1.name << endl;
    cout << "roll : " << s1.roll << endl;
    cout << "sgpa : " << s1.sgpa << endl;

    Student s2("kalpana kumari", 101, 8.5);
    cout << "second student detail:" << endl;
    cout << "name : " << s2.name << endl;
    cout << "roll : " << s2.roll << endl;
    cout << "sgpa : " << s2.sgpa << endl;
    return 0;
}