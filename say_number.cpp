#include <iostream>
using namespace std;

void saynum( int n, string  *arr){
        int digit = n % 10;
        string ans = arr[digit];
        n = n/10;

        saynum( n, arr);
        cout << ans << endl; 

}

int main(){
    string arr[10] ={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    saynum( 2345, arr);

}