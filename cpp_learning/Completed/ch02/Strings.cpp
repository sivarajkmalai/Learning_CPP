#include <iostream>
#include <cstring>
#include <string>

using namespace std ;

int main(){
    const size_t LEN = 40 ;
    // C String
    char arr_1[LEN] = "Hey Guys! ";
    char arr_2[] = "What are you up to";

    strncat(arr_1 , arr_2 , LEN) ;
    cout << arr_1 << endl ;
    // C++ String
    string str1 = "Hi Everybody ! " ;
    string str2  = "How's the going! ?" ;
    cout << str1 + str2 << endl ;                    

    cout << endl << endl ;
    return 0 ;
}