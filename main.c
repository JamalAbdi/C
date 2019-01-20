#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern int pop();
extern void push(int);
extern void addHeap (int);
extern int heapSize();
extern int heapDelete();
extern void printHeap(int,int);

int main(int argc, char * argv[])
{
  int value, i , length, pusher;
  while (scanf("%d\n", &value) != EOF) {
    fprintf(stderr, "READING INPUT: %d\n", value);
      addHeap(value);
      }
    fprintf(stdout,"\n");
    printHeap(0,0);
    fprintf(stdout,"\n");
    length = heapSize();
    for (i=0; i<= length; i++){
        pusher = heapDelete();
        fprintf(stdout,"%d\n", pusher);
        push(pusher);
        }
    fprintf(stdout,"\n");
    for (i=0;i<length;i++){
        fprintf(stdout,"%d\n", pop());
    }
        fprintf(stdout,"\n");
  exit(0);
}
