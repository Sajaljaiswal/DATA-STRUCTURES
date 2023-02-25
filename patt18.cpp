#include <iostream>
using namespace std;

int main(){
    int num=5;
    int space = num;
    int pri=1;
    for(int i=1; i<=num; i++){
        for(int j=1; j<=(num-space); j++){
            cout<<" ";
        }
        for(int k=1; k<= space; k++){
            cout<<pri;
        }
        pri++;
        space--;
        cout<<endl;
    }
}