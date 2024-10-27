#include <iostream>
using namespace std;

void increment(int &s)
{
    s = s + 5000;
    cout<<"Salary F : "<< s <<endl;
}
int main()
{

    int sal = 45000;
    increment(sal);
    cout << "\nSalary M :  " << sal << "\n"
         << endl;

    return 0;
}
