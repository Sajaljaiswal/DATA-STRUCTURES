#include <iostream>
using namespace std;
int search(int a[], int n, int size){
    int num = 0;
    for(int i=0; i<size; i++){
        if(a[i] == n){
            num = num +1;
        }
    }
    return num;
}

int main(){
    int arr[10] = {33,4,28,2,33,4,2, 67,43,67};
    int ret = search( arr, 33, 10);
    if(ret == 1){
        cout << "value is unique in array" <<endl;
    }
    else{
        cout <<" value is not unique " << endl;
    }
}