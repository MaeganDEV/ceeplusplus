#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//function for calculating and outputing the conversion
double currencyConverter(string name, string symbol, double exchangerate, double americanDollars){
    cout << "$" << americanDollars << " American Dollars converted to "<< name << " is "<< symbol << fixed << setprecision(2)<< americanDollars * exchangerate;
    
}

class Currency {
    public: 
        double exchangeRate;
        string name;
        string symbol;
        
};

int main(){
    //declare objects & variables
    Currency americanDollar;
    Currency canadianDollar;
    Currency euro;
    Currency indianRupee;
    Currency japaneseYen;
    Currency mexicanPeso;
    Currency southAfricanRand;
    Currency britishPound;
    
    americanDollar.exchangeRate = 1.00;
    americanDollar.name= "American Dollars";
    americanDollar.symbol = "$";
    
    canadianDollar.exchangeRate = 1.31;
    canadianDollar.name = "Canadian Dollars";
    canadianDollar.symbol = "$";
    
    euro.exchangeRate = 0.89;
    euro.name = "Euros";
    euro.symbol="€";
    
    indianRupee.exchangeRate = 66.56;
    indianRupee.name = "Indian Rupees";
    indianRupee.symbol ="₹";
    
    japaneseYen.exchangeRate = 101.34;
    japaneseYen.name = "Japanese Yen";
    japaneseYen.symbol = "¥";
    
    mexicanPeso.exchangeRate = 19.38;
    mexicanPeso.name = "Mexican Pesos";
    mexicanPeso.symbol= "$";
    
    southAfricanRand.exchangeRate = 13.73;
    southAfricanRand.name = "South African Rands";
    southAfricanRand.symbol = "R";
    
    britishPound.exchangeRate = 0.77;
    britishPound.name = "British Pounds";
    britishPound.symbol = "£";
    
    int selectedCurrency;
    double americanDollars;
    
 //io declarations
    cout <<"**********************************************" << endl
         <<"******** American Currency Converter *********" << endl
         <<"**********************************************" << endl
         << "Enter the Currency you want to convert to below..."<< endl
         << "(1) " << canadianDollar.name << endl
         << "(2) " << euro.name << endl
         << "(3) " << indianRupee.name << endl
         << "(4) " << japaneseYen.name << endl
         << "(5) " << mexicanPeso.name << endl
         << "(6) " << southAfricanRand.name << endl
         << "(7) " << britishPound.name << endl
         << "Enter the corresponding number: ";
    
    cin >> selectedCurrency;
    
    cout << "How many USD will you be converting?: ";
    
    cin >> americanDollars;
    
    //conditional on cin
    if (americanDollars > 0 && selectedCurrency > 0 && selectedCurrency < 8) {
    //corresponds to input number
        switch(selectedCurrency){
            case 1: currencyConverter(canadianDollar.name, canadianDollar.symbol, canadianDollar.exchangeRate, americanDollars);
            break;
            case 2: currencyConverter(euro.name, euro.symbol, euro.exchangeRate, americanDollars);
            break;
            case 3: currencyConverter(indianRupee.name, indianRupee.symbol, indianRupee.exchangeRate, americanDollars);
            break;
            case 4: currencyConverter(japaneseYen.name, japaneseYen.symbol, japaneseYen.exchangeRate, americanDollars);
            break;
            case 5: currencyConverter(mexicanPeso.name, mexicanPeso.symbol, mexicanPeso.exchangeRate, americanDollars);
            break;
            case 6: currencyConverter(southAfricanRand.name, southAfricanRand.symbol, southAfricanRand.exchangeRate, americanDollars);
            break;
            case 7: currencyConverter(britishPound.name, britishPound.symbol, britishPound.exchangeRate, americanDollars);
        }
        //error & restart of program
    } else {
        cout << "------------------------------------------------------------------"<< endl
             << "ERROR: Please enter a valid number and dollar amount to try again" << endl
             << "------------------------------------------------------------------"<< endl;
        main();
    }
    
    
    
}