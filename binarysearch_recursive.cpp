
#include <iostream>
using namespace std;

int binary_search(int A[], int key,int imin, int imax){
    if(imax<imin){
        cout<<"array is empty";
    }
    else if(key<A[imin]||key>A[imax]){
        cout<<"element not in array list";
    }
    else{
        int imid = (imin +imax)/2;
        if(A[imid] >key ){
            return binary_search(A,key,imin ,imid-1);
        } 
        else if(A[imid] < key ){
            return binary_search(A,key,imid+1 ,imax);
        } 
        else{
            return imid;
        }
    }
    return -1;
}

int main()
{
   int n;
   cout<<"Enter no. of element : ";
   cin>>n;
   int A[n],x;
   cout<<"Enter element in array : ";
   for(int i=0;i<n;i++){
       cin>>A[i];
   }
   cout<<"Enter element you want to search : ";
   cin >> x;
  
    int r = binary_search(A,x,0,n);
     if(r!=-1){
        cout<<"Element present on index "<<r;
}
else{
    cout<<"\nElement is not present in array ";
}
    return 0;
}
