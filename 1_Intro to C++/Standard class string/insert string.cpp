#include <iostream>
using namespace std;
int main() {
    string st1 = "Hello   Github";
    string st2 = " my ";
    st1.insert(6,st2);

  cout << st1<<endl;

}


// output

// Hello  my   Github
