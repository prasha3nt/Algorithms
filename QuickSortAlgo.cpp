#include <iostream>
using namespace std;

void printArr(int arr[], int len)
{
    for(int i=0; i<len; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swap(int* a, int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int partition(int arr[], int low, int high)
{
    int pivot= arr[low];
    int i= low+1;
    int j= high;
    
    
    do
    {
        while(arr[i]<=pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }
        
        if(i<j) 
        {
            swap(arr[i],arr[j]);
        }
        
    }while(i<j);
    
    swap(arr[low], arr[j]);
    return j;
}

void QuickSort(int arr[], int low, int high)
{
    int partitionIndex;
    if(low<high)
    {
        partitionIndex= partition(arr, low, high);
        QuickSort(arr, low, partitionIndex-1);
        QuickSort(arr, partitionIndex+1, high);
    }
}




int main() {
    
    int arr[]={14,3,4,33,53,23,11,22,22,43};
    int len= sizeof(arr)/sizeof(int);
    
    printArr(arr, len);
    QuickSort(arr, 0,len-1);
    printArr(arr, len);



    return 0;
}
