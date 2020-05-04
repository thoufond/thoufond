#include <bits/stdc++.h>
using namespace std;

int main() {

    std::vector<int> v3 = {1,2,3,4,5};
    std::vector<int> v4(v3);
    std::vector<int>::iterator it ;
    for(it=v3.begin();it!=v3.end();it++){
        *it = 4;
        cout<<*it<<" ";
    }
    cout<<"\n";
    // If we want to print last 3 elements of the vector in reverse order we can use reverse iterator
    // We don't have to intialize iterator if we use __auto__    
    for(auto it1 = v4.rbegin();it1 != v4.rbegin()+3;it1++)cout<<*it1<<" ";
    cout<<"\n";
        
    std::vector<int> v6;
    v6.push_back(1);
    while(v6.back()!= 5){v6.push_back(v6.back()+1);}
    for(int x : v6)cout<<x<<" ";
    cout<<"\n";
    cout<<v6.front()<<" "<<v6[0]<<"\n";        // front and [] operator

    v6.pop_back();
    for(int x : v6)cout<<x<<" ";cout<<"\n";
    v6.insert(v6.begin(),100);
    for(int x : v6)cout<<x<<" ";cout<<"\n";  

    std::vector<int> v = {3,4,5,1,2};
    sort(v.begin(),v.end());       
    for(int x: v)cout<<x<<" ";cout<<"\n";      // sorted vector
    reverse(v.begin(),v.end());                
    for(int x: v)cout<<x<<" ";cout<<"\n";      // reversed vector
    cout<<*max_element(v.begin(),v.end())<<"\n";   // max element
    cout<<*min_element(v.begin(),v.end())<<"\n";   // min element

    // Suppose you want to know the number of 
    // duplicates of an element in a vector you can use
    // lower bound and upper bound 

    std::vector<int> v1={1,2,3,3,3,3,4,5};
    cout<<upper_bound(v1.begin(), v1.end(),3) - lower_bound(v1.begin(), v1.end(),3)<<"\n";

    binary_search(v1.begin(),v1.end(),4)?cout<<"Present":cout<<"Not present";
    
    /* 

    output 

    4 4 4 4 4 
    5 4 3 
    1 2 3 4 5 
    1 1
    1 2 3 4 
    100 1 2 3 4 
    1 2 3 4 5 
    5 4 3 2 1 
    5
    1
    4
    Present

    */

}
