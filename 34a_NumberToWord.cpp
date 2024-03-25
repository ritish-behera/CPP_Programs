#include<iostream>
using namespace std ;
int main ()
{
    int num ;
    cout << "Enter the three digit number : ";
    cin >> num ;
    int hundreads = num / 100 ;
    int tens = (num % 100)/10 ;
    int ones = (num % 100) % 10 ;
    if (hundreads ==1){cout << "one hundread" ;}
    else if (hundreads ==2){cout << "Two hundread" ;}
    else if (hundreads ==3){cout << "Three hundread" ;}
    else if (hundreads ==4){cout << "Four hundread" ;}
    else if (hundreads ==5){cout << "Five hundread" ;}
    else if (hundreads ==6){cout << "Six hundread" ;}
    else if (hundreads ==7){cout << "Seven hundread" ;}
    else if (hundreads ==8){cout << "Eight hundread" ;}
    else if (hundreads ==9){cout << "Nine hundread" ;}

    if (tens ==1){
        if (ones ==0){cout << " ten" ;}
        else if(ones ==1){cout << " eleven" ;}
        else if(ones ==2){cout << " tewlve" ;}
        else if(ones ==3){cout << " thirteen" ;}
        else if(ones ==4){cout << " fourteen" ;}
        else if(ones ==5){cout << " fifteen" ;}
        else if(ones ==6){cout << " sixteen" ;}
        else if(ones ==7){cout << " seventeen" ;}
        else if(ones ==8){cout << " eighten" ;}
        else if(ones ==9){cout << " nineteen" ;}
    }
    else if(tens == 2){cout <<" Twenty";}
    else if(tens ==3){cout << " Thirty";}
    else if(tens ==4){cout << " Fourty";}
    else if(tens ==5){cout << " Fifty";}
    else if(tens ==6){cout << " Sixty";}
    else if(tens ==7){cout << " Seventy";}
    else if(tens ==8){cout << " Eighty";}
    else if(tens ==9){cout << " Ninety";}

    if(tens != 1){
        if (ones == 1){cout << " one" ;}
        else if (ones == 2){cout << " two" ;}
        else if (ones == 3){cout << " three" ;}
        else if (ones == 4){cout << " four" ;}
        else if (ones == 5){cout << " five" ;}
        else if (ones == 6){cout << " six" ;}
        else if (ones == 7){cout << " seven" ;}
        else if (ones == 8){cout << " eight" ;}
        else if (ones == 9){cout << " nine" ;}
    }

   return 0 ;  
    
}