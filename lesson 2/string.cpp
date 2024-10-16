#include<iostream>
using namespace std;

int main(){

    string a;
    cout <<"\nEnter the string: ";
    cin>>a;

    cout<<"\nThe string is : "<<a<<endl;

    a.push_back('O');
    cout<<"\nAfter push back: "<<a<<endl;

    a.pop_back();
    cout<<"\nAfter pop back: "<<a<<endl;

    return 0;

 }