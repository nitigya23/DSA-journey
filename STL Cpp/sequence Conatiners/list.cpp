#include <bits/stdc++.h>
using namespace std;

// list is implemented using doubly linked lists in cpp STL
int main(){
    list<int> l;
    l.push_back(2);
    l.push_front(1);

    for(int i:l){
        cout<<i<<" ";

    }cout<<endl;
}


