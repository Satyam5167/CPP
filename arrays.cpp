#include <iostream>
using namespace std;
int main(){
//   string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
// for (int i = 0; i < 5; i++) {
//   cout <<i+1<<" = "<< cars[i] << endl;
// }  
int myNumbers[5] = {10, 20, 30, 40, 50};
// for (int i : myNumbers) {
//   cout << i << "\n";
//      }
int no_elements = sizeof(myNumbers)/sizeof(int);
cout<< no_elements;

}