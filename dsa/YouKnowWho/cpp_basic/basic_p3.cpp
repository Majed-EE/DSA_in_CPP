// p3-> simple calculator


#include <stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define lli long long

lli mul_fun(lli a, lli b){
    lli c;
    c=a*b;
    cout << a << " * " << b << " = " << c << endl;
    return c;

}

lli add_fun(lli a, lli b){
    lli c;
    c=a+b;
    cout << a << " + " << b << " = " << c << endl;
    return c;

}
lli sub_fun(lli a, lli b){
    lli c;
    c=a-b;
    cout << a << " - " << b << " = " << c << endl;
    return c;

}

int main(){
    lli a1,a2;
    cin>>a1>>a2;
    add_fun(a1,a2);mul_fun(a1,a2);sub_fun(a1,a2);
    
    return 0;

}