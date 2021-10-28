// https://www.softwaretestinghelp.com/linked-list/#:~:text=Linked%20List%20In%20C%2B%2B%201%20Operations.%20Just%20like,Lists.%20...%204%20Applications.%20...%205%20Conclusion.%20
// https://www.codeproject.com/articles/24684/how-to-create-linked-list-using-c-c

#include <bits/stdc++.h> 
using namespace std; 
  
// A linked list node (changes) 
class Node  
{  
    public: 
    int data;  
    Node *next;  
};  
  
/* Given a reference (pointer to pointer) 
to the head of a list and an int, inserts 
a new node on the front of the list. */
void push(Node** head_ref, int new_data)  
{  
    /* 1. allocate node */ 
    Node* new_node = new Node();
  
    /* 2. put in the data */  
    new_node->data = new_data; 
  
    /* 3. Make next of new node as head */
    new_node->next = *head_ref;  
  
    /* 4. move the head to point to the new node */
    *head_ref = new_node;
}  
  
/* Given a node prev_node, insert a new node after the given  
prev_node */
void insertAfter(Node* prev_node, int new_data)  
{  
    /*1. check if the given prev_node is NULL */ 
    if (prev_node == NULL ) {
        cout << "Previous node cannot be NULL" << endl;
        //return;
    }
    /* 2. allocate new node */
    Node* new_node = new Node();
    /* 3. put in the data */ 
    new_node->data = new_data;
    /* 4. Make next of new node as next of prev_node */
    new_node->next = prev_node->next;
    /* 5. move the next of prev_node as new_node */ 
    prev_node->next = new_node;
}  
  
/* Given a reference (pointer to pointer) to the head  
of a list and an int, appends a new node at the end */
void append(Node** head_ref, int new_data)  
{  
    /* 1. allocate node */ 
    Node* new_node = new Node();
  
    /* 2. put in the data */ 
    new_node->data = new_data;
  
    /* 3. This new node is going to be  
    the last node, so make next of  
    it as NULL*/  
    new_node->next = NULL;
  
    /* 4. If the Linked List is empty, 
    then make the new node as head */
    if (*head_ref==NULL) {
        *head_ref = new_node;
        return;
    }
    Node* last = *head_ref;
    /* 5. Else traverse till the last node */
    while (last->next != NULL) {
        // new_node->next = last->next; Wrong
        last = last->next;
    }
    /* 6. Change the next of last node */ 
    last->next = new_node;
} 

/* Given a reference (pointer to pointer) to the head  
of a list Remove the first Node */
void deleteFirstNode(Node** head_ref)  
{  
    /*1. check if LL exists is NULL */ 
    if (*head_ref == NULL ) {
        cout << "First Node NULL" << endl;
        //return;
    }
    //Temp to store the Data and next of first Node
    Node* temp = *head_ref;
    //Move head pointer to the next node
    // temp->next = head_ref->next; Wrong
    *head_ref = temp->next;
    delete temp;
}

/* Given a reference (pointer to pointer) to the head  
of a list Remove the Last Node */
    void deleteLastNode(Node** head_ref)  
{  
      /*1. check if LL exists is NULL */ 
      if (head_ref == NULL ) {
          cout << "Node NULL" << endl;
          //return;
      }

    Node* second_last = *head_ref;
    while (second_last->next->next != NULL)
    second_last = second_last->next;
 
    // Delete the last node
    delete (second_last->next);
 
    // set next of second_last to null
    second_last->next = NULL;
} 


// This function prints contents of 
// linked list starting from head  
void printList(Node *node)  
{  
    //Your code here
    while (node!=NULL) {
        cout << " " << node->data;
        node = node->next;
    }
    
}  
  
/* Driver code*/
int main()  
{  
    Node* head = NULL;   
    append(&head, 6); 
    
    push(&head, 7);  
    cout << head->data <<endl;
    push(&head, 1);    
    append(&head, 4);    
    insertAfter(head->next, 8);  
    cout<<"Created Linked list 1 is: " << endl;  
    printList(head); 
    cout << endl;
    deleteFirstNode(&head);
    cout<<"Created Linked list 2 with first Node deleted is: " << endl;
    printList(head); 
    cout << endl;
    deleteLastNode(&head);
    cout<<"Created Linked list 3 with Last Node deleted is: " << endl;
    printList(head);
    //cout << " Yes2" << endl;
    return 0;  
}