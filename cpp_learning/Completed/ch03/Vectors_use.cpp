#include <iostream>
#include <vector>

using namespace std ;

int main(){
    vector<int> primes ;
    primes.push_back(5);
    primes.push_back(3);
    primes.push_back(7);


    cout << primes.size() << "  "<< primes[2] << endl ;

    primes[2] = 74 ;


    cout<< endl << endl;
    return 0 ;
}