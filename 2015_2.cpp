#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

struct gubi{
char data[20];
int kod;
double gramaj;
int kachestwo;
char ime[50];
}; gubi mushrooms[5000];

double gubki[] = {};

void input(int t)
{
for(int i=0;i<t;i++)
{
cout<<"Data: ";
cin>>mushrooms[i].data;
cout<<"Kod: ";
cin>>mushrooms[i].kod;
cout<<"Gramaj: ";
cin>>mushrooms[i].gramaj;
cout<<"Kachestwo: ";
cin>>mushrooms[i].kachestwo;
cout<<"Ime: ";
cin>>mushrooms[i].ime;
cin.ignore();
cout<<"\n";
}
}

void output(int t)
{
for(int i=0;i<t;i++)
{
cout<<mushrooms[i].data[6]<<mushrooms[i].data[7]<<"."<<mushrooms[i].data[4]<<mushrooms[i].data[5]<<"."
<<mushrooms[i].data[0]<<mushrooms[i].data[1]<<mushrooms[i].data[2]<<mushrooms[i].data[3]<<" "<<mushrooms[i].data[8]<<mushrooms[i].data[9]<<":"<<mushrooms[i].data[10]<<mushrooms[i].data[11]<<", ";
	
switch (mushrooms[i].kod){
case 1: cout<<"manatarka";
break;
case 2: cout<<"pechurka";
break;
case 3: cout<<"kladnica";
break;
case 4: cout<<"pachi krak";
break;
case 5: cout<<"surnela";
break;
default: cout<<"drug vid guba";
}
			
cout<<", "<<mushrooms[i].gramaj/1000<<"kg"<<", ";
		
switch(mushrooms[i].kachestwo)
{
case 1: cout<<"1wo";
break;
case 2: cout<<"2ro";
break;
case 3: cout<<"3to";
break;
};
			
cout<<", "<<mushrooms[i].ime;
cout<<"\n";
}
}

void sort1(int t)
{
gubi q;
for(int i=0;i<t;i++)
for(int j=t-1;j>i;j--)
if(mushrooms[j-1].kachestwo > mushrooms[j].kachestwo)
{q=mushrooms[j-1];mushrooms[j-1]=mushrooms[j];mushrooms[j]=q;}
		
}

void sort2(int t)
{
gubi p;
for(int i=0;i<t;i++)
for(int j=t-1;j>i;j--)
if(mushrooms[j-1].gramaj < mushrooms[j].gramaj)
{p=mushrooms[j-1];mushrooms[j-1]=mushrooms[j];mushrooms[j]=p;}	
}


void spisuk(int t)
{
for(int i=0;i<t;i++){
if(mushrooms[i].kod==1)
{gubki[0]=gubki[0] + mushrooms[i].gramaj;}
}

for(int i=0;i<t;i++){
if(mushrooms[i].kod==2)
{gubki[1]=gubki[1] + mushrooms[i].gramaj;}
}
	
for(int i=0;i<t;i++){
if(mushrooms[i].kod==3)
{gubki[2]=gubki[2] + mushrooms[i].gramaj;}
}
	
for(int i=0;i<t;i++){
if(mushrooms[i].kod==4)
{gubki[3]=gubki[3] + mushrooms[i].gramaj;}
}
	
for(int i=0;i<t;i++){
if(mushrooms[i].kod==5)
{gubki[4]=gubki[4] + mushrooms[i].gramaj;}
}
for(int i=0;i<t;i++)
{
if(mushrooms[i].kod>5)
{gubki[5]=gubki[5] + mushrooms[i].gramaj;}
}
}

void spisuk2(int t)
{
for(int i=0;i<6;i++)
cout<<gubki[i]<<endl;
}

void sort4()
{
double s;
for(int i=0;i<6;i++){
for(int j=5;j>i;j--){
if(gubki[j-1] < gubki[j])
{s=gubki[j-1];gubki[j-1]=gubki[j];gubki[j]=s;}
}
}
}

int main()
{
int k;
cout<<"Broi na dostawkite: ";
cin>>k;
cout<<"\n";
input(k);
output(k);
sort2(k);
sort1(k);
cout<<"\n"<<"SLED SORTIROWKATA"<<"\n";
output(k);
cout<<"\n";
spisuk(k);
	
spisuk2(k);
sort4();
cout<<"\n";
spisuk2(k);
return 0;
}
