#include<iostream>
using namespace std;

class matrix
{
	public:
	int i,j,k,r,c,m,n,p,x,y,temp,sum[100][100],sub[100][100],mul[100][100],trans[100][100],a[100][100],b[100][100],t[100][100];
	void addition();
	void subtraction();
	void multiplication();
	void transpose();
	void input();
	void t_input();
	void mult_input();
	
};

void matrix::input()
{
	cout<<"Enter no of rows:";
	cin>>r;
	cout<<"Enter no of columns:";
	cin>>c;
	//storing matrix element of matrix A
	cout<<"Enter elements for matrix A:"<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"Enter element a"<<"["<<i+1<<"]"<<"["<<j+1<<"]"<<":";
			cin>>a[i][j];
		}
	}
	cout<<"Enter elements for matrix B:"<<endl;
	//storing matrix element of matrix B
	for(i=0;i<r;i++)
	{
			for(j=0;j<c;j++)
		{
			cout<<"Enter element b"<<"["<<i+1<<"]"<<"["<<j+1<<"]"<<":";
			cin>>b[i][j];
		}
	}
	//Displaying matrix elements
	cout<<"Matrix A is:"<<endl;
	for(i=0;i<r;i++)
	{
			for(j=0;j<c;j++)
		{
			cout<<a[i][j]<<" ";
			if(j==c-1)
			{
				cout<<endl;
			}
		}
}
	cout<<"Matrix B is:"<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<b[i][j]<<" ";
			if(j==c-1)
			{
				cout<<endl;
			}
		}
		}
}
void matrix::addition()
{
	cout<<"Creating matrix for addition"<<endl;
	input();
	cout<<"Addition of matix A and B is:"<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
			cout<<sum[i][j]<<" ";
			if(j==c-1)
			{cout<<endl;
			}
		}
		
	}
}
void matrix::subtraction()
{
	cout<<"Creating matrix for subtraction"<<endl;
	input();
	cout<<"Subtraction of matix A and B is:"<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sub[i][j]=a[i][j]-b[i][j];
			cout<<sum[i][j]<<" ";
			if(j==c-1)
			{cout<<endl;
			}
		}
		
	}
}
void matrix::mult_input()
{	
	cout<<"Enter number of rows of matrix A:";
	cin>>m;
	cout<<"Enter number of columns of matrix A:";
	cin>>n;
	cout<<"Enter number of columns of matrix B:";
	cin>>p;
	cout<<"Enter the elements of matrix A:"<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"Enter element a"<<"["<<i+1<<"]"<<"["<<j+1<<"]"<<":";
			cin>>a[i][j];
		}
	}
	cout<<"Enter the elements of matrix B:"<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<p;j++)
		{
			cout<<"Enter element b"<<"["<<i+1<<"]"<<"["<<j+1<<"]"<<":";
			cin>>b[i][j];
		}
}
//Displaying matrix
  	cout<<"\nMatrix A is:"<<endl;
	  for(i=0;i<m;i++)
	{	cout<<endl;
		for(j=0;j<n;j++)
		{
			
			cout<<a[i][j]<<" ";
		}
	}  
	cout<<"\nMatrix B is:"<<endl;
		for(i=0;i<n;i++)
	{	cout<<endl;
		for(j=0;j<p;j++)
		{
			
			cout<<b[i][j]<<" ";
		}
	}  

}
void matrix::multiplication()
{	mult_input();
	cout<<"\nMultiplication of matrix is:";
	for(i=0;i<m;i++)
	{	cout<<endl;
		for(j=0;j<p;j++)
		{
			mul[i][j]=0;
			for(k=0;k<n;k++)
			{
				mul[i][j]=mul[i][j]+(a[i][k]*b[k][j]);
		}
	}
	}
	for(i=0;i<m;i++)
	{	cout<<endl;
		for(j=0;j<p;j++)
		{
	       cout<<mul[i][j]<<" ";
	   }
}

}

void matrix::t_input()
{	//input for transpose of matrix
	cout<<"Enter number of rows:";
	cin>>x;
	cout<<"Enter number of columns:";
	cin>>y;
	cout<<"Enter the matrix elements for transpose"<<endl;
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			cout<<"Enter element t"<<"["<<i+1<<"]"<<"["<<j+1<<"]"<<":";
			cin>>trans[i][j];
		}
	}
	cout<<"Original matrix is:"<<endl;
	for(i=0;i<x;i++)
	{	
		cout<<endl;
		for(j=0;j<y;j++)
		{
			cout<<trans[i][j]<<" ";
		}
	}
}
void matrix::transpose()
{   t_input();
	for(i=1;i<x;i++)
	{
		for(j=0;j<i;j++)
		{
			temp = t[i][j];
			t[i][j] = t[j][i];
			t[j][i] = temp;
		}
	}
	cout<<"\nTranspose of matrix is:"<<endl;
	for(i=0;i<x;i++)
	{
		cout<<"\n";
		for(j=0;j<y;j++)
		{
			cout<<trans[i][j]<<" ";
			
		}
	}
}
int main()
{
	matrix m;
	int ch;
	do{
	cout<<"\n************";
	cout<<"\n1.Addition";
	cout<<"\n2.Subtraction";
	cout<<"\n3.Multiplication";
	cout<<"\n4.Transpose";
	cout<<"\n5.Exit";
	cout<<"\n************";
		cout<<"\nEnter your choice:"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:{
				m.addition();
				break;
			}
			case 2:{
				m.subtraction();
				break;
			}
			case 3:{
				m.multiplication();
				break;
			}
			case 4:{
				m.transpose();
				break;
			}
			case 5:{
				cout<<"Exit";
				break;
			}
			default:{
				cout<<"Invalid choice";
				break;
			}
			
		}		
	}while(ch!=5);
return 0;	
}






