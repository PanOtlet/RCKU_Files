#include<iostream>
using namespace std;

class u
{
  int licznik;
  int mianownik;
  public:
    int zapisz(int l,int m);
    void wypisz()
    {
       cout<<licznik<<"/"<<mianownik;
    }
};

int u::zapisz(int l,int m)
{
   licznik=l;
   if(m!=0)
   {
      mianownik=m;
      return 1;
   }  
   else
   {
      cout<<"mainowni nie moze miec watosci 0";
      return 0;    
   }  
};

int main()
{
  u ul1,ul2,ul3;
  int licz,mian,w;
  ul1.zapisz(4,5);
  ul2.zapisz(1,7);
  cout<<"pierwszy ulamek : ";
  ul1.wypisz();
  cout<<'\n';
  cout<<"drugi ulamek : ";
  ul2.wypisz();
  cout<<'\n';
  cout<<"podaj licznik : ";
  cin>>licz;
  do
  {
     cout<<"podaj mianiownik";
     cin>>mian;
     w=ul3.zapisz(licz,mian);          
  }while(w==0);
  cout<<"twoj ulamek:";
  ul3.wypisz();
  cout<<"\n\n";
  
    return 0;
}
