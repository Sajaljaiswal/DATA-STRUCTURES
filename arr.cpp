#include <iostream>
using namespace std;

int maxxi(int n[], int num){
    int max= 0;
    for(int i=0; i<num; i++){
        if( n[i] > max)
        {
            max = n[i];
        }
    }
    cout<<  max<<  " is largest "<< endl;
    return 0;
}
int main(){
      int arr[10] = {1,2,3,4,5 ,33, 32, 453, 345,8};
    maxxi(arr, 10);
    //cout << "maximum number is : " << a <<endl;
}