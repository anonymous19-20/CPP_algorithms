#include<iostream>
using namespace std;

void MS(int arr1[], int n, int arr2[], int s, int arr3[])
{
  int NA=0,NB=0,ptr=0;
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
int main()
{
  int i,A[4]={1,3,5,7},B[4]={2,4,6,8},C[8];
  MS(A,4,B,4,C);
  for(i=0;i<8; i++)
    cout << C[i]<<" ";
}
