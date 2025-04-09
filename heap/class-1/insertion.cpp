// implement the insertion and deletion function in heap
#include <iostream>
using namespace std;

class Heap
{
public:
    int arr[110];
    int size;
    Heap()
    {
        size = 0;
    }
    void insertion(int data)
    {
        size = size + 1;
        // add the node at the end of array
        arr[size] = data;

        // placed the corrent position of node
        int index = size;
        // find the parentIndex

        while (index > 1)
        {
            int parentIndex = (index / 2);

            if (arr[index] > arr[parentIndex])
            {
                swap(arr[index], arr[parentIndex]);

                index = parentIndex;
            }
            else
            {
                break;
            }
        }
    }
    void deletion()
    {
        // replace the last value with root node
        arr[1] = arr[size--];

        // root node to place in corrent position
        int index = 1;

        while (index < size)

        {
            int leftChildIndex = 2 * index;
            int rightChildIndex = 2 * index + 1;
            int largestIndex = index;

            if (leftChildIndex < size && arr[leftChildIndex] > arr[largestIndex])
            {
                largestIndex = leftChildIndex;
            }

            if (rightChildIndex < size && arr[rightChildIndex] > arr[largestIndex])
            {
                largestIndex = rightChildIndex;
            }

            if (index != largestIndex)
            {
                swap(arr[index], arr[largestIndex]);
                index = largestIndex;
            }
            else
            {
                break;
            }
        }
    }
};

int main()
{
    Heap h;
    h.arr[0] = -1;
    h.arr[1] = 100;
    h.arr[2] = 50;
    h.arr[3] = 60;
    h.arr[4] = 20;
    h.arr[5] = 40;
    h.arr[6] = 45;
    h.arr[7] = 55;
    h.arr[8] = 5;
    h.arr[9] = 10;
    h.size = 9;
    h.insertion(110);
    cout << "Printing the heap data : " << endl;
    for (int i = 0; i <= h.size; i++)
    {
        cout << h.arr[i] << " ";
    }
    cout << endl;
    cout << "Printing the heap data : " << endl;
    h.deletion();
    for (int i = 0; i <= h.size; i++)
    {
        cout << h.arr[i] << " ";
    }
    cout << endl;
    // cout << h.size << endl;
    return 0;
}