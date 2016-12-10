//
//  chapter11assignment.cpp
//  
//  p.419 #26
//
//  Created by Maegan Jefferson on 12/10/16.
//
//

#include <iostream>
#include <string>
using namespace std;

int main(){

    int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    string months[12]= {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int month = 0;
    int year = 0;
    int monthdays = 0;
    int conditionOne = year % 4;
    int conditionTwo = year % 100;
    int conditionThree = year % 400;

    cout << "Enter the month's corresponding number: ";
    cin >> month;
    
    if (month > 0 && month < 13){
        
        monthdays = days[month - 1];
    
    
        if (monthdays == days[1])
        {
            cout << "What year?: ";
            cin >> year;
            
            if (year % 4 != 0){
                cout << months[month - 1] << " has " << days[1] << " days.";
                
            } else if(conditionOne == 0 && conditionTwo != 0){
                cout << months[month - 1] << " has " <<  days[1] + 1<< " days.";
                
            } else if (conditionOne ==0 && conditionTwo== 0 && conditionThree == 0){
                cout << months[month - 1] << " has " <<  days[1] + 1<< " days.";
            }

        } else {
        cout << months[month - 1] << " has " << days[month + 1] << " days.";
        }
        
    } else {
        cout << "ERROR: Please enter a valid month number";
        return 1;
    }
    
    return 0;
};