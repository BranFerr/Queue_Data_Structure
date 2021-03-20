#include <iostream>
#include "Queue.hpp"

using namespace std;

int main() {
 
    typedef Queue1<int> IntegerQueue;
    IntegerQueue q1;
    IntegerQueue q4;

    cout << "Testcase q1 Integers:\n";

    //VARIABLES FOR TESTING
    int a = 8;
    int b = 12;
    int c = 16;
    int d = 18;
    int e = 24;
    int f = 42;

    q1.enqueue(a);
    q1.enqueue(b);
    q1.enqueue(c);

    cout << "q1 starting out:\n";
    q1.outputQueue();

    cout << "\nTesting front() on q1\n";
    q1.front();

    cout << "\n\nTesting dequeue:\n";
    cout << "q1 before:";
    q1.outputQueue();
    cout << "\n";
    q1.dequeue(a);
    cout << "q1 after: ";
    q1.outputQueue();
    cout << "\n";

    cout << "Testing Replace Front\n";
    cout << "q1 before: ";
    q1.outputQueue();
    cout << "\nq1 after: ";
    q1.replaceFront(d);
    q1.outputQueue();
    cout << "\n";

    //POPULATING P3
    q4.enqueue(e);
    q4.enqueue(f);

    cout << "\nTesting Operator= Function";
    cout << "\nq1 before: ";
    q1.outputQueue();
    cout << "\nq4 before: ";
    q4.outputQueue();
    cout << "\n";
    q1.operator = (q4);
    cout << "\nq1 after: ";
    q1.outputQueue();
    cout << "\nq4 after: ";
    q4.outputQueue();
    cout << "\n";

    //REPOPULATING QUEUE!
    q1.dequeue(a);
    q1.dequeue(b);
    q1.enqueue(c);
    q1.enqueue(d);
    q1.enqueue(e);
    q1.enqueue(f);

    cout << "\nTesting TransferFrom Function";
    cout << "\nq1 before: ";
    q1.outputQueue();
    cout << "\nq4 before: ";
    q4.outputQueue();
    cout << "\n";
    q1.transferFrom(q4);
    cout << "\nq1 after: ";
    q1.outputQueue();
    cout << "\nq4 after: ";
    q4.outputQueue();
    cout << "\n";

    typedef Queue1<string> TextQueue;
    TextQueue q2;
    TextQueue q3;

    //STRING VARIABLES
    string x = "meow";
    string y = "stick";
    string z = "look";
    string v = "person";
    string t = "tall";
    string r = "round";

    cout << "Testcase q2 Strings\n";

    q2.enqueue(x);
    q2.enqueue(y);
    q2.enqueue(z);

    cout << "q2 starting out:\n";
    q2.outputQueue();

    cout << "\nTesting front() on q2\n";
    q2.front();

    cout << "\n\nTesting dequeue:\n";
    cout << "q2 before:";
    q2.outputQueue();
    cout << "\n";
    q2.dequeue(x);
    cout << "q1 after: ";
    q2.outputQueue();
    cout << "\n";

    cout << "Testing Replace Front\n";
    cout << "q2 before: ";
    q2.outputQueue();
    cout << "\nq2 after: ";
    q2.replaceFront(v);
    q2.outputQueue();
    cout << "\n";

    //POPULATING Q3
    q3.enqueue(t);
    q3.enqueue(r);

    cout << "\nTesting Operator= Function";
    cout << "\nq2 before: ";
    q2.outputQueue();
    cout << "\nq3 before: ";
    q3.outputQueue();
    cout << "\n";
    q2.operator = (q3);
    cout << "\nq2 after: ";
    q2.outputQueue();
    cout << "\nq3 after: ";
    q3.outputQueue();
    cout << "\n";

    //REPOPULATING Q2
    q2.dequeue(t);
    q2.dequeue(r);
    q2.enqueue(x);
    q2.enqueue(y);
    q2.enqueue(z);
    q2.enqueue(v);

    cout << "\nTesting TransferFrom Function";
    cout << "\nq2 before: ";
    q2.outputQueue();
    cout << "\nq3 before: ";
    q3.outputQueue();
    cout << "\n";
    q2.transferFrom(q3);
    cout << "\nq2 after: ";
    q2.outputQueue();
    cout << "\nq3 after: ";
    q3.outputQueue();
    cout << "\n";

    return 0;

}// END MAIN