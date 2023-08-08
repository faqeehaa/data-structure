 # Queue

 Queue is a linear data structure which operates in a First IN First OUT or Last IN Last OUT.
It is named queue as it behaves like a real-world queue, for example – queue(line) of cars in a single lane, queue of people waiting at food counter etc.
Queue is an abstract data type with a bounded (predefined) capacity.
It is a simple data structure that allows adding and removing elements in a particular order.
The order is FIFO(First IN First OUT) or LILO(Last In Last Out).

## Standard Queue Operations

Enqueue() – Add item to the queue from the REAR

Dequeue() – Remove item from the queue from the FRONT

isFull() – Check if queue is full or not

isEmpty() – Check if queue empty or not

count() – Get number of items in the queue

## Types of Queue

Simple Queue

Circular Queue

Priority Queue

##  Applications of Queue Data Structure

CPU scheduling, Disk Scheduling

Handling of interrupts in real-time systems. The interrupts are handled in the same order as they arrive, First come first served

In real life, Call Center phone systems will use Queues, to hold people calling them in an order, until a service representative is free

When data is transferred asynchronously between two processes. Queue is used for synchronization
## Pseudocode

Queue:
 items: array or linked list

 front: integer (index or pointer)

 rear: integer (index or pointer)

 size: integer

Operations:

Enqueue(item):
1. If queue is empty, set front and rear to 0.
2. Add the item to the rear of the queue.
3. Increment rear by 1.
4. Increment size by 1.

Dequeue():
1. If queue is empty, return an error or null.
2. Get the item at the front of the queue.
3. Increment front by 1.
4. Decrement size by 1.
5. Return the item.

Front():
1. If queue is empty, return an error or null.
2. Return the item at the front of the queue.

isEmpty():
1. Return true if size is 0, else return false.

getSize():
1. Return the value of size.

Example usage:

Main:
1. Initialize an empty queue.
2. Enqueue(5)
3. Enqueue(10)
4. Enqueue(15)
5. Print Front()   
6. Print getSize()  
7. Dequeue()
8. Print Front() 
9. Enqueue(20)
10. Print getSize() 
11. Dequeue()
12. Dequeue()
13. Dequeue()
14. Print isEmpty()  






