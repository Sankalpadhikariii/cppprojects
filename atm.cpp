#include<bits/stdc++.h>
using namespace std;
class Bank
{
	private:
		string name ;
		long long accnumber;
		char type[10];
		long long amount=0;
		long long tot=0;
		public:
			void setData()
			{
				cout<<"Enter Name"<<endl;
				cin.ignore();
				getline(cin,name);
				cout<<"Enter Account Number"<<endl;
				cin>>accnumber;
				cout<<" Enter Type"<<endl;
				cin>>type;
			cout<<" Enter Balance"<<endl;
				cin>>tot;
				
			}
			void showData()
			{
				cout<<"Name:"<<name<<endl;
					cout<<"Account No:"<<accnumber<<endl;
						cout<<"Account Type:"<<type<<endl;
							cout<<"Balance:"<<tot<<endl;
			}
			void deposit()
			{
				cout<<"Enter amount to be deposited :";
				cin>>amount;
			}
			void showBal()
			{
				tot=tot + amount;
				cout<<"Total Balance is ::";
			}
			void withdraw()
			{
				int a,avai_balance;
				cout<<"Enter amount to withdraw"<<endl;
				cin>>a;
				avai_balance = tot - a;
				cout<<"Available Balance is"<<avai_balance;
			}
};
int main()
{
	Bank b;
	int choice;
	while (1) {
		cout<<"\n -------------------";
		cout<<"-----------------------";
		cout<<"WELCOME";
		cout<<"Enter your choice"<<endl;
		cout<<"\t1.Enter Name, account number, account type"<<endl;
		cout<<"\t2.Balance Enquiry "<<endl;
		cout<<"\t3.Deposit money "<<endl;
			cout<<"\t4.Show Total Balance "<<endl;
				cout<<"\t5.Withdraw Money "<<endl;
					cout<<"\t6.Cancel "<<endl;
					cin>>choice;
					switch(choice)
					{
						case 1:
							b.setData();
							break;
							case 2:
								b.setData();
								break;
								case 3:
									b.deposit();
									break;
									case 4:
										b.showBal();
										break;
										case 5:
											b.withdraw();
											break;
											case 6:
												exit(1);
												break;
												default:
													cout<<"Invalid Choice";
									
					}
	}
}
