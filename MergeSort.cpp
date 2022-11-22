// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void printArr(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<< a[i]<< " ";
    }
    cout<<endl;
}

void MergeSort(int a[], int low, int high) 
{
    
    if(low>=high)
    {
        return;
    }
        int mid= low+ (high-low)/2;
        MergeSort(a, low, mid);
        MergeSort(a, mid+1, high);
        merge(a,low, mid, high);
}


int main() {
  
  int a[5]={2,4,5,6,1};
  int siz= sizeof(a)/sizeof(int);
  
  printArr(a, siz);
  MergeSort(a,0,4);
  printArr(a,siz);

    return 0;
}
