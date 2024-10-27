#include <iostream>
using namespace std;

void change_Salary(int s)
{

    s = 40000;

    cout << "\nChange on functionk : " << s << endl;
}
int main()
{
    int sal = 27000;
    change_Salary(sal);
    cout << "\nSalary inside main : " << sal << "\n " << endl;
}