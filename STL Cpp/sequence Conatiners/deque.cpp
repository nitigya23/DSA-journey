#include <bits/stdc++.h>
using namespace std;

//deque is implemented using array of pointers

//performing various operation of deque:
// we can perform insertion and deletion from both end (front and back)
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_back(1);
    d.push_back(1);
    d.push_back(1);

    
    d.push_front(2);
    d.push_front(1);


    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;


    // d.pop_back();
    // for(int i:d){
    //     cout<<i<<" ";
    // }cout<<endl;
    // return 0;


    cout<<"element at first index is:"<<d.at(1)<<endl;
    cout<<"element at second index is:"<<d.at(2)<<endl;
    cout<<"element at front:"<<d.front()<<endl;
    cout<<"element at the end:"<<d.back()<<endl;

    cout<<"is deque empty?:"<<d.empty()<<endl;  //0=> no 1=> yes

    //deleting elements from deque:

    cout<<"before erase:"<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase:"<<d.size()<<endl;


    
}

