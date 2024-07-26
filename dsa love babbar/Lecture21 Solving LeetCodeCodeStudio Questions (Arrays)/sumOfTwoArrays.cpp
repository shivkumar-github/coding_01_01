/*
https://www.codingninjas.com/studio/problems/sum-of-two-arrays_893186

Problem statement
You are given two numbers 'A' and 'B' in the form of two arrays (A[] and B[]) of lengths 'N' and 'M' respectively,
where each array element represents a digit.
You need to find the sum of these two numbers and return this sum in the form of an array.

Note:

1. The length of each array is greater than zero.

2. The *first index of each array is the most significant digit of the number*.
For example, if the array A[] = {4, 5, 1}, then the integer represented by this array is 451 and array B[] = {3, 4, 5} so the sum will be 451 + 345 = 796. So you need to return {7, 9, 6}.

3. Both numbers do not have any leading zeros in them. And subsequently, the sum should not contain any leading zeros.
*/

/*APPROACH =>
there are 3 possible cases

I. first array is greater than second
II. second array is greater than first
III. when carry is still remaining
*/

#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> &arr)
{
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}

vector<int> reverse(vector<int> v)
{

    int s = 0;
    int e = v.size() - 1;

    while (s < e)
    {
        swap(v[s++], v[e--]);
    }
    return v;
}

vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m)
{
    // we store answer in reverse order in ans and then return by reversing it
    int i = n - 1;
    int j = m - 1;
    vector<int> ans;
    int carry = 0;

    while (i >= 0 && j >= 0)
    {
        int val1 = a[i];
        int val2 = b[j];

        int sum = val1 + val2 + carry;

        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }

    // first case
    while (i >= 0)
    {
        int sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }

    // second case
    while (j >= 0)
    {
        int sum = b[j] + carry;
        carry = sum / 10;
        int value = sum % 10;
        ans.push_back(value);
        j--;
    }

    // second case
    while (carry != 0)
    { // instead of writing while(carry != 0) we can write if(carry) as each elemnt of array only stores single digit that's why carry will be maximum 19(9+9+1) when all are 9s in two arrays having same length
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }
    // now the reverse of our required answer is stored in ans vector

    // print(ans);
    return reverse(ans);
}

int main()
{
    vector<int> arr2 = {1, 2, 3};
    vector<int> arr1 = {9, 9};
    vector<int> ans = findArraySum(arr1, arr1.size(), arr2, arr2.size());
    printArray(ans);
    return 0;
}