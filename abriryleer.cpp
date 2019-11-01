#include <iostream>
#include <string.h>
#include <fstream>
#include "ArbolBinario.h"

using namespace std;
void agregarLetras( string direccion, ArbolBinario ){

    FILE *f;
    f=fopen( direccion, "r");

    if( f==NULL )
        printf("Error al abrir el fichero\n");
    else{
        while( !feof(f) && getc(f) != ' ' )
            ArbolBinario.put( getc(f) );
    }
}

int cLetras( ArbolBinario arbol ){
    return contarHojas( arbol );
}

void cPalabras( ArbolBinario arbol ){
    return contarHojas( arbol );
}

void agregarPalabras( ArbolBinario arbol ){
    string palabra;
    while( !feof(f) ){
        if(getc(f) =! ' '){
            palabra+=getc(f);
        }
        else{
            ArbolBinario.put( palabra );
            palabra="";
        }
    }
}

int contarHojas(ArbolBinario arbol)
{
    if (arbol==NULL){
        return 0;
    }
    else if ((arbol->der ==NULL)&&(arbol->izq ==NULL)){
        return 1;
    }
    else{
        return contarHojas(arbol->izq) + contarHojas(arbol->der);
    }
}



void lectura();

int main{
    lectura();
       systeam("pause");
return 0;
}
void lectura(){
    ifstream archivo;
    string texto;
    archivo.open("../2019/ArbolAVL.txt",ios::in);//abrimos archivo
    if(archivo.fail()){
        cout<<"No se pudo abrir el archivo ";
        exit(1);
    }
    while(!archivo.eof()){//mientras no sea el final del archivo
      getline(archivo, texto);
      cout<<texto<<endl;
    }
    archivo.close(); //cerrar archivo
}

void contarPalabras(char cadena[])
{
    int contador = 0;
    int i = 0;
    int largo = strlen(cadena);
    int bolle =0;


    for( i = 0; i < largo ; i++)
    {

        if(cadena[i] == ' ' && cadena[i+1] != ' ')
        {

            contador ++;
        }


    }

    printf("la cantidad de palabras es %d \n", contador);
};
//contador de espacios
int main(int argc, char **argv)
{
    char frase[100];
    int i, cont;

    printf("Ingrese la frase:n");
    scanf("%[^\n]", frase);
    for(i= 0 ; i < 100 ; i++){
        if(frase[i]== ' '){
            cont++;
        }

//contador de letras;
#include <iostream>
        using namespace std;

        //PROTOTIPO DE LA FUNCION

        int caracteres(int a[], char minusculas, char mayusculas, int tamano);

        //DEFINICION DE LA FUNCION

        int caracteres(int a[], char minusculas, char mayusculas, int tamano){
            int c=0;


            for(int i=0; i<tamano; i++)
            {

                if((a[i]>='a')&& (a[i]<='z')) minusculas++;
                {

                    if((a[i]>='A') && (a[i]<='Z'))mayusculas++;
                    {
                        c=c+1;
                    }
                }
            }

            return c;

        }
