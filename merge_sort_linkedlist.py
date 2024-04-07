class Node:
  def __init__(self, data):
    """
    Initialize the node with the given data and set the next pointer to None.

    Parameters:
    data (any): The data to be stored in the node.
    """
    self.data = data
    self.next = None

class LinkedList:
  def __init__(self):
    """
    Initialize the head of the linked list to None.
    """
    self.head = None

  def insert(self, data):
    """
    Insert a node with the given data into the linked list.

    Parameters:
    data (any): The data to be stored in the new node.
    """
    new_node = Node(data)
    if self.head is None:
      self.head = new_node
    else:
      current = self.head
      while current.next:
        current = current.next
      current.next = new_node
  def merge_sort(self):
    """
    Sort the linked list using the merge sort algorithm.
    """
    self.head = self._merge_sort(self.head)

  def _merge_sort(self, head):
    """
    Recursive function to perform merge sort on a linked list.
    
    Parameters:
    - head: The head node of the linked list to be sorted.
    
    Returns:
    - sorted_list: The sorted linked list.
    """
    if head is None or head.next is None:
        return head
    middle = self.get_middle(head)
    next_to_middle = middle.next
    middle.next = None

    left = self._merge_sort(head)
    right = self._merge_sort(next_to_middle)

    sorted_list = self.merge(left, right)
    return sorted_list


  def merge(self, left, right):
    """
    Merge two sorted linked lists into a single sorted linked list.

    Parameters:
    left (Node): The head of the first sorted linked list.
    right (Node): The head of the second sorted linked list.

    Returns:
    Node: The head of the merged sorted linked list.
    """
    if left is None:
      return right
    if right is None:
      return left
    if left.data < right.data:
      result = left
      result.next = self.merge(left.next, right)
    else:
      result = right
      result.next = self.merge(left, right.next)
    return result
  
  def get_middle(self, head):
    """
    Find the middle node of the linked list.

    Parameters:
    head (Node): The head of the linked list.

    Returns:
    Node: The middle node of the linked list.
    """
    if head is None:
      return head
    slow = head
    fast = head
    while fast.next is not None and fast.next.next is not None:
      slow = slow.next
      fast = fast.next.next
    return slow


if __name__ == '__main__':
    # Create and sort the linked list
    linked_list = LinkedList()
    linked_list.insert(3)
    linked_list.insert(5)
    linked_list.insert(8)
    linked_list.insert(5)
    linked_list.insert(10)
    linked_list.insert(2)
    linked_list.insert(1)

    linked_list.merge_sort()  

    # Print the sorted linked list
    current = linked_list.head
    while current:
        print(current.data)
        current = current.next