#include <iostream>
using namespace std;
class Employee
{
private:
    int id;
    int salary;
    string name;

public:
    void setData()
    {
        cout << "enter employee detail :" << endl;
        cout << "enter id : ";
        cin >> id;
        cout << "enter salary : ";
        cin >> salary;
        cout << "enter name : ";
        cin >> name;
    }
    void display();
};
void Employee ::display()
{
    cout << "employee details are :" << endl;
    cout << "id : " << id << endl;
    cout << "salary : " << salary << endl;
    cout << "name :" << name << endl;
}
int main()
{
    Employee e1, e2;
    e1.setData();
    e1.display();
    e2.setData();
    e2.display();
    return 0;
}