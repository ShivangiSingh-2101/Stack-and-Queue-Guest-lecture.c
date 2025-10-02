PROGRAM 1

Aim:

To implement a stack data structure using a fixed-size array and perform push, pop, and display operations.

Theory:

A stack is a linear data structure that follows the LIFO (Last In First Out) principle.
The last element added (pushed) is the first one to be removed (popped).
Stack operations:
push: Add element to the top.
pop: Remove element from the top.
display: Show elements from top to bottom.

Algorithm:

- push(data)
- Increment top by 1.
- Insert data at arr[top].
- pop()
- Decrement top by 1.
- display()
- Loop from top down to 0 (Note: Your code has a bug displaying only arr[top] repeatedly).
- Print each element.
- End

PROGR4AM 2

Aim:

To demonstrate stack operations using the C++ Standard Template Library (STL) stack and perform arithmetic using stack.

Theory:

The STL stack implements the stack data structure with built-in functions:
push() to add element.
pop() to remove element.
top() to access the top element.
This program uses the stack to compute (1+2)*3 = 9 by manipulating elements on the stack.

Algorithm:

- Push 1 and 2.
- Pop two elements, add them, and push the result.
- Push 3.
- Pop two elements, multiply them, and push the result.
- Display the final top value.
- End

  PROGRAM 3

  Aim:

To implement linear search algorithm on a vector to find the index of a given element.


Theory:

Linear search is a simple search algorithm that checks each element sequentially until the target element is found or the list ends.
Time complexity: O(n).

Algorithm:

- Traverse each element in the vector.
- Compare current element with the search key.
- If match found, print index and return.
- If end of vector reached without match, print “Element not found”.
- End
