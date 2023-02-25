# include <iostream>
using namespace std;

int binarySearch(int arr[], int num, int search){
  int first = 0;
  int end = num-1;
  int mid = (first + end)/2;

      while(first <= end){
            if(arr[mid] == search){
              return mid;
            }

            if(search > arr[mid]){
              first = mid+1;
            }
            else{
              end = mid=1;
            }
            mid = (first + end)/2;
      }
      return -1;
}
int main ()
{
  int array1[10]={1,4,345,35,34,52,34,3,13,23};
  int n=10;
  int m = 34;
  int index = binarySearch(array1,10,34);
  cout<<"Your search value found at index :"<< index <<endl;

}