#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int start=0;
  int min=0;
  double gross=0;
  double net=0;
  
  cout << "Enter start time: ";
  cin >> start;
  cout << "Enter length of call in minutes: ";
  cin >> min;

  /* Gross cost : 0.4 per minute */
  gross = min*0.4;
  net = gross;

  /* Start time discount : 50% */
  if( (start >= 1800) || ((start >= 0) && (start < 800)) ){
    net = net*0.5;
  }

  /* Length of call discount : 15% */
  if( min > 60 ){
    net = net*0.85;
  }

  /* Tax */
  net = net + net*0.04;

  cout << "gross cost: " << setprecision(4) << gross << endl;
  cout << "net cost: " << setprecision(4) << net << endl;

  return 0;
}
