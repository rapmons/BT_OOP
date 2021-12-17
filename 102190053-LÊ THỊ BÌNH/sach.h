#include"CTKH.h"
class sach:public CTKH
{
private:
string loai;
   
public:
    sach(string,int,bool,string);
    sach();
    ~sach();
    void Nhap();
    void Xuat();
    friend ostream& operator<<(ostream&, sach&);
    friend istream& operator>>(istream&,sach&);
    sach& operator=( const sach&);
};



