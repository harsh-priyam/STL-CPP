 //  - By- Harsh Priyam
// Time Complexity --->  
// Space Complexity ---> 
#include<iostream>
#include<vector>
#include<list>
using namespace std;
 
 
int main() {
    vector<int> v = {1,2,3};
    cout<< "Size = " << v.size() << ",Capacity = " << v.capacity() << endl;
    cout<< v.max_size() <<endl;
    v.push_back(5);
    cout<< "Size = " << v.size() << ",Capacity = " << v.capacity() << endl;
    int cap = v.capacity();
    int i;
    for(i = 0 ; i < 100 ; ++i){
        v.push_back(i);
        if(cap != v.capacity()){
            cap = v.capacity();
            cout<<"capacity = " << cap << endl;
        }
    }
 
cout<< v[99] <<endl;
cout<< v.at(99) <<endl;


cout<< "front = "<< v.front() << ", back = "<< v.back() << endl;

v.insert(v.begin()+2,-100);
cout<<"The value at position 2 is: "<< v[2] << endl;

cout<<"Size = " << v.size() <<endl;

v.pop_back();

cout<<"Size = " << v.size() <<endl;

list<int> l = {-100,-200,-300};
v.insert(v.begin(),l.begin(),l.end());
cout<<v[0]<<','<<v[1]<<','<<v[2]<<endl;

v.pop_back();

v.erase(v.begin()+1);
cout<<v[0]<<','<<v[1]<<','<<v[2]<<endl;

return 0;
}