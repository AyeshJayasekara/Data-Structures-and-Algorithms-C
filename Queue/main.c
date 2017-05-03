#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 50

int queue[MAXSIZE];
int front=0;
int rear=-1;

int peek() {
   return queue[front];
}
int isfull() {
   if(rear == MAXSIZE - 1)
      return 1;
   else
      return 0;
}
int isempty() {
   //if(front < 0 || front > rear)
   if(rear==-1)
      return 1;
   else
      return 0;
}

int enqueue(int data){
   if(isfull())
      return 0;

   rear = rear + 1;
   queue[rear] = data;
   return 1;
}
int dequeue() {

   if(isempty()){
    printf("Queue is empty!!!!!!");
    return -999;
   }

   int data = queue[front];
   front = front + 1;
   return data;
}

int main()
{
    //for (int i =0 ; i<2 ; i++)
    //enqueue(500);
    enqueue(600);
    enqueue(700);
    enqueue(800);
    //enqueue(800);
    printf("%d\n",dequeue());
    printf("%d\n",peek());
    printf("%d\n",dequeue());

    return 0;
}

