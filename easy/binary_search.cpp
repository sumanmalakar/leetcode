#include <iostream>
#include <vector>
using namespace std;
int binary_search(int arr[], int n, int key)
{
  int s = 0;
  int e = n - 1;
  while (s <= e)
  {
    int mid = (s + e) / 2;

    if (arr[mid] == key)
    {
      return mid;
    }
    else if (arr[mid] < key)
    {
      s = mid + 1;
    }
    else
    {
      e = mid - 1;
    }
  }
  return -1;
}

int main()
{

  int arr[] = {0, 3, 10, 15, 20, 24, 30, 60, 61};
  int n = sizeof(arr) / sizeof(int);
  int key = 61;
  int index = binary_search(arr, n, key);
  if (index != -1)
  {
    cout << "Element is present at index " << index;
  }
  else
  {
    cout << "Element is not present ";
  }

  return 0;
}