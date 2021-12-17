#include"BaiBao.h"
 BaiBao::BaiBao(string mct,int nxb,bool kvsx,string tct,int sl)
 : CTKH(mct,nxb,kvxb)
 {
 this->tct=tct;
 this->sl=sl;
 }
BaiBao::BaiBao()
{
    this->mct=mct;
this->nxb=nxb;
this->kvxb=kvxb; 
this->tct=tct;
 this->sl=sl;
}
  

BaiBao::~BaiBao()
{

}
istream& operator>>(istream& i, BaiBao& b)
{    
    cout<<"nhap mct:";
    fflush(stdin);
    getline(i,b.mct);
    do{
    cout<<"nhap nxb:";
    i>>b.nxb;
    }while (b.nxb<1900);
    cout<<"nhap kvxb:";
    i>>b.kvxb;
    cout<<"nhap tct:";
    fflush(stdin);
    getline(i,b.tct);
    cout<<"nhap sl";
    i>>b.sl;
    return i;
}
void BaiBao::Nhap()
{
    cin>>*this;
}
ostream & operator<<(ostream & o,BaiBao & p)
{
    o<<"baibao:"<<endl;
    o<<"mct:"<<p.mct<<endl;o<<"nxb:"<<p.nxb<<endl;
    if(p.kvxb)
    {
        o<<"kvxb:quoc te"<<endl;
        
    }
    else{
        o<<"kvxb:trong nuoc"<<endl;
    }
    o<<"tct:"<<p.tct<<endl;o<<"sl:"<<p.sl<<endl;
    return o;
}
void BaiBao::Xuat()
{
    cout<<*(this);
}
 BaiBao& BaiBao::operator=(const BaiBao& p)
{  
   
   
    this->mct=p.mct;
    this->nxb=p.nxb;
    this->kvxb=p.kvxb;
    this->tct=p.tct;
    this->sl=p.sl;
    return *this;
   
}
