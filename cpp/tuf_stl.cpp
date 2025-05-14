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


