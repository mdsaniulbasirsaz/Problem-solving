#include <iostream>
#include <algorithm>


 
// C++ program to demonstrate working of `std::binary_search` algorithm
int main()
{
    int n;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++)
   {
    scanf("%d",&arr[i]);
   }
   int x;
   scanf("%d",&n);
    if (binary_search(begin(arr),end(arr), x))
    {
        std::cout << "Element found in the array";
    }
    else {
        std::cout << "Element not found in the array";
    }
 
    return 0;
}