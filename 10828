import sys

class Stack (object):
	def __init__(self):
		self.stack = []
		self.top_index = -1
		
	def push(self,value):
		self.stack.append(value)
		self.top_index = self.top_index + 1
	
	def pop(self):
		if self.top_index >= 0:
			self.top_index = self.top_index - 1
			return self.stack.pop()
		return -1
	
	def isEmpty(self):
		return 0 if len(self.stack) > 0 else 1
	
	def size(self):
		return len(self.stack)
	
	def top(self):
		if self.top_index >= 0:
			return self.stack[self.top_index]
		return -1
		
stack = Stack()

for i in range(int(input())):
	value = sys.stdin.readline().split()
	if value[0] == "pop":
		print(stack.pop())
	elif value[0] == "push":
		stack.push(int(value[1]))
	elif value[0] == "size":
		print(stack.size())
	elif value[0] == "empty":
		print(stack.isEmpty())
	elif value[0] == "top":
		print(stack.top())
