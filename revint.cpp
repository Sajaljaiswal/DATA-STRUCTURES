#include <iostream>
using namespace std;

int revinte(int n){
    int num=0;
    while (n!=0)
    {
        int m = n%10;
        num = (num*10) + m;
        n=n/10;

    }
    return num;
}
int main(){
    int n = revinte(762576);
    cout<< n <<endl;
}