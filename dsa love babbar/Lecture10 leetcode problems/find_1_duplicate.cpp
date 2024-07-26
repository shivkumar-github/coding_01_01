/*
Problem statement
You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once.
There is a single integer value that is present in the array twice.
Your task is to find the duplicate integer value present in the array.

For example:

Consider ARR = [1, 2, 3, 4, 4], the duplicate integer value present in the array is 4. Hence, the answer is 4 in this case.
*/

#include <iostream>
#include <vector>
using namespace std;
int findDuplicate(vector<int> &arr)
{
    int ans = 0;
    // XOR whole array
    for (int i = 0; i < arr.size(); i++)
    {
        ans ^= arr[i];
    }

    // XOR 1 to N-1
    for (int i = 1; i < arr.size(); i++)
    {
        ans ^= i;
    } // (a xor b ) xor c = a xor ( b xor c) -> associative property due to which this algo will work properly
    return ans;
}
