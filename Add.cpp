#include "Add.h"

int Add:: add(int a, int b) {
    int c = a+b;
    return c;
}

string Add:: add(string a, string b) {
    
    string s = a+b;
    return s;
}

string Add:: add(int a, string b) {
    string s = std::to_string(a);
    s = s+b;
    return s;
}

string Add:: add(string b, int a) {
    string s = std::to_string(a);
    
    s = b+s;
    return s;
}
/* Important Thoughts

    addition of vectors
    addition of differention , continuity

*/

//cout<<endl;

void Add:: manageAnything()
{
    
}