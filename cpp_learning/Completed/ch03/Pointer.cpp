#include <iostream>

using namespace std ;

int main(){
    /*
     *  # Pointers   - Holds Memory Address
     *  
     */

    int a = 37 ;

    int *ptr ;

    ptr = &a ;

    cout << " Content of a ==    " << a << endl ;   
    cout << " Address of a ==    "  <<  &a << endl ;
    cout << " ptr is pointing to address ==    "  <<  ptr << endl ;
    cout << "where ptr is  pointing , we have ==     "  <<  *ptr << endl ;
    cout << "Address of ptr ==           "  <<  &ptr << endl ;
    cout << endl << endl ;
    return 0 ;


}