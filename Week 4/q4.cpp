#include <iostream>
#include <string>
#include "stack.cpp"


int main()
{
    Stack back_stack;
    Stack forward_stack;
    string temp;
    while (temp != "0")
    {
        cout << "[1] Visit URL\n[2] Back\n[3] Forward\n[0] Exit\nYour Choice: ";
        cin >> temp;
        if (temp == "0")
            break;
        else if (temp == "1"){
            cout << "Please enter the URL: ";
            string url;
            cin >> url;
            cout << endl;

            back_stack.push(url);

            cout << "Current website " << url << endl;

            if(!forward_stack.isEmpty()){
                forward_stack.~Stack();
                forward_stack = Stack();
            }


        }

        else if(temp == "2"){
            string value;
            back_stack.pop(value);
            forward_stack.push(value);

            if(back_stack.isEmpty()){
                cout << "Back history is empty" << endl;
            }else{
                back_stack.getTop(value);
                cout << "The current web page " << value << endl;
            }



        }

        else if (temp == "3"){
            string value;
            forward_stack.pop(value);



            if(value.size() == 0){
                cout << "Forward history is empty" << endl;
            }else{
                cout << "The current web page " << value << endl;
            }


        }
    }
    return 0;
}
