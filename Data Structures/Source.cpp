#include <iostream>
using namespace std;

string HollowPurple[20];
int top = 9;
int top1 = -1;

void redpush(string clothing) {
    if (top >= 19)
        cout << "stack is full" << endl;
    else
    {
        top++;
        HollowPurple[top] = clothing;
    }
}

void bluepush(string clothing) {
    if (top1 >= 9)
        cout << "stack is full" << endl;
    else
    {
        top1++;
        HollowPurple[top1] = clothing;
    }
}

void redpop() {
    if (top <= 10)
        cout << "stack is empty" << endl;
    else {
        cout << "the popped element is " << HollowPurple[top] << endl;
        top--;
    }
}

void bluepop() {
    if (top1 <= -1)
        cout << "stack is empty" << endl;
    else {
        cout << "the popped element is " << HollowPurple[top] << endl;
        top1--;
    }
}

void bluesize() {
    if (top1 >= 0 && top1 <= 10) {
        cout << "Size of the stack: " << top1 + 1 << "\n";
    }
    else
        cout << "Stack is empty";
}


void redsize() {
    if (top >= 10) {
        cout << "Size of the stack: " << top - 9 << "\n";
    }
    else
        cout << "Stack is empty";
}

void bluedisplay() {
    if (top >= 0) {
        cout << "Blue stack elements are: ";
        for (int i = top; i >= 0; i--)
            cout << HollowPurple[i] << " ";
        cout << endl;
    }
    else
        cout << "Stack is empty";
}

void reddisplay() {
    if (top >= 10) {
        cout << "Red Stack elements are: ";
        for (int i = top; i >= 10; i--)
            cout << HollowPurple[i] << " ";
        cout << endl;
    }
    else
        cout << "Stack is empty";
}
int main()
{
    redpush("T-shirts");
    redpush("T-shirts");
    bluepush("headsets");
    redpush("iphone");
    bluepush("yes");
    redsize();
    bluesize();
    reddisplay();
    bluedisplay();

}

