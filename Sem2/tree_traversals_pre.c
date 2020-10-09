#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};
void pre_order(struct node* root)
{
    if(root == NULL)
    {return NULL;}
    printf("%d ->", root->data);
     pre_order(root->left);
    pre_order(root->right);
}
struct node* create(value)
{
    struct node* nwnode = malloc(sizeof(struct node));
    nwnode->data = value;
    nwnode->left = NULL;
    nwnode->right = NULL;

    return nwnode;
}

struct node* insertLeft(struct node *root, int value) {
    root->left = create(value);
    return root->left;
}


struct node* insertRight(struct node *root, int value){
    root->right = create(value);
    return root->right;}



int main(){
    struct node* root = create(1);
    insertLeft(root, 34);
    insertRight(root, 45);

    insertLeft(root->left, 589);
    insertRight(root->left, 67);

    printf("preorder traversal \n");
    pre_order(root);


}
