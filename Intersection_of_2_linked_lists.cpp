

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
int main()
{
    int c1=0,c2=0;
    int diff=0;
    int i=0;
    //create nodes 
    Node *n0=new Node(100);
    Node *n1=new Node(10);
    Node *n2=new Node(20);
    Node *n3=new Node(30);
    Node *n4=new Node(40);
    Node *n5=new Node(50);
    Node *n6=new Node(60);
    Node *n7=new Node(70);
    Node *n8=new Node(80);
    Node *n9=new Node(90);
    
    Node *head1=n0;
    Node *h1=head1;
    Node *head2=n4;
    Node *h2=head2;
    Node *temp1;
    Node *temp2;
    Node *temp;
    //link the nodes
    n0->next=n1;
    n1->next=n2;
    n2->next=n3;
    n3->next=n6;
    n6->next=n7;
    n7->next=n8;
    n8->next=n9;
    n4->next=n5;
    n5->next=n6;
    //check the length of list1
    while(h1!=NULL){
        c1++;
        h1=h1->next;
    }
    //check length of list2
    while(h2!=NULL){
       c2++;
        h2=h2->next;
    }
    
    if(c1>=c2){
        temp1=head1;
        temp2=head2;
        temp1=temp1->next;

        diff=c1-c2;
    }  
    else{
        temp2=head1;
        temp1=head2;
       
        diff=c2-c1;
    }
    
    //traverse the longest list for "diff" times
    while(i<diff){
        head1=head1->next;
        i++;
    }
    //At this point the number of nodes in both the lists will be the same
    while(head1!=NULL&&head2!=NULL&&head1!=head2)
    {
        head1=head1->next;
        head2=head2->next;
        temp=head1;
    }
    cout<<"The nodes intersect at "<<temp<<" with data of the Node "<<temp->data;
    
    return 0;
}
