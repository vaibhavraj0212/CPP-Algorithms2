class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        
        
        struct Node *dummy=NULL;
        if(head->next==NULL){
            return head;
        }
        while(head!=NULL){
            struct Node* t=head->next;
            head->next=dummy;
            dummy=head;
            head=t;
            
        }
        return dummy;
    }
    
};
