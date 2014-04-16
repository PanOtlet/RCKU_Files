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

int main()
{
  u ul1,ul2,ul3,ul4,ul5;
  int licz,mian,w;
  ul1.zapisz(4,5);
  ul2.zapisz(1,7);
  cout<<"pierwszy ulamek : ";
  ul1.wypisz();
  cout<<'\n';
  cout<<"drugi ulamek : ";
  ul2.wypisz();
  cout<<'\n';
  pom(ul1,ul2,ul5);
  cout<<"wynik mnozenia u1*u2 wynosi : ";
  ul5.wypisz();
  cout<<'\n';
  pod(ul1,ul2,ul5);
  cout<<"wynik mnozenia u1/u2 wynosi : ";
  ul5.wypisz();
   cout<<'\n';
  pod(ul2,ul1,ul5);
  cout<<"wynik mnozenia u2/u1 wynosi : ";
  ul5.wypisz();
   cout<<'\n';
  cout<<"podaj licznik3 : ";
  cin>>licz;
  do
  {
     cout<<"podaj mianiownik 3";
     cin>>mian;
     w=ul3.zapisz(licz,mian);          
  }while(w==0);
  cout<<"podaj licznik4 : ";
  cin>>licz;
  do
  {
     cout<<"podaj mianiownik 4";
     cin>>mian;
     w=ul4.zapisz(licz,mian);          
  }while(w==0);
  cout<<"twoj ulamek3:";
  ul3.wypisz();
  cout<<"twoj ulamek4:";
  ul4.wypisz();
  pom(ul3,ul4,ul5);
  cout<<"wynik mnozenia u3*u4 wynosi : ";
  ul5.wypisz();
  cout<<'\n';
  pod(ul3,ul4,ul5);
  cout<<"wynik mnozenia u3/u4 wynosi : ";
  ul5.wypisz();
   cout<<'\n';
  pod(ul4,ul4,ul5);
  cout<<"wynik mnozenia u4/u3 wynosi : ";
  ul5.wypisz();
   cout<<'\n';
  cout<<"\n\n";
  
    return 0;
}
