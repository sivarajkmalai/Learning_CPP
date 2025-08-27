#include <iostream>
#include <string>
#include <typeinfo>

using namespace std ;

int main(){
    auto a = 3 ;
    auto b = 12345678901l ;
    auto c = 3.14f;
    auto d = 3.14 ;
    auto e = true ;
    auto f = 'd' ;
    //auto g = "Srikanth The Boss" ;

    cout << " A type is " << typeid(a).name() << endl ;
    cout << " B type is " << typeid(b).name() << endl ;
    cout << " C type is " << typeid(c).name() << endl ;
    cout << " D type is " << typeid(d).name() << endl ;
    cout << " E type is " << typeid(e).name() << endl ;
    cout << " F type is " << typeid(f).name() << endl ;
    //cout << " F type is " << typeid(g).name() << endl ;
    
    

    cout << endl << endl ;
    return 0 ;
}