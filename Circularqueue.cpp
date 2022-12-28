//Assignment no 14 
//Circular Queue
#include<iostream>
using namespace std;
class queue
{
public:
	int front;
	int rear;
	int arr[25];
	int size;
	void enqueue();
	int dequeue();
	int isfull();
	int isempty();
	void display();
	void input();
};
void queue::input()
{
	rear=front=-1;
	cout<<"Enter total no of orders:";
	cin>>size;
}
void queue::enqueue()
{
	int n;
	if(isfull()==1)
	{
		cout<<"\n Overflow";
	}
	else
	{	
		cout<<"\n Enter the order number:";
		cin>>n;
		if(front==-1 && rear==-1)
		{
			front=rear=0;
			arr[rear]=n;
		}					
		else
		{
		rear=(rear+1)% size;
		arr[rear]=n;
		}
	cout<<"Order placed successfully"<<endl;
}
}
int queue::isfull()
{
	if((rear+ 1)% size==front)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int queue::dequeue()
{
	int n;
	if(isempty()==1)
	{
		cout<<"\nThere are no unserved orders";
		
	}
	else{
	
		if(front==rear)
		{
			cout<<"The served order number is:"<<arr[front];
			n=arr[front];
			arr[front]=0;
			front=rear=-1;
		}
		else
		{
			cout<<"The served order number is:"<<arr[front];
			n=arr[front];
			arr[front]=0;
			front=(front+1)%n;
			
		}
	

		
	}
}

int queue::isempty()
{
	if(rear==-1&& front==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void queue::display()
{ 	
	cout<<"Unserved orders are:"<<endl;
	int i;
	i=front;
	while(i!=rear)
	{
		cout<<arr[i]<<endl;
		i=(i+1)% size;
	}
	cout<<arr[rear]<<endl;
}
int main()
{
	queue q;
	q.input();
	int ch,choice;
	do{
	cout<<"\n*********************";	
	cout<<"\n1.Place the order";
	cout<<"\n2.Serve the order";
	cout<<"\n3.Display orders";
	cout<<"\n4.Exit";
	cout<<"\n*********************";
	
		cout<<"\nWelcome to Pizza Home....What do want?:";
		cin>>ch;
		switch(ch)
		{
			case 1: q.enqueue();
			break;

			case 2: q.dequeue();
			break;

			case 3: q.display();
			break;

			case 4:
			cout<<"\nChoice for exit";

			default:cout<<"\nInvalid Choice"; 
		}

	
}while(ch!=4);
return 0;
}
