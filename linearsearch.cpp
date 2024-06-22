#include <iostream>
using namespace std;
// int search(int x){
//     for(int i=0; i<5; i++){
//         if(key == arr[i]) return i;
//     }
// }

int main(){
    int arr[5];
    int key;
    cout<<"Enter Array Elements: ";
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    cout<<"What to find? ";
    cin>>key;
    int ans=-1;
    for(int i=0; i<5; i++){
    if(key == arr[i]) 
        {ans = i;
        break;
        }
    
}
cout<<ans;
}