#include<iostream>
using namespace std;

int main(){

    int number=100;

        while(number>= 90)
        {
            if(number >= 96){
                number--;
                continue;
            }

            cout<<"Value  is:  "<<number<<endl;
            
            number --;

        }
    return 0;

}