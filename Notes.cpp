#include <iostream>
using namespace std;
int main(){
    int n =654790;   //Amount to be converted into notes
    int a100 = n/100; //13
    int c= a100*100;   // 1300
    if(a100 != 0){
    cout<<"total 100 rupees notes is : " << a100 <<endl;
    }
    int d = n - (c);       // 95
    int b50 = d/50;         //1
    if(b50 !=0){
        cout<<"Total 50 rupees notes is : "<< b50 <<endl;
    }
    
    int e = d- (b50 * 50);  // 95-50= 45
    int c20 = e/20;             //45/20 = 2
    if(c20 != 0){
        cout<<"Total 20 rupees notes is : "<< c20 << endl;
    }

    int f = e - (c20 * 20);     //5 
    cout<<"Total number of 1 rupees note is:  "<< f <<endl;
    

    
}