#include <iostream>
#include <conio.h>
#include <cmath>
#include <stdlib.h>
#include <ctime>
//#include <snake.h>
using namespace std;

int x=0 , y=0 ,r;

int mp(int a)
{
int m[10]={50,25,38,90,60,75};
int p[10]={80,63,95,20,10,18},b=a,i;
for(i=0;i<6;i++)
if(a==m[i])
b=p[i];
return b;
}

void tas ( int id )
{
	 getch();
	 srand(time(0));
	 r=rand()%6 +1;
	 cout<<"\n tas = " <<r;
	 if (id==1)
	 {
        if(x==0&& r==6)
        {x=1;r=0;}
        if(x>0)
	 	x+=r;
	 	 x=mp(x);
	 	 	 	if(x==y)
                y=1;
	 	 if(x>100)
	 	 x-=r;
	 	cout<<"\t position X= " <<x;
	 	cout<<"\n *****************"<<endl;
	 	if (x>1&&r==6)
	 	tas(1);
	 }



	 if (id==2)
	 {
        if(y==0 && r==6) // ba 6 shoro kone
        y=1;
        if(y>0) // vasate bazi
	 	y+=r;
	 	y=mp(y);
	 	if(y==x) //zadan mohre
                x=1;
 	 if(y>100)
 	 if(y>0)
	 	 y-=r; // mosavi 100 beshe
	 	cout<<"\t position Y= "<<y;
	 	cout<<"\n *****************"<<endl;
	 	if(r==6)
	 	tas(2);
	 }



}
int main ()
{
	cout<<" Ye klid re bzn ";
	while (x<100 & y<100)
	{
		tas(1);
		tas(2);
	}
	if (x>y)
	cout<<"\n X is winner " ;
	else
	cout<<" \n Y is winner ";
	getch();
}






