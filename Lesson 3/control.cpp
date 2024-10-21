#include<iostream>
using namespace std;

int main(){

        int number = 100;
            while(number<=200)
        {
            cout<<"The value is: "<<number<<endl;
                if(number==150)
            {
                break;
            }
            number= number+10;

        }

            cout<<"Exit of the loop"<<endl;
    return 0;
}