#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std ;

int main() {
//  vector <int> arr(6);
//  arr[0]= 12;
//  arr[1]= 15;
//  arr[2]= 20;
//  arr[3]= 60;
//  arr[4]= 22;

//  int sum = accumulate(arr.begin(),arr.end(),0);
//  cout << sum << endl;
 vector <int> first ;
 vector <int> second ;

 first.push_back(12);
 first.push_back(22);
 first.push_back(32);
 first.push_back(10);

 second.push_back(42);
 second.push_back(2);
 second.push_back(3);
 second.push_back(15);

 int product = inner_product(first.begin(),first.end(),second.begin(),0);

 cout << product<< endl;

// vector <int> result(first.size());
// partial_sum(first.begin(),first.end(),result.begin());
//     for(int a: result ) {
//         cout << a << " ";
//     }
//     cout << endl;
        

// vector<int> first(5);

// iota(first.begin(),first.end(),230);
// for (int a :first)
// {
//     cout << a << endl;
// }

 

}