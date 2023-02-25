#include <iostream>
using namespace std;
int main()
{
    // first way of declaring pointers
    int n=5;
    int *a = &n;
    cout << n <<endl;
    cout << a<< endl;

    // another way of declaring pointers
    int c= 10;
    int *b =0;
    b = &c;
    cout << b<<endl;

    // increment value using pointers

    int i=5;
    int *j = &i;
    cout<<"before Increment : " << *j <<endl;
    (*j)++;
    cout<<"after Increment : " << *j <<endl;

    int arr[10] = {1,5,6,3,234,2454,5,4,32,9};
    cout << arr <<endl;
    cout << &arr[0] <<endl;
    cout << *(arr + 5) << endl;
    cout << *(5 + arr) << endl; 

}