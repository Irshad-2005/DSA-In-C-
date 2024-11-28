#include <iostream>
using namespace std;
class CircularQueue
{
public:
    int size;
    int *arr;
    int front;
    int rear;
    CircularQueue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void push(int data)
    {
        // if check queue is full or not
        // else if check queue to insert first element
        // else if check queue in rear are last element (circular nature build)
        // else normal insert data and move rear

        if ((front == 0 && rear == size - 1) || (rear - front == -1))
        {
            cout << "Queue are full " << endl;
            return;
        }
        else if (front == -1)
        {
            front = rear = 0;
            arr[rear] = data;
        }
        else if (rear == size - 1)
        {
            rear = 0;
            arr[rear] = data;
        }
        else
        {
            rear++;
            arr[rear] = data;
        }
    }

    void pop()
    {
        //! if check queue is empty or not
        //! if check queue in sigle element
        //! if check front are last element in queue
        //! else normal to remove element and front increament

        if (front == -1)
        {
            cout << "Queue is empty " << endl;
            return;
        }
        else if (front == rear)
        {
            arr[front] = -1;
            front = rear = -1;
        }
        else if (front == size - 1)
        {
            arr[front] = -1;
            front = 0;
        }
        else
        {
            arr[front] = -1;
            front++;
        }
    }

    void print()
    {
        for (int i = 0; i < size; i++)
        {

            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    CircularQueue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.print();
    q.pop();
    q.print();
    q.push(101);
    q.print();
    q.pop();
    q.print();
    q.push(102);
    q.print();
    q.pop();
    q.print();
    q.push(103);
    q.print();
    q.pop();
    q.print();
    q.push(104);
    q.print();
    q.push(105);
    q.print();

    return 0;
}