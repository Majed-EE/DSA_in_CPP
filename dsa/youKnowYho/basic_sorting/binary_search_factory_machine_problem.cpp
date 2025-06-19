// Question bubble sort
/*
A factory has n machines which can be used to make products. Your goal is to make a total of t products.
For each machine, you know the number of seconds it needs to make a single product. The machines can work simultaneously, and you can freely decide their schedule.
What is the shortest time needed to make t products?
Input
The first input line has two integers n and t: the number of machines and products.
The next line has n integers k_1,k_2,\dots,k_n: the time needed to make a product using each machine.
Output
Print one integer: the minimum time needed to make t products.
Constraints

1 <= n <= 2 x 10^5
1 <= t <= 10^9
1 <= k_i <= 10^9

Example
Input:
3 7
3 2 5

Output:
8

Explanation: Machine 1 makes two products, machine 2 makes four products and machine 3 makes one product.
*/


#include<iostream>
#include<bits/stdc++.h>
#define lli long long


using namespace std;
bool check(lli mid, vector<int> &arr,int t){
    lli total_products_produced=0;
    // time complexity->o(n)
    //for (int i=0;i<arr.size();i++){
    // int v=arr[i]; cout<<v; }
    // shortcut
    
    // for (int v:arr){
    //     cout<<v; }


    
    for (int v:arr){
        total_products_produced+=(mid/v); }
    if (total_products_produced>=t){
        return true; // go left
    }
    else return false; // go right
}

int main(){
    int n,t,lw=1e9+1;
    lli ans=-1;
    cin>>n>>t;
    // n is the number of machines 
    // t is the total number of jobs
    // h_lim-> highler limit
    // l_lim->lower limit

    vector<int> Machine_arr(n);
    for (int i=0;i<n;i++){
        cin>>Machine_arr[i];// ith mahcines time to complete the job
        if (Machine_arr[i]<lw){
            lw=Machine_arr[i];}
    } 
    lli h_lim, l_lim=0; 
    h_lim=1LL*lw*t; // min till now times t
    // worse case is 1e18 (1e9*1e9)
    
    // binary sort- what question to ask
    // search space should be sorted- 
    lli hi=h_lim,lo=0,mid;
    while(lo <= hi){ //time complexity-> O(log(hi * n))
        mid=lo+(hi-lo)/2;
        // machine completes work in mid minutes
        
        if (check(mid,Machine_arr,t)){ 
            // ans is mid
            ans=mid;
            // go to left
            hi=mid-1;

        } 
        else { 
            //go to right
            lo=mid+1;

            
        }
        // time complexity- check is n, 
        // while o(log(h_lim))

    }
    
    cout<<ans<<endl;
    return 0;


}