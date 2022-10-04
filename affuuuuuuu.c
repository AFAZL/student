#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*left;
    struct node*right;
};
void in_display(struct node*tree){
    if(tree){
        in_display(tree->left);
        printf("%d\n",tree->data);
        in_display(tree->right);
    }
}
void insert(){
    struct node*left;
    struct node*right;
    int i,n,root;
    printf("enter total no of element of trees:\n");
    scanf("%d",&n);
    printf("enter root of tree:\n");
    scanf("%d",&root);
    
    for(i=0;i<n-1;i++){
        printf("enter element:\n");
        scanf("%d",&i);
    }
     for(i=0;i<n-1;i++){
        if(i<root){
            printf("%d\n",i );//(root->left));
        }
        else{
            printf("%d\n",i);// root->right);
        }
    }
    
}

int main() {
    int root;
    struct node*a;
    struct node*b;
    struct node*c;
    struct node*d;
    struct node*e;
    
    a=(struct node*)malloc(sizeof(struct node));
    b=(struct node*)malloc(sizeof(struct node));
    c=(struct node*)malloc(sizeof(struct node));
    d=(struct node*)malloc(sizeof(struct node));
    e=(struct node*)malloc(sizeof(struct node));
    
    a->data=55;
    a->left=b;
    b->data=54;
    a->right=c;
    c->data=30;
    
    insert(root);
   // in_display(a);
    
    

    return 0;
}