 //  - By- Harsh Priyam
// Time Complexity --->  
// Space Complexity ---> 
#include<iostream>
#include<queue>
using namespace std;
 
 
int main() {

queue<int> Q;

for(int i = 0 ; i < 5 ; i++){
    Q.push(i);
}
 
cout<<"Size : "<<Q.size()<<endl;
cout<<"TopMost : "<<Q.front()<<endl;
cout<<"TopMost : "<<Q.back()<<endl;

Q.pop();
Q.pop();

cout<<"TopMost : "<<Q.front()<<endl;
cout<<"BackMost : "<<Q.back()<<endl;



return 0;
}