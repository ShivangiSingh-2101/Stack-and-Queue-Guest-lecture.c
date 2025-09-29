//Shivangi Singh
//24070123148
//B3
#include <iostream>
using namespace std;

class Queue {
    int front, rear, capacity;
    int* queueArray;

public:
    Queue(int size) {
        capacity = size;
        front = 0;
        rear = -1;
        queueArray = new int[capacity];
    }

    ~Queue() {
        delete[] queueArray;
    }

    bool isFull() {
        return rear == capacity - 1;
    }

    bool isEmpty() {
        return front > rear;
    }

    void enqueue(int item) {
        if (isFull()) {
            cout << "Queue is full\n";
            return;
        }
        queueArray[++rear] = item;
        cout << item << " enqueued\n";
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }
        cout << queueArray[front++] << " dequeued\n";
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << queueArray[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();

    q.dequeue();
    q.display();

    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);  // This should print "Queue is full"

    q.display();

    return 0;
}
/*OUTPUT
10 enqueued
20 enqueued
30 enqueued
Queue elements: 10 20 30 
10 dequeued
Queue elements: 20 30 
40 enqueued
50 enqueued
Queue is full
Queue elements: 20 30 40 50 */
