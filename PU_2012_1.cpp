#include <iostream>
#include <string.h>
using namespace std;


	struct students {
	char name[50];
	char city[20];
	char school[30];
	int result;
};
students uchenici[1000];


void input(int t)
{
	
	
	for(int i=0;i<t;i++)
	{
		cout <<"Name: ";
		cin.getline(uchenici[i].name,50);
		cout <<"City: ";
		cin.getline(uchenici[i].city,20);
		cout <<"School: ";
		cin.getline(uchenici[i].school,30);
		cout <<"Result: ";
		cin >> uchenici[i].result;
		cout <<"\n";
		cin.ignore();
	}
	
}


void output(int t)
{
	
	for(int i=0;i<t;i++)
	{
		cout << uchenici[i].name << "," << uchenici[i].city << ",'" << uchenici[i].school << "'," << uchenici[i].result << " points " <<"\n";
	}
	
	
}

void sort(int t)
{
 	  students r;
      for(int i=0;i<t;i++)
      for (int j=t-1;j>i;j--)
      if (uchenici[j-1].result<uchenici[j].result)
      {r=uchenici[j-1];uchenici[j-1]=uchenici[j];uchenici[j]=r;}	
}

void spisuk(int t,int average)
{
for(int i=0;i<t;i++)
if((strstr(uchenici[i].school,"SOU")>0)&&(uchenici[i].result>average))
{cout << uchenici[i].name << ","<< uchenici[i].city << ",'" << uchenici[i].school << "'," << uchenici[i].result << " points " <<"\n";}
}

void sort2(int t)
{
	students o;
	for(int i=0;i<t;i++)
	for (int j=t-1;j>i;j--)
	if(strcmp(uchenici[j-1].school,uchenici[j].school)>0)
	{o=uchenici[j-1];uchenici[j-1]=uchenici[j];uchenici[j]=o;}
	else
	{
	if((strcmp(uchenici[j-1].school,uchenici[j].city)==0) && (uchenici[j-1].result<uchenici[j-1].result))
	{o=uchenici[j-1];uchenici[j-1]=uchenici[j];uchenici[j]=o;}
	}
}

void grad(int t,char grad[])
{
	for(int i=0;i<t;i++)
	if(strcmp(uchenici[i].city,grad)==0)
	{cout << uchenici[i].name << ","<< uchenici[i].city << ",'" << uchenici[i].school << "'," << uchenici[i].result << " points " <<"\n";}
	
}
int main()
{
    int k;
    cout <<"Vyvedete broi na uchastnici: ";
    cin >>k;
    cout <<"\n";
    cin.ignore();
    
    cout <<"Vyvedete danni za vseki uchastnik"<<"\n"<<"\n";
	input(k);
	sort(k);
	cout<<"Daniite na vsichki uchastnici"<<"\n"<<"\n";
	output(k);
	sort2(k);
	
	char grad2[20];
	cout <<"\n"<<"Vyvedete grad: ";
	cin >> grad2;
	cout <<"\n"<<"Uchastnici ot posocheniqt grad: "<<"\n"<<"\n";
	grad(k,grad2);
	
	
	int sum = 0;
	for (int i=0;i<k;i++)
	{
		sum = sum + uchenici[i].result;	
	}
	int sredno;
	sredno = sum/k;
	
	cout <<"\n"<<"Spisyk na uchastnicite v SOU"<<"\n";
	spisuk(k,sredno);
	return 0;
}














