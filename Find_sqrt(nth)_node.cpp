
#include <iostream>

using namespace std;
 class Node{
     public:
        int data;
        Node *next;
        Node(int data){
            this->data=data;
            Node *next=NULL;
        }
    };
int main(){
    
    Node *n1=new Node(10);
    Node *n2=new Node(20);
    Node *n3=new Node(30);
    Node *n4=new Node(40);
    Node *n5=new Node(50);
    Node *n6=new Node(60);
    Node *n7=new Node(70);
    Node *n8=new Node(80);
    
  
    //initialize the pointers
    Node *head=n1;
    Node *sqrtN=NULL;
    Node *h1=head;
    int i=1,j=1;
    
    //initialize the next pointers
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=n6;
    n6->next=n7;
    n7->next=n8;
   
    //code
    while(h1!=NULL){
        if(i==j*j){                            //i goes through all the nodes and j stands at the node with j=sqrt(i)
            if(sqrtN==NULL)
            sqrtN=head;
            else
            sqrtN=sqrtN->next;
        j++;
        }
        h1=h1->next;
        i++;                            
    }
    cout<<sqrtN->data;
    
    
}
