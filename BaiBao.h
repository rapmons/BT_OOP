#include"CTKH.h"
class BaiBao: public CTKH
{
private:
    string tct;
    int sl; 
public:
    BaiBao(string,int,bool,string,int);
    BaiBao();
    ~BaiBao();
    void Nhap();
    void Xuat();
    friend istream& operator>>(istream&, BaiBao&);
    friend ostream& operator<<(ostream&, BaiBao&);
     BaiBao& operator=(const BaiBao&);
     
    
};

