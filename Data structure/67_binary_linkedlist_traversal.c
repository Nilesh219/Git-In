#include<stdio.h>
#include<malloc.h>
struct node{
    int data;
    struct node * left;
    struct node * right;

};
struct node* creatNode(int data){
    struct node *n;
    n = (struct node*)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
int main()
{
    // struct node *p = (struct node*)malloc(sizeof(struct node));
    // p->data = 1;
    // p->left = NULL;
    // p->right = NULL;

    // struct node *p1 = (struct node*)malloc(sizeof(struct node));
    // p1->data = 2;
    // p1->left = NULL;
    // p1->right = NULL;

    // struct node *p2 = (struct node*)malloc(sizeof(struct node));
    // p2->data = 3;
    // p2->left = NULL;
    // p2->right = NULL;

    // struct node *p3 = (struct node*)malloc(sizeof(struct node));
    // p3->data = 4;
    // p3->left = NULL;
    // p3->right = NULL;
    // //printing the binary tree 
    // printf("%d\t",*p);
    // printf("%d\t",*p1);
    // printf("%d\t",*p2);
    // printf("%d\t",*p3);

    // Creatroot(1);
    // Creatroot(2);
    // Creatroot(3);
    // Creatroot(4);
    // int data;
    // printf("Enter The data you to insert in binary tree");
    // scanf("%d\n",&data);

    struct node *p= creatNode(2);  
    struct node *p1 = creatNode(4);  
    struct node *p2 = creatNode(3);
    
      
    
    p->left = p1;
    p->right = p2;
    
    return 0;    
}