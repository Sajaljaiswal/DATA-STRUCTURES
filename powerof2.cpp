#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n=283733098;
    //bool Power = false;
    int i=1;
    while(n >1){
        int num = pow(2,i);
        if( n == num)
        {
           // Power = true;
            cout << "true" << endl;
            break;
        }
        else if(num >n){
            cout<< "False " <<endl;
            break;
        }
        i++;
    }

}