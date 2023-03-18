#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAXSIZE 100000

typedef struct{
    int HEAP[MAXSIZE];
    int heapsize;
}heap;

void add(heap *result, int data);
void pop(heap *h);

int main(){

    heap *result = (heap *)malloc(sizeof(heap));
    result->heapsize = 0;
    int n;

    scanf("%d", &n);

    int *command = (int *)malloc(sizeof(int)*n);

    for (int i = 0; i < n; i++){
        scanf("%d", &command[i]);
    }

    for (int i = 0; i < n; i++){
        if(command[i] != 0){
            add(result, command[i]);
        }
        else{
            pop(result);
        }
    } 
}

void add(heap *result, int data){

    int i;
    i = ++(result->heapsize);

    while(i != 1 && (data < result->HEAP[i/2])){
        result->HEAP[i] = result->HEAP[i/2];
        i /= 2;
    }
    result->HEAP[i] = data;
}

void pop(heap *h){
    if(h->heapsize == 0){
        printf("%d\n", 0);
        return;
    }
    printf("%d\n", h->HEAP[1]);
    int temp = h->HEAP[h->heapsize--];
    int parent = 1;
    int child = 2;

    
    while(child < h->heapsize+1){
        if(child < h->heapsize && 
        (h->HEAP[child] > h->HEAP[child+1])){
            child++;
        }
        if(temp < h->HEAP[child])
            break;
        h->HEAP[parent] = h->HEAP[child];
        parent = child;
        child *= 2;
    }
    h->HEAP[parent] = temp;


}