// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool stk_fun(string cmdd, int val, stack<int> &k){
    int pp;
    if (cmdd=="push") {k.push(val); cout<<"ok"<<endl;}
    else if (cmdd=="back") cout<<k.top()<<endl; 
    else if (cmdd=="size") cout<<k.size()<<endl; 
    else if (cmdd=="pop") {pp=k.top();k.pop();cout<<pp<<endl;}
    else if (cmdd=="clear") {
        while (k.empty()) k.pop();
        cout<<"ok"<<endl;}
    else if (cmdd=="exit") {cout<<"bye"<<endl;return false;}
    else cout<<"invalid command";
    return true;

}

int main (){
    stack <int> st;
    int inpt;
    bool cnd=true;
    string cmdd;
    while (cnd){
        inpt=0;
        cin>>cmdd;
        if (cmdd=="push")cin>>inpt;
        cnd=stk_fun(cmdd,inpt,st);

    }
    return 0;

}