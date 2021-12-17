#pragma once
#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
class CTKH
{
protected:
    string mct;
    int nxb;
    bool kvxb;
public:
   CTKH(string,int,bool);
   CTKH();
    virtual void Nhap()=0; 
    virtual void Xuat()=0;
    ~CTKH();
    bool operator==( CTKH&);
    bool operator>(CTKH&);
    bool operator<( CTKH&);
   // CTKH operator=(const CTKH&);
};   



