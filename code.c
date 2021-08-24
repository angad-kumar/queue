#include<stdio.h>

int size = 5;
int a[5];
int front = 0;
int rear = 0;
void insert(int);
void dequeue(int);
void element();

int main()
{
  insert(10);
  insert(20);
  insert(30);
  insert(40);
  insert(50);
  dequeue(10);
  insert(60);
  element();



}


void insert(int ip)
{
    if(size == rear)
    {
        printf("Queue is full\n");
    }
    else
    {
        a[rear] = ip;
        rear += 1;
        printf("Inserted element is : %d\n",ip);
    }
}

void dequeue(int ip)
{
    if(front == rear)
    {
        printf("Queue is Empty");
    }
    else
    {
        for(int i=0;i<rear;i++)
        {
            a[i] = a[i+1];
            // printf("Deleted element is = %d", ip);
        }
    }
}

void element()
{
      for (int i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
}
