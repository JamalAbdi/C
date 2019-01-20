#include <ctype.h>
#include <stdio.h>
#include<stdlib.h>

static int top =0;
static int stack[100];
int pop()
{
    int temp;
    if (top ==0){
        fprintf(stdout,"Can not pop an empty stack\n");
        return -1;
    }
    else{
        temp = stack[top];
        stack[top] = '\0';
        top = top - 1 ;
        return temp;
    }
  return 0;
}


void push(int thing2push)
{
    top = top+1;
    stack[top] = thing2push;
}

int isEmpty()
{
    if (top == 0)
        return 1;
  return 0;
}
