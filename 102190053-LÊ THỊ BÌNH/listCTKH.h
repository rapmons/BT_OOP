#include<iostream>
#include<string>
using namespace std;
template<class T>
class listCTKH;
template<class T>
ostream& operator<<(ostream&, listCTKH<T> &);
template<class T>
class listCTKH
{
    
private:

   T*data;
   
   
   int n;
   
   string ten;
   
public:

    listCTKH(string="");
    listCTKH();
   
    //listCTKH(int, string);
   ~ listCTKH();
    
    void Add( T&);
    //thêm
    int IndexOf( T& );
    int IndexOf1( T& );//truyền vào 1 đt  nếu tìm  thấy trả về đt , nếu không tìm thấy trả về -1
    void Remove(const T&); //xóa đt
    void RemoveAt(const int& );// xóa đối tượng tại vị trí k,
    T& operator[](const int&);
    //listCTKH<T>& operator[](const int&);
    void Update(const int&,T&);
    //friend ostream& operator<<(ostream& ,const listCTKH<T>& );
    friend ostream& operator<< <>(ostream& , listCTKH& );
    //  bool operator>(const T&);
    //  bool operator<(const T&);
    
    void sapxep(bool(*cmd)(T&,T&));
    bool up(T&,T&);
    bool down(T&,T&);

};


