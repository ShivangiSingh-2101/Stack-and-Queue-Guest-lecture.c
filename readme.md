PROGRAM 1

Aim: To implement a queue data structure following FIFO (First In First Out) principle.

Theory:

Input: Elements to be added to the queue.

Method: Use an array with two pointers (front and rear) to manage insertion (enqueue) and deletion (dequeue).

Algorithm (Short Steps)

- enqueue(item)
- Check if queue is full → if yes, show error.Else, increment rear and insert item at queueArray[rear].
- dequeue()
- Check if queue is empty → if yes, show error.
- Else, remove element at queueArray[front] and increment front.
- isFull()
- Return true if rear == capacity - 1.
- isEmpty()
- Return true if front > rear.
- display()
- Print elements from front to rear.
- End
