#include <iostream>
#include <string.h>

using namespace std;

int main (int argc, char *argv[]) {
    int palabras = -1;
    int ocurrencias = -1;
    string mostrar = "";
    string excluir = "" ;
    string excluirf = "";
    string archivoALeer= "";
    for (int i = 0; i< argc; i++){
        if(argv[i][0]== '-'){ //es un comando
           string arg= argv[i];
           if(arg=="-palabaras"){
               palabras = stoi (argv[i+1]);//diferencia stoi" de letras y numeros, porque use string
           i++;
           } catch (...) //ve si lo que dijimos es verdadero
            { palabras=0;
            }
        }
        if( argc == "-excluir"){
            excluir = argv[i+1];
            i++;
        }
        else {
            archivoALeer = argv [i];
        }

}
    cout<<"palabras"<<palabras<<endl;
    cout<<"ocurrencias"<<ocurrencias <<endl;
    cout<<"mostrar"<<mostrar<<endl;
    cout<<"excluir"<<excluir<<endl;
    cout <<"excluirf"<< excluir<<endl;
    cout<<"archivoALeer"<<archivoALeer<<endl ;


    int main (){
        int arr[5];
        char mins, may;




        cout<<"LLENAR EL VECTOR CON 5 CARACTERER:"<<endl;
        for(int i=0; i<6; i++)
        {
            cin >> arr[i];


        }
        cout << endl <<"La cantidad de letras minusculas en el array es de: ";
        // Llamada a la funcion
        cout << caracteres(arr, 5, mins, may);
        cout << endl <<"La cantidad de letras mayusculas en el array es de: ";
        // Llamada a la funcion
        cout << caracteres(arr, 5, mins, may);

        return 0;
    }

