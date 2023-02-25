#include <iostream>
using namespace std;

int search(int arr[], int n, int m){
    for(int i=0; i<n; i++){
        if(arr[i] == m){
            return i;
            break;
        }
    }
    return -1;
}

int main(){
    int array1[13]={5,3,6,78,9,64,987,768,75,9876,8,7,9};
    int a = search(array1, 13, 7);
    cout<<a<<endl;
}