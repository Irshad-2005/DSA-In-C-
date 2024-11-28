#include <iostream>
using namespace std;

class Queue
{
public:
    int size;
    int *arr;
    int front;
    int rear;

    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
        this->front = 0;
        this->rear = 0;
    }

    void push(int data)
    {
        // if check queue is full  or not

        if (rear == size)
        {
            cout << "Queue is full " << endl;
            return;
        }
        else
        {
            // insert data
            // rear++

            arr[rear] = data;
            rear++;
        }
    }

    void pop()
    {
        // if check queue is empty or not
        // else remove data to front and front ++

        if (front == rear)
        {
            cout << "Queue is empty " << endl;
            return;
        }
        else
        {
            // remove data
            arr[front] = -1;
            front++;
        }
    }
    int getFront()
    {
        // if check queue is empty or not
        // return front element

        if (front == rear)
        {
            cout << "Queue is empty " << endl;
            return -1;
        }
        else
        {
            return arr[front]; // front element
        }
    }

    int getSize()
    {
        return rear - front;
    }

    bool isEmpty()
    {
        if (front == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Queue q(10);
    q.push(5);
    q.push(6);
    q.push(11);
    q.push(13);
    cout << "size : " << q.getSize() << endl;
    cout << "front : " << q.getFront() << endl;

    return 0;
}