//stack
#include<iostream>
using namespace std;

class stack
{	
	private:
		int i,top,array[5],n;
 	public:
	stack()
	{
		top=-1;
	}
	int isfull();
	int push();
	int isempty();	
	void pop();
	void display();

	
};

int stack::isfull()
{
	if(top==4)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int stack::push()
{
	if(isfull()==1)
	{
		cout<<"\nOverflow";
	}
	else
	{
		top++;
		cout<<"\nEnter the element to be push:";
		cin>>n;
		array[top]=n;
	}
}
int stack::isempty()
{
	if(top==-1)
	{
	return 1;
		
	}
	else
	{
		return 0;
	}
}
void stack::pop()
{
	if(isempty()==1)
	{
		cout<<"\nUnderflow";
		
	}
	else
	{
		cout<<"\nThe poped element is:"<<array[top];
		array[top]=0;
		top--;
	}
}
void stack::display()
{
	cout<<"\nStack elements are:";
	for(i=0;i<5;i++)
	{
		cout<<array[i]<<" ";
	}
}
int main()
{
	
	stack s;
	int ch;
	do
	{
		cout<<"\n1.push";
		cout<<"\n2.pop";
		cout<<"\n3.display";
		cout<<"\n4.exit";
		
		
		cout<<"\nEnter choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:{
				s.push();
				break;
			}	
			case 2:{
				s.pop();
				break;
			}
			case 3:{
				s.display();
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




