#include <iostream.h>
#include <conio.h>

main ()
{
unsigned int x, y, obeb=1, enk;
cout<<"1. sayiyi giriniz:";
cin>>x;
cout<<"2. sayiyi giriniz:";
cin>>y;
enk=x;
if(y<enk)
		enk=y;
   for(int k=enk; k>1; k--)
   if (((x % k)==0) && ((y % k)==0))
	  {
		  obeb=k;
		  break;
	  }
 cout<<x<<" ve "<<y<<" icin obeb degeri "<<obeb<<" sayisidir";

 getch();
}

