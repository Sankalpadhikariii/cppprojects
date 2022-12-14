#include<bits/stdc++.h>
using namespace std;
class  even_number
{
 
	public:
int rows,sp,p,space,i;
public :
 input()
 {
 	cout<<"Enter the number of rows"<<endl;
cin>>rows;
 }
friend int view(even_number);
};
int view(even_number u){
	
	for(u.i=1; u.i<=u.rows; u.i++){
	for(u.sp=u.i; u.sp<u.rows;u.sp++)
	{
		cout<<" ";
	}
	for(u.p=1;u.p<=(2*u.i-1);u.p++)
	{
	
cout<<"*";		
	}
	cout<<endl;
}
}		
 
int main()
{
even_number u;
u.input();
view(u);
}
