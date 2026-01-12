#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
        Node(int val)
        {
            this->val= val;
            this->next = NULL;
        }
};
void revers_linklist(Node* &head, Node* tmp)
{   
    if(tmp->next == NULL)
    {
        head = tmp;
        return;
    }
    revers_linklist(head,tmp->next);
    tmp->next->next = tmp;
    tmp->next= NULL;
    
}
void linklist_cycle(Node* head)
{
    Node* fast = head;
    Node* slow= head;
    bool flg = false;
    while(fast!=NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
        {   
            flg = true;
            break;
        }
        
    }
    if(flg == true) cout << "Cycle Found." << endl;
    else cout << "Cycle Not Found" << endl;
    
  
}
void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void Print_linked_list(Node* head)
{
    Node*tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
int main()
{   Node* head = nullptr;
    Node* tail = nullptr;
    
    while(true)
    {   int val;
        cin >> val;
        if( val == -1){
            break;
        }
        insert_at_tail(head,tail,val);    
    }
    revers_linklist(head,head);
    Print_linked_list(head);
    


   return 0;
}