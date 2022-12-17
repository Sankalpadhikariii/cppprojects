#include<bits/stdc++.h>
using namespace std;
class Armstrong
{
	private:
		int number;
		public:
			int armstrong(int n)
			{
				 number = n;
				int index,remain,result=0;
				while (number)
				{
					remain =number%10;
					result=result +(remain * remain * remain);
					number =number/10;
				 } 
				 return result;
			}
};
int main()
{
	Armstrong A1,A2;
	int n,result;
	cout<<"Enter a number :"<<endl;
	cin>>n;
	result=A1.armstrong(n);
	if (result == n){
		cout<<n<<"Is Armstrong Number";
	}
	else {
		cout<<n<<"Not a Armstrong Number";
	}
}
