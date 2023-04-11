 //  - By- Harsh Priyam
// Time Complexity --->  
// Space Complexity ---> 
#include<iostream>
#include<vector>
#include<list>
using namespace std;

void print_list(list<int>& ll){
    for(list<int>::iterator it = ll.begin(); it != ll.end(); ++it)
    {
        cout<< *it << "\t";
    }
    cout<<endl; 
}
 
int main() {

list<int> l = {1,2,3,4,5};
print_list(l);
cout<<"Size:"<< l.size()<<endl;

list<int> l2 = l;
print_list(l2);

cout<<l.max_size()<<endl;
cout<<l.front()<<','<<l.back()<<endl;
cout<<std::boolalpha << l.empty()<<endl; 

cout<<"Begin = " << *l.begin() << " End = " << *l.rbegin() <<endl;

// #INSERTION IN VECTOR IS QUIET DIRECT AND CAN BE ENTERED DIRECTLY AT ANY POS

vector<int> vec = {1,2,3,4,5};
vec.insert(vec.begin()+2,-100);
cout<<vec[2]<<endl;

// #INSERTION IN LIST IS QUIET NOT DIRECT AND CANNOT BE ENTERED DIRECTLY AT ANY POS

list<int>::iterator it = l.begin();
while(*it != 3 && it != l.end()){
      it++;
}
l.insert(it,-404);
print_list(l);

l.erase(it);
print_list(l);

l.remove(-404);
print_list(l);

l.clear();
print_list(l);
cout<< std::boolalpha << l.empty()<<endl;

print_list(l2);
l2.push_back(-181);
print_list(l2);
l2.push_front(-171);
print_list(l2);
l2.pop_back();
l2.pop_front();
print_list(l2);

return 0;
}