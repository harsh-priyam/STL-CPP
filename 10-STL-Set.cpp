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

set<int> S = {10,20,10,40,70,20};

cout<<"Size :-> "<<S.size()<<endl;
S.insert(100);
S.insert(20);

for(auto& el : S){
    cout<<el<<" ";
}
 cout<<endl;
cout<<"Size :-> "<<S.size()<<endl; 


// auto it = S.erase(S.find(10));
// cout<< *it << endl;

int num_erased = S.erase(10);
cout << "num_erased = " << num_erased << endl;

for(auto& el : S){
    cout<< el << " ";
}
cout<<endl;

auto ub = S.upper_bound(10);
auto lb = S.lower_bound(10);
cout<< "ub = " << *ub <<endl;
cout<< "lb = " << *lb <<endl;

S.insert({-10,-30,-20});
for(auto & el : S){
    cout<< el << " ";
}
cout<<endl;

vector<int> v = {10,20,15,5,4};
S.insert(v.begin(),v.end());
for(auto& el : S){
    cout<<el<<" ";
}
cout<<endl;

// ----------------------------------------------------------------------------

set<Student> sst = {{50,"Aman"},{20,"Lalu"}};

for(auto& st: sst){
    st.print_student();
}

return 0;
}