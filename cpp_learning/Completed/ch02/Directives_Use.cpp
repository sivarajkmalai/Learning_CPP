/*
 *   Preprocessor Directives :
 *      
 *   
 *   #include -   For  importing libraries
 *   #define #ifdef
 *      
 * 
 * 
 * 
 * 
 * 
 * 
 */



#include <iostream>
#include <string>
#include <cstdint>
#define DEBUG

#define CAPACITY 5000

using namespace std ;

int main(){
    // sign_int_bitl_type
    int32_t large = CAPACITY ;
    uint8_t small = 37 ;

#ifdef DEBUG
    cout << "About To Perform Addition " << endl ;
#endif

    large += small ;
    cout << "The Large is " << large << endl ;


    cout << endl << endl ;
    return 0 ;
}