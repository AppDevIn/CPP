#include<iostream> 
#include "List.cpp"
using namespace std; 

/**
 * Test for 
 * Count,
 * Reverse 
 * */
// int main(int argc, char const *argv[])
// {
//     List list;

//     list.add(0,'a');
//     list.add(1,'b');
//     list.add(2,'c');
//     list.add(3,'d');
//     list.add(4,'e');
//     list.add(5,'f');
//     list.add(6,'g');
//     list.add(7,'h');
//     list.add(8,'i');



//     cout << list.count('a') << endl;

//     list.display();
//     list.reverse();
//     list.display();

//     cout << list.countR('z') << endl;

//     list.reverseR();
//     list.display();



//     return 0;
// }

/**
 * For removeDuplicatesfromUnsorted
 * */
// int main(int argc, char const *argv[])
// {
//     List list;

//     list.add(0,'a');
//     list.add(1,'a');
//     list.add(2,'a');
//     list.add(3,'b');
//     list.add(4,'c');
//     list.add(5,'d');
//     list.add(6,'e');
//     list.add(7,'f');
//     list.add(8,'g');
//     list.add(9,'h');
//     list.add(10,'i');
//     list.add(11,'a');


//     list.display();

//     list.removeDuplicatesfromUnsorted();

//     list.display();


//     return 0;
// }



/**
 * For removeDuplicatesfromSorted
 * */
// int main(int argc, char const *argv[])
// {
//     List list;

//     list.add(0,'a');
//     list.add(1,'a');
//     list.add(2,'a');
//     list.add(3,'b');
//     list.add(4,'c');
//     list.add(5,'d');
//     list.add(6,'e');
//     list.add(7,'f');
//     list.add(8,'h');
//     list.add(9,'h');
//     list.add(10,'i');
//     list.add(11,'i');


//     list.display();

//     list.removeDuplicatesfromSorted();

//     list.display();


//     return 0;
// }



/**
 * For deleteAllOccurrences
 * */
// int main(int argc, char const *argv[])
// {
//     List list;

//     list.add(0,'a');
//     list.add(1,'a');
//     list.add(2,'a');
//     list.add(3,'b');
//     list.add(4,'c');
//     list.add(5,'d');
//     list.add(6,'e');
//     list.add(7,'f');
//     list.add(8,'h');
//     list.add(9,'h');
//     list.add(10,'i');
//     list.add(11,'i');


//     list.display();

//     list.deleteAllOccurrences('i');

//     list.display();


//     return 0;
// }


/*
for mergeLLAt(List newList, int pos)
*/
// int main(int argc, char const *argv[])
// {
//     List list;

//     list.add(0,'a');
//     list.add(1,'a');
//     list.add(2,'a');
//     list.add(3,'b');
//     list.add(4,'c');
//     list.add(5,'d');
//     list.add(6,'e');
//     list.add(7,'f');
//     list.add(8,'h');
//     list.add(9,'h');
//     list.add(10,'i');
//     list.add(11,'i');

//     List list1;
//     list1.add(0,'c');
//     list1.add(1,'d');
//     list1.add(2,'e');
//     list1.add(3,'f');
    

//     list.display();

//     list.mergeLLAt(list1, 1);

//     list.display();


//     return 0;
// }


/*
for reverseAt(int start, int end)
*/
// int main(int argc, char const *argv[])
// {
//     List list;

//     list.add(0,'a');
//     list.add(1,'a');
//     list.add(2,'a');
//     list.add(3,'b');
//     list.add(4,'c');
//     list.add(5,'d');
//     list.add(6,'e');
//     list.add(7,'f');
//     list.add(8,'h');
//     list.add(9,'h');
//     list.add(10,'i');
//     list.add(11,'i');

    

//     list.display();

//     list.reverseAt(3,8);

//     list.display();


//     return 0;
// }


/*
For getMiddle
*/
// int main(int argc, char const *argv[])
// {
//     List list;

//     list.add(0,'a');
//     list.add(1,'a');
//     list.add(2,'a');
//     list.add(3,'b');
//     list.add(4,'c');
//     list.add(5,'c');

//     list.add(6,'d');

//     list.add(7,'e');
//     list.add(8,'f');
//     list.add(9,'h');
//     list.add(10,'h');
//     list.add(11,'i');
//     list.add(12,'i');

    

    

//     cout << list.getMiddle() << endl;

    


//     return 0;
// }

/*
For getMiddle
*/
int main(int argc, char const *argv[])
{
    List list;

    list.add(0,'a');
    list.add(1,'a');
    list.add(2,'a');
    list.add(3,'b');
    list.add(4,'c');
    list.add(5,'c');

    list.add(6,'d');

    list.add(7,'e');
    list.add(8,'f');
    list.add(9,'h');
    list.add(10,'h');
    list.add(11,'i');
    list.add(12,'i');

    

    

    cout << list.getLength() << endl;

    


    return 0;
}




