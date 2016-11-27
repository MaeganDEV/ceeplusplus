//
//  chapter9assignment.cpp
//  
//  p.325 #23
//
//  Created by Maegan Jefferson on 11/20/16.
//
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    double calcPremium(double premiumTotal);
    double calcStandard(double standardTotal);
    char memberStatus = ' ';
    double total = 0.00;
    double final = 0.00;
    
    cout << "Are you a premium member? (Y / N) ? ";
    cin >> memberStatus;
    cout << "Enter total amount: ";
    cin >> total;
    
    if (toupper(memberStatus) == 'N'){
        final = calcStandard(total);
    } else {
        final = calcPremium(total);
    }
    
    cout << "Your total with shipping is $" << fixed << setprecision(2) << final;
    
    return 0;
};

double calcStandard(double standardTotal){
    double totalPlusShipping = 0.00;
    if (standardTotal > 100){
        totalPlusShipping = standardTotal + 4.99;
    } else {
        totalPlusShipping = standardTotal + 12.99;
    }
    
    return totalPlusShipping;
};

double calcPremium(double premiumTotal){
    double totalPlusShipping = 0.00;
    if (premiumTotal < 50){
        totalPlusShipping = premiumTotal + 4.99;
    } else {
        totalPlusShipping = premiumTotal;
    }
   return totalPlusShipping;
};