#include "cow.h"

cow::cow(string nami , int agi ,cow_purpose pur){
    name = nami ;
    age = agi ;
    purpose = pur ;
}
string cow::get_name() const{
    return name ;
}
int cow::get_age()const {
    return age ;
}
cow_purpose cow::get_purpose() const{
    return purpose;
}
void cow::set_age(int agi){
    age = agi ;
}
