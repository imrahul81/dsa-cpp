// implementation of binary search
// input needs to be sorted to apply BS
// time: O(log n) space: O(1)

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int> &arr, int target)
{
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid;
        if (target < arr[mid]) // go left
            high = mid - 1;
        else // go right
            low = mid + 1;
    }
    return -1;
}

int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << binarySearch(v, 4) << endl;
    return 0;
}