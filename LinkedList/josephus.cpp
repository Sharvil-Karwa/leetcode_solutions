class Solution {
public:
    class Node{
        public:
        int data;
        Node* next;
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
    };
    class CircularLinkedList{
        public:
        Node* head;
        CircularLinkedList(){
            this->head = NULL;
        }
        void insert(int data){
            Node* newNode = new Node(data);
            if(this->head==NULL){
                this->head = newNode;
                newNode->next = this->head;
            }
            else{
                Node* temp = this->head;
                while(temp->next!=this->head){
                    temp = temp->next;
                }
                temp->next = newNode;
                newNode->next = this->head;
            }
        }
    }; 
    int findTheWinner(int n, int k) {
        if(k==1) return n;
        CircularLinkedList* cll = new CircularLinkedList();
        for(int i=1;i<=n;i++){
            cll->insert(i);
        }
        Node* temp = cll->head;
        while(temp->next!=temp){
            for(int i=0;i<k-2;i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            temp = temp->next;
        }
        return temp->data;
    }
};