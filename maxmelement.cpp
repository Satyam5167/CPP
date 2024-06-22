#include <iostream>
using namespace std;
int main(){
    int arr[5];
    cout<< "Enter array elements: ";
    for (int i=0; i<=4; i++){
        cin>> arr[i];
    }
    int mx = arr[0];
    int y=0;
    for (int i=0; i<=4; i++){
        mx= max(mx,arr[i]);
        if(mx==arr[i] ) y=i; 
   }
   cout<<"The maximum element is "<<mx<<endl;
   cout<<y<<endl;
}