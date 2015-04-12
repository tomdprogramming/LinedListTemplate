#include "LinkedListTemplate.h"
#include "TomPointClass.h"

int main(int argc, char* argv[])
{
    int ErrCheck;
    void* NodePointer;
    
    TomPointClass Point;
    
    TomPointClass Point1(1,2);
    TomPointClass Point2(4,5);
    TomPointClass Point3(6,7);
    
    LinkedList<TomPointClass> MySecondList;
    
    MySecondList.AddToTail(Point1);
    MySecondList.AddToTail(Point2);
    MySecondList.AddToTail(Point3);
    
    MySecondList.ResetCurrent();
    
    ErrCheck = MySecondList.GetData(&Point);
    MySecondList.MoveToNextItem();
    
    Point.PrintCoords();
    
    ErrCheck = MySecondList.GetData(&Point);
    MySecondList.MoveToNextItem();

    Point.PrintCoords();    
    
    ErrCheck = MySecondList.GetData(&Point);
    MySecondList.MoveToNextItem();

    Point.PrintCoords();    
}
