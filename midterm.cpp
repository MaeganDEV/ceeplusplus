#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int credits = 0;
  int residence = 0;
  char parking=' ';
  double total = 0.0;
  
  cout << "Enter the number of credits: ";
  cin >> credits;
  
  cout << "Enter the residency code"<< endl
        << "(1) County Resident" << endl
        << "(2) State Resident" << endl
        << "(3) Out-of-State Resident" << endl;
  cin >> residence;

  cout << "Will parking be included (Y or N)?: ";
  cin >> parking;
  
  switch (residence){
      case 1: total = credits * 100;
      break;
      case 2: total = credits * 150;
      break;
      case 3: total = credits * 300;
      break;
      default: cout <<"***An error occured***"<< main();
    }
      
    if (toupper(parking) == 'Y'){
        total += 50;
    } else {
        total = total;
      }
      
  

cout << "The cost of tuition is $"<< fixed << setprecision(2)<< total << endl;
   
   return 0;
}