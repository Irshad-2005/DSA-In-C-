// find kth node from the end in LL

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
       int data;
       Node *next;
       Node(int data)
       {
          this->data = data;
          this->next = NULL;

       }
};
void print(Node *&head)
{
    Node *temp = head;
    while(temp!= NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void solve(Node*&head, int &position,int &ans)
{
    Node *temp = head;
    if(temp == NULL)
    {
        return;
    }

    solve(temp->next,position,ans);
    if(position == 0)
    {
        ans = head->data;
       
        
    }
    position--;
}
int main()
{
    Node *first = new Node(5);
    Node *second = new Node(4);
    Node *third = new Node(3);
    Node *fourth = new Node(6);
    Node *fiveth = new Node(7);
    Node *sixth = new Node(9);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fiveth;
    fiveth->next = sixth;

    print(first);
    cout<<endl;
    cout<<endl;
    int ans = -1;
    int pos = 2;
    solve(first,pos,ans);
    cout<<"ans is : "<<ans<<endl;
    return 0;

}
