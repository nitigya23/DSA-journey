#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;

    v.push_back(20);
    cout<<"capacity of vector v is:"<<v.capacity()<<endl;

    v.push_back(30);
    cout<<"capacity of vector v is:"<<v.capacity()<<endl;

    v.push_back(50);
    cout<<"capacity of vector v is:"<<v.capacity()<<endl;

 
    v.push_back(76);
    cout<<"size of vector v is:"<<v.capacity()<<endl;

    v.push_back(10);
    cout<<"size of vector v is:"<<v.capacity()<<endl;
    
    v.push_back(10);
    cout<<"size of vector v is:"<<v.capacity()<<endl;
    v.push_back(10);
    cout<<"size of vector v is:"<<v.capacity()<<endl;
    v.push_back(10);
    cout<<"size of vector v is:"<<v.capacity()<<endl;
    v.push_back(10);
    cout<<"size of vector v is:"<<v.capacity()<<endl;

    cout<<"size:"<<v.size()<<endl;
    cout<<"elemet at second index is:"<<v.at(2)<<endl;

    cout<<"front element is:"<<v.front()<<endl;
    cout<<"last elememt is:"<<v.back()<<endl;


    //performing pop back operation
    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";

    }cout<<endl;
    

    v.pop_back();

    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"before clear size of vector is:"<<v.size()<<endl;
    cout<<"before clear capacity of vector is:"<<v.capacity()<<endl;

    v.clear();
    cout<<"after clear operation size of vetcor is:"<<v.size()<<endl;
    cout<<"after clear capacity of vector is:"<<v.capacity()<<endl;



    //initializing the whole vector with same int(element value)
    vector<int> a(5,5);
    cout<<"print a:"<<endl;
    for(int i:a){
        cout<<i<<" ,";
    }cout<<endl;


    //copy of vector

    vector<int> b(a);
    cout<<"print b"<<endl;
    for(int i:b){
        cout<<i<<" ,";
    }cout<<endl;

    return 0;

}