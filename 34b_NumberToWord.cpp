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

    switch(hundreads){
    case 1 : {cout << "one hundread" ;} break;
    case 2 : {cout << "Two hundread" ;}break ;
    case 3 : {cout << "Three hundread" ;}break ;
    case 4 : {cout << "Four hundread" ;}break ;
    case 5 : {cout << "Five hundread" ;}break ;
    case 6 : {cout << "Six hundread" ;}break ;
    case 7 :{cout << "Seven hundread" ;}break ;
    case 8 : {cout << "Eight hundread" ;}break ;
    case 9 :{cout << "Nine hundread" ;}break ;
    }


    switch(tens){
        case 1 :{
        switch(ones){
            case 0:{cout << " ten" ;} break ;
            case 1: {cout << " eleven" ;} break ;
            case 2: {cout << " tewlve" ;} break ;
            case 3: {cout << " thirteen" ;} break ;
            case 4: {cout << " fourteen" ;} break ;
            case 5: {cout << " fifteen" ;} break ;
            case 6: {cout << " sixteen" ;} break ;
            case 7: {cout << " seventeen" ;} break ;
            case 8: {cout << " eighten" ;} break ;
            case 9: {cout << " nineteen" ;} break ;
        }
        }
        case 2 :{cout <<" Twenty";} break ;
        case 3 :{cout << " Thirty";} break ;
        case 4 :{cout << " Fourty";} break ;
        case 5 :{cout << " Fifty";} break ;
        case 6 :{cout << " Sixty";} break ;
        case 7 :{cout << " Seventy";} break ;
        case 8 :{cout << " Eighty";} break ;
        case 9 :{cout << " Ninety";} break ;
    if (tens !=1){
        switch(ones){
            case 1 : {cout << " one" ;} break ;
            case 2: {cout << " two" ;} break ;
            case 3 : {cout << " three" ;} break ;
            case 4 : {cout << " four" ;} break ;
            case 5 : {cout << " five" ;} break ;
            case 6 : {cout << " six" ;} break ;
            case 7 : {cout << " seven" ;} break ;
            case 8 : {cout << " eight" ;} break ;
            case 9 : {cout << " nine" ;} break ;
            }
        }

   return 0 ;
}
}  
