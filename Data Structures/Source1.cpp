#include <iostream>
using namespace std;

string Laundry[20];
int top = -1;
int top1 = 9;

void bluepush(string clothing) {
    if (top >= 9)
        cout << "stack is full" << endl;
    else
    {
        top++;
        Laundry[top] = clothing;
    }
}

void bluepop() {
    if (top <= -1)
        cout << "stack is empty" << endl;
    else {
        cout << "the popped element is " << Laundry[top] << endl;
        top--;
    }
}

void bluedisplay() {
    if (top >= 0) {
        cout << "Stack elements are: ";
        for (int i = top; i >= 0; i--) {
            cout << Laundry[i] << " ";

        }
        cout << endl;
    }
    else {
        cout << "stack is empty";
    }
}

void bluesize() {
    if (top >= 0 && top <= 10) {
        cout << "Size of the stack: " << top + 1 << "\n";
    }
    else
        cout << "Stack is empty";
}


void redpush(string clothing) {
    if (top1 >= 19)
        cout << "stack is full" << endl;
    else
    {
        top1++;
        Laundry[top1] = clothing;
    }
}

void redpop() {
    if (top1 <= 10)
        cout << "stack is empty" << endl;
    else {
        cout << "the popped element is " << Laundry[top1] << endl;
        top--;
    }
}

void reddisplay() {
    if (top1 >= 10) {
        cout << "Stack elements are: ";
        for (int i = top1; i >= 10; i--) {
            cout << Laundry[i] << " ";
        }
        cout << endl;
    }
    else {
        cout << "stack is empty";
    }
}

void redsize() {
    if (top1 >= 10) {
        cout << "Size of the stack: " << top1 - 9 << "\n";
    }
    else
        cout << "Stack is empty";
}

int main()
{
    bluepush("lol");
    redpush("ahh");
    redpush("pop");


    redsize();
    reddisplay();
    bluesize();
    bluedisplay();
}