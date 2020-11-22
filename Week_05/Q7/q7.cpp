#include <iostream>
#include <string>
#include <random>
#include "queue.cpp"
#include "customer.cpp"



int main(int argc, char const *argv[])
{
    /* code */

    //Init the queue
    Queue q;

    int l, total , sim = -1;

    cout << "How long: " << endl;
    cin >> l;

    cout << "Welcome the program 😂" << endl;
    for (int i = 0; i <= l; i++)
    {

        //Increment the sim
        sim++;

        //If the queue is empty
        if(!q.isEmpty()){
            //Remove the customer at the front of the queue
            Customer customer;
            q.dequeue(customer);
            int time = sim - customer.getQueueNum() ;
            total += time;
            cout << "Customer " << customer.getName() << " was served in " << time << " min(s)" << endl;

        }
        
        int random = rand()  % 3;

        for (int i = 0; i < random; i++)
        {
            string name;
            Customer customer;
            cout << "Enter your name: ";
            cin >> name;
            customer.setName(name);
            customer.setQueueNum(sim);
            q.enqueue(customer);

        }


    }


    cout << "In this " << l << "-min period, the average time to be served = " << total/double(l) << " mins";
    



    return 0;
}
