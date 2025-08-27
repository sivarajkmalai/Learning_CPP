#include <iostream>

using namespace std ;

int main(){
    int nums[5] = {1,23,32,24,337};
    float result = 0.0f; 
    
    for(int i = 0 ; i < 5 ; i++ ){
        result += nums[i] ;
    }
    
    float avg = result / 5.0 ;

    cout << "AVG " << avg << endl ; 

    cout << endl << endl; 
    return 0 ;
}