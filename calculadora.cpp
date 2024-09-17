#include <cstdlib>
#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include<math.h>

using namespace std;

int main(int argc, char *argv[])
{
    void Calcula_SENO();
    void Calcula_COSENO();
    void Calcula_TANGENTE();
    float angulo,opuesto,hipotenusa,adyacente;
    float a,b,c,d;
    char op;
    int e,f;
    int opciones;
    int x1,x2,A; 
    double l;
    opciones=0;
    cout<<"------------------Bienvenidos---------------------"<<endl<<endl;
    cout<<"----------------Calculadora Luis------------------"<<endl<<endl;
    cout<<"--------------------------------------------------"<<endl<<endl;
    cout<<"--------------------------------------------------"<<endl<<endl;
    cout<<"--------Menu de Operaciones--------"<<endl<<endl;
    cout<<"1. Raiz Cuadrada"<<endl<<endl;
    cout<<"2. Raiz Cubica"<<endl<<endl;
    cout<<"3. Seno"<<endl<<endl;
    cout<<"4. Coseno"<<endl<<endl;
    cout<<"5. Tangente"<<endl<<endl;
    cout<<"6. Logaritmo"<<endl<<endl;
    cout<<"7. Valor absoluto"<<endl<<endl;
    cout<<"Seleccione Una Opcion:";
    cin>>opciones;
    cout<<"-------------------------------"<<endl<<endl;
    cout<<"-------------------------------"<<endl<<endl;
    switch (opciones){
           case 1:cout<<"Ingrese un Numero segun la operacion:";
                  cin>>a;
                  cout<<"Su resultado es:"<<sqrt(a)<<endl<<endl;
                  break;
           case 2:cout<<"Ingrese un Numero segun la operacion:";
                  cin>>a;
                  cout<<"Su resultado es:"<<pow(a,1.0/3.0)<<endl<<endl;
                  break;
           case 3:cout<<"Ingrese por favor el angulo:\t\t";
                  cin>>angulo;
                  cout<<"Ingrese por favor el opuesto:\t\t";
                  cin>>opuesto;
                  cout<<"Ingrese por favor la hipotenusa:\t";
                  cin>>hipotenusa;
                  fflush(stdin);
                  cout<<"\nEl seno de:\t"<<angulo<<"\tes:\t\t"<<opuesto/hipotenusa<<"\n\n";
                  break;
           case 4:cout<<"Ingrese por favor el angulo:\t\t";
                  cin>>angulo;
                  cout<<"Ingrese por favor la adyacente:\t";
                  cin>>adyacente;
                  cout<<"Ingrese por favor la hipotenusa:\t";
                  cin>>hipotenusa;
                  fflush(stdin);
                  cout<<"\nEl coseno de:\t"<<angulo<<"\tes:\t\t"<<adyacente/hipotenusa<<"\n\n";
                  break;
           case 5:cout<<"Ingrese por favor el angulo: \t\t";
                  cin>> angulo;
                  cout<<"Ingrese por favor la adyacente: \t";
                  cin>> adyacente;
                  cout<<"Ingrese por favor el opuesto: \t\t";
                  cin>>opuesto;
                  fflush(stdin);
                  cout<<"\nLa Tangente de:\t"<<angulo<<"\tes:\t\t"<<opuesto/adyacente<<"\n\n";
                  break;
           case 6:cout<<"\nEscribe un digito:";
                  cin>> l;
                  cout<< "El logaritmo natural del argumento es " << log(l) << endl;
                  break;
           case 7:cout<<"Ingrese x2: "; 
                  cin>>x2; 
                  cout<<"Ingrese x1: "; 
                  cin>>x1; 
                  A=abs(x2-x1); 
                  cout<<"A:"<<A<<endl; 
                  break;                    
}
    getch(); 
                        
    system("PAUSE");
    return EXIT_SUCCESS;
}
