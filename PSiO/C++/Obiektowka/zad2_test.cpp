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

int main()
{
  u ul1(4,5),ul2(1,7);
  int licz,mian,w;
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
  }while(mian==0);
  u ul3(licz,mian); 
  cout<<"twoj ulamek:";
  ul3.wypisz();
  cout<<"\n\n";
  
    return 0;
}
