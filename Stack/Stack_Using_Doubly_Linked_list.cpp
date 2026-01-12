#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
        Node* prev;
        Node(int val)
        {
            this->val = val;
            this->next = nullptr;
            this->prev = nullptr;
        }
};
int main()
{
    Node* head = new Node(10);
    Node* tail = new Node(20);
    return 0;
}