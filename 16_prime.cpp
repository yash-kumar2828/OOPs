#include <iostream>
using namespace std;
class prime
{
public:
    int i, fact;
    void calculate()
    {
        cout << "prime number between 1 to 1000 :" << endl;
        for (i = 1; i <= 1000; i++)
        {
            fact = 0;
            for (int j = 1; j <= i; j++)
            {
                if (i % j == 0)
                {
                    fact++;
                }
            }
            if (fact == 2)
            {
                cout << i << " ";
            }
        }
    }
};
int main()
{
    prime p;
    p.calculate();
    return 0;
}