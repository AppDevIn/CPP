#include <iostream>
#include <string>
#include "stack.cpp"

void vistUrl(Stack* back, Stack* forward);
void back(Stack* back, Stack* forward);
void forward(Stack* forwardS);

using namespace std;

int main()
{
    Stack* back_stack = new Stack;
    Stack* forward_stack = new Stack;
    string temp;
    while (temp != "0")
    {
        cout << "[1] Visit URL\n[2] Back\n[3] Forward\n[0] Exit\nYour Choice: ";
        cin >> temp;
        if (temp == "0")
            break;
        else if (temp == "1"){vistUrl(back_stack, forward_stack);}

        else if(temp == "2"){back(back_stack, forward_stack);}

        else if (temp == "3"){forward(forward_stack);}
    }
    return 0;
}

void vistUrl(Stack* back, Stack* forward){
    cout << "Please enter the URL: ";
    string url;
    cin >> url;
    cout << endl;

    back->push(url);

    cout << "Current website " << url << endl;

    if(!forward->isEmpty()){
        forward->~Stack();
        forward = new Stack;
    }

}

void back(Stack* back, Stack* forward){
    string value;
    back->pop(value);
    forward->push(value);

    if(back->isEmpty()){
        cout << "Back history is empty" << endl;
    }else{
        back->getTop(value);
        cout << "The current web page " << value << endl;
    }
}

void forward(Stack* forwardS){
    string value;
    forwardS->pop(value);

    if(value.size() == 0){
        cout << "Forward history is empty" << endl;
    }else{
        cout << "The current web page " << value << endl;
    }
}