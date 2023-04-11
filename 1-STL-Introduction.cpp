 //Creating A Template  - By- Harsh Priyam
// Time Complexity --->  
// Space Complexity ---> 


#include<iostream>
using namespace std;
 
template <typename T>
 T area(T a , T b){
    T result = a * b;
    return result;
 }

int main() { 
int x1 = area<int>(5.5,6);
float x2 = area<float>(5.5,6);
double x3 = area<double>(5.5,6);

cout<<x1<<endl;
cout<<x2<<endl;
cout<<x3<<endl;
 
return 0;
}