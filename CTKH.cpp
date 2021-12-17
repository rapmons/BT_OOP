#include"CTKH.h"
CTKH::CTKH(string mct,int nxb,bool kvxb)

{
this->mct=mct;
this->nxb=nxb;
this->kvxb=kvxb;
}
CTKH::CTKH()
{
   this->mct=mct;
this->nxb=nxb;
this->kvxb=kvxb; 
}
CTKH::~CTKH()
{
    
}

bool CTKH::operator==( CTKH &p)
{
    if(this->mct==p.mct)
    {
        return 1;
    }
    return 0;
}
 bool CTKH::operator>(CTKH &p)
 {
     if(this->nxb> p.nxb) 
     {
         return true;
     }
     return false;
 }
bool CTKH::operator<( CTKH &p)
 {
     if(this->nxb<p.nxb)
     {
         return 1;
     }
     return 0;
 }



