// C++ program to left rotate a array k times
#include <bits/stdc++.h>
using namespace std;

//  Reverse an Array function
void reverse(int a[], int i, int j)
{
    int start = i, end = j;
    while(start < end)
    {
        swap(a[start], a[end]);
        start++;
        end--;
    }
}

// Driver code
int main()
{
  int n;
  cout<<"Enter the size of Array : "<<endl;
  cin>>n;

  int arr[n];
  cout<<"Enter the elements of Array :"<<endl;
  for(int i = 0; i < n; i++)
    cin>>arr[i];

  int k;
  cout<<"Enter how many times array should Rotate"<<endl;
  cin>>k;

  // // if k>n , k%n will bring k back in range
  int r=k%n;
    
  reverse(arr, r,n-1);
  reverse(arr, 0,r-1);
  reverse(arr, 0,n-1);

  //  Printing the Array
  cout<<"Array after "<<k<<" left rotation:"<<endl;
  for(int i =0; i <n; i++)
    cout<<arr[i]<<" ";

  return 0;
}
