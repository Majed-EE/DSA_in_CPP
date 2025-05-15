// #include<bits/stdc++.h>
#include <iostream> //header
// #include<bits/stdc++.h>
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

    vector<int> v1(5,20);
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