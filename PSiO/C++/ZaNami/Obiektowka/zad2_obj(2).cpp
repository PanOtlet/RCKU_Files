#include<iostream>
using namespace std;

class u
{
  public:
  int licznik;
  int mianownik;
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
void pom(u &u_1,u &u_2,u &u_3)
    {
      int l,m;
      l=u_1.licznik*u_2.licznik;
      m=u_1.mianownik*u_2.mianownik;
      u_3.zapisz(l,m);
    }
void pod(u &u_1,u &u_2,u &u_3)
    {
      int l,m;
      l=u_1.licznik*u_2.mianownik;
      m=u_1.mianownik*u_2.licznik;
      u_3.zapisz(l,m);
    }
    }
int main()
{
  u ul1,ul2,ul3;
  int licz,mian,w;
  ul1.zapisz(4,5);
  ul2.zapisz(1,7);
  cout<<"pierwszy ulamek : ";
  ul1.wypisz(