#include <iostream>
using namespace std;
int main(){
    int num=5;
    for(int i=1; i<=num; i++){
        int space = num-i;
        for(int j=1; j<= space; j++){
            cout<<" ";
        }
        space--;
        for(int k=1; k<=i; k++){
            cout<<"*";
        }
        cout<<endl;
    }
}  