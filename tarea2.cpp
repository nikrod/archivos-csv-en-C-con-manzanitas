#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#define 	MAXLINEA 	225

typedef char 	StringN[40];
typedef char 	str_linea[255];

using namespace std;

void buscarR(StringN nombre)
{
    char *token;
    char *token2;
	cout<<"Leyendo Archivo:"<<endl;	
	char *linea;
	FILE		*pArchivo;
	pArchivo=fopen("chilenos.csv","rt");
    
	while(!feof(pArchivo))
	{
	    fgets(linea,MAXLINEA,pArchivo);
        token = strtok(linea,"|");
        token2=token;
	    cout<<token<<endl;
        token = strtok(NULL,"|");
	    /**if(strcmp(nombre,token)==0)
	    {
            cout<<token2;                       
        }**/
                                   
	}   
 }

void buscarN (StringN nombre)
{
    StringN nombre2;
    char *token;
    char *rut;
    char *cam1;
    char *cam2;
    char *cam3;
    char *cam4;
    char *cam5;
    int x=0;
   	str_linea   linea;
	FILE		*pArchivo;
	
	cout<<"Leyendo Archivo:"<<endl;	
	pArchivo=fopen("chilenos.csv","rt");
	while(!feof(pArchivo) && x==0)
	{
        fgets(linea,MAXLINEA,pArchivo);
        rut= strtok(linea,"|");
        token = strtok(NULL,"|");	
        if(strcmp(nombre,token)==0)
        {
           cout<<"si"<<endl;
           cout<<"Rut:"<<rut<<endl;
           cout<<"Nombre:"<<token<<endl;
           x=1;	
           
        }
	}
}

int main(){	
    
    StringN nombre;
    cout<<"ingrese nombre"<<endl;
    cin>>nombre;
    buscarN(nombre);
	system("pause");
}





