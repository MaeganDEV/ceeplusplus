//
//  chapter8assignment.cpp
//  
//
//  Created by Maegan Jefferson on 11/6/16.
//
//


#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
  
    //
    //double disc15 = i * 0.15;
    //double disc20 = i * 0.20;
    //char s =  ' ';
    cout << "Price\t10% Discount\t15% Discount\t20% Discount" << endl;
    for (int i = 5; i <= 50; i+=5){
          double disc10 = i * 0.10;
          double show10 = i - disc10;
          double disc15 = i * 0.15;
          double show15 = i - disc15;
          double disc20 = i * 0.20;
          double show20= i - disc20;
          
            cout << fixed << setprecision(2) << "|$" << i << "\t|$"
            << show10 << "\t\t|$"
            << show15 << "\t\t|$"
            << show20 <<endl;
          
    };
    
    return 0;
}