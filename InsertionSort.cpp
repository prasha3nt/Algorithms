#include <iostream>

using namespace std;

void printArray(int A[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}


void InsertionSort(int A[], int n)
{
    
    for(int i=1; i<n;i++)
    {
        int ToBeInserted=A[i];
        int j=i-1;
        while(j>=0 && ToBeInserted<A[j])
        {
              A[j+1]=A[j];
               j--;
        }
        A[j+1]=ToBeInserted;
       
    }
}

int main() {
   
int Array[]={6,5,4,3,2};

int n=sizeof(Array)/sizeof(Array[0]);
printArray(Array,n);
InsertionSort(Array,n);
printArray(Array, n);
    return 0;
}
