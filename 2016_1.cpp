#include <iostream>
#include <string.h>
using namespace std;

//структура за студент
 struct student{
 	 	char ime[31];
 	 	char spec[21];
 	    float ocenka;
 	    char forma[16];
 	 }; 
//масив студенти 	 
 student c[550];
 int N;
 
 //вход на данни за масива
	 void enter() {
	 	cin.ignore(); //изчиства входния буфер
	 	for (int i=0;i<N;i++) {
	 	cout<<"\nWywedete imena: ";
	 	cin.getline(c[i].ime,31);
	  	cout<<"Wywedete specialnost: ";
	 	cin.getline(c[i].spec,21);
	  	cout<<"Wywedete ocenka: ";
	 	cin>>c[i].ocenka;
	 	cin.ignore();
	 	cout<<"Vyvedete forma na obuchenie: ";
	 	cin>>c[i].forma,16; //??????????????????????????
		 }
	 }
//извежда данни за студенти подредени по азбучен ред на специалнноста
void sort() {
	 student x;
	  	 for(int i=0;i<N;i++)
	 	 for(int j=N-1;j>i;j--)
	 	 {
	 	  if(((strcmp(c[j-1].spec,c[j].spec)>0))||((strcmp(c[j-1].spec,c[j].spec)==0) &&(c[j-1].ocenka<c[j].ocenka))) //при една и съща спец по намаляване на бала
	 	  {x=c[j-1];c[j-1]=c[j];c[j]=x;}
	 	  }
	 	  
	     }

//извеждане на списък със студенти разделени с ; и " " 
	 void list(){
	 	for (int i=0;i<N;i++){
	 	cout<<c[i].ime<<"; "
		 	<<c[i].spec<<"; "
			<<c[i].forma<<"; "
			<<(6*c[i].ocenka)<<"\n";
	  	}
	  	 }
//за предварително въведени спец и форма подреждане на студенти по име
	  	 void sort1() {
	 student x;
	  	 for(int i=0;i<N;i++)
	 	 for(int j=N-1;j>i;j--)
	 	 {
	 	  if((strcmp(c[j-1].ime,c[j].ime)>0))	 
		   	  {x=c[j-1];c[j-1]=c[j];c[j]=x;}
	 	  }
	 	  
	     }

	  	 void search_sp_f()
		   
		   {
		   	double suma=0.0;//,suma е сумата на оценките само на студентите, намерени при търсенето
		   	int k=0;//брой на намерените студенти при търсенето
		   	char spec[21];//променлива за търсената специалност
		   	char forma[16];//променлива за търсената форма на обучение
		   	cout<<"\n Zapochva funkciyata za reshavane na t.3 i t.4 ot zadachata";
		   	cout<<"\nSpecialnost ";
		   	cin>>spec;
		   	cout<<"Forma na obuchenie ";
		   	cin>>forma;
		   	sort1();// подрежда масива по азбучен ред на имената
		   	//следва търсене по специалност spec и форма на обучение forma
	  	 for(int i=0;i<N;i++)
	 	 if((strcmp(c[i].spec,spec)==0)&&(strcmp(c[i].forma,forma)==0))
	 	 {
	 	 	 	 cout<<c[i].ime<<"; "<<c[i].spec<<"; "<<c[i].forma<<"; "<<c[i].ocenka<<"\n";
	 	 	 	 k++;
	 	 	 	 suma+=c[i].ocenka;
	 	 	 }
		   	cout<<"Srednata ocenka e ="<<(suma/k);	   	
	  	 }

int main()
{
	//контрол за данни
	do
	 {cout<<"N=";cin>>N;}
		while (N<5||N>550);
		
						
		 enter(); 
	     sort(); 
	     list(); 
	     
	     search_sp_f();

	return 0;
}

