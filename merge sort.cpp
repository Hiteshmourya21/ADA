#include <iostream>
using namespace std;

void merge(int a[] , int s,int m, int e)
{
    int n1 = m - s + 1;
    int n2 = e - m;
 
    
    int x[n1] ;
    int y[n2];
 
  
    for (int i = 0; i < n1; i++)
        x[i] = a[s + i];
    for (int  j = 0; j < n2; j++)
        y[j] = a[m + 1 + j];
 
    int  i = 0, j = 0;
    int k = s;
 
    
    while (i < n1 && j < n2) {
        if (x[i] <= y[j]) {
            a[k]= x[i];
            i++;
        }
        else {
            a[k]= y[j];
            j++;
        }
        k++;
    }
 
    
    while (i < n1) {
        a[k]  = x[i];
        i++;
        k++;
    }
 
   
    while (j < n2) {
        a[k]  = y[j];
        j++;
        k++;
    }
  
 
}

void mergesort(int a[],int s, int e){
   if(s<e){
        int  m = (s+e)/2;
        mergesort(a,s,m);
        mergesort(a,m+1,e);
        merge(a,s,m,e);
   }
}

int main()
{
   int n;
   cout<<"Enter no. of element : ";
   cin>>n;
   int a[n];
   cout<<"Enter element in array : ";
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   mergesort(a,0,n);
   for(int i=0;i<n;i++){
       cout<<a[i]<<" ";
   }
    return 0;
}