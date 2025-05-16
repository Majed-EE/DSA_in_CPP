// #include<bits/stdc++.h>
#include <iostream> //header
#include<bits/stdc++.h>
using namespace std;

// cpp stl divided into 2 parts-
// - Algo
// - Container -> queue, set, map
// - Iterators
// - Function Objects

int main(){


    return 0;
}



// Pairs

void explainPAir(){
    pair<int,int> p={1,3};
    // can be of different datatype
    // does it only include more than two elements? most likely yes
    cout<<p.first<<" "<<p.second;
    pair<int,int> arr[]={{1,2},{2,5},{5,1}};
    cout<<arr[1].second;


}

// vectors a container that is dynamic in nature 

void explainVector(){
    vector<int> v; // vector datatype could be anything
    
    // how to insert data
    v.push_back(1); // put 1 into it
    v.emplace_back(2); // dynamically increase the size and put 2

    vector<pair<int,int>> vec;

    v.push_back({1,2}); // does the same thing
    v.emplace(1,2); // does the same thing

    vector<int> v(5,100); // vector with container of 5 (size) values which are 100 (value) each

    vector<int> v(5); // size of 5

    vector<int> v1(5,20); // vector of sieze 5 and all values 20
    vector<int> v2(v1); // copy of vector v1
    // vector--> dynamic in nature
    
    // how to access elements
    cout<<v[0]<<" "<<v.at(0) // what is the difference between .at(0) and [0]
    vector<int>::iterator it=v.begin(); // data structure<data type>::iterator --> it points to the memory address
    
    it++; // why not (*it++)
    cout <<*(it)<<" ";


vector<int>::iterator it =v.begin();
it++;
cout<<*(it)<<" ";

it=it+2;
cout<<*(it)<<" ";

vector<int>::iterator it =v.end();
vector<int>::iterator it=v.rend();

vector<int>::iterator it =v.rbegin();

cout<<v[0]<<" "<<v.at(0);
cout<<v.back()<<" ";

for (vector<int>::interator it =v.begin(); it!=v.end(); it++){
    cout<<*(it)<<" ";
}


for (auto it =v.begin(); it!=v.end(); it++){
    cout<<*(it)<<" ";
}


// delete the vector
// {10,20,12,23}
v.erase(v.begin()+1);
// {10,12,23} 

// delete multiple elements
// {10,20,12,23,35}
v.erase(v.begin() + 2, v.begin() + 4 ); // {10,20,35} [start,end)


// insert function

vector<int>v(2,100); // (100,100)
v.insert(v.begin(),300); // {300,100,100}
v.insert(v.begin(),+1,2,10); // {300,10,10,100,100}

vector<int> copy(2,50) // {50,50}
v.insert(v.begin(),copy.begin(),copy.end()); // {50,50,300,10,10,100,100}

// {10,20}
cout<<v.size(); //2

//{10,20}
v.pop_back(); // {10}


// v1-> {10,20}
// v2 -> {30,40}
v1.swap(v2); // swap v1 and v2
v.clear(); // erases the entire vector

cout<<v.empty(); // if empty it will say true

}

// next container -> list

void explainList(){

    list<int> ls;
    ls.emplace_back(2); //{2}
    ls.push_back(4); // {2,4}

    ls.push_Front(5); // {5,2,4}

    ls.emplace_front(); {2,4}; // {5,2,4,2,4} ??
    // rest functions same as vector
    // begin, end, rebeing,rend,clear, insert, size swap

}


void explainDeque(){

    deque<int>dq;
    dq.push_back(1); // {1}
    dq.emplace_back(2); // {1,2}
    dq.push_back(1); // {4,1,2}
    dq.emplace_back(2); // {3,4,1,2}

    dq.pop_back(); // {3,4,1}
    dq.pop_front(); // {4,1}

    dq.back();

    dq.front();
    
}


void explainStack() {
    stack<int> st;
    st.push(1); // {1}
    st.push(2);
    st.push(3);
    st.push(3); // {3,3,2,1}
    st.emplace(5); // {5,3,3,2,1}


    cout<<st.top();

    st.pop(); // {3,3,2,1}
    cout<<st.top();
    cout<<st.size(); // 4
    cout<<st.empty();

    stack<int> st1,st2;
    st1.swap(st2)

}



void explainQueue(){
    queue<int> q; // first in first out
    q.push(1); // {1}
    q.push(2); // {1,2}
    q.emplace(4); // {1,2,4}
    q.back +=5 // {1,2,9}
    cout<< q.back(); // print 9

    // Q is {1,2,9}
    cout<<q.front(); // prints 1

    q.pop(); // {2,9}

    cout<<q.front(); //prints 2
    // size swap empty same as stack



}

void explainPQ(){
    priority_queue<int>pq;


    queue<int> pq; // top most element will be max element -> max heap
    pq.push(5); // {5}
    pq.push(2); // {5,2}
    pq.push(8); // {8,5,2}
    pq.emplace(10); // {10,8,5,2}
    pq.pop(); // {8 5 2} --> log(n)
    pq.top(); // 8
    // minimum heap --> minimum elements at the top is smallest
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5); // {5}
    pq.push(2); // {2,5}
    pq.push(8); // {2,5,8}
    pq.emplace(10); // {2,5,8,10}
    cout<<pq.top(); // prints 2
    
}



void explainSet()
{
    set<int>st; // everthing is sorted and unique
    st.insert(1); // {1}
    st.emplace(2); // {1,2}
    st.insert(2); // {1,2}
    st.insert(4); // {1,2,4}
    st.insert(3); // {1,2,3,4}

    // functionality of insert in vector
    // can be used also, that only increases efficiency

    // begin(). end(), rbegin() rend(); size(),
    // empty() and swap() are same as those of above

    // {1,2,3,4,5}
    auto it =st.find(3); // return iterator that points to element 3

    // {1,2,3,4,5}
    auto it=st.find(6); // if element not in the set, it returns pointer of st.end();

    //{1,2,3,4,5}-->{1,2,3,4}
    st.erase(5); // erases 5 --> take log(n)


    int cnt = st.count(1); // count number of instances of element 1
    auto it=st.find(3);
    st.erase(it); // takes constant time

    //{1,2,3,4,5}
    auto it1=st.find(2);
    auto it2=st.find(4);
    st.erase(it1,it2); // after erase {1,4,5} [first,last)

    // lower_bound() and upper_bound() function works in the same way
    // as in vector it does.

    // this is the syntax
    auto it = st.lower_bound(2);
    auto it = st.lower_bound(3); 


}


void explainMultiSet(){
    // sorted only, can stor duplicate element also

    multiset<int>ms;
    ms.insert(1); // {1}
    ms.insert(2); // {1,2}
    ms.insert(2); // {1,2,2}
    ms.insert(1); // {1,1,2}
    ms.insert(1); // {1,1,1,2,2}

    int cnt=ms.count(1); 
    ms.erase(1); // erase all element 1 {2,2}

    // only single one erased
    ms.erase(ms.find(1));

    ms.erase(ms.find(1),ms.find(1)+2); // find 1 and erase from starting poistion delete 2 occurance of element 1

    // rest all function same as set

}


void exmplainUSet(){
    unordered set<int> st; // -> unique but not sorted
    // lower_bound and upper_bound function
    // does not works. rest all functions are same
    // as above, it does not stores in any pearticulart order
    // better complexity than set in most cases,, except some when collsion happens
}


void explainMap(){ // key value pair--> keys are unique and in sorted order--> key and value can be of any datatype
    map<int, int> mpp; // key , value both are integers
    map<int, pair<int,int>> mpp; //key integer and value pair
    map<pair<int,int>,int>mpp; // key pair and value int

    mpp[1]=2;// [{1,2}]
    mpp.emplace({3,1}); // [{1,2},{3,1}]
    mpp.insert({2,4}); // [{1,2}, {2,4}, {3,1}]
    mpp[{2,3}]=10;
    {

        {1,2}
        {2,4}
        {3,1}
    }

    for(auto it:map){ // iterator over a map
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout<<mpp[1];
    cout<<mpp[5]; 

    auto it=mpp.find(3);
    cout <<*(it).second;

    auto it =mpp.find(5);// if 5 not there it points after the map mpp.end()

    // this is the syntax
    auto it=mpp.lower_bound(2);
    auto  it=mpp.upper_bound(3);

    // erase, swap size, empty are same as above

}


void explainMultimap(){


    // everthins same as map only it can store multiple keys
    // only mpp[key] cannot be used here
}

void explainUnordererMap(){
    // same as set and unordert_set 
}

bool comp(pair<int,int>p1, pair<int,int>p2){
    if(p1.second<p2.second){
        return true;
    } else if(p1.second == p2.second){
        if(p1.first>p2.second) return true;
    }
    return false;

}
/// extra stuff


void explainExtra() {
    sort(1+2,1+4);

    sort(a,a+n,greater<int>);
}