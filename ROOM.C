#include<stdio.h>
void room(int,int,int);
int main()
  {
    int n,first_time,second_time;
    printf("Enter matrix no\n");
    scanf("%d",&n);
    printf("Enter first and second time\n");
    scanf("%d%d",&first_time,&second_time);
    room(n,first_time,second_time);
    return 0;
  }
void room(int n,int first_time,int second_time)
  {
    int f=0,d=0,done=0;
    int i=1,j=1,x=n,y=n,a,b;
    int first=n*n*first_time;

    int second=n*n*second_time;
    while(first>0 && second>0)
      {
      int t=0,t1=0;
      for(a=0;a<first_time;a++)
	{
	if(first>0)
	{

	  if(i!=n && j==n && f==0)
	    {
	     i++;
	     t=1;
	     f=1;

	    }
	  else if(i!=n && j!=1 && f==1)
	     {

	       j--;
	     }
	  else if(i!=n && j==1 && f==1)
	    {
	     i++;
	     t=1;

	    }
	  else
	    {
	     j++;

	    }
	 if(j==1 && t==1)
	 {
		f=0;
		t=0;
		}
	 if(i==x && y==j)
	   {
	     printf("Room where both will meet is %d%d\n",i,j);
	     done=1;
	     break;
	   }

	}

     }

	first-=first_time;
	for(b=0;b<second_time;b++)
	{
	if(second>0)
	{
	  if(x!=1 && y==1 && d==0)
	    {
	    x--;
	    t1=1;
	    d=1;

	    }
	    else if(x!=n && y!=n && d==1)
	     {

	       y++;

	     }
	     else if(x!=n && y==n && d==1)
	     {
	     x--;
	     t1=1;

	     }
	     else
	     {
	     y--;

	     }
	      if(y==n && t1==1)
	      {
	       d=0;
	       t1=0;
	      }
	     if(i==x && y==j)
	{
	printf("Room where both will meet is %d%d\n",i,j);
	done=1;
	break;
	}
	}

	}

	second-=second_time;
       if(done==1)
	 break;

      }
  }