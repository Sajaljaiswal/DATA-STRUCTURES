#include <iostream>
using namespace std;

int binsearch(int arr[], int size, int key){
        int start=0;
        int end= size-1;
        int mid =(start + end)/2;

        while(start <= end){
            if(arr[mid] == key){
                return mid;
            }
            if(key > arr[mid]){
                start = mid +1;
            }
            else{
                end = mid - 1;
            }
            mid = (start + end)/2;
        } 
        return -1;
}

int main(){
    int n[10] = {1,2,3,4,5,6,7,8,9,10};
    int index = binsearch(n, 10, 10);
    cout << index <<endl; 
}