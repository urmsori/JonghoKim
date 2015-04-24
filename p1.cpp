#include <iostream>
using namespace std;

int main()
{
  char type = 0;
  int base = 0;
  int height = 0;
  int side = 0;
  int area = 0;
  
  cout << "Enter the type of figure (s or t): ";
  cin >> type;

  if(type == 's'){
    cout << "Enter the length of a side: ";
    cin >> side;

    area = side*side;
  }
  else if(type == 't'){
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the height: ";
    cin >> height;

    area = 0.5*base*height;
  }
  else{
    cout << "Wrong type" << endl;
  }
 
  cout << "The area is " << area;  

  return 0;
}
