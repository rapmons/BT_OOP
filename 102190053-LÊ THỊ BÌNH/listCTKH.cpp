#include"listCTKH.h"
template<class T>
listCTKH<T>::listCTKH(string ten)
{
    this->n = 0; 
    this->data = nullptr;
    this->ten = ten;
}
template<class T>
listCTKH<T>::listCTKH()
{

}

template<class T>
listCTKH<T>::~listCTKH()
{
    delete[] this->data;
}

template<class T>
void listCTKH<T>::Add( T& p)
{
    if(this->n==0)
    {
        this->data=new T[this->n+1];
        this->data[this->n]=p;
        
    }
    else{
        T *temp=new T[this->n];
        for(int i=0;i<this->n;++i)
        {
            *(temp+i)=*(this->data+i);
        }
       delete[]this->data;
      this->data=new T[this->n+1];
      for(int i=0;i<this->n;++i)
      {
          *(this->data+i)=*(temp+i);
      }  
      this->data[this->n]=p;
    }
    this->n++;
}

 template<class T>
  ostream& operator<<(ostream& o, listCTKH<T>& db)
 {
      o<<"danh sach ctkh:"<<endl;
      
      o<<"ho ten ca nhan:"<<db.ten<<endl;
      o<<"so luong ctkh:"<<db.n<<endl;
      for(int i=0;i<db.n;++i)
      {
    
      db.data[i]->Xuat();
     }
      return o;
  }
template<class T>
int listCTKH<T>::IndexOf( T& p)
{   
     
     
    
    for(int i = 0; i < this->n; i++){
        if(*(*(this->data + i))==*p)
        {
            return i;
        }
    }
    return -1;
}
template<class T>
int listCTKH<T>::IndexOf1( T& p)
{
    for(int i = 0; i < this->n; i++)
    {
        if(*(this->data+i).mct == p.mct)
        return 1;
        }
     return 0;       
}

template<class T>
void listCTKH<T>::RemoveAt(const int& k){
    if(k >= 0 && k < this->n){
        T *temp = new T[this->n];
        for(int i = 0; i < this->n; i++){
            *(temp + i) = *(this->data + i);
        }
        delete[] this->data;
        this->data = new T[this->n - 1];
        for(int i = 0; i < k; i++){
            *(this->data + i) = *(temp + i);
        }
        for(int i = k +1; i < this->n; i++){
            *(this->data + i - 1) = *(temp + i);
        }
        delete[] temp;
        this->n--;
    }
}
template<class T>
void listCTKH<T>::Remove(const T& p){
    int k = (*this).IndexOf(p);
    if(k != -1){
        (*this).RemoveAt(k);
    }
}
template<class T>
 T& listCTKH<T>::operator[](const int& i)
{
    return *(this->data + i);
}

template<class T>
void listCTKH<T>::Update(const int& k,T& p)
{
    if(k>this->n) cout<<"vitri duoc chon khong hop le"<<endl;
   else *(this->data + k)= p;
   
}
 
template<class T>
void listCTKH<T>::sapxep(bool (*cmd)(T& p,T& v))
{   
   // T *temp= new T[this->n+1];
    for(int i=0;i<this->n-1;i++)
    {
        for (int j=i+1;j<this->n;j++)
        {
            if(cmd(*(this->data+i),*(this->data+j)))
            {
               
                swap(*(this->data + i),*(this->data+j));
                
            }
        }
    }
    //delete[] temp;

  }

