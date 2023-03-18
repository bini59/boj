#include <stdio.h>
#include <stdlib.h>

typedef struct TREE{
    char element;
    struct TREE *Lchild;
    struct TREE *Rchild;
}tree;

void preorder(char *Node, char **tree, int n){
    printf("%c", Node[0]);
    if(Node[1] != '.'){
        for(int i = 0; i < n; i ++){
            if(tree[i][0] == Node[1]){
                preorder(tree[i], tree, n);
                break;
            }
        }
    }
    if(Node[2] != '.'){
        for(int i = 0; i < n; i ++){
            if(tree[i][0] == Node[2]){
                preorder(tree[i], tree, n);
                break;
            }
        }
    }
    
}
void inorder(char *Node, char **tree, int n){
    if(Node[1] != '.'){
        for(int i = 0; i < n; i ++){
            if(tree[i][0] == Node[1]){
                inorder(tree[i], tree, n);
                break;
            }
        }
    }
    printf("%c", Node[0]);
    if(Node[2] != '.'){
        for(int i = 0; i < n; i ++){
            if(tree[i][0] == Node[2]){
                inorder(tree[i], tree, n);
                break;
            }
        }
    }
    
}
void postorder(char *Node, char **tree, int n){ 
    if(Node[1] != '.'){
        for(int i = 0; i < n; i ++){
            if(tree[i][0] == Node[1]){
                postorder(tree[i], tree, n);
                break;
            }
        }
    }
    if(Node[2] != '.'){
        for(int i = 0; i < n; i ++){
            if(tree[i][0] == Node[2]){
                postorder(tree[i], tree, n);
                break;
            }
        }
    }
    printf("%c", Node[0]);
}


int main(){
    int n;
    scanf("%d", &n);

    char **tree = (char**)malloc(sizeof(char*)*n);
    
    for(int i = 0; i < n; i++){
        tree[i] = (char *)malloc(sizeof(char)*3);
        scanf("%*c%c %c %c", &tree[i][0], &tree[i][1], &tree[i][2]);
    }

    preorder(tree[0], tree, n);
    printf("\n");
    inorder(tree[0], tree, n);
    printf("\n");
    postorder(tree[0], tree, n);
}