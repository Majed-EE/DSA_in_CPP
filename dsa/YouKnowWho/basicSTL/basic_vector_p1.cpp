#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> vct;
    int tq,cq,c; //total querry, current querry, command
    cin>>tq;
    for (int x;x<tq;x++){
        cin>>cq;
        if (cq<2){ 
            cin>>c;
            if (cq==1){
                vct.push_back(c);
            }
            else cout<<vct[c]<<endl;
        }
        else if (vct.empty()) vct.pop_back();

    }



    return 0;
}