#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<iomanip.h>
#include<string.h>
#include<assert.h>
void main()
{
clrscr();
int q[100];
for(int i=0;i<100;i++)
 q[i]=100;
cout<<endl<<"enter number:  ";
int n;
int k=1;
cin>>n;
while (n!=1000)
{
i=0;
while(q[i]<n)
	       i++ ;

	    for(int j=k;j>=i;j--)
		    q[j+1]=q[j];
	    q[i]=n;


cout<<endl<<"enter number :  ";
cin>>n;
k++;
}
cout<<endl;
for(i=0;i<k-1;i++)
cout<<q[i];
getch();

cout<<endl<<"enter 1 for del :  ";
cin>>n;
if (n==1)
n=q[0];
for(i=0;i<k-1;i++)
 q[i]=q[i+1];

cout<<endl<<"del:   "<<n<<endl;
for(i=0;i<k-2;i++)
cout<<q[i];


int a[100];
cout<<endl<<"enter 1 for REVERSE :  ";
cin>>n;
if (n==1)


	    for(i=0;i<100;i++)
	    a[i]=0;

	   for( i=0;i<k-2;i++)
	     a[i]=q[i];
	   int j=k-2;
	   for(i=0;i<k;i++)
	     q[i]=a[--j];


cout<<endl<<"reverse is "<<endl;
for(i=0;i<k;i++)
cout<<q[i];


getch();
}