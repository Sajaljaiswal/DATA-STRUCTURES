#include <iostream>
using namespace std;

int selsort(int arr[], int size){
        for(int i=0; i< size-1; i++){
            int minindex= i;
            for(int j= i+1; j<size; j++){
                if(arr[j] < arr[minindex])
                    minindex = j;
            }
            swap(arr[minindex], arr[i]);
        }
        for(int a=0; a<size; a++){
            cout<< arr[a] << " ";
        }
        return 0;
}
int main(){
    int sel[5] = {5,4,3,2,1};
    selsort(sel, 5);
}