#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[low];    
    int i = low + 1;
    int j = high;

    while (true) {
        while (i <= high && arr[i] < pivot)
            i++;
        while (j >= low && arr[j] > pivot)
            j--;
        if (i > j)
            break;
        swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); 
        quickSort(arr, low, pi - 1);        
        quickSort(arr, pi + 1, high);       
    }
}

int main() {
    int A[] = {5, 3, 8, 4, 2};
    int n = 5;

    quickSort(A, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << endl;

    return 0;
}
