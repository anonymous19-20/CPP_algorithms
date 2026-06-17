#include<iostream>
using namespace std;

void sorting(int arr[], int n)
{
  for(int i=0; i<5; i++)
  {
    for(int j=i+1; j<n; j++)
    {
      if(arr[i]>arr[j])
        swap(arr[j],arr[i]);

    }
}
}

int main()
{
  int array[5]={3,5,1,7,2};
  sorting(array,5);
  
  for(int i=0; i<5; i++)
    cout << array[i] << " ";
}


