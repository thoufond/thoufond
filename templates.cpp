#include <bits/stdc++.h>
using namespace std ;

template <class T> 
void swap1( T &a, T &b) {
    T t;
    t = a;
    a = b;
    b = t;
    cout << "Swapped - " << a <<" "<< b << endl;
}

template<class T>
void bubblesort( T a[] , int n){
    for( int i =0;i< n-1;i++){
        for(int j= n-1 ;j>i;j--){
            if(a[j]<a[j-1])
            {
                swap(a[j],a[j-1]);
            }
        }
    }
}

int main( ) {


    int a = 10, b = 20 ;
    float c = 10.5, d = 20.5 ;
    char e = 'e', f = 'f';
    swap1(a , b);              // swapping Int
    swap1(c , d);              // swapping float         
    swap1(e , f);              // swapping char

    int n = 4;
    int ar[] = {3,4,2,1};     
    char ar1[] = {'d','a','c','b'};
    bubblesort(ar ,n);
    cout<<"\nAfter Sorting int array - ";
    for(int x: ar){cout<<x<<" ";}
    bubblesort(ar1 ,n);
    cout<<"\nAfter Sorting char array - ";
    for(char x: ar1){cout<<x<<" ";}

    /* 
    output - 

    Swapped - 20 10
    Swapped - 20.5 10.5
    Swapped - f e

    After Sorting int array - 1 2 3 4 
    After Sorting char array - a b c d 

    */


    return 0;
}
