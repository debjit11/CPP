#include <iostream>
#include <stack>

using namespace std ;
 
int main() {
    stack <int> s;
    s.push(12);
    s.push(14);
    s.push(13);

cout << s.size() << endl ;// find size
cout << s.top() << endl ;
s.pop(); // remove 
cout << s.top() << endl ;

// if (s.empty() == true){

//     cout << "Stack is empty" << endl ;
// }
// else {

//     cout << "Stack is not empty" << endl ;
// }

stack <int> first;
stack <int> second;

first.push(30);
first.push(20);
first.push(10);

second.push(300);
second.push(200);
second.push(100);

first.swap(second);
cout << first.top() << " "  << endl ;

}