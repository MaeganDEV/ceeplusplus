//
//  chapter7assignment.cpp
//  
//
//  Created by Maegan Jefferson on 10/30/16.
//
//


#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    //declare variables
    int registeredPersons = 0;
    double total= 0.0;
    double average= 0.0;
    int numofCompanies = 0;
    int i = 0;
    int totalnumofPersons = 0;
    
    //io processing
    cout << "How many companies would you like to register? ";
    cin >> numofCompanies;
    
    //enter the number of persons for each company registered
    while (numofCompanies > 0){
        i++;
        cout << "How many persons would you like to register for company " << i << "? ";
        cin >> registeredPersons;
        totalnumofPersons += registeredPersons;
        numofCompanies -= 1;
        //adds to total depending on number of registrants per company
            if (registeredPersons < 4){
            total += registeredPersons * 150;
            } if (registeredPersons > 3 && registeredPersons < 10){
            total += registeredPersons * 100;
            } if (registeredPersons > 9){
            total += registeredPersons * 90;
            }
        }

    
    
    average = total / totalnumofPersons;
    
    //Display Output
    cout << "Total number of persons registered: " << totalnumofPersons<< endl;
    cout << "The total charge is: $" << total << endl;
    cout << fixed << setprecision(2);
    cout << "The average charge per registrant is: $" << average;
    
    return 0;
    
}