#include <iostream>
#include <string>
#include "cow.h"




int main(){
    cow my_cow ("Hildy" , 7 , cow_purpose::pet);

    my_cow.set_age(84);

    cout << my_cow.get_name()<< " is a type - "  << (int)my_cow.get_purpose() << " cow ."  << endl ;
    
    cout << my_cow.get_name() << " is a " << my_cow.get_age()<< " old cow ."  << endl ;



    cout << endl << endl ;
    return 0 ;
}