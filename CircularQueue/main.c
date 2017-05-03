#include<stdio.h>
#define SIZE 10
struct queue
{
    int head, tail;
    int data[SIZE];
};

int increment(int ind)
{
    return ++ind==SIZE? 0:ind;
}
int init(struct queue* q)
{
    q->head=q->tail=0;
} 	// set head and tail
int full(struct queue* q)
{
    return increment(q->tail)==q->head;
}
int empty(struct queue* q)
{
    return q->head==q->tail;
}  // return 1 if empty

void enqueue(struct  queue *q, int item)
{    q->data[q->tail]=item;
     q->tail=increment(q->tail);
}
int dequeue(struct queue*q)
{
    int temp=q->data[q->head];
    q->head=increment(q->head);
    return temp;
}

void main(void){
struct queue q1,q2;
init(&q1);  init(&q2);
int i=1;
while(!full(&q1)) enqueue(&q1,i++);
while(!empty(&q1)) printf("%i\t",dequeue(&q1));
while(!full(&q1)) enqueue(&q1,i++);
while(!empty(&q1)) printf("%i\t",dequeue(&q1));
}
