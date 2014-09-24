#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
 int liczba,i=0,max=0,min=9999;
 string str;
 fstream plik("lustro.txt");
 plik.open("lustro.txt");
 if( plik.good() == true )
 {
  plik.open("lustro.txt");
  if( plik.good() == true )
  {
   while(!plik.eof())
   {
    plik >> str;
   	if((str[0]==str[str.size()])&&(str[1]==str[str.size()]-1)&&(str[2]==str[str.size()-2]))
   	{
 	 cout<<str<<"  ";
    }
   }    
   plik.close();
   }
   else
   	   cout<<"Don't work, go out"<<'\n';
 }
 return 0;
}
