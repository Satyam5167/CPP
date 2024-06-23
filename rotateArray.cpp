#include <iostream>
using namespace std;
int main()
{
    int arr[]= {5,1,3,4,3,2};
    int n = 6;
    int k=2; //How many space it take to rotate// k can be larger than the size of array  
    int newarr[6];
    int j=0;
    k=k%n;
    for(int i= n-k; i<n; i++){
        newarr[j++]= arr[i];
    }
     for(int i= 0; i<n-k; i++){
        newarr[j++]= arr[i];
    }
     for(int i= 0; i<n; i++){
        cout<<newarr[i]<<" ";
    }
    
}