 // Iterators - By- Harsh Priyam
// Time Complexity --->  
// Space Complexity ---> 
#include<iostream>
#include<vector>
using namespace std;
 
 
int main() {
 vector<int> v = {1,2,3,4,5,6,7};
 cout<<"v.begin()-->" << *v.begin() <<endl;

int *x = &v[6];
x++;
*x = -50;

 cout<<"v.end()-->" << *v.end() <<endl;
 cout<<"v.rbegin()--> "<<*v.rbegin()<<endl;

 
 cout<<"v.rend()--> "<<*v.rend()<<endl;

return 0;
}