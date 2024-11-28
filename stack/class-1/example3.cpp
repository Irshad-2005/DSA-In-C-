// 2 stack in an array
#include <iostream>

using namespace std;

class Stack{
public:
        int *arr;
        int size;
        int top1;
        int top2;
        Stack(int size)
        {
                arr = new int[size]{0}; // initialization of arr and all element 0
                this->size = size;
                this->top1 = -1;
                this->top2 = size;
        }

        void push1(int data)
        {
                if (top2 - top1 == 1)
                {
                        cout << "Stack1 OverFLow " << endl;
                }
                else
                {
                        top1++;
                        arr[top1] = data;
                }
        }
        void pop1()
        {
                if (top1 == -1)
                {
                        cout << "Stack1 UnderFlow" << endl;
                }
                else
                {
                        arr[top1] = 0;
                        top1--;
                }
        }
        void push2(int data)
{
        if (top2 - top1 == 1)
        {
                cout << "Stack2 OverFlow" << endl;
        }
        else{
                top2--;
                arr[top2] = data;
        }
}
        void pop2()
{
        if(top2 == size)
        {
                cout<<"Stack2 UnderFlow"<<endl;
        }
        else{
                arr[top2] = 0;
                top2++;
        }
}
        
        void print()
        {
                cout<<"Stack1 is : "<<top1<<endl;
                cout<<"Stack2 is : "<<top2<<endl;
                for(int i = 0; i<size; i++)
                {
                        cout<<arr[i]<<" ";
                }cout<<endl;
        }
};

int main()
{
        Stack s(10);
        // s.push1(10);
        // s.push1(20);
        // s.push1(30);
        // s.push1(40);
        // s.push1(50);
        // s.print();
        // s.push2(100);
        // s.print();
        // s.push2(110);
        // s.print();
        //  s.push2(120);
        // s.print();
        //  s.push2(130);
        // s.print();
        //  s.push2(140);
        // s.print();
        // s.pop2();
        // s.pop1();
        // s.print();
        //  s.pop2();
        // s.pop1();
        // s.print();
        //  s.pop2();
        // s.pop1();
        // s.print();
        //  s.pop2();
        // s.pop1();
        // s.print();
        //  s.pop2();
        // s.pop1();
        // s.print();
        //   s.pop2();
        // s.pop1();
        // s.print();
        s.print();

        
        cout<<endl;

        return 0;
        
}
