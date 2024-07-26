/*
Algorithms in STL
*/

#include <iostream>
#include <algorithm> // algorithms ko include karne ke liye
#include <vector>
using namespace std;

int main()
{
    // we havent got the last part lets learn as we require
    vector<int> myVec1;
    myVec1.push_back(1);
    myVec1.push_back(3);
    myVec1.push_back(6);
    myVec1.push_back(7);

    cout << "Finding  5 " << binary_search(myVec1.begin(), myVec1.end(), 5) << endl;
    cout << "Finding  6 " << binary_search(myVec1.begin(), myVec1.end(), 6) << endl;

    // cout<< "lower bound for 6 " << lower_bound() << endl; 

    return 0;
}