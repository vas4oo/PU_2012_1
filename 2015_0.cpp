#include <iostream>
#include <string.h>
using namespace std;

 struct car{
 	int num;
 	char marka[30];
 	int year;
 	double cena;
 	char p_ed[5];
 }; 
 car c[500];
 int N;
 int k;

	 
	 void enter(){
	 	for (int i=0;i<N;i++){
	 	cout<<"Wywedete nomer na kolata: ";
	 	cin>>c[i].num;
	 	cin.ignore();
	 	cout<<"Wywedete marka: ";
	 	cin.getline(c[i].marka,30);
	 //	cin.ignore();
	 	cout<<"Wywedete godina: ";
	 	cin>>c[i].year;
	 	cout<<"wywedete cena: ";
	 	cin>>c[i].cena;
	 	cout<<"Poso4ete leva ili evro: ";
	 	cin>>c[i].p_ed;}
	 }

	 void list(){
	 	for (int i=0;i<N;i++){
	 	cout<<c[i].num<<"; "<<c[i].marka<<"; "<<c[i].year<<"; "<<c[i].cena<<"\n";
	  	}
	  	 }
	  	
	 void cena(){
	 	double suma;
	 	cout<<"wywedete cena za sravnenie: ";
		cin>>suma;
		//cin.ignore();
		 for (int i=0;i<N;i++)
		 if (c[i].cena<suma){if(strcmp(c[i].p_ed,"evro")==0)
		 	{cout<<c[i].num<<"; "<<c[i].marka<<"; "<<c[i].year<<"; "<<(c[i].cena*1.96)<<"\n";} 
		 	else 	{cout<<c[i].num<<"; "<<c[i].marka<<"; "<<c[i].year<<"; "<<(c[i].cena)<<"\n";} 
	 } 
}
	 
	 void obsuma(){
	 	double ob_suma=0.0;
	 		for (int i=0;i<N;i++)
	 		{
	 		if(strcmp(c[i].p_ed,"evro")==0)
	 	ob_suma=ob_suma+c[i].cena*1.96;
	 	else ob_suma=ob_suma+c[i].cena;
	 }
	 	
	 	cout<<"ob6tata suma e:"<<ob_suma<<"\n";
	 }
	
	 void carYP(){
	 	 
	 	for (int i=0;i<N;i++)
		 {
	 	if(c[i].year>2000&&c[i].cena<6000){
	 		cout<<"spisyk na kolite sled 2000godina i pod 6000 leva: \n"<<c[i].num<<"; "<<c[i].marka<<"; "<<c[i].year<<"; "<<c[i].cena<<"\n";
		 } 
}
	 }


	
void allcarsort(){ 
     car x; 
           for(int i=0;i<N;i++) 
          for(int j= N-1;j>i;j++) 
          if((strcmp(c[j-1].marka,c[j].marka)>0)||((strcmp(c[j-1].marka,c[j].marka)==0) 
          && (c[j-1].cena<c[ j].cena ))) 
          {    x=c[j-1],c[j-1]=c[j],c[j]=x; }    
     } 

int main()
{
	do
	 {cout<<"N=";cin>>N;}
		while (N<1||N>500);
		 enter();
	     list();
		cena();
	 obsuma();
	carYP();
	 allcarsort();
	 list();
	return 0;
}

