#include <iostream>
using namespace std;
int main(){
    int arr[5];
    cout<< "Enter array elements: ";
    for (int i=0; i<=4; i++){
        cin>> arr[i];
    }
    int prod = 1;
    for (int i=0; i<=4; i++){
        
        prod*= arr[i];
    }
    cout<<prod;
}