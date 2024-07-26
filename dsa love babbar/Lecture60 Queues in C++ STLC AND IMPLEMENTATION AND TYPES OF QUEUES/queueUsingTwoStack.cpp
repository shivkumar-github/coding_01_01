/*
implementation of queue using two stack
*/

#include<iostream>
#include<stack>
using namespace std;

class Qieue{
        stack<int> s1, s2;

        public:
        void enQueue(int x){
                // push item into the first
                s1.push(x);
        }

        int deQueue(){
                // if both stacks are empty
                if (s1.empty() && s2.empty())
                {
                        cout<< "Queue is empty!" << endl;
                        return -1;
                }
                
                // if second stack is empty and first is not
                if (s2.empty())
                {
                        while (!s1.empty())
                        {
                                s2.push(s1.top());
                                s1.pop();
                        }
                }
                
                // return the top item from second stack
                int x = s2.top();
                s2.pop();
                return x;
        }
};

int main(){



return 0;
}