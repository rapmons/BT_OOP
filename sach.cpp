#include"sach.h"
sach::sach(string mct,int nxb,bool kvxb,string loai)
: CTKH(mct,nxb,kvxb)
{
    this->loai=loai;
}
sach::sach()
{

this->loai=loai;
this->mct=mct;
this->nxb=nxb;
this->kvxb=kvxb; 
}
sach::~sach()
{

}

istream& operator>>(istream& i,sach& s)
{    
    cout<<"nhap mct:";
    fflush(stdin);
    getline(i,s.mct);
   do{
    cout<<"nhap nxb:";
    i>>s.nxb;
    }while (s.nxb<1900);
    cout<<"nhap kvxb:";
    i>>s.kvxb;
    cout<<"nhap loai sach:";
    fflush(stdin);
    getline(i,s.loai);
    
    return i;
}
void sach::Nhap()
{
    cin>>*(this);
}


    

ostream & operator<<(ostream & o, sach & p)
{

    o<<"sach:"<<endl;
    o<<"mct:"<<p.mct<<endl;o<<"nxb:"<<p.nxb<<endl;
    if(p.kvxb==true)
    {
        o<<"kvxb:quoc te"<<endl;
    }
    else o<<"kvxb:trong nuoc"<<endl;
    o<<"loai:"<<p.loai<<endl;
    return o;
}
void sach::Xuat()
{
    cout<<*(this);
}
sach& sach::operator=(const sach& p)
{  
   
   
    this->mct=p.mct;
    this->nxb=p.nxb;
    this->kvxb=p.kvxb;
    this->loai=loai;
    return *this;
   
}