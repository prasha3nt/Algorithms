#include<iostream>
#include<array>
using namespace std;
void printArray( int A[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
        
    }
    cout<<endl;
}

/*
Time Complexity: -  i) Best Case -> O(n^2);
                   ii) Average Case -> O(n^2);
                  iii) Worst Case  -> O(n^2);
                  
Space Complexity: - O(1);
isStable= false;
*/
    
void SelectionSort (int a[], int n)
{
     int temp,i,j,lowestIndex;
     
  for( i=0;i<n-1;i++)
  {
      lowestIndex=i;
      for( j=i+1;j<n;j++)
      {
          if(a[j]<a[lowestIndex])
          {
              lowestIndex=j;
          }
      }
      if(lowestIndex!=i)
     {
      temp=a[i];
      a[i]= a[lowestIndex];
      a[lowestIndex]=temp;
     }
      
  }
}
int main()
{
    int b[]={5,4,3,2,1};
    int n= 5;
     printArray(b,n);
    SelectionSort( b,n);
    printArray(b,n);
    
    
}
