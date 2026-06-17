#include <iostream>
using namespace std;

class Queue {
    static const int SIZE = 5;
    int arr[SIZE];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int x) {
        if (rear == SIZE ) {
            cout << "Queue Overflow\n";
        } else if (front == -1 && rear == -1) {
            front = rear = 0;
            arr[rear] = x;
            cout << x << " enqueued\n";
        } else {
            rear = rear+1;
            arr[rear] = x;
            cout << x << " enqueued\n";
        }
    }

    void dequeue() {
        if (front == -1) {
            cout << "Queue Underflow\n";
        } else if (front == rear) {
            cout << arr[front] << " dequeued\n";
            front = rear = -1;
        } else {
            cout << arr[front] << " dequeued\n";
            front++;
        }
    }

    void display() {
        if (front == -1) {
            cout << "Queue is Empty\n";
        } else {
            cout << "Queue elements: ";
            for (int i = front; i <= rear; i++)
                cout << arr[i] << " ";
            cout << endl;
        }
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.display();

    return 0;
}
