//linear search
#include<iostream>
using namespace std;

class linear
{
	public:
	void linear_search();
	int n,i,key,roll[];			
};
void linear::linear_search()
{
	cout<<"Enter total number of students:"<<endl;
	cin>>n;
	cout<<"Enter roll numbers of students:"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>roll[i];
	}
	//display array
	cout<<"Roll number of students are:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<roll[i]<<" ";
	}
	
	cout<<"\nEnter the roll which have to search:"<<endl;
	cin>>key;
	//search in array
	for(i=0;i<n;i++)
	{
		if(roll[i]==key)
		{
			cout<<"Roll number found at index:"<<i<<endl;
			break;
		}
	}
	if(i==n)
	{
		cout<<"Roll number not found"<<endl;
		
	}
	
	
}
int main()
{
	linear obj;
	obj.linear_search();
	return 0;
}
