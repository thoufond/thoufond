# Templates 
  
Templates enable us to write generic functions. That means you don't have to care about the type of data you'll be passing in the arguments. This makes our code reusable. For e.g,  if you wanted to write a sort function for numbers as well as characters you can make a sorting function that'll accept any data type.

### Generic Function for swapping two variables 

```c++
template <class T> 
void swap1( T &a, T &b) {
    T t;
    t = a;
    a = b;
    b = t;
    cout << a <<" "<< b << endl;
}
```

So it doesn't matter if you call the function with arguments of different data type, say `char, int, double` it will do the swapping without any error.

### Bubblesort Generic function

```c++
template< class T>
void bubblesort( T a[] , int n)
{
        for( int i = 0;i< n - 1;i++){
            for( int j=n-1 ;j>i ;j--){
                if(a[j]<a[j-1])
                    swap(a[j],a[j-1]);
            }
        }
}
```
If you put integer array in the argument it will sort the integers in ascending order.If you put a character array in the argument it will sort it alphabetically.

### Sort function in STL

```c++
std::vector<int> v = {3,4,2,1};
std::vector<char> vec = {'d','a','c','b'};
sort(v.begin(),v.end());
sort(vec.begin(),vec.end());
for(int x : v)cout<<x<<" ";
for(char x : vec)cout<<x<<" ";
```

__output__ - `1 2 3 4 a b c d`

So, for a lot of functions in STL, we don't have to re-implement the module to make it functional for different data types. 
