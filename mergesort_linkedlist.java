

public class mergesort_linkedlist {

  static class Node {
    int data;
    Node next;

    Node(int data) {
      this.data = data;
      this.next = null;
    }
  }

  Node head;

  /**
   * A method to insert a new node with the given data into a linked list.
   *
   * @param  data	    the data to be inserted into the linked list
   */
  void insert(int data) {
    Node newNode = new Node(data);
    if (head == null) {
      head = newNode;
    } else {
      Node current = head;
      while (current.next != null) {
        current = current.next;
      }
      current.next = newNode;
    }
  }

  Node merge(Node a, Node b) {

  /**
   * A function to merge two nodes in a linked list in a sorted manner.
   *
   * @param  a    the first node to merge
   * @param  b    the second node to merge
   * @return      the merged node
   */
    Node result = null;

    if(a == null) return b;
    if (b == null) return a;

    if(a.data <= b.data) {
      result = a;
      result.next = merge(a.next, b);
    } else {
      result = b;
      result.next = merge(a, b.next);
    }

    return result;
    
  }

  /**
   * A function to perform Merge Sort on a linked list.
   *
   * @param  h  the head of the linked list to be sorted
   * @return    the head of the sorted linked list
   */
  Node mergeSort(Node h){
    if(h == null || h.next == null) return h;
    Node middle = getMiddle(h);
    Node nextOfMiddle = middle.next;
    middle.next = null;
    Node left = mergeSort(h);
    Node right = mergeSort(nextOfMiddle);
    return merge(left, right);
  }

  /**
   * A description of the entire Java function.
   *
   * @param  h   description of parameter
   * @return     description of return value
   */
  Node getMiddle(Node h){
    if(h == null) return null;
    Node slow = h;
    Node fast = h;
    while(fast.next != null && fast.next.next != null) {
      slow = slow.next;
      fast = fast.next.next;
    }
    return slow;
  }

  /**
   * A description of the entire Java function.
   *
   * @param  node	description of parameter
   * @return         	description of return value
   */
  void printList(Node node) {
    while (node != null) {
      System.out.print(node.data + " ");
      node = node.next;
    }
    System.out.println();
  }

  /**
   * A description of the entire Java function.
   *
   * @param  args  description of parameter
   * @return       description of return value
   */
  public static void main(String[] args) {
    mergesort_linkedlist list = new mergesort_linkedlist();
        list.insert(3);
        list.insert(5);
        list.insert(8);
        list.insert(5);
        list.insert(10);
        list.insert(2);
        list.insert(1);

        list.head = list.mergeSort(list.head); // Sort the linked list
        list.printList(list.head);
  
  }

}
