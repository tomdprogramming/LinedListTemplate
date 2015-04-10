#ifndef TOMSLINKEDLISTTEMPLATE_H
#define TOMSLINKEDLISTTEMPLATE_H

#include <stdio.h>
#include <cstdlib>

template <class T> class LinkedList
{
    private:
    class Node
    {
        private:
        T Data;
        Node* Next;
        
        public:
        T GetData(void){return this->Data;}
        Node* GetNext(void){return this->Next;}
        
        void SetData(T NewData){this->Data = NewData;}
        void SetNext(Node* NewNext){this->Next = NewNext;} 
    };
    
    Node* Head;
    Node* Current;
    
    public:
    LinkedList();
    ~LinkedList();
    
    void AddToTail(T);
    void PrintList(void);//the specified type must have a print function in order to use this
    
};

template <class T> LinkedList<T>::LinkedList() //default constructor, create an empty list
{
    this->Head = NULL;
    this->Current = NULL;
}

template <class T> LinkedList<T>::~LinkedList() //destructor
{
    //nothing here yet
}

template <class T> void LinkedList<T>::AddToTail(T NewData)
{
    if(this->Head==NULL)//List is empty
    {
        Node* NewNode = (Node*)malloc(sizeof(Node));
        NewNode->SetData(NewData);
        NewNode->SetNext(NULL);
        this->Head = NewNode;
    }
    else //list has at least one item
    {
        Node* TempPntr = this->Head;
        while(TempPntr->GetNext() != NULL)//this loop steps through each item
        {
            TempPntr = TempPntr->GetNext();
        }//at end of loop, TempPntr should be pointing to the current tail
        
        Node* NewNode = (Node*)malloc(sizeof(Node));
        NewNode->SetData(NewData);
        TempPntr->SetNext(NewNode);
        NewNode->SetNext(NULL);
    }
}

template <class T> void LinkedList<T>::PrintList(void)
{
    printf("\n");
    Node* TempPntr = this->Head;
    while(TempPntr!=NULL)
    {
        printf("%d\n",TempPntr->GetData());
        TempPntr = TempPntr->GetNext();
    }

}


#endif
