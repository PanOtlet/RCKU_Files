#include<iostream>
#include<cmath>

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
  
  void skracaj();
  u()
  {
       licznik=1;
       mianownik=1;
  }
  u(int l,int m);
};

u::u(int l,int m)
{
   licznik=l;
   if(m!=0)
      mianownik=m;
   else
      cout<<"mainowni nie moze miec watosci 0";
};

void u::skracaj()
{
     int a=abs(licznik);
     int b=abs(mianownik);
     while (a!=b)
           if (a>b)
              a=a-b;
           else
               b=b-a;
     licznik=licznik/a;
     mianownik=mianownik/a;
}

u pom(u &u_1,u &u_2)
    {
      u u_3;
      u_3.licznik=u_1.licznik*u_2.licznik;
      u_3.mianownik=u_1.mianownik*u_2.mianownik;
      return u_3;
    }
u pod(u &u_1,u &u_2)
    {
      u u_3;
      u_3.licznik=u_1.licznik*u_2.mianownik;
      u_3.mianownik=u_1.mianownik*u_2.licznik;
      return u_3;
    }


int main()
{
  u ul1(4,5),ul2(1,7);
  int licz,mian,w;
  cout<<"pierwszy ulamek : ";
  ul1.wypisz();
  cout<<'\n'<<"Po skroceniu: ";
  ul1.skracaj();
  ul1.wypisz();
  cout<<'\n';
  cout<<"drugi ulamek : ";
  ul2.wypisz();
  cout<<'\n'<<"Po skroceniu: ";
  ul2.skracaj();
  ul2.wypisz();
  cout<<'\n';
  u ul5=pom(ul1,ul2);
  cout<<"wynik mnozenia u1*u2 wynosi : ";
  ul5.wypisz();
  cout<<'\n'<<"Po skroceniu: ";
  ul5.skracaj();
  ul5.wypisz();
  cout<<'\n';
  ul5=pod(ul1,ul2);
  cout<<"wynik mnozenia u1/u2 wynosi : ";
  ul5.wypisz();
   cout<<'\n';
  ul5=pod(ul2,ul1);
  cout<<"wynik mnozenia u2/u1 wynosi : ";
  ul5.wypisz();
  cout<<'\n';
  cout<<"podaj licznik 3: ";
  cin>>licz;
  do
  {
     cout<<"podaj mianiownik";
     cin>>mian;         
  }while(mian==0);
  u ul3(licz,mian); 
  cout<<"podaj licznik 4: ";
  cin>>licz;
  do
  {
    cout<<"podaj mianownik: ";
    cin>>mian;
  }while(mian==0);
  u ul4 (licz,mian);
  cout<<"twoj ulamek 3:";
  ul3.wypisz();
  cout<<'\n'<<"Po skroceniu: ";
  ul3.skracaj();
  ul3.wypisz();
  cout<<"twoj ulamek 4:";
  ul4.wypisz();
  cout<<'\n'<<"Po skroceniu: ";
  ul4.skracaj();
  ul4.wypisz();
  ul5=pom(ul3,ul4);
  cout<<'\n'<<"Program nie dziala. lol";
  ul5.wypisz();
  cout<<'\n'<<"Po skroceniu: ";
  ul5.skracaj();
  ul5.wypisz();
  ul5=pod(ul3,ul4);
  cout<<'\n'<<"Wyniwkwwwwwwwwwwwwwwwwwwwwwwwwww";
  ul5.wypisz();
  cout<<'\n'<<"Po skroceniu: ";
  ul5.skracaj();
  ul5.wypisz();
  ul5=pod(ul4,ul3);
  cout<<'\n'<<"nie wiem co robie. lol";
  ul5.wypisz();
  cout<<'\n'<<"Po skroceniu: ";
  ul5.skracaj();
  ul5.wypisz();
  cout<<"\n\n";
  system("pause");
  return 0;
}
