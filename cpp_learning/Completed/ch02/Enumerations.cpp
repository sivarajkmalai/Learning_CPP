#include <iostream>
#include <cstdint>


enum class cow_purpose{dairy , meat , hide , pet};
enum class grocery {canned , forzen , meat ,laundry , dairy };

using namespace std ;

int main(){
    int meat = 8;
    cow_purpose a ;
    a = cow_purpose::pet ;

    cout << "a =  " << (int)a << endl ;

    cout << endl << endl;
    return 0 ;

}