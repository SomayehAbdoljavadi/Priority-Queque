#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<iomanip.h>
#include<string.h>
#include<assert.h>

//____________________________CLASS PIRORITY QUEUE______________________________

class priorityqueue
{
  private:
	  int *q;
	  const int front;
	  int rear;
	  const int size;

   public:

       priorityqueue(int=10);
       int empty()const;
       int full()const;
       void enqueue(int);
       int delqueue();
       void reverse();
       ~priorityqueue();


};

//____________________________PIRORITY QUEUE______________________________

priorityqueue::priorityqueue(int s):size(s),front(0)
	 {
	   q=new int[size];
	   for(int i=front;i<size;i++)
	     *(q+i)=1000;
	   rear=0;

	 }
//____________________________EMPTY______________________________

int priorityqueue::empty()const
	 {

	   if (rear==front)
	     return(1);
	   else
	     return(0);

	 }
//____________________________FULL______________________________

int priorityqueue::full()const
	 {
	 if (rear==size)
	   return(1);
	 else
	   return(0);


	 }

//____________________________EN QUEUE______________________________

void priorityqueue::enqueue(int x)
	 {
	   int i=0;
	   if (full())
	     cout<<endl<<"is queue full"<<endl;
	   else
	     {
	       i=0;
	       while(*(q+i)<x)
		 i++;

	       for(int j=rear;j>=i;j--)
		 *(q+j+1)=*(q+j);

	       *(q+i)=x;
	       rear++;
	     }
	   cout<<endl<<"queue is :"<<endl;
	   for(i=front;i<rear;i++)
	     cout<<"  "<<*(q+i);
	 }

//____________________________DEL QUEUE______________________________

int priorityqueue::delqueue()
	 {

	   int n=*(q);
	   for(int i=front;i<rear;i++)
	     *(q+i)=*(q+i+1);

	   rear--;

	   cout<<endl<<"del is :  "<<n<<endl;
	   cout<<endl<<"queue is :"<<endl;
	   for(i=front;i<rear;i++)
	     cout<<"  "<<*(q+i);

	   return n;

	 }

//____________________________PIRORITY REVERSE______________________________

void priorityqueue::reverse()
	 {
	   int *a;
	   a=new int[size];
	   for(int i=0;i<size;i++)
	     *(a+i)=0;

	   for(i=0;i<rear;i++)
	     *(a+i)=*(q+i);

	   int j=rear;
	   for(i=0;i<rear;i++)
	     *(q+i)=*(a+--j);

	   cout<<endl<<"reverse is :"<<endl;
	   for(i=front;i<rear;i++)
	     cout<<"  "<<*(q+i);



	 }

//____________________________PIRORITY QUEUE______________________________

priorityqueue::~priorityqueue()
	 {

	 delete q;

	 }


//____________________________MAIN______________________________

void main()
{
 clrscr();
 priorityqueue  qu;
 int a=0;
//____________________________enqueue______________________________
 cout<<endl<<"enter number &1000==exit  ";
 cin>>a;
 while(a!=1000)
   {
     qu.enqueue(a);
     cout<<endl<<"enter number &1000==exit  ";
      cin>>a;
   }

//____________________________DELQUEUE______________________________

 cout<<endl<<"		    OUTPUT DEIQUEUE :		    "<<endl;
qu.delqueue();

//____________________________REVERSE______________________________

 cout<<endl<<"		    OUTPUT REVERSE :		    "<<endl;
qu.reverse();

getch();
}
