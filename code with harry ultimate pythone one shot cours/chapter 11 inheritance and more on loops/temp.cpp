/*

*/

#include<iostream>
using namespace std;
int main(){
int a = 5;
int* ptr = &a;
cout << ptr << endl;
a = 6;
cout << ptr << endl;
return 0;
}