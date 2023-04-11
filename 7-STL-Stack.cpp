 //  - By- Harsh Priyam
// Time Complexity --->  
// Space Complexity ---> 
#include<iostream>
#include<stack>
using namespace std;
 
 
int main() {

stack<int> S;

for(int i = 0 ; i < 5 ; i++){
    S.push(i);
}

cout<<"The Size of the stack is : "<<S.size()<<endl;
cout<<"The top-most element of the "<<S.top()<<endl;

S.pop();
S.pop();
S.push(404);

cout<<"The Size of the stack is : "<<S.size()<<endl;
cout<<"The top-most element of the "<<S.top()<<endl;

if(S.empty()){
    cout<<"Stack is empty";
}
else{
    cout<<"Stack is not empty";
}

return 0;
}