#include<iostream>
using namespace std;
int main(){
    int num=5;
    
    for(int i=1; i<=num; i++){
        for(int j=1; j<=i; j++){
            char ch = 'A' + num - i;
            char ch1 = ch + j-1;
            cout << ch1 << " ";
            
        }
        cout<<endl;
    }
}