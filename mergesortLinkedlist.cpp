#include <iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* next;
  /**
   * Constructor for the Node class.
   *
   * @param d integer value to initialize the data member
   *
   * @return N/A
   *
   * @throws N/A
   */
  Node(int d){
    data = d;
    next = NULL;
  }
};

class LinkedList{
  public:
  Node* head;

  LinkedList() : head(nullptr){}

  /**
   * Insert a new node with data 'd' at the end of the linked list.
   *
   * @param d the data to be inserted
   *
   * @return void
   *
   * @throws None
   */
  void insert(int d){
    Node* newNode = new Node(d);
    if(head == NULL){
      head = newNode;
    }
    else{
      Node* temp = head;
      while(temp->next != NULL){
        temp = temp->next;
      }
      temp->next = newNode;
    }
  }

  /**
   * Sorts a linked list using the merge sort algorithm.
   *
   * @param h pointer to the head of the linked list
   *
   * @return pointer to the head of the sorted linked list
   *
   * @throws None
   */
  Node* mergeSort(Node* h){

    if(h == NULL || h->next == NULL){
      return h;
    }

    Node* middle = getMiddle(h);
    Node* nextMiddle = middle->next;

    middle->next = nullptr;

    Node* left = mergeSort(h);
    Node* right = mergeSort(nextMiddle);

    Node* sorted = merge(left, right);
    return sorted;
  }

  /**
   * Finds the middle node of a linked list.
   *
   * @param h pointer to the head of the linked list
   *
   * @return pointer to the middle node of the linked list
   *
   * @throws None
   */
  Node* getMiddle(Node* h){
    if (h == NULL){
      return h;
    }

    Node* slow = h;
    Node* fast = h->next;

    while(fast && fast->next){
      fast = fast->next->next;
      slow = slow->next;
    }
    return slow;
  }


  /**
   * Merge two linked lists in sorted order.
   *
   * @param a Pointer to the head of the first linked list
   * @param b Pointer to the head of the second linked list
   *
   * @return Pointer to the head of the merged sorted linked list
   *
   * @throws None
   */
  Node* merge(Node* a, Node* b){
    
    Node* result = nullptr;
    if(!a){
      return b;
    } else if(!b){
      return a;
    }

    if(a->data <= b->data){
      result = a;
      result->next = merge(a->next, b);
    }

    else{
      result = b;
      result->next = merge(a, b->next);
    }
    return result;
  }

  /**
   * Function to print the elements of the linked list.
   *
   * @param None
   *
   * @return None
   *
   * @throws None
   */
  void printList() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

/**
 * Sorts the linked list using merge sort algorithm.
 *
 * @param head pointer to the head of the linked list
 *
 * @return pointer to the head of the sorted linked list
 *
 * @throws None
 */
int main() {
    LinkedList list;
    list.insert(3);
    list.insert(5);
    list.insert(18);
    list.insert(5);
    list.insert(10);
    list.insert(2);
    list.insert(1);

    list.head = list.mergeSort(list.head); // Sort the linked list
    list.printList(); // Print the sorted linked list
    return 0;
}