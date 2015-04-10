#include "LinkedListTemplate.h"


int main(int argc, char* argv[])
{
    LinkedList<int> MySecondList;
    
    MySecondList.AddToTail(1);
    MySecondList.AddToTail(3);
    MySecondList.AddToTail(5);
    
    MySecondList.PrintList();
    return 0;
}
