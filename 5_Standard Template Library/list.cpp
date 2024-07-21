#include<bits/stdc++.h>
using namespace std;
int main(){
list<int> li;
li.push_back(30);
li.push_back(50);
li.push_back(60);
li.push_back(70);
li.push_front(99);
li.pop_back();    // pop 70 last element in list  

cout<<li.front()<<"\n";
cout<<li.back()<< "\n";  
cout<<"size of list = "<<li.size()<<"\n";  

for(auto it =li.begin();it!=li.end();it++){
     cout<<*(it)<<" "; 
}
cout<<"\n";
//for Reverse order
for(auto it =li.rbegin();it!=li.rend();it++){
     cout<<*(it)<<" ";
}
cout<<"\n";
}
