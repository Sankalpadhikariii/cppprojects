# include<iostream>
using namespace std;
class Pattern
{
	public:
	int pyramid()
	{
		int i,j,k,rows;
		cout<<"enter no of rows";
		cin>>rows;
		for(i=1; i<=rows; i++)
		{
			for(k=i; k<rows; k++)
			{
			cout<<" ";
		}
		for(j=1; j<=2*i-1; j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
}
};
int main()
{
	Pattern myobj;
	myobj.pyramid();

}

