#include <iostream>
#include <string.h>
using namespace std;

struct jivotni{
char name[30];
char species[300];
int age;
char ownersname[40];	
};
jivotni pets[160];

void input(int t)
{
for(int i=0;i<t;i++)
{
		
cout<<"Ime: ";
cin.getline(pets[i].name,30);
cout<<"Vid: ";
cin.getline(pets[i].species,300);
cin>>pets[i].species;
cout<<"Vyzrast: ";
cin>>pets[i].age;
cin.ignore(); 
cout<<"Ime i familiq: ";
cin.getline(pets[i].ownersname,40);
//cin>>pets[i].ownersname;
cout<<"\n";
}
}

void output(int t)
{
for(int i=0;i<t;i++)
{
cout<<pets[i].name<<","
<<pets[i].species<<","
<<pets[i].age/12<<" years and "
<<pets[i].age%12<<" months "<<","
<<pets[i].ownersname<<"\n";
}
}

void sort(int t)
{
jivotni q;
for(int i=0;i<t;i++)
for(int j=t-1;j>i;j--)
if(strcmp(pets[j-1].species,pets[j].species)>0)
{q=pets[j-1];pets[j-1]=pets[j];pets[j]=q;}

}

void sort2(int t)
{
jivotni p;
for(int i=0;i<t;i++)
for(int j=t-1;j>i;j--)
if(pets[j-1].age < pets[j].age)
{p=pets[j-1];pets[j-1]=pets[j];pets[j]=p;}
}

void sort3(int t)
{
jivotni o;
for(int i=0;i<t;i++)
for(int j=t-1;j>i;j--)
if(strcmp(pets[j-1].name,pets[j].name)>0)
{o=pets[j-1];pets[j-1]=pets[j];pets[j]=o;}

}

void spisuk(int t,char p[20],int count,int broi)
{
for(int i=0;i<t;i++)
{
if(strstr(pets[i].ownersname, p)>0)
{
cout<<pets[i].name<<","
<<pets[i].species<<","
<<pets[i].age/12<<" years and "
<<pets[i].age%12<<" months "
<<","<<pets[i].ownersname<<"\n";	
count = count + pets[i].age;
broi++;
}		
}
cout<<"SREDNA VYZRAST: "<<count/broi;
}

int main ()
{
int k;
int counter1 = 0;
int broi1 = 0;
char ime[20];
	

do 
{
cout <<"\n"<<"VYVEDETE BROI NA JIVOTNITE: ";
cin >> k;
cout <<"\n";
}
while (k<2 || k>150);
cin.ignore();	
input(k);
sort2(k);
sort(k);
output(k);
sort3(k);
	
cout<<"\n";
cout<<"VYVEDETE FAMILIQ NA SOBSTWENIKA: ";
cin >> ime;
cout<<"\n";
	
spisuk(k,ime,counter1,broi1);
	
return 0;
}
