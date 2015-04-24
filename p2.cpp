#include <iostream>
using namespace std;

int main()
{
  int years;

  cout << "Enter number of years of schooling: ";
  cin >> years;

  if(years <= 0){
    cout << "None" << endl;
  }
  else if((years >= 1) && (years <= 6)){
    cout << "Elementary school" << endl;
  }
  else if((years >= 7) && (years <= 8)){
    cout << "Middle school" << endl;
  }
  else if((years >= 9) && (years <= 12)){
    cout << "High school" << endl;
  }
  else if(years >= 13){
    cout << "College" << endl;
  }

  return 0;
}
