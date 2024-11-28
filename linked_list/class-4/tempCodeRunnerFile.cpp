
    while ((head1 != NULL) && (head2 != NULL))
    {
        int sum = carry + head1->data + head2->data;
        int digit = sum % 10;
        carry = sum / 10;
        Node *newNode = new Node(digit);

        if (ansHead == NULL)
        {