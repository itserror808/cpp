#include<iostream>
using namespace std ;
int number_of_digits(long number){
    int count = 0 ;
    while(number != 0){
        number = number / 10 ;
        count ++ ;
    }
    return count ;
}
int main(){
    int Number ;
    cout << "Enter a number :"<< endl ;
    cin >> Number ;
    cout << "Number of digits : " << number_of_digits(Number);
    return 0;
}
