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
        cout << "Size of the blue stack: " << top1 + 1 << "\n";
    }
    else
        cout << "Stack is empty";
}


void redsize() {
    if (top >= 10) {
        cout << "size of the red stack: " << top - 9 << "\n";
    }
    else
        cout << "Stack is empty";
}

void bluedisplay() {
    if (top1 >= 0) {
        cout << "Blue stack elements are: ";
        for (int i = top1; i >= 0; i--)
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
    while (true) {
        string monkey;

        cout << "press 1 to add to the blue stack, 2 to the red stack or 3 to display the stacks: " << endl;
        cin >> monkey;
        if (monkey == "1") {
            cin >> monkey;
            bluepush(monkey);
        }
         

        else if (monkey == "2") {
            cin >> monkey;
            redpush(monkey);
        }
            

        else if (monkey == "3") {
            cout << "press 1 to display blue stack, 2 for the red stack or 3 for both of them: " << endl;
            cin >> monkey;
            if (monkey == "1") {
                bluedisplay();
                bluesize();
            }
                
            else if (monkey == "2") {
                reddisplay();
                redsize();
            }
             
            else if (monkey == "3") {
                reddisplay();
                redsize();
                bluedisplay();
                bluesize();
            }
            
        }
            

    }
}

