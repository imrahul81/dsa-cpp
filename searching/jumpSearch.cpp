// jump search / block search
// time: O(√n) space: O(1)
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int jumpSearch(const vector<int> &arr, int target)
{
    int step = sqrt(arr.size());
    int i = 0;
    while (i < arr.size())
    {
        if (arr[step - 1] > target)
        {
            // linear search
        }
    }
    return -1;
}
int main()
{
    vector<int> v{10, 23, 36, 41, 55, 69, 70, 81, 92, 105};
    cout << jumpSearch(v, 70);
    return 0;
}