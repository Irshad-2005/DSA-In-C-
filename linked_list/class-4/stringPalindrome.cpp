// check are linked list are palindrome or not
#include <iostream>
using namespace std;

class Node
{
public:
        char data;
        Node *next;
        Node(char data)
        {
                this->data = data;
                this->next = NULL;
        }
};
void print(Node *&head)
{
        Node *temp = head;
        while (temp != NULL)
        {
                cout << temp->data << " ";
                temp = temp->next;
        }
}
Node *reverse(Node *&head)
{
        Node *prev = NULL;
        Node *curr = head;
        Node *forward = head->next;
        while (curr != NULL)
        {
                forward = curr->next;
                curr->next = prev;
                prev = curr;
                curr = forward;
        }
        return prev;
}
bool checkPalindrome(Node *&head)
{
        if (head == NULL)
        {
                cout << "linked list are empty" << endl;
                return false;
        }
        if (head->next == NULL)
        {
                return true;
        }

        Node *slow = head;
        Node *fast = head->next;

        while (fast != NULL)
        {
                fast = fast->next;
                if (fast != NULL)
                {
                        fast = fast->next;
                        slow = slow->next;
                }
        }

        Node *reverseNode = reverse(slow->next);
        slow->next = reverseNode;

        Node *temp1 = head;
        Node *temp2 = reverseNode;
        while (temp2 != NULL)
        {
                if (temp1->data != temp2->data)
                {
                        return false;
                }
                else
                {
                        temp1 = temp1->next;
                        temp2 = temp2->next;
                }
        }

        return true;
}
int main()
{
        Node *first = new Node('a');
        Node *second = new Node('b');
        Node *third = new Node('c');
        Node *fourth = new Node('d');
        Node *fiveth = new Node('c');
        Node *sixth = new Node('b');
        Node *seventh = new Node('a');

        first->next = second;
        second->next = third;
        third->next = fourth;
        fourth->next = fiveth;
        fiveth->next = sixth;
        sixth->next = seventh;

        print(first);

         Node *head = new Node('a');
        bool result = checkPalindrome(first);
        cout<<endl;
        cout<<"result is : "<<result<<endl;

        return 0;
}