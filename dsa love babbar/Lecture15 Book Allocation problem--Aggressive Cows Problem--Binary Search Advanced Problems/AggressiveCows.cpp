/*
https://www.codingninjas.com/studio/problems/aggressive-cows_1082559
Problem statement
You are given an array consisting of 'n' integers which denote the position of a stall.
You are also given an integer 'k' which denotes the number of aggressive cows.

You are given the task of assigning stalls to 'k' cows such that the minimum distance between any two of them is the maximum possible.
Print the maximum possible minimum distance.

Example:
Input: 'n' = 3, 'k' = 2 and 'arr' = {1, 2, 3}

Output: 2

Explanation: The maximum possible minimum distance will be 2 when 2 cows are placed at positions {1, 3}. Here distance between cows is 2.
Babbar hasn't explained it well ....look another video on youtube
*/
// #include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void PrintArray(vector<int> &stallNo)
{
    for (int i = 0; i < stallNo.size(); i++)
    {
        cout << stallNo[i] << " ";
    }
    cout << endl;
}

bool isPossibleSol(vector<int> &stallNo, int k, int mid)
{
    int LastCowStall = stallNo[0]; // we can start from any other stall but we start from 0(minimum stallNo) because it is most convenient way to align cows to get maximum possible minimum distance between two cows
    int CowCount = 1;
    for (int i = 0; i < stallNo.size(); i++)
    {
        if (stallNo[i] - LastCowStall >= mid)
        {
            CowCount++;
            if (CowCount == k)
            {
                return true;
            }
            LastCowStall = stallNo[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stallNo, int k)
{
    int ans = -1;
    sort(stallNo.begin(), stallNo.end());
    int start = 0;
    int end = stallNo[stallNo.size() - 1] - stallNo[0]; // maximum stallNo - minimum stallNo
    while (start <= end)
    {
        int mid = (end + start) / 2;
        if (isPossibleSol(stallNo, k, mid)) // => isPossibleSol(stallNo,k,mid) == 1
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> stalls = {0, 3, 4, 7, 10, 9};
    int noOfCows = 4;
    cout << aggressiveCows(stalls, noOfCows) << endl;
    return 0;
}