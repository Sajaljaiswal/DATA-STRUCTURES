#include <iostream>
using namespace std;
int main(){
    int num=5;
    int space = num;
    for(int i=1; i<=num; i++){
        for(int k=0; k<=(num-space); k++){
            cout<<" ";
        }
        for(int j=1; j<=space; j++){
            cout<<"*";
        }
        space--;
        cout<<endl;
    }
} 