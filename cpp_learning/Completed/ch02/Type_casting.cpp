#include <iostream>
#include <cstdint>
#include <typeinfo>

using namespace std ;

int main(){
    // Typre Casting :
    // Typre Casting :
    float flt = -7.66 ;
    int32_t sgn = flt ;
    uint32_t usgn = flt ;

    cout << flt <<  endl ;
    cout << sgn <<  endl ;
    cout << (int32_t) usgn << endl ;

    int fah = 100 ;
    int cel ;

    cel = ( (float)5 / 9) * (fah - 32);
    cout << cel << endl;
    
    double weight = 10.99 ;

    cout  <<"Weight : "<< weight << endl ;
    cout <<"Integer : " << (int)weight << endl ;
    cout << "Fractional : " << (int)((weight - (int) weight) * 10000) << endl ;

    cout << endl << endl;
    return 0 ;
}