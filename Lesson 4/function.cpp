#include <iostream>
using namespace std;

void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}
int main()
{

    int x = 150;
    int y = 200;
    swap(x, y);

    cout << " The X value is : " << x << endl;
    cout << " The Y value is : " << y << endl;

    return 0;
}