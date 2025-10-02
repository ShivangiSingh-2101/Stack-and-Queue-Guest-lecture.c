
//Shivangi Singh
//24070123148
//B3

#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    int a = s.top(); s.pop();
    int b = s.top(); s.pop();
    s.push(a + b); 
    s.push(3);
    a = s.top(); s.pop();
    b = s.top(); s.pop();
    s.push(b * a); 
    cout << "Result: " << s.top() << endl; // Output: 9
    return 0;
}

//Output:
//Result: 9
