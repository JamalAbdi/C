#include <stdio.h>
static int top=0;
int heap[100];
int heapSize()
{
    return top-1;
    return 0;
}
void heapify(int z){
    int check, left, right, biggest;
    left = 2*z +1;
    right = 2*z +2;
    if (left <= heapSize() && heap[z]< heap[left]){
        biggest = left;
    }
    else {
        biggest = z;
    }
    if (right <=heapSize() && heap[z]< heap[left]){
        biggest = right;
    }
    if (biggest !=z){
        check = heap[z];
        heap[z] = heap[biggest];
        heap[biggest] = check;
        heapify(biggest);
    }
}
int heapDelete()
{
    int max;
    max = heap[0];
    heap[0] = heap[heapSize()];
    top = top-1;
    heapify(0);
    return max;
    return 0;
}

void addHeap(int thing2add)
{
    int parent, y;
    heap[top] = thing2add;
    y = top;
    parent= (y+1)/2 -1;
    while (parent>= 0 && heap[parent] < thing2add){
        heap[y] = heap[parent];
        heap[parent] = thing2add;
        y = parent;
        parent = (y+1)/2 -1;
    }
    top = top + 1;
}


void printDepth(int depth)
{
    int x;
    for (x=0;x<=depth;x++)
        fprintf(stdout," ");
}

void printHeap(int position, int depth){
    int next;
    fprintf(stdout,"<node id = \"%d\">\n",heap[position]);
    next = 2*position + 1;
    if (next<=heapSize()) {
        printDepth(depth);
        printHeap(next, depth+1);
    }
    next = 2*position +2;
    if (next <= heapSize()){
        printDepth(depth);
        printHeap ( next, depth+1);
    }
    fprintf(stdout,"<//node>\n");
}

