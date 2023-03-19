// Quick sort in C++
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

// function to print the array
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}

int partition(int array[], int low, int high) {
    
  int pivot = array[high];

  int i = (low - 1);

  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
      i++;
      // swap element at i with element at j
      swap(array[i], array[j]);
    }
  }
  
  // swap pivot with the greater element at i
  swap(array[i + 1], array[high]);
  
  // return the partition point
  return (i + 1);
  }



void quickSort(int array[], int low, int high) {
  if (low < high) {
    int pi = partition(array, low, high);

    
    quickSort(array, low, pi - 1);
    quickSort(array, pi + 1, high);
  }
}

int main() {
  int n;cin>>n;
  int array[n];
  for(int i=0; i<n; i++)cin>>array[i];
  
  quickSort(array, 0, n - 1);
  
  cout << "Sorted array in ascending order: \n";
  printArray(array, n);
}