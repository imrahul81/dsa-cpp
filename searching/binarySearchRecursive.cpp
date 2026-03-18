// recursive implementation of binary search
// input needs to be sorted to apply BS
// time: O(log n) space: O( log n)

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int> &arr, int target, int low, int high)
{
    if (low > high)
        return -1;
    int mid = low + (high - low) / 2;
    if (arr[mid] == target)
        return mid;

    if (target < arr[mid]) // go left
        return binarySearch(arr, target, low, mid - 1);
    else // go right
        return binarySearch(arr, target, mid + 1, high);
}

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << binarySearch(v, 4, 0, v.size() - 1) << endl;
    return 0;
}