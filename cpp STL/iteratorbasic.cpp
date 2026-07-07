#include<iostream>
#include<vector>
#include<forward_list>
#include<list>
#include <forward_list>
using namespace std;


int main(){
    vector<int> arr;
    arr.push_back(34);
    arr.push_back(12);
    arr.push_back(38);
    arr.push_back(45);

    // vector<int>::iterator  it = arr.begin();

    // while (it != arr.end())
    // {
    //     cout << *it << " " ;
    //         it ++;
    // }
    
    // forward_list<int> list ;
    // list.push_front(14);
    // list.push_front(24);
    // list.push_front(4);
    // list.push_front(94);

    // forward_list<int> :: iterator it = list.begin();

    // while (it != list.end())
    // {
    //     cout << *it << " " ;
    //      it ++;
    // }

    // it = list.begin();
    // while (it != list.end())
    // {
    //     (*it) = (*it )+ 2;
    //     cout << *it << " " ;
    //      it ++;
    // }
    
// list <int> mylist ;
// mylist.push_back(12);
// mylist.push_back(2);
// mylist.push_back(1);
// mylist.push_back(92);
// mylist.push_back(16);

// list <int> :: iterator it = mylist.begin();

// while (it != mylist.end())
// {      //writing
//     (*it) = (*it )+ 2;
//     cout<< *it << " ";
    //forward move
//     it++ ;
// }
// list <int> :: iterator it = mylist.end();

// while (it != mylist.begin())
//pehle piche jaunga -> backward 
// {   it--;
//     cout<< *it << " ";
    
    
// }
  //random access iterator 
vector <int> :: iterator it = arr.begin() + 2;
cout << *it << " ";

}