#include<iostream>
#include<cmath>
using namespace std;

class ul
{
  private:
  int licznik;
  int mianownik;
	public:
    int zapisz(int l,int m);
    void wypisz()
    {
       cout<<licznik<<"/"<<mianownik;
    }
    	ul()
	{
		licznik=1;
		mianownik=1;
	}
	 	ul(int l,int m);
  void skc();
  friend ul pom(ul &u_1,ul &u_2);
  friend ul pod(ul &u_1,ul &u_2);

};

ul::ul(int l,int m)
{
   licznik=l;
   if(m!=0)
      mianownik=m;
   else
      cout<<"mainowni nie moze miec watosci 0";
};
void ul::skc()
{
	int a=abs(licznik);
	int b=abs(mianownik);
	while(a!=b)
		if(a>b)
			a=a-b;
		else
			b=b-a;
	licznik=licznik/a;
	mianownik=mianownik/a;
}
ul pom(ul &u_1,ul &u_2)
    {
      int l,m;
      ul u_3;
      u_3.licznik=u_1.licznik*u_2.licznik;
      u_3.mianownik=u_1.mianownik*u_2.mianownik;
      return u_3;
    }
ul pod(ul &u_1,ul &u_2)
    {
      int l,m;
      ul u_3;
      u_3.licznik=u_1.licznik*u_2.mianownik;
      u_3.mianownik=u_1.mianownik*u_2.licznik;
      return u_3;
    }
u dod (ulamek u_1, ulamek u_2)
{
      u u_3;
      int a=abs(u_1,mianownik);
      int b=abs(u_2,mianownik);
      int c=a, d=b;
      while (a!=b)
            if (a-b>0)
               a=a-b;
            else
                b=b-a;
      int nww=)c*d)/a;
      u_3.mianownik=nww;
      u_3.licznik=nww/c*u_1.licznik+nww/d*u_2.licznik;
      return u_3;
}


int main()
{
  ul ul1(4,5);
  ul ul2(1,7);
  int licz,mian,w;
  cout<<"pierwszy ulamek : ";
  ul1.wypisz();
  cout<<'\n';
  cout<<"poskruconiu:"<<'\n';
  ul1.skc();
  ul1.wypisz();
   cout<<'\n';
  cout<<"drugi ulamek : ";
  ul2.wypisz();
  
  cout<<'\n';
  cout<<"poskruconiu: ";
  ul2.skc();
  ul2.wypisz();
   cout<<'\n';
  cout<<"wynik mnozenia u1*u2 wynosi : ";
  ul ul5=pom(ul1,ul2);
  ul5.wypisz();
  cout<<'\n';
  cout<<"poskruconiu: ";
  ul5.skc();
  ul5.wypisz();
   cout<<'\n';
  cout<<"wynik mnozenia u1/u2 wynosi : ";
  ul5=pom(ul1,ul2);
  ul5.wypisz();
   cout<<'\n';
     cout<<"poskruconiu: ";
  ul5.skc();
  ul5.wypisz();
   cout<<'\n';
  cout<<"wynik mnozenia u2/u1 wynosi : ";
  ul5=pom(ul1,ul2);
  ul5.wypisz();
  cout<<'\n';
    cout<<"poskruconiu: ";
  ul5.skc();
  ul5.wypisz();
   cout<<'\n';
   //cout<<'\n';
  
  cout<<'\n';
  cout<<"podaj licznik 3: ";
  cin>>licz;
  do
  {
     cout<<"podaj mianiownik ulamek 3: ";
     cin>>mian;         
  }while(mian==0);
  ul ul3(licz,mian);
  cout<<"podaj licznik 4: ";
  cin>>licz;
   do
  {
     cout<<"podaj mianiownik ulamek 4: ";
     cin>>mian;         
  }while(mian==0);
  ul ul4(licz,mian);  
  cout<<"twoj ulamek 3:";
  ul3.wypisz();
  cout<<'\n';
  cout<<"poskruconiu: ";
  ul3.skc();
  ul3.wypisz();
   cout<<'\n';
  cout<<"twoj ulamek 4:";
  ul4.wypisz();
  ul5=pom(ul3,ul4);
  cout<<'\n';
    cout<<"poskruconiu: ";
  ul4.skc();
  ul4.wypisz();
   cout<<'\n';
  cout<<"wynik mnozenia u3*u4 wynosi : ";
  ul5.wypisz();
  cout<<'\n';
    cout<<"poskruconiu: ";
  ul5.skc();
  ul5.wypisz();
   cout<<'\n';
  ul5=pod(ul3,ul4);
  cout<<"wynik mnozenia u3/u4 wynosi : ";
  ul5.wypisz();
   cout<<'\n';
     cout<<"poskruconiu: ";
  ul5.skc();
  ul5.wypisz();
   cout<<'\n';
  ul5=pod(ul4,ul4);
  cout<<"wynik mnozenia u4/u3 wynosi : ";
  ul5.wypisz();
  cout<<'\n';
  cout<<"poskruconiu: ";
  ul5.skc();
  ul5.wypisz();
   cout<<'\n';
  cout<<"\n\n";
  
    return 0;
}
