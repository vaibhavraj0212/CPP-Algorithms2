class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
       // Your code here
       
       Node *temp=del;
       temp->data=temp->next->data;
       temp->next=temp->next->next;
    }

};
