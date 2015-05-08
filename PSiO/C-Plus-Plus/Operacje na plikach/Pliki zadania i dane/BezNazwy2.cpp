#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	string str1,str2,nazwa_p="lustro.txt";
	fstream plik;
		plik.open(nazwa_p.c_str());
        if( plik.good() == true )
        {
            while(!plik.eof())
            {
 			   bool ch=true;
		       plik >> str1;
 			   plik >> str2;
 			   if(str1.size()==str2.size())
 			   	   for(int i=0;i<str1.size();i++)
  	   		           if(str1[i]==str2[str2.size()-1-i])
  	   		           ;
  	   		           else
  	   		           {
  	   		           	ch=false;
  	   		           	break;
  	   		           }
  	   		   else
					ch=false;      
               if(ch==true)
		   		 cout<<str1<<", "<<str2<<'\n';   
 			   {
            }
            }
     
            plik.close();
         }
         else
		cout<<"siewo"<<'\n';
	
	
	return 0;
}
