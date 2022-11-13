
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
void Swap( int* x, int* y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void BubbleSort(int A[], int n)
{
    bool sorted=true;  // to check if array is has been sorted.
    for(int i=0; i<n-1;i++)
    {
        for (int j=0; j<n-1-i ;j++)
        {
            if(A[j]>A[j+1])
            {
                Swap(&A[j], &A[j+1]);
                sorted=false;
            }
            
        }
        if(sorted==true)
        {
        
            break;
            
        }
    }
}

int main() {
   
int Array[]={2,9,4,6,7};
int n=sizeof(Array)/sizeof(Array[0]);
printArray(Array,n);
BubbleSort(Array,n);
printArray(Array, n);
    return 0;
}
