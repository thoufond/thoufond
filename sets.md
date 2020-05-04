# Sets 

Sets are containers which store only unique values in a sorted order. You can only insert or delete elements from a set you cannot modify elements of the set


### Initalizing a set

```c++
set<int> s = {1,2,3,3,4,5};
for(int x: s )cout<<x<<" "; // output - 1,2,3,4,5
```

### Implementation

```c++
set <int> s;
set <int>::iterator it;
int a[] = {1, 2, 2, 5, 3, 0};
for(int i = 0;i < 6;++i)s.insert(a[i]);
for(it = s.begin();it != s.end();++it)cout<<*it<<" ";cout<<"\n";

// output  -  0,1,2,3,5    
```

