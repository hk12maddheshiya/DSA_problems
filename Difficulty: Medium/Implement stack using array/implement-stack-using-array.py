class myStack:
    def __init__(self, n):
        # Define Data Structures
        self.n = n
        self.arr = []
    
    def isEmpty(self):
        # Check if stack is empty
        if len(self.arr) == 0:
            return True
        else:
            return False

    
    def isFull(self):
        # Check if stack is full
        if len(self.arr) ==self.n:
            return True
        else:
            return False
        

    
    def push(self, x):
        # Insert x at the top of the stack
        self.arr.append(x)

    
    def pop(self):
        # Removes an element from the top of the stack
        if len(self.arr) != 0: 
            self.arr.pop()

    
    def peek(self):
        # Returns the top element of the stack
        
        return -1 if len(self.arr)==0 else self.arr[-1]