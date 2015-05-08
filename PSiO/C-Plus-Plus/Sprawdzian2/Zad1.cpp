#include <iostream>
using namespace std;
int main()
{
    int n;
    for (n=1;n<=100;n++)
    {
        if (n%3==0)
           cout<<n<<'\n';
        else if (n%4==0)
             cout<<n<<'\n';
    }
    system("pause");
    return 0;
}
