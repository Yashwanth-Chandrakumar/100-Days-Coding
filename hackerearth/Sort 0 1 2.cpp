#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
  int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high) {
        switch (arr[mid]) {
            case 0:
                std::swap(arr[low], arr[mid]);
                low++;
                mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                std::swap(arr[mid], arr[high]);
                high--;
                break;
        }
    }

}
