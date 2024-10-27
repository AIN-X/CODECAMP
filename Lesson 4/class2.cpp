#include <iostream>
using namespace std;

void increment(int &s)
{
    s = s + 5000;
}
int main()
{

    int sal = 45000;
    increment(sal);
    cout << "\nSalary M :  " << sal << "\n"
         << endl;

    return 0;
}