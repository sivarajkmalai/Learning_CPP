#include <iostream>

using namespace std ;

int main(){
    int a , b ;
    char op ;

    cout << "Enter num1 :" << flush;
    cin >> a ;
    cout << "Enter num1 :" << flush;
    cin >> b ;
    cout << "Enter operation :" << flush;
    cin >> op ;

    switch(op){ 
        case '+' :
            cout << a  +  b << endl ;
            break;
        case '-' :
            cout << a  -  b << endl ;
            break;
        case '/' :
            cout << a  /  b << endl ;
            break;
        case '*' :
            cout << a  *  b << endl ;
            break;
        default:
            cout << a  +  b << endl ;
            break;
     }


}