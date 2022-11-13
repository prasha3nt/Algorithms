#include <iostream>
using namespace std;
void printArray( int A[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
        
    }
    cout<<endl;
}

int partition(int myarray[], int low, int high)
{
    int pivot= myarray[low];
    int i=low+1;
    int j=high;
    int temp;
    
    do{
        while(myarray[i]<=pivot) 
        {
            i++;
        }
        while(myarray[j]> pivot)
        {
            j--;
        }
        if(i<j) 
        {
            temp = myarray[i];
            myarray[i] = myarray[j];
            myarray[j] = temp;
        }
        
    
       } while(i<j);
        temp = myarray[low];
        myarray[low] = myarray[j];
        myarray[j] = temp;  
       return j;
}

//This algorithm is used to sort an array using quick sort Algorithm.
void quickSort( int myarray[], int low, int high) 
{
    int partitionIndex;
    if(low<high)
    {
    partitionIndex=partition( myarray, low, high);
    quickSort(myarray, low, partitionIndex-1);
    quickSort( myarray,  partitionIndex+1, high);
    
    
    }
}

int main() {
    int n=5;
   
    int myarray[]= {5,4,3,2,1};
    printArray(myarray, n);
    quickSort(myarray,0,n-1);
    printArray(myarray,n);

    return 0;
}
