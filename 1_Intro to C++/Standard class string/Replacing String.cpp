#include <bits/stdc++.h>
using namespace std;
int main() {
string s1("there they go again? "), s2 ("bob and bill");
     s1.replace(6,4,s2);
     cout << s1;

    return 0;
}

// output:
// there bob and bill go again? 
