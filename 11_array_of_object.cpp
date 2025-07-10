#include <iostream>
using namespace std;
class Employee
{
private:
    int id;
    string name;

public:
    void getdata();
    void putdata();
};
void Employee ::getdata()
{
    cout << "enter id : ";
    cin >> id;
    cout << "enter name : ";
    cin >> name;
}
void Employee ::putdata()
{
    cout << "id :" << id << endl;
    cout << "name :" << name << endl;
}
int main()
{
    Employee emp[30];
    int n, i;
    cout << "enter no of employee : ";
    cin >> n;
    cout << "enter employee data :" << endl;
    for (i = 0; i < n; i++)
    {
        emp[i].getdata();
    }
    cout << "employee data :" << endl;
    for (i = 0; i < n; i++)
    {
        emp[i].putdata();
    }
    return 0;
}