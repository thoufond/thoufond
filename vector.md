# Vector 
Vector is like a dynamic array with lookup performance of O(1).You can access them directly through some member functions or through iterators. Iterators are like pointers referencing a value of the container.
You can do arithmetic operations on the iterators.

### Initializing vector

```c++
int n = 4, int m =4
std::vector<int> v(n,m);             // n times m, 4 times integer 4 in vector
std::vector<int> v1 = {1,2,3,4};                    
std::vector<int> v2(v1);             // make a copy of v1
```

###  Iterators

* `begin()` - Returns iterator pointing to beginning of the vector i.e first element.
* `end()` -  Returns an iterator pointing to the end of the vector i.e last element.
* `rbegin()` - Returns reverse iterator to the reverse beginning.
* `rend()` - Return reverse iterator to the revese end.
* `cbegin()` - Return const_iterator to beginning.
* `cend()` - Return const_iterator to end.

### Initializing an iterator 
```c++
std::vector<int>:: iterator it;
```

__Implementaion__ 
```c++
std::vector<int> v = {1,2,3,4,5};
std::vector<int> v1(v);
std::vector<int>::iterator it ;
for(it=v.begin();it!=v.end();it++){
        *it = 4;
        cout<<*it<<" ";
    }
// If you use c.begin() and c.end(), you'll get an error as we have used a constant reference which is read only.  

// If we want to print last 3 elements of the vector in reverse order we can use reverse iterator
// We don't have to intialize iterator if we use __auto__    
for(auto it1 = v1.rbegin();it1 != v1.rbegin()+3;it1++)cout<<*it1<<" ";
/*
output - 

4 4 4 4 4
5 4 3
*/
```


### Other member functions

* `front()` - Access the first element.
* `back()` - Access the last element.
* `operator[]` - Access any specific element.
* `push_back()` - Add elements at the end of the vector.
* `pop_back()` - Delete last element of the vector.
* `insert()` - insert element at a given position.

__Implementation__

```c++
std::vector<int> v;
v.push_back(1);
while(v.back()!= 5){v.push_back(v.back()+1);}
for(int x : v)cout<<x<<" ";
cout<<"\n";
cout<<v.front()<<" "<<v[0]<<"\n";        // front and [] operator

v.pop_back();
for(int x : v)cout<<x<<" ";
v.insert(v.begin(),100);
for(int x : v)cout<<x<<" ";    
/*
output - 
1 2 3 4 5 
1 1
1 2 3 4     
100 1 2 3 4
*/
```


### Algortihms 

* `sort(first_iterator, last_iterator)` – To sort the given vector.
* `reverse(first_iterator, last_iterator)` – To reverse a vector.
* `*max_element (first_iterator, last_iterator)` –  maximum element of a vector.
* `*min_element (first_iterator, last_iterator)` –  minimum element of a vector.
* `binary_search(first_iterator, last_iterator, x)` – Tests whether x exists in __sorted__ vector or not.Returns a boolean value.
* `lower_bound(first_iterator, last_iterator, x)` – returns an iterator pointing to the first element in the range [first,last) which has a greater than or equal to x.
* `upper_bound(first_iterator, last_iterator, x)` – returns an iterator pointing to the first element in the range [first,last) which has a value strictly greater than x.

__Implementation__

```c++
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
   // {1,2,3(lower_bound),3,3,3,4(upper_bound),5}
   binary_search(v1.begin(),v1.end(),4)?cout<<"Present":cout<<"Not present";

    /* 
    output- 
    1 2 3 4 5 
    5 4 3 2 1 
    5
    1
    4
    Present
    */
```


