class node:
    def __init__(self,value):
        self.value = value
        self.next = None

class SLL:
    def __init__(self):
        self.head = None
        self.tail = None
    
    def __iter__(self):
        node = self.head
        while node:
            yield node
            node = node.next


a = SLL()
a.head = node(1)
a.tail = node(2)
a.head.next = a.tail
print(a.head.value,a.head.next.value,a.tail.value)
print([node.value for node in a])