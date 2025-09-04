#include <iostream>

using namespace std ;

int main(){
    int a = 1023 ;
    bool flag = false ;
    char l = 'd' ;

    if( a > 1000 ) cout << "Warning: a is over 1000 " << endl;


    if( a % 2 == 0 ) cout << " a is Even " << endl;
    else cout << " a is odd" << endl ;
    
    if( l != 'a' && l !='e' && l != 'i' &&l != 'o' && l != 'u' && 
        l != 'A' && l !='E' && l != 'I' &&l != 'O' && l != 'U')
        cout << "not" << endl;
    else cout << "an Vow" ;

    cout << endl << endl ;
    return 0 ;
}