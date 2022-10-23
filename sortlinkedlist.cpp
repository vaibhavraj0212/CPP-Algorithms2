class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        Node* temp=head;
        int c[3]={0,0,0};
        while(temp!=NULL){
            c[temp->data]=c[temp->data]+1;
            temp=temp->next;
        }
        
        temp=head;
        for(int i=0;i<=2;i++){
            while(c[i]){
                temp->data=i;
                temp=temp->next;
                c[i]=c[i]-1;
            }
        }
        return head;
    }
};
