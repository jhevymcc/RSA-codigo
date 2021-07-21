#include<iostream>
#include<math.h>

using namespace std;
long long  int h,p,q,n,euler,coprimo,clave_privada,num[50],r,s,t,num1[50],num2[50],constante;
bool c,d;
char letra[50],letra2[50],letra3[50];
//funcion para saber si es primo o no
bool es_primo(long  int p){
	
	
	for(int i=2;i<=sqrt(p);i=i+1)
	{
		if(p%i==0)
		return false;
	}
	return true;
	
}
//encontrando el coprimo de euler
long int funcion_coprimo(long int num ){
	
	for(int i=2;i<num;i=i+1)
	{
		if(num%i!=0&&es_primo(i)==1)
		return i;
	}
}
//encontrando clave privada
long int funcion_clave_privada(long int p,long int q){
	int k=1;
	while(((q*k)+1)%p!=0){
	
	k=k+1;
	
	
	}
	
	return (q*k+1)/p;
}
int main(){


do{
cout<<"digite dos numeros primos tal que su multiplicacion sea mayor que 27"<<endl;
do{
cout<<"digite un numero primo:"<<endl;
cin>>p;
c=es_primo(p);
}while(c==false);

do{
cout<<"digite otro numero primo:"<<endl;
cin>>q;
d=es_primo(q);
}while(d==false);
}while(p*q<27);
//p y q
n=p*q;
euler=(p-1)*(q-1);
cout<<"la funcion euler es: "<<euler<<endl;
coprimo=funcion_coprimo(euler);
cout<<"el coprimo es : "<<coprimo<<endl;

clave_privada=funcion_clave_privada(coprimo,euler);
cout<<"la clave privada es: "<<clave_privada;
cout<<endl;
//segunda parte 
cout<<"digite un mensaje:"<<endl;
	cin>>letra;
	cout<<"el mensaje convertido a numeros(cada letra convertido a numeros): "<<endl;
	for( r=0;letra[r]!='\0';r=r+1)
{
    switch(letra[r]){
	
	case '_':
	num[r]=27;
	
	break;	
	case 'a':
	num[r]=1;	
		
	break;
	case 'b':
	num[r]=2;	
		
	break;
	case 'c':
	num[r]=3;	
		
	break;
	case 'd':
	num[r]=4;	
	break;
	case 'e':
    num[r]=5;	
		
	break;
	case 'f':
	num[r]=6;	
		
	break;
	case 'g':
	num[r]=7;	
		
	break;
	case 'h':
	num[r]=8;	
	
	break;
	case 'i':
	num[r]=9;	
		
	break;
	case 'j':
	num[r]=10;	
		
	break;
	case 'k':
	num[r]=11;	
		
	break;
	case 'l':
	num[r]=12;	
		
	break;
	case 'm':
	num[r]=13;	
		
	break;
	case 'n':
	num[r]=14;	
		
	break;

	case 'o':
	num[r]=15;	
		
	break;
	case 'p':
	num[r]=16;	
		
	break;
	case 'q':
	num[r]=17;	
		
	break;
	case 'r':
	num[r]=18;	
		
	break;
	case 's':
	num[r]=19;	
	
	break;
	case 't':
	num[r]=20;	
		
	break;
	case 'u':
	num[r]=21;	
		
	break;
	case 'v':
	num[r]=22;	
		
	break;
	case 'w':
	num[r]=23;	
		
	break;
	case 'x':
	num[r]=24;	
		
	break;
	case 'y':
	num[r]=25;	
		
	break;
	case 'z':	
	
	num[r]=26;	
	}
	
	cout<<num[r]<<"\t";
}

cout<<endl;
cout<<"el mensaje encriptado: "<<endl;
for(s=0;s<r;s=s+1)
{
num1[s]=pow(num[s],coprimo);
num1[s]=num1[s]%n;
cout<<num1[s]<<"\t";
}
cout<<endl;
cout<<"desencriptando el mensaje: "<<endl;
for(t=0;t<s;t=t+1)
{
constante=num1[t];
h=1;
while(h<clave_privada){
	num1[t]=constante*num1[t];
	num1[t]=num1[t]%n;
	h=h+1;
}
cout<<num1[t]<<"\t";

}
cout<<endl;
//
cout<<"mensaje desencriptado: "<<endl;
for(t=0;t<s;t=t+1)
{
	switch(num1[t])
	{
	case 27:
	cout<<"_";
	
	break;	
	case 1:
	cout<<"a";	
		
	break;
	case 2:
	cout<<"b";		
		
	break;
	case 3:
	cout<<"c";		
		
	break;
	case 4:
	
	cout<<"d";		
	break;
	case 5:
    
	cout<<"e";		
		
	break;
	case 6:
	cout<<"f";		
		
	break;
	case 7:
	cout<<"g";		
		
	break;
	case 8:
	
	cout<<"h";		
	
	break;
	case 9:
	
	cout<<"i";		
		
	break;
	case 10:
	cout<<"j";		
		
	break;
	case 11:
	cout<<"k";	
		
	break;
	case 12:
	cout<<"l";		
		
	break;
	case 13:
	cout<<"m";		
		
	break;
	case 14:
	
	cout<<"n";		
		
	break;

	case 15:
	cout<<"o";		
		
	break;
	case 16:
	
	cout<<"p";		
		
	break;
	case 17:
	cout<<"q";		
		
	break;
	case 18:
	cout<<"r";		
		
	break;
	case 19:
	cout<<"s";		
	
	break;
	case 20:
	cout<<"t";		
		
	break;
	case 21:
	cout<<"u";		
		
	break;
	case 22:
	cout<<"v";		
		
	break;
	case 23:
	cout<<"w";		
		
	break;
	case 24:
	cout<<"x";		
		
	break;
	case 25:
	cout<<"y";		
		
	break;
	case 26:
	cout<<"z";		
	}
	}
	
return 0;
}
