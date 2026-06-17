#include<iostream>
using namespace std;

int search(int arr[] ,int n, int data)
{
  int i;
  for (i=0; i<n ; i++)
  {
    if(arr[i]==data)
  return i;
  }
  return -1;
}
int main() {
    int arr[] = {10, 25, 30, 45, 60};
    int n = 5;
    int key = 45;

    int index = search(arr, n, key);

    if(index != -1)
        cout << "Element found at index " << index;
    else
        cout << "Element not found";

    return 0;
}

