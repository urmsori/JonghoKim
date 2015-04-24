#include <iostream>
using namespace std;

int main(){
  char op=0;
  double first=0;
  double second=0;
  double result=0;

  cout << "Enter a number: ";
  cin >> first;
  cout << "Enter an operator: ";
  cin >> op;
  cout << "Enter a second number: ";
  cin >> second;
  
  switch (op) {
  case '+' :
    result = first+second;
    break;
  case '-' :
    result = first-second;
    break;
  case '*' :
    result = first*second;
    break;
  case 'x' :
    result = first*second;
    break;
  case '/' :
    result = first/second;
    break;
  default :
    cout << "Wrong operator" << endl;
  }

  cout << "Result: " << result;
  
  return 0;
}
