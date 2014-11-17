#include <iostream>
#include <vector>
#include <fstream>
#define 	MAXLINEA 	225

typedef char 	StringN[40];
typedef char 	str_linea[255];

using namespace std;

void buscarR (StringN rut2)
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
	pArchivo=fopen("chilenos.csv","rt");
	while(!feof(pArchivo) && x==0)
	{
        fgets(linea,MAXLINEA,pArchivo);
        rut= strtok(linea,"|");
        token= strtok(NULL,"|");
        cam1 = strtok(NULL,"|");
        cam2 = strtok(NULL,"|");
        cam3 = strtok(NULL,"|");
        cam4 = strtok(NULL,"|");
        cam5 = strtok(NULL,"|");	
        if(strcmp(rut2,rut)==0)
        {
            if(rut==NULL)
                 {
                     cout<<"rut: no se tiene registro"<<endl;
                 }
               else
                 {
                     cout<<"Rut: "<<rut<<endl;
                 }
               if(token==NULL)
                   {
                      cout<<"nombre: no se tiene registro"<<endl;
                   }
               else
                   {
                       cout<<"Nombre: "<<token<<endl;
                   }
               if(cam1==NULL)
                   {
                       cout<<"sexo: no se tiene registro"<<endl;
                   }
               else
                   {
                       cout<<"sexo: "<<cam1<<endl; 
                   }
              if(cam2==NULL)
                   {
                       cout<<"campo2: no se tiene registro"<<endl;
                   }
               else
                   {
                       cout<<"direccion: "<<cam2<<endl;           
                   }             
              if(cam3==NULL)
                   {
                       cout<<"campo3: no se tiene registro"<<endl;  
                   }
              else
                   {
                       cout<<"direccion: "<<cam3<<endl;
                   }
              if(cam4==NULL)
                   {
                       cout<<"campo4: no se tiene registro"<<endl;
                   }
              else
                   {
                       cout<<"direccion: "<<cam4<<endl;
                   }    
              if(cam5==NULL)
                   {
                       cout<<"campo5: no se tiene registro"<<endl;
                   }
              else
                   {
                       cout<<"direccion: "<<cam5<<endl;
                   }
           
           x=1;	
           
        }
        
	}
	if(x==0)
	{
        cout<<"no se encontraron registros"<<endl;
    }   
}

void buscarN (StringN nombre, int largo)
{
    StringN nombre2;
    int aceptar=0;
    char *token;
    char *rut;
    char *cam1;
    char *cam2;
    char *cam3;
    char *cam4;
    char *cam5;
    char *nom;
    char *app;
    int x=0;
   	str_linea   linea;
	FILE		*pArchivo;
	pArchivo=fopen("chilenos.csv","rt");

        while((fgets(linea,MAXLINEA,pArchivo)!= NULL) && x==0)
        {
        rut= strtok(linea,"|");//se corta el rut
        
        token= strtok(NULL,"|");//se corta el nombre
       
        cam1 = strtok(NULL,"|");//campo1,2,3,4,5..
        
        cam2 = strtok(NULL,"|");
        
        cam3 = strtok(NULL,"|");
        
        cam4 = strtok(NULL,"|");
       
        cam5 = strtok(NULL,"|");	
        
        for(int i=0;i<largo;i++)
        {
                if(token[i]==nombre[i])
                {
                    aceptar=1;
                }
                else
                {
                    aceptar=0;
                    i=largo;
                }
        }
        if (aceptar==1)
        {        
               if(rut==NULL)
                   {
                     cout<<"no se tiene registro"<<endl;
                   }
               else
                   {
                     cout<<"Rut: "<<rut<<endl;
                   }
               if(token=="")
                   {
                     cout<<"nombre: no se tiene registro"<<endl;
                   }
               else
                   {
                     cout<<"Nombre:"<<token<<endl;
                   }
               if(cam1==NULL)
                   {
                     cout<<"sexo: no se tiene registro"<<endl;
                   }
               else
                   {
                     cout<<"sexo: "<<cam1<<endl; 
                   }
              if(cam2==NULL)
                   {
                     cout<<"campo2: no se tiene registro"<<endl;
                   }
              else
                   {
                     cout<<"direccion: "<<cam2<<endl;           
                   }             
              if(cam3==NULL)
                   {
                     cout<<"campo3: no se tiene registro"<<endl;  
                   }
              else
                   {
                     cout<<"direccion: "<<cam3<<endl;
                   }
              if(cam4==NULL)
                   {
                     cout<<"campo4: no se tiene registro"<<endl;
                   }
              else
                   {
                    cout<<"direccion: "<<cam4<<endl;
                   }    
              if(cam5==NULL)
                   {
                    cout<<"campo5: no se tiene registro"<<endl;
                   }
              else
                   {
                    cout<<"direccion: "<<cam5<<endl;
                   }
           x=1;	
       }
       
       
   
	}
	if(x==0)
            {
            cout<<"no se tienen registros"<<endl;
	        fclose (pArchivo);
            }
    
}

int main(){	
    int op;
    StringN nombre;
    StringN rut;
    int j=1;
    while (j!=0)
    {
          cout<<"1-buscar por nombre"<<endl;
          cout<<"2-buscar por rut"<<endl;
          cin>>op;
          if(op==1)
          {
             cout<<"ingrese nombre"<<endl;
             fgets(nombre,40,stdin);
             scanf("%[^\n]", nombre);
             buscarN(nombre,strlen(nombre));
             j=0;
          }
          if(op==2)
          {
             cout<<"ingrese rut"<<endl;
             cin>>rut;
             buscarR(rut);
             j=0;
          }            
    }      
	system("pause");
}

