#include <iostream>
using namespace std;

int main() {

  int num;

  cout << "Enter an integer: ";
  cin >> num;

  if (num > 0) {
    cout << "Positive integer: " << num << endl;
  }
 
 else{
  cout << "This statement is always executed.";
  }

  return 0;
}