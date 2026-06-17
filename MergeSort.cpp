#include<iostream>
using namespace std;

void MS(int arr1[], int n, int arr2[], int s, int arr3[])
{
  int NA=0, NB=0, ptr=0;
  while(NA<n && NB<s)
  {
    if(arr1[NA] < arr2[NB])
    {
      arr3[ptr] = arr1[NA];
      NA++;
    } else {
      arr3[ptr] = arr2[NB];
      NB++;
    }
    ptr++;
  }
  while(NA < n)
  {
    arr3[ptr] = arr1[NA];
    NA++;
    ptr++;
  }
  while(NB < s)
  {
    arr3[ptr] = arr2[NB];
    ptr++;
    NB++;
  }
}

// Merge Sort function using your MS function
void mergeSort(int arr[], int n)
{
  if(n <= 1)
    return;
  
  int mid = n / 2;
  int left[mid];
  int right[n - mid];
  
  for(int i = 0; i < mid; i++)
    left[i] = arr[i];
  
  for(int i = mid; i < n; i++)
    right[i - mid] = arr[i];
  
  mergeSort(left, mid);
  mergeSort(right, n - mid);
  
  MS(left, mid, right, n - mid, arr);
}

int main()
{
  int arr[] = {38, 27, 43, 3, 9, 82, 10};
  int n = sizeof(arr) / sizeof(arr[0]);
  
  cout << "Original array: ";
  for(int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
  
  mergeSort(arr, n);
  
  cout << "Sorted array: ";
  for(int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
  
  return 0;
}
