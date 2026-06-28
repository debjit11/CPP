#include <iostream>
#include <list>

using namespace std ;

int main(){
    list <int> mylist ;
    mylist.push_back(12);
    mylist.push_back(13);
    mylist.push_back(14);
    mylist.push_back(15);
    mylist.push_front(47);
    // mylist.pop_front();

    // cout << mylist.size() << endl;
    // cout << *(mylist.begin()) << endl;
    // cout << mylist.back() << endl;

    // list<int>::iterator it = mylist.begin();

    // while (it != mylist.end())
    // {
    //     cout << *it << endl;
    //     it ++ ;
    // }

   
    list <int> first;
    list <int> second;
    first.push_back(41);
    first.push_back(45);
    first.push_back(14);
    first.push_back(54);

    list<int>::iterator it = first.begin();
    cout << "First List:" << endl;

    while (it != first.end())
    {
        cout << *it << endl;
        it ++ ;
    }
    
    second.push_back(77);
    second.push_back(87);
    second.push_back(89);
    second.push_back(12);
    
    first.swap(second);
    cout << "\nAfter Swap (First List):" << endl;
  
    list<int>::iterator it2 = first.begin();

    while (it2 != first.end())
    {
        cout << *it2 << endl;
        it2 ++ ;
    }


    
}