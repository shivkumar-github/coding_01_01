/*
https://www.geeksforgeeks.org/problems/remove-loop-in-linked-list/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card
*/

#include<iostream>
#include<unordered_map>
using namespace std;
class Solution {
  public:
    // Function to remove a loop in the linked list.
    void removeLoop(Node*& head) {
        // code here
        // just remove the loop without losing any nodes
        unordered_map<Node*, bool> visited;
        Node* temp = head;
        Node* prev = NULL;
        while(temp){
            // if a node has next pointer to head (the tail is pointing to head) then remove the loop and return 
            if(temp->next == head){
                temp->next = NULL;
                return;
            }
            // if node not visited before then mark it true
            if(visited[temp] == 0) {visited[temp] = true;}
            // else it is the node to which tail's next pointer is connected, remove the loop and return
            else{
                prev->next = NULL;
                return;
            }
			// update temp and prev after each iteration
            prev = temp;
            temp = temp->next;
        }
    }
};
int main(){

return 0;
}