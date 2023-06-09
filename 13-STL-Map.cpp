 //  - By- Harsh Priyam
// Time Complexity --->  
// Space Complexity ---> 
#include<iostream>
#include<map>
using namespace std;
 
 
int main() {
map<int , string> m = {{10, "cat"},{20,"dog"},{5,"bat"}};
cout<<"size = " << m.size() << endl;
for(auto& p : m)
    cout<< "{" << p.first << "," << p.second << "}";
cout<<endl;
m.insert({100,"Rabbit"});
m.insert({10,"Fish"});
for(auto& p:m)
    cout<< "{" << p.first << "," << p.second << "}";
cout<<endl;        
 
// auto it = m.erase(m.find(10));
// cout<< it->first<<endl;

int num_erased = m.erase(15);
cout<< "num_erased" << num_erased << endl;

auto ub = m.upper_bound(15);
auto lb = m.lower_bound(15);
cout<< "ub = " << ub->first << endl;
cout<< "lb = " << lb->second << endl;

m.insert({{-10,"apple"},{-30,"orange"},{-20,"mango"}});
for(auto& p:m){
    cout<< "{" << p.first << "," << p.second << "}";
}
cout<<endl;

map<int , string> m2 = {{10,"aa"},{20,"bb"},{15,"cc"},{55,"dd"}};

m.insert(m2.begin(),m2.end());

for(auto& p:m){
    cout<< "{" << p.first << "," << p.second << "}";
}
cout<<endl;

return 0;
}
