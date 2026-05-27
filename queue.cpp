#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

struct Queue
{
	int items[SIZE];
	int front;
	int rear;
};
//Initialize the queue
void initialize(struct Queue *q)
{
	q->front = -1;
	q->rear = -1;
}
//check if the queue is full
int isFull(struct Queue *q)
{
	return q->rear == SIZE -1;
}
//check if the queue is empty
int isEmpty(struct Queue *q)
{
	return q->front == -1 || q->front > q->rear;
}
//Add an element to the queue
void enqueue(struct Queue *q, int value)
{
	if(isFull(q))
	{
		printf("Queue is full!\n");
		return;
	}
	if  (isEmpty(q))
	{
		q->front = 0;
	}
	q->rear = q->rear+1;
	q->items[q->rear] = value;
	printf("Inserted %d\n", value);
}

//Remove an element form the queue
int dequeue(struct Queue *q)
{
	if (isEmpty(q))
	{
		printf("Queue is empty!\n");
		return -1;
	}
	int item =q->items[q->front];
	printf("%d has been dequeue\n", q->items[q->front]);
	q->front =q->front + 1;
	return item;
}

//Display the queue
void display(struct Queue *q)
{
	if(isEmpty(q))
	{
		printf("Queue is empty!\n");
		return;
	}
	printf("Queue elements:");
	for(int i = q->front; i<= q->rear; i++)
	{
		printf("%d ", q->items[i]);
	}
	printf("\n");
}

int main()
{
	struct Queue q;
	initialize(&q);
	enqueue(&q, 5);
	enqueue(&q, 20);
	enqueue(&q, 30);
	enqueue(&q, 40);
	enqueue(&q, 70);
	display(&q);
	return 0;
}


