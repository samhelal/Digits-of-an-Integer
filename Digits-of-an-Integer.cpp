/*(Digits of an Integer) Write a program that inputs a five-
digit integer, separates the integer into its digits and prints them
separated by three spaces each. [Hint: Use the integer division
and remainder operators.] For example, if the user types in
42339, the program should print:
4 2 3 3 9 (c++ how to program)*/
//program pring the digits
#include <iostream>
using namespace std ;
int main () {
    int a ;
    cout << " enter number :" ;
    cin >> a ;
    cout << a/10000 <<" "<< (a / 1000)%10<<" "<< (a/100)%10
    <<" "<<(a/10)%10<<" "<<a %10 <<endl;
}