Node* insertAtFirst(Node* list, int newValue) {

    Node *head = new Node(newValue);

    head->next = list;

    return head;
}
