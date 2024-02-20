Node *deleteLast(Node *list){
    
    Node* temp = list;

    while(temp->next->next!=nullptr){

        temp = temp->next;

    }
    
    temp->next = nullptr;

    return list;
}
