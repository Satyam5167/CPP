#include <iostream>
using namespace std;
int main(){
    int arr[5];
    cout<< "Enter array elements: ";
    for (int i=0; i<=4; i++){
        cin>> arr[i];
        }
    for(int i = 0; i<= 4; i++){
        if(i%2 == 0) arr[i]= arr[i]+10;
        if(i%2 != 0) arr[i]= arr[i]*2;
    }
     for(int i = 0; i<= 4; i++){
    cout<<arr[i]<<endl;
}
}
    