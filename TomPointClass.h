#ifndef TOMPOINTCLASS_H
#define TOMPOINTCLASS_H

class TomPointClass
{
    private:
    int XCoord;
    int YCoord;
    
    public:
    
    TomPointClass();
    TomPointClass(int, int);
    ~TomPointClass();
    
    int GetX(void){return this->XCoord;}
    int GetY(void){return this->YCoord;}
    
    void SetX(int New){this->XCoord = New;}
    void SetY(int New){this->YCoord = New;}
    
    void PrintCoords(void);
};




#endif
