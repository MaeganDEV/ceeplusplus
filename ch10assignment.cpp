//
//  chapter10assignment.cpp
//  
//  p.364 #17
//
//  Created by Maegan Jefferson on 11/27/16.
//
//

#include <iostream>
#include <cmath>
using namespace std;

//prototypes
void getCent(double inches, double &answer);
void getInches(double centimeters, double &answer);

int main(){
    
    int choice = 0;
    double answer = 0.0;
    double inches = 0.0;
    double centimeters = 0.0;
    
    cout << "Enter (1) for conversion from inches to centimeters" << endl;
    cout << "Enter (2) for conversion from centimeters to inches" << endl;
    cin >> choice;
    
    if (choice == 1){
        cout << "Enter inches to be converted to centimeters: ";
        cin >> inches;
        getCent(inches, answer);
        cout << inches << " inches is equal to " << answer << " centimeters";
    }
    else {
        cout << "Enter centimeters to be converted to inches: ";
        cin >> centimeters;
        getInches(centimeters, answer);
        cout << centimeters << " centimeters is equal to " << answer << " inches";
    }
}

void getCent(double inches, double &answer){
    answer = inches * 2.54;
}


void getInches(double centimeters, double &answer){
    answer = centimeters / 2.54;
}