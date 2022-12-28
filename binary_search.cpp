//binary search
//binary search
#include<iostream>
using namespace std;

class binary
{
	public:
	void binary_search();
	int i,l,r,mid,roll[100],n,key;	
};
void binary::binary_search()
{
	l=0,r=n-1;
	int flag=0;
	cout<<"Enter total number of students: "<<endl;
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
	while(l<=r)
	{	mid=(l+r)/2;
		if(key==roll[mid])
		{
			cout<<"Roll number found at index:"<<mid<<endl;
			flag=1;
			break;
			
			
		}
		else if(key<roll[mid])
		{
			r=mid-1;
		}
		else
		{
			l=mid+1;
		}
	}
	if(flag==0)
	{
		cout<<"\nElement not found";
	}
	
}
int main()
{
	binary obj;
	obj.binary_search();
	return 0;
}
