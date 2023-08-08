 #  Stack

 Stack is a linear data structure which operates in a LIFO(Last In First Out) or  FILO (First In Last Out) pattern.
It is named stack as it behaves like a real-world stack, for example – a deck of cards or a pile of plates, etc.
Stack is an abstract data type with a bounded (predefined) capacity.It is a simple data structure that allows adding and removing elements in a particular order.
The order may be LIFO(Last In First Out) or FILO(First In Last Out).

## Standard Stack Operations

push() –  Place an item onto the stack. If there is no place for new item, stack is in overflow state.

pop() – Return the item at the top of the stack and then remove it. If pop is called when stack is empty, it is in an underflow state.

isEmpty() –  Tells if the stack is empty or not

isfull() – Tells if the stack is full or not.

peek() – Access the item at the i position

count() – Get the number of items in the stack.

change() – Change the item at the i position

display() – Display all items in the stack

##  Applications of Stack Data Structure

Balancing of symbols

Infix to Postfix /Prefix conversion

Redo-undo features at many places like editors, photoshop.

Forward and backward feature in web browsers

Used in many algorithms like Tower of Hanoi, tree traversals, stock span problem, histogram problem.

Other applications can be Backtracking, Knight tour problem, rat in a maze, N queen problem and sudoku solver

In Graph Algorithms like Topological Sorting and Strongly Connected Components

## Pseudocode
 

Create a stack data structure with the following operations:

    push(item): Add an item to the top of the stack

    pop(): Remove and return the top item from the stack

    peek(): Return the top item without removing it

    isEmpty(): Check if the stack is empty

    size(): Return the number of items in the stack


Stack implementation:

Stack = empty list

push(item):

    add item to the end of Stack

pop():

    if Stack is empty:

        return "Stack is empty"
    else:
        top_item = Stack[last element]

        remove last element from Stack

        return top_item

peek():

    if Stack is empty:

        return "Stack is empty"

    else:

        return Stack[last element]

isEmpty():

    return (length of Stack == 0)


size():

    return length of Stack