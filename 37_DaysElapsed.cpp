#include<iostream>
using namespace std ;
int main()
{
    int MonthNum, Date, DaysElapsed ;
    cout << "Enter the month number : " ;
    cin >> MonthNum ;
    cout << "Enter the Date : " ;
    cin >> Date ;
    DaysElapsed = 0 ;
    int CalDays[12] ={31,28,31,30,31,30,31,31,30,31,30,31} ;
    if (MonthNum <= 12 && Date <= 31){
        for (int i=0 ; i<=(MonthNum-1) ; i++){
            DaysElapsed = DaysElapsed + CalDays[i] ;
        }
        DaysElapsed = DaysElapsed + Date ;
        cout <<"Total days elapsed : " << DaysElapsed <<" Days"<< endl ;
    }
    else{
        cout << "Invalid Input." ;
    }
    return 0 ;
}