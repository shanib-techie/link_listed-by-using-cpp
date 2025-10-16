#include <iostream>
using namespace std;


// INSERTED AT HEAD 


class Node{  //ek node me do part hote h ek val and second in next addres .address pointer me hota h sp humne node* use kra h
    public:
    int val; 
    Node* next;
    


    Node(int data){    //cpnstructor for node
        this->val = data;
        this->next = NULL;
    }
};

void insertathead(Node* &head, int val){  //node* &head matlb hamari link listed, int val matlb uski value
    Node* new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}
void display(Node* head){
    Node*temp = head; // ek temp ka variable me head daalo matlb address vo second part hota h
    while(temp!=NULL){  //jab tak node me jo second part wani address null naa ho jab tak yeh loop cahalao
        cout<<temp->val<<"->";//jab tak loop chl rha h temp ki value {data print karo jo node me h }
        temp = temp->next;  
    }
    cout<<"NULL"<<endl;
}
int main(){
    Node* head = NULL;  //head matlb hamari node h jo ki abhi null ha
    insertathead(head,2);//head matlb node me hmne 2 insert krdiya
    display(head);//abb print kari so 2 mil gya
    insertathead(head,1);//abb dubara isrert kra
    display(head);
}