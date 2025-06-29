#include<bits/stdc++.h>
#include<iostream>

using namespace std;

#define lli long long



// For each of the k queries print YES in a separate line if this number occurs in the array, and NO otherwise.

int main(){
    
    lli n,k; // n -> array, k -> querries
    lli high,lw,mid;
    bool search;
    
    cin>>n>>k;
    
    // Search Vector
    vector<int> searhVctr(n);
    for (int x=0;x<n;x++){
        cin>>searhVctr[x];
    }

    
    for (lli qc=0;qc<k;qc++) // qc-> current querry
    { 

      high=n;lw=0;mid=lw+(high-lw)/2;
      search=true;
      while search{
        
      }


    }




}