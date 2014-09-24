#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
 int liczba,i=0,max=0,min=9999;
 string str1,str2;
 fstream plik,wyniki;
 plik.open("lustro.txt",ios::in);
 wyniki.open("wyniki_2.txt",ios::out);
  if( plik.good() == true )
  {
   while(!plik.eof())
   {
    plik >> str1;
    plik >> str2;
    if (str1[str1.length()]==str2[str2.length()])
       for(int i=0;i<str1.length();i++)
   	   if(str1[i]==str2[str2.size()-i-1])
   	{
 	 cout<<str1<<","<<str2<<endl;
    }
   }    
   plik.close();
 }
 return 0;
}
