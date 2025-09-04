#include <iostream>
#include <string>
#include "cow.h"




int main(){
    cow *my_cow ;

    my_cow = new cow("Gertie" , 7 , cow_purpose::hide);

    my_cow -> set_age(84);

    cout << my_cow->get_name()<< " is a type - "  << (int)my_cow->get_purpose() << " cow ."  << endl ;
    
    cout << my_cow->get_name() << " is a " << my_cow->get_age()<< " old cow ."  << endl ;

    delete my_cow ;

    cout << endl << endl ;
    return 0 ;
}