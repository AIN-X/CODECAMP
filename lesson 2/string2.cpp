#include<iostream>
using namespace std;

int main(){

    string a = "Ashraful ";

    cout << "\nThe string is: " << a << endl;

    // Appending "Islam" to the string
    a.append("Islam");
    cout << "After append: " << a << endl;

    // Removing the last character
    a.pop_back();
    cout << "After pop_back: " << a << endl;

    return 0;
}
