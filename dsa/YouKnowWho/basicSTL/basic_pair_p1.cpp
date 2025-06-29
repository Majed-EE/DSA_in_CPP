#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<pair<string,string>> leaves;
    int n;
    string specie, color;
    // l=leaves.size();
    cin>>n;
    bool foundFlag=false;
    for (int i=0;i<n;i++){
        // search how to check elements
        foundFlag=false;
        cin>>specie>>color;
        for (int x=0;x<leaves.size();x++){
            if (specie==leaves[x].first && color==leaves[x].second){
                foundFlag=true;
                break;
            }
        }

        if (!foundFlag){
            // add to the vector the current pair
            leaves.push_back({specie,color});
            
        }

    }
    cout<<leaves.size()<<endl;
    return 0;


}