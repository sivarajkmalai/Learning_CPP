#include <iostream>
#include <vector>
using namespace std ;

int main(){
    vector<int> nums = { 12 ,34,44 ,456,345,44,345 } ;
    auto ptr = nums.begin();

    // While Loop :
    while(ptr != nums.end() ){
        cout << *ptr << " " ;
        ptr = next(ptr,1) ;
    }
    cout << endl;

    // Do While Loop :
    int i = 0 ;
    do{
        cout << nums[i++] << " ";

    }while(i < nums.size() ) ;
    cout << endl;


    // For Loop :
    int sum = 0 ;
    for(int i = 0 ; i < nums.size() ; i++ ) {
        sum += nums[i];
    }
    float avg = (float)sum / nums.size() ; 
    cout << avg ;

    cout << endl << endl ;
    return 0 ;

}