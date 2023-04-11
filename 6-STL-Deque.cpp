 //  - By- Harsh Priyam
// Time Complexity --->  
// Space Complexity ---> 
#include<iostream>
#include<deque>
using namespace std;
 
 
int main() {

deque<int> d = {1,2,3,4,5};
cout<<"Size = "<< d.size()<<endl;
cout<<d.front()<<endl;
cout<<d.back()<<endl;

for(deque<int>::iterator it = d.begin() ; it != d.end() ; ++it)
{
    cout<<*it<<'\t';
} 
cout<<endl;

for(deque<int> :: reverse_iterator it = d.rbegin() ; it != d.rend() ; ++it)
{
    cout<<*it<<'\t';
}
cout<<endl;

d.push_back(100);
d.push_back(200);
d.push_front(-200);
d.push_front(-100);

for(deque<int>::iterator it = d.begin() ; it != d.end() ; ++it)
{
    cout<<*it<<'\t';
} 
cout<<endl;

d.pop_back();
d.pop_front();

for(deque<int>::iterator it = d.begin() ; it != d.end() ; ++it)
{
    cout<<*it<<'\t';
} 
cout<<endl;

d.clear();

return 0;
}       