
#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};
void display(struct node*ptr){
    while(ptr!=NULL){
    printf("%d\n",ptr->data);
    ptr= ptr->next;
    }
}
struct node* insert(struct node*head,int data){
    printf("enter element for starting \n");
    scanf("%d",&data);
    struct node*ptr= (struct node*)malloc(sizeof (struct node));
    ptr->data=data;
    ptr->next=head;
    return ptr;
}
struct node*insert2(struct node*head,int data,int index){
    printf("enter data\n");
    scanf("%d",&data);
    printf("enter index:\t");
    scanf("%d",&index);
    struct node*ptr= (struct node*)malloc(sizeof (struct node));
    struct node*p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
    
}
struct node* insert3(struct node*head,int data){
    printf("enter element for starting \n");
    scanf("%d",&data);
    struct node*ptr= (struct node*)malloc(sizeof (struct node));
    struct node*p=head;
    ptr->data=data;
    while(p->next!=NULL){
    p=p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

int main() {
    int data,index;
    struct node*head;
    struct node*f;
    struct node*s;
    struct node*t;
    
    head=(struct node*)malloc(sizeof(struct node));
    f=(struct node*)malloc(sizeof(struct node));
    s=(struct node*)malloc(sizeof(struct node));
    t=(struct node*)malloc(sizeof(struct node));
    
    head->data=51;
    head->next=f;
    f->data=54;
    f->next=t;
    s->data=55;
    s->next=NULL;
    t->data=59;
    t->next=s;
    
    head=insert3(head,data);
    printf("**********************************\n");
    printf("after insert elementds are:\n");
    display(head);

    return 0;
}

