#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
#include <sstream> 
using namespace std;
class order
{
	int t;
public:
	void display1()
	{
		cout<<"\nthis is menu page:\n";
		cout<<"food list::\n";
		cout<<"*************\npizza corner:\n";
		cout<<"1. margarita pizza(110/-)\t\t\t2. cheese pizza(100/-)\t\t\t3. veggie lovers pizza(130/-)\n";
		cout<<"4. combo country feast pizza(160/-)\t\t5. pappy paneer pizza(160/-)\t\t6. D'lite special pizza(200/-)\n";
		cout<<"7. cafe cheese bust pizza(210/-)\t\t8. onion capsicum pizza(150/-)";
		cout<<"\n*************\nsweet eats:\n";
		cout<<"9. all american muffin(140/-)\t\t\t10. choco rum ball(130/-)\t\t11. choco brownie(170/-)\n";
		cout<<"12. chocolate fantasy(270/-)\t\t\t13. sizzle dazzle brownie(110/-)\t14. cafe mocha(170/-)\n";
		cout<<"15. final my order\n";
		cout<<"\n\nselect item--among(1-14),or press 15 for final your list\n";
		option();
	}
	void option();
	
};
void order::option()
{
		int bill,d,a,c=1,i,t,j;
		int pu,f,x,value=1;
		string Q="";
		static int sum=0;
		static string s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13,s14,s=" ",r,u,A;
		
		do
		{	
			cin>>t;
			switch(t)
			{
			case 1: cout<<"margarita pizza";
					s1="\nmargraita pizza(110/-)";
					bill=110;
					sum=sum+bill;
					s=s+s1;
					break;
			case 2: cout<<"cheese pizza";
					bill=100;
					sum=sum+bill;
					s2="\ncheese pizza(100/-)";
					s=s+s2;
					break;
			case 3: cout<<"veggie lovers pizza";
					bill=130;
					sum=sum+bill;
					s3="\nveggie lovers pizza(130/-)";
					s=s+s3;
					break;
			case 4: cout<<"combo country feast pizza";
					bill=160;
					sum=sum+bill;
					s4="\ncombo country feast pizza(160/-)";
					s=s+s4;
					break;
			case 5: cout<<"pappy paneer pizza";
					bill=160;
					sum=sum+bill;
					s5="\npappy paneer pizza(160/-)";
					s=s+s5;
					break;	
			case 6: cout<<"D'lite special pizza";
					bill=200;
					sum=sum+bill;
					s6="\nD'lite special pizza(200/-)";
					s=s+s6;
					break;
			case 7: cout<<"cafe cheese bust pizza";
					bill=210;
					sum=sum+bill;
					s7="\ncafe cheese bust pizza(210/-)";
					s=s+s7;
					break;
			case 8: cout<<"onion capsicum pizza";
					bill=150;
					sum=sum+bill;
					s8="\nonion capsicum pizza(150/-)";
					s=s+s8;
					break;
			case 9: cout<<"all american muffin";
					bill=140;
					sum=sum+bill;
					s9="\nall american muffin(140/-)";
					s=s+s9;
					break;
			case 10: cout<<"choco rum ball";
					bill=130;
					sum=sum+bill;
					s10="\nchoco rum ball(130/-)";
					break;
			case 11: cout<<"choco brownie";
					bill=170;
					sum=sum+bill;
					s11="\nchoco brownie(170/-)";
					s=s+s11;
					break;
			case 12: cout<<"chocolate fantasy";
					bill=270;
					sum=sum+bill;
					s12="\nchocolate fantasy(270/-)";
					s=s+s12;
					break;
			case 13: cout<<"sizzle dazzle brownie";
					bill=110;
					sum=sum+bill;
					s13="\nsizzle dazzle brownie(110/-)";
					s=s+s13;
					break;
			case 14: cout<<"cafe mocha";
					bill=140;
					sum=sum+bill;
					s14="\ncafe mocha(140/-)";
					s=s+s14;
					break;
			case 15: system("cls");
					cout<<"\nyour order is:\n";
					for(i=0;s[i]!='\0';i++)
					{
						r[i]=s[i];
						cout<<s[i];
						if(s[i]=='\n')
						{
							cout<<c<<". ";
							c++;
						}
					}
					r[i]='\0';
					ko:
					cout<<"\n\nselect one:\n1. modify order\n2. final order\n";
					cin>>d;	
					switch(d)
					{
						case 1: cout<<"modify:-\n1.remove ordered item\n2.add item in order\n";
								cin>>a;
								switch(a)
								{
									case 1: cout<<"select item for remove";
											cin>>t;
										    c=0;
											for(i=0;r[i]!='\0';i++)
											{
												if(r[i]=='\n')
												{
													c++;
												}	
												if(c==t)
												{
													break;
												}
												u[i]=r[i];
											}
											pu=i;
											for(f=pu+1;r[f]!='\n';f++)
											{
												if(r[f]=='(')
												{	
													Q=Q+r[f+1]+r[f+2]+r[f+3];
													stringstream gee(Q);
													gee>>x;
													sum=sum-x;
													break;
												}
											}
								

											for(j=i+1;r[j]!='\n';j++);
											for(;r[j]!='\0';j++)
											{
												u[i++]=r[j];
											}
											u[i]='\0';
											c=0;
											for(i=0;u[i]!='\0';i++)
											{
												r[i]=u[i];
												s[i]=u[i];
												cout<<u[i];
												if(r[i]=='\n')
												{
													c++;
													cout<<c<<". ";
												}	
											}
											goto ko;
										break;
									case 2: cout<<"add item in list";
											display1();					
											option();
										break;
								}
								break;
						case 2: system("cls");
								cout<<"your order is:";
								c=0	;
								for(i=0;r[i]!='\0';i++)
								{
								//r[i]=s[i];
								cout<<r[i];
								if(r[i]=='\n')
									{   c++;
										cout<<c<<". ";
									
									}
								}
								cout<<"\n******************************\n";
								cout<<"*******************************\n\n";
								cout<<"\tTotal Amount = "<<sum;
								exit(0);
					}
			}
		}while(1);
}	
class account:public order
{
	string name,name1,mob,mail,pass,pass1;
public:
	void acc()
	{
		int i;
		cout<<"select your choice:\n1.signup\n2.login\n";
		cin>>i;
		switch(i)
		{
			case 1: signup();
					break;
			case 2: login();
					break;
		}
	}	
	void signup()
	{	 
		 fstream of;
		 of.open("e:\\food3.txt",ios::out|ios::app);
		 cout<<"\nyou selected sign up\n";
		 cout<<"enter your first name:";
		 cin>>name;	
		 cout<<"enter your 2nd name:";
		 cin>>name1;
		 cout<<"enter your mobile no:";
		 m:
		 cin>>mob;
		 if(mob.length()!=10)
		 {
		 	cout<<"\tyour mob no. shold be of 10 digits,re-enter your mob no:";
			 goto m;
		 }
		 cout<<"enter your mail address:";
		 cin>>mail;
		 cout<<"enter your password:";
		 cin>>pass;
		 cout<<"confirm your password:";
		 p:
		 cin>>pass1;
		 if(pass!=pass1)
		 {
		 	cout<<"\tpassword mismatch,correct your password:";
		 	goto p;
		 }
		 cout<<"\ncongrats you have successfully login";
		 of<<name<<"\t"<<name1<<"\t"<<pass<<"\n";
		 of.close();
		 system("cls");
		 display1();
	}
	void login()
	{
		 string name3,name4,pass2;
		 fstream of2;
		 of2.open("e:\\food3.txt",ios::in);
		 lg:
		 cout<<"you selected login";
		 cout<<"enter your first name:";
		 cin>>name3;	
		 cout<<"enter your 2nd name:";
		 cin>>name4;
		 cout<<"enter your password:";
		 cin>>pass2;
		 while(!of2.eof())
		 {
		 	of2>>name>>name1>>pass;
		 	if((name.compare(name3)==0) && (name1.compare(name4)==0 )&& (pass.compare(pass2)==0))
		 	{
		 		cout<<"successfully login:\n";
		 		system("cls");
		 		 of2.close();
		 		display1();
		 		break;
		 	}
	     }
		cout<<"re-enter details carefully:\n";
 		goto lg;
		of2.close();
	}
};
class welcome:public account
{
public:
	welcome()
	{
		cout<<"*******************************************************************************************\n";
		cout<<"*-----------------------------------------------------------------------------------------*\n";
		cout<<"*******************************************************************************************\n";
		cout<<"*|\t\t\t\t\t\t\t\t\t\t\t|*\n";
		cout<<"*|\t\t\t\t\t\t\t\t\t\t\t|*\n";
		cout<<"*|\t\t\t\t\t\t\t\t\t\t\t|*\n";
		cout<<"*|\t\t\t\t\t\t\t\t\t\t\t|*\n";
		cout<<"*|\t\t\t\t\t\t\t\t\t\t\t|*\n";
		cout<<"*|\t\t\t\t\t\t\t\t\t\t\t|*\n";
		cout<<"*|\t\t\t\t\t\t\t\t\t\t\t|*\n";
		cout<<"*|\t\t\t\twelcome to food billing system\t\t\t\t|*\n";
		cout<<"*|\t\t\t\t\t\t\t\t\t\t\t|*\n";
		cout<<"*|\t\t\t\t\t\t\t\t\t\t\t|*\n";
		cout<<"*|\t\t\t\t\t\t\t\t\t\t\t|*\n";
		cout<<"*|\t\t\t\t\t\t\t\t\t\t\t|*\n";
		cout<<"*|\t\t\t\t\t\t\t\t\t\t\t|*\n";
		cout<<"*|\t\t\t\t\t\t\t\t\t\t\t|*\n";
		cout<<"*|\t\t\t\t\t\t\t\t\t\t\t|*\n";
		cout<<"*******************************************************************************************\n";
		cout<<"*|----------------------------------------------------------------------------------------*\n";
		cout<<"*******************************************************************************************\n";
		system("pause");
	   	system("cls");
	   	acc();
	}
};
int main()
{
	welcome obj;
	return 0;
}
