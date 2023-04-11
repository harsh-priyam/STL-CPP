 //  - By- Harsh Priyam
// Time Complexity --->  
// Space Complexity ---> 
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
 
 
int main() {

// 1.

priority_queue<int> Q;
vector<int> v = {8,7,3,1,5,9,2,4,6};

for(int x : v) {
  Q.push(x);
}
while(!Q.empty()){
    cout<<Q.top()<<" ";
    Q.pop();
}
 cout<<endl;

// 2.~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

priority_queue<int , vector<int> , std::greater<int> > Q;
vector<int> v = {8,7,3,1,5,9,2,4,6};

for(int x : v) {
  Q.push(x);
}
while(!Q.empty()){
    cout<<Q.top()<<" ";
    Q.pop();
}
 cout<<endl;

// 3.~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

auto cmp = [](int a , int b){
    return a < b;
};

priority_queue<int , vector<int> , decltype(cmp) > Q(cmp);
vector<int> v = {8,7,3,1,5,9,2,4,6};

for(int x : v) {
  Q.push(x);
}
while(!Q.empty()){
    cout<<Q.top()<<" ";
    Q.pop();
}
 cout<<endl;


return 0;
}