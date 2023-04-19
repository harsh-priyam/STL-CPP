 //  - By- Harsh Priyam
// Time Complexity --->  
// Space Complexity ---> 
#include<iostream>
#include<set>
#include<vector>
using namespace std;

class Student{
public:
    int id;
    string name;

    void print_student() const {
        cout<< "[ name = " << name << ", id =  " << id << "]\n";
    }    

    bool operator < (const Student& other) const {
        return (this->id > other.id);
    }
};
 
 
int main() {
multiset<int> s = {10,20,10,40,70,20};

cout<<"Size :->"<< s.size()<<endl;
s.insert(100);
s.insert(20);

for(auto& el : s){
    cout<<el<<" ";
}
cout<<endl;

cout<<"Size ->"<< s.size()<<endl;

int num_erased = s.erase(10);
cout<<"Num_Erased = " << num_erased << endl;

for(auto& el : s){
    cout<<el<<" ";
}
cout<<endl;

auto ub = s.upper_bound(10);
auto lb = s.lower_bound(10);

cout<< "ub = " << *ub << endl;
cout<< "lb = " << *lb << endl;

s.insert({-10,-30,-20});
for(auto& el : s){
    cout<<el<<" ";
}
cout<<endl;

vector<int> v = {10,20,15,5,4};
s.insert(v.begin(),v.end());
for(auto& el : s){
    cout<<el<<" ";
}
cout<<endl;

multiset<Student> sst = {{50,"Aman"},{20,"Lalu"},{100,"Aman"}};

for(auto& st: sst){
    st.print_student();
}

 
return 0;
}