#include<iostream>
using namespace std;
class queue
{
	public:
	int i,n,rear,front,array[5];
	int isfull();
	int enqueue();
	int isempty();
	void dequeue();
	void display();
	queue()
	{
		front=rear=-1;
		}	
};

int queue::isfull()
{
	if(rear==4)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int queue::enqueue()
{	
	cout<<"Enter element to be inserted:"<<endl;
	cin>>n;
	if(isfull()==1)
	{
		cout<<"\nOverflow";
	}
	else
	{
		rear++;
		array[rear]=n;
	}
	
}
int queue::isempty()
{
	if(rear==front)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void queue::dequeue()
{
	if(isempty()==1)
	{
		cout<<"\nUnderflow";
	}
	else
	{	
		front++;
		cout<<"\nDeleted element is:"<<array[front];
		array[front]=0;
	}
}
void queue::display()
{
	cout<<"\nElements in queue are:";
	for(i=0;i<5;i++)
	{
		cout<<array[i]<<" ";
	}
}
int main()
{
	queue q;
	int ch;
	do{
		cout<<"\n1.enqueue";
		cout<<"\n2.dequeue";
		cout<<"\n3.display";
		cout<<"\n4.exit";
   		
   		cout<<"\nEnter the choice:";
   		cin>>ch;
   		
   		switch(ch)
   		{
   			case 1:{
   				q.enqueue();
				break;
			   }
			case 2:{
				q.dequeue();
				break;
			}
			case 3:{
				q.display();
				break;
			}
			case 4:{
				cout<<"\nExit";
				break;
			}
			default :{
				cout<<"\nInvalid choice";
				break;
			}
		   }
		   }while(ch!=4);
		   return 0;
}






