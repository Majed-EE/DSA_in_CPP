// #include<bits/stdc++.h>
#include <iostream> //header
using namespace std;

// cpp stl divided into 2 parts-
// - Algo
// - Container
// - Iterators
// - Function Objects

int main(){


    return 0;
}



// Pairs

void explainPAir(){
    pair<int,int> p={1,3};
    cout<<p.first<<" "<<p.second;
    pair<int,int> arr[]={{1,2},{2,5},{5,1}};
    cout<<arr[1].second;


}

// vectors a container that is dynamic in nature 

void explainVector(){
    vector<int> v;
    
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,int>> vec;

    v.push_back({1,2}); // does the same thing
    v.emplace(1,2); // does the same thing

    vector<int> v(5,100);

    vector<int> v(5);

    vector<int> v1(5,20);
    vector<int> v2(v1);
    vector<int>::iterator it=v.begin();
    
    it++;
    cout <<*(it)<<" ";


}
// how to access elemtns in a vector

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
