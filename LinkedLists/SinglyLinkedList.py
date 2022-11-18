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
    
    def insertnode(self,value,position):
        newNode = node(value)
        if self.head is None:
            self.head = newNode
            self.tail = newNode
        else:
            if position == 0:
                newNode.next = self.head
                self.head = newNode
            elif position == -1:
                newNode.next = None
                self.tail.next = newNode
                self.tail = newNode
            else:
                tempNode = self.head
                index = 0
                while index < position-1:
                    tempNode = tempNode.next
                    index += 1
                nextNode = tempNode.next
                tempNode.next = newNode
                newNode.next = nextNode
                if tempNode == self.tail:
                    self.tail = newNode



a = SLL()
# a.head = node(1)
# a.tail = node(2)
# a.head.next = a.tail
# print(a.head.value,a.head.next.value,a.tail.value)
a.head = node(5)
a.insertnode(1,1)
a.insertnode(2,1)
a.insertnode(3,1)
a.insertnode(4,1)
a.insertnode(40,5)
print([node.value for node in a])