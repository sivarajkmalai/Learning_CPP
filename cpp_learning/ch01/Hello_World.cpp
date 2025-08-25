
#include <iostream>
#include <string>
using  namespace std ;

int main(){
    string name ;
    cout << "Enter your Name: " << flush ;
    cin >> name ;
    cout << "Hi !, There " << name << " Welcome to the cpp Learning course" << endl ;

    // Adding two numbers : 
    int num1 , num2 , res ;

    cout << "Enter num1 : " << flush;
    cin >> num1 ;
    cout << "Enter num2 : "  << flush;
    cin >> num2 ;

    res = num1 + num2 ;
    cout << "Result : "  << res << endl ; 

    cout << endl << endl;
    return 0 ; 
}