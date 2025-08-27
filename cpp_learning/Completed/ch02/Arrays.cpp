#include <iostream>

using namespace std ;

int main(){
    // Arrays 
    const size_t LEN = 4 ;

    int age[LEN];
    float temp[4]   ={43.2, 43.2 ,42.5, 34.5}; 

    for(int i = 0 ; i < LEN ; i++){
        cout << "The Value Temp " << i << " is " << temp[i] << endl;
        age[i] = i * 3 ;
    }
    cout << endl ;
    for(int i = 0 ; i < LEN ; i++){
        cout << "The Value Age " << i << " is " << age[i] << endl;
    }


    cout << endl << endl;
    return 0 ;

}