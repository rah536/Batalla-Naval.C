////#############################################################################
// ARCHIVO : LAB1_TPF_Herrera,Roberto,Antonio.zip.
// AUTOR : Herrera Roberto Antonio
// FECHA DE CREACION : 26/10/2018
// ULTIMA ACTUALIZACION: 07/12/2018
// LICENCIA : GPL (General Public License) - Version 3.
//=============================================================================
// SISTEMA OPERATIVO : Linux (Ubuntu) / Windows XP / Windows 7.
// IDE : Code::Blocks - 8.02 / 10.05
// COMPILADOR : GNU GCC Compiler (Linux) / MinGW (Windows).
// LICENCIA : GPL (General Public License) - Version 3.
//=============================================================================
/////////////////////////////////////////////////////////////////////////////////




#include <string>
#include <stdlib.h>
#include <iostream>
#include <sstream>
#include<windows.h>

using namespace std;

#ifndef CADENAS_H_INCLUDED
#define CADENAS_H_INCLUDED


////Dos matrices - una oculta al usuario
//****************************************************************************
//=============================================================================
// FUNCION : IniciarMatrizVisible
// ACCION : Inicia la matriz que luego vera el usuario y la rellena de '.'
// PARAMETROS: Matriz de tamaño 10x10 que sera visible para el usuario
// DEVUELVE : Nada
//-----------------------------------------------------------------------------
void IniciarMatrizVisible(char matrizVisible[10][10]);
//_____________________________________________________________________________
//****************************************************************************



//****************************************************************************
//=============================================================================
// FUNCION : ImprimirMatrizInterna
// ACCION : Muestra la matriz interna (solo en caso de que el usuario pierda, gane o use flash 11-11)
// PARAMETROS: Matriz de tamaño 10x10 que almacena la posicion de los barcos
// DEVUELVE : Nada
//-----------------------------------------------------------------------------
void ImprimirMatrizInterna(int matrizInterna[10][10]);
//_____________________________________________________________________________
//****************************************************************************



//****************************************************************************
//=============================================================================
// FUNCION : ImprimirGrafico
// ACCION : Le da forma a la MatrizVisible iniciada anteriormente, la vuelve mas amigable para el usuario
// PARAMETROS: MatrizVisible de tamaño 10x10 que sera visible para el usuario
// DEVUELVE : Nada
//-----------------------------------------------------------------------------
void ImprimirGrafico(char matrizVisible[10][10]); //Matriz que visualiza el usuario.
//_____________________________________________________________________________
//****************************************************************************



//****************************************************************************
//=============================================================================
// FUNCION : CargarMatrizInterna
// ACCION : Completa con 0 la Matriz y luego va agregando los barcos
// PARAMETROS: Matriz de tamaño 10x10 que almacena la posicion de los barcos
// DEVUELVE : Nada
//-----------------------------------------------------------------------------
void CargarMatrizInterna(int matrizInterna[10][10]);
//_____________________________________________________________________________
//****************************************************************************



//****************************************************************************
//=============================================================================
// FUNCION : IniciarBarco4Posicion
// ACCION : Carga de forma aleatoria a la MatrizInterna con un barco de 4 posiciones
// PARAMETROS: MatrizInterna de tamaño 10x10
// DEVUELVE : Nada
//-----------------------------------------------------------------------------
void IniciarBarco4Posicion(int matrizInterna[10][10]); //pos barco 4
//_____________________________________________________________________________
//****************************************************************************



//****************************************************************************
//=============================================================================
// FUNCION : IniciarBarco3Posicion
// ACCION : Carga de forma aleatoria a la MatrizInterna con 2 barcos de 3 posiciones
// PARAMETROS: MatrizInterna de tamaño 10x10, entero grupo (agrupa cada barco tipo 3 en 30, 31)
// DEVUELVE : Nada
//-----------------------------------------------------------------------------
void IniciarBarco3Posicion(int Matriz1[10][10], int grupo); // 3
//_____________________________________________________________________________
//****************************************************************************



//****************************************************************************
//=============================================================================
// FUNCION : IniciarBarco2Posicion
// ACCION : Carga de forma aleatoria a la MatrizInterna con 3 barcos de 2 posiciones
// PARAMETROS: MatrizInterna de tamaño 10x10, entero grupo (agrupa cada barco tipo 2 en 20, 21, 22)
// DEVUELVE : Nada
//-----------------------------------------------------------------------------
void IniciarBarco2Posicion(int Matriz1[10][10], int grupo); // 2
//_____________________________________________________________________________
//****************************************************************************



//****************************************************************************
//=============================================================================
// FUNCION : IniciarBarco1Posicion
// ACCION : Carga de forma aleatoria a la MatrizInterna con 4 barcos de 1 posicion
// PARAMETROS: MatrizInterna de tamaño 10x10
// DEVUELVE : Nada
//-----------------------------------------------------------------------------
void IniciarBarco1Posicion(int matrizInterna[10][10]); // 1
//_____________________________________________________________________________
//****************************************************************************



//****************************************************************************
//=============================================================================
// FUNCION : VerificarEspacios
// ACCION : Corrobora en cada fila y columna ingresada que no haya espacios ocupados consecutivos en toda direccion
// PARAMETROS: MatrizInterna de tamaño, entero fila, entero columna
// DEVUELVE : Verdadero o Falso
//-----------------------------------------------------------------------------
bool VerificarEspacios(int matrizInterna[10][10], int f, int c);
//_____________________________________________________________________________
//****************************************************************************



//****************************************************************************
//=============================================================================
// FUNCION : toString
// ACCION : Toma solo el primer numero de los grupos formados en los barcos tipo 2 y 3 ,para poder mostrarlos al mostrar la matriz interna
// PARAMETROS: Entero
// DEVUELVE : Verdadero o Falso
//-----------------------------------------------------------------------------
string toString(int numero); // para tomar solo el primer numero de los grupos formados (20, 21, 22, 30, 31) de manera que solo se vea 2 o 3 al verse la matriz
//_____________________________________________________________________________
//****************************************************************************



//****************************************************************************
//=============================================================================
// FUNCION : MostrarMensajeBienvenida
// ACCION : Muestra el mensaje de bienvenida
// PARAMETROS: ()
// DEVUELVE : Nada
//-----------------------------------------------------------------------------
void MostrarMensajeBienvenida();
//_____________________________________________________________________________
//****************************************************************************



//****************************************************************************
//=============================================================================
// FUNCION : InstruccionesDelMenu
// ACCION : Instrucciones que se muestran en la opcion 2 "Ayuda" del menu principal
// PARAMETROS: ()
// DEVUELVE : Nada
//-----------------------------------------------------------------------------
void InstruccionesDelMenu();
//_____________________________________________________________________________
//****************************************************************************



//****************************************************************************
//=============================================================================
// FUNCION : InstruccionesDuranteElJuego
// ACCION : Instrucciones que se muestran durante el juego al ingresar las coordenadas 0 y 0
// PARAMETROS: ()
// DEVUELVE : Nada
//-----------------------------------------------------------------------------
void InstruccionesDuranteElJuego();
//_____________________________________________________________________________
//****************************************************************************



//****************************************************************************
//=============================================================================
// FUNCION : MenuTipoDeJuego
// ACCION : Menu que se emite luego de elegir la opcion 1 "Jugar" del menu principal,
//          en este menu se puede elegir el tipo de juego Grumete o Almirante
// PARAMETROS: ()
// DEVUELVE : Nada
//-----------------------------------------------------------------------------
void MenuTipoDeJuego();
//_____________________________________________________________________________
//****************************************************************************



//****************************************************************************
//=============================================================================
// FUNCION : MenuSalida
// ACCION : Menu que se muestra al intentar salir desde el menu principal o
//          intentar finalizar la partida en curso
// PARAMETROS: ()
// DEVUELVE : Nada
//-----------------------------------------------------------------------------
void MenuSalida();
//_____________________________________________________________________________
//****************************************************************************



//****************************************************************************
//=============================================================================
// FUNCION : MensajeGanaste
// ACCION : Mensaje emitido al hundir la todalidad de los barcos
// PARAMETROS: ()
// DEVUELVE : Nada
//-----------------------------------------------------------------------------
void MensajeGanaste();
//_____________________________________________________________________________
//****************************************************************************



//****************************************************************************
//=============================================================================
// FUNCION : MenuSalida
// ACCION : Mensaje emitido al quedarte sin disparos
// PARAMETROS: ()
// DEVUELVE : Nada
//-----------------------------------------------------------------------------
void MensajePerdiste();
//_____________________________________________________________________________
//****************************************************************************



//****************************************************************************
//=============================================================================
// FUNCION : DisparoBarcoTipo2
// ACCION : Marca como Tocado y Hundido a los tres barcos tipo 2
// PARAMETROS: MatrizInterna, MatrizVisible, fila, columna, contador de Tocado de barco y hundido (&barco2),
// contadores de cantidad de barcos por hundir, tiros acertados (contT) y Hundidos (contH)
// DEVUELVE : Nada
//-----------------------------------------------------------------------------
void DisparoBarcoTipo2(int matrizInterna[10][10],char matrizVisible[10][10],int fila,int columna ,int &barco2,int barcoTocado2[1][2],int &indexBarco2, int &contT,int &contH);
//_____________________________________________________________________________
//****************************************************************************



//****************************************************************************
//=============================================================================
// FUNCION : DisparoBarcoTipo3
// ACCION : Marca como Tocado y Hundido a los dos barcos tipo 3
// PARAMETROS: MatrizInterna, MatrizVisible, fila, columna, contador de Tocado de barco y hundido (&barco3),
// contadores de cantidad de barcos por hundir, tiros acertados (&contT) y Hundidos (&contH)
// DEVUELVE : Nada
//-----------------------------------------------------------------------------
void DisparoBarcoTipo3(int matrizInterna[10][10], char matrizVisible[10][10],int fila, int columna, int &barco3, int barcoTocado3[2][2],int &indexBarco3, int &contT, int &contH);
//_____________________________________________________________________________
//****************************************************************************



//****************************************************************************
//=============================================================================
// FUNCION : DisparoBarcoTipo3
// ACCION : Marca como Tocado y Hundido al unico barco tipo 4
// PARAMETROS: MatrizInterna, MatrizVisible, fila, columna, contador de Tocado de barco y hundido (&barco4),
// contadores de cantidad de barcos por hundir, tiros acertados (&contT) y Hundidos (&contH)
// DEVUELVE : Nada
//-----------------------------------------------------------------------------
void DisparoBarcoTipo4(int matrizInterna[10][10], char matrizVisible[10][10],int fila, int columna, int &barco4, int barcoTocado4[3][2],int &indexBarco4, int &contT, int &contH);
//_____________________________________________________________________________
//****************************************************************************


// __________________________________________________________
//___________________________________________________________
// __________________________________________________________
//___________________________________________________________
// __________________________________________________________
//___________________________________________________________


//FUNCIONES DESARROLLADAS


void ImprimirGrafico(char matrizVisible[10][10])
{
    cout << "0   1 2 3 4 5 6 7 8 9 10\n";
    cout << "1  ";
    for (int i=0;i < 10;i++) { cout << " " << matrizVisible[0][i]; }
    cout << "\n";
    cout << "2  ";
    for (int i=0;i < 10;i++) { cout << " " << matrizVisible[1][i]; }
    cout << "\n";
    cout << "3  ";
    for (int i=0;i < 10;i++) { cout << " " << matrizVisible[2][i]; }
    cout << "\n";
    cout << "4  ";
    for (int i=0;i < 10;i++) { cout << " " << matrizVisible[3][i]; }
    cout << "\n";
    cout << "5  ";
    for (int i=0;i < 10;i++) { cout << " " << matrizVisible[4][i]; }
    cout << "\n";
    cout << "6  ";
    for (int i=0;i < 10;i++) { cout << " " << matrizVisible[5][i]; }
    cout << "\n";
    cout << "7  ";
    for (int i=0;i < 10;i++) { cout << " " << matrizVisible[6][i]; }
    cout << "\n";
    cout << "8  ";
    for (int i=0;i < 10;i++) { cout << " " << matrizVisible[7][i]; }
    cout << "\n";
    cout << "9  ";
    for (int i=0;i < 10;i++) { cout << " " << matrizVisible[8][i]; }
    cout << "\n";
    cout << "10 ";
    for (int i=0;i < 10;i++) { cout << " " << matrizVisible[9][i]; }
    cout << "\n";
}

string toString(int numero)
{
    stringstream contenido;
    contenido << numero;
    return contenido.str();
}

void ImprimirMatrizInterna(int matrizInterna[10][10])
{
    cout << "0   1 2 3 4 5 6 7 8 9 10\n";
    cout << "1  ";
    for (int i=0;i < 10;i++) { cout << " " << toString(matrizInterna[0][i])[0]; }
    cout << "\n";
    cout << "2  ";
    for (int i=0;i < 10;i++) { cout << " " << toString(matrizInterna[1][i])[0]; }
    cout << "\n";
    cout << "3  ";
    for (int i=0;i < 10;i++) { cout << " " << toString(matrizInterna[2][i])[0]; }
    cout << "\n";
    cout << "4  ";
    for (int i=0;i < 10;i++) { cout << " " << toString(matrizInterna[3][i])[0]; }
    cout << "\n";
    cout << "5  ";
    for (int i=0;i < 10;i++) { cout << " " << toString(matrizInterna[4][i])[0]; }
    cout << "\n";
    cout << "6  ";
    for (int i=0;i < 10;i++) { cout << " " << toString(matrizInterna[5][i])[0]; }
    cout << "\n";
    cout << "7  ";
    for (int i=0;i < 10;i++) { cout << " " << toString(matrizInterna[6][i])[0]; }
    cout << "\n";
    cout << "8  ";
    for (int i=0;i < 10;i++) { cout << " " << toString(matrizInterna[7][i])[0]; }
    cout << "\n";
    cout << "9  ";
    for (int i=0;i < 10;i++) { cout << " " << toString(matrizInterna[8][i])[0]; }
    cout << "\n";
    cout << "10 ";
    for (int i=0;i < 10;i++) { cout << " " << toString(matrizInterna[9][i])[0]; }
    cout << "\n";
}

void IniciarMatrizVisible(char matrizVisible[10][10])
{
    for (int f = 0; f < 10; f++)
    {
        for (int c = 0; c < 10; c++)
        {
            matrizVisible[f][c] = '.';
        }
    }
}

void CargarMatrizInterna(int matrizInterna[10][10])   //Matriz oculta
{                                                    //Recorrer matriz y llenarla con 0
   int f, c;

   for (f=0; f<10; f++)
    {
        for (c=0; c<10; c++)
            {
                matrizInterna[f][c] = 0;
            }
    }

    IniciarBarco4Posicion(matrizInterna);

    // la primera iteracion i = 0 => el grupo es igual 0
    for (int i=0; i<2;i++){
        IniciarBarco3Posicion(matrizInterna, i);
    }

    for (int i=0; i<3;i++){
        IniciarBarco2Posicion(matrizInterna, i);
    }

    for (int i=0; i<4;i++){
        IniciarBarco1Posicion(matrizInterna);
    }
}

void IniciarBarco4Posicion(int matrizInterna[10][10])
{
    int posicion, c, f, disponible = 0;

    /////////////////////////
    // Barco 4 posiciones
    /////////////////////////
    // de acuerdo a un numero random se determina la orientación del barco, ejemplo; si el rand() arroja 4 el mod en 2 seria 0 + 1 = horizontal caso contrario, rand() = 3 => 1 + 1 = 2 =>  vertical
    posicion = rand()%2+1;
    // horizontal
    if(posicion==1)
    {
        // con el modulo se limita la posicion para que no atraviese el limite
        c= rand()%7;
        f= rand()%10;
        for (int i=0; i<4; i++)
        {
            matrizInterna[f][c]=4;
            c++;
        }
    }
    // vertical
    else
    {
        f=rand()%7;
        c=rand()%10;
        for(int i=0; i<4; i++)
        {
            matrizInterna[f][c]=4;
            f++;
        }
    }
}

void IniciarBarco3Posicion(int matrizInterna[10][10], int grupo)
{
    int posicion, c, f, disponible = 0;

    /////////////////////////
    // Barco 3 posiciones
    /////////////////////////
    posicion=rand()%2+1;
    if (posicion==1)
    {
        do
        {
            c=rand()%8;
            f=rand()%10;
            if (VerificarEspacios(matrizInterna, f, c) && VerificarEspacios(matrizInterna, f, c+1) && VerificarEspacios(matrizInterna,f,c+2))
            {
                disponible=1;
            }
            else
            {
                disponible=0;
            }
        } while(disponible==0);

        for (int i=0 ; i<3; i++)
        {
            matrizInterna[f][c]=3*10+grupo; //grupo 30 ,grupo 31
            c++;
        }
    }
    else
    {
        do
        {
            f=rand()%8;
            c=rand()%10;
            if (VerificarEspacios(matrizInterna, f, c) && VerificarEspacios(matrizInterna,f+1,c) && VerificarEspacios(matrizInterna,f+2,c))
            {
                disponible=1;
            }
            else
            {
                disponible=0;
            }
        } while (disponible == 0);

        for (int i=0; i<3; i++)
        {
            matrizInterna[f][c]=3*10+grupo; //grupo 30 ,grupo 31
            f++;
        }
    }
}

void IniciarBarco2Posicion(int matrizInterna[10][10], int grupo)
{
    int posicion, c, f, disponible = 0;

    /////////////////////////
    // Barco 2 posiciones
    /////////////////////////
    posicion=rand()%2+1;
    if (posicion==1)
    {
        do
        {
            c=rand()%9;
            f=rand()%10;
            if (VerificarEspacios(matrizInterna, f, c) && VerificarEspacios(matrizInterna, f, c+1))
            {
                disponible=1;
            }
            else
            {
                disponible=0;
            }
        } while(disponible==0); //realizar si el lugar esta disponible (1)

        for (int i=0 ; i<2; i++)
        {
            matrizInterna[f][c]=2 * 10+ grupo;
            c++;
        }
    }
    else
    {
        do
        {
            f=rand()%9;
            c=rand()%10;
            if (VerificarEspacios(matrizInterna, f, c) && VerificarEspacios(matrizInterna, f+1, c))
            {
                disponible=1;
            }
            else
            {
                disponible=0;
            }
        } while (disponible == 0);

        for (int i=0; i<2; i++)
        {
            matrizInterna[f][c]=2 * 10+ grupo;
            f++; //aca ya terminó de armar el primer barco de 2 casilleros agrupados(20 y 20)
        }
    }
}

void IniciarBarco1Posicion(int matrizInterna[10][10])
{
    int posicion, c, f, disponible = 0;

    /////////////////////////
    // Barco 1 posicion
    /////////////////////////
    posicion=rand()%2+1;
    if (posicion==1)
    {
        do
        {
            c=rand()%10;
            f=rand()%10;
            if (VerificarEspacios(matrizInterna,f,c))
            {
                disponible=1;
            }
            else
            {
                disponible=0;
            }
        } while(disponible==0);

        matrizInterna[f][c]=1;
    }
    else
    {
        do
        {
            f=rand()%9;
            c=rand()%10;
            if (VerificarEspacios(matrizInterna,f,c))
            {
                disponible=1;
            }
            else
            {
                disponible=0;
            }
        } while (disponible == 0);

        matrizInterna[f][c]=1;
    }
}

bool VerificarEspacios(int matrizInterna[10][10], int f, int c)
{
    // el campo a consultar esta libre?
    if ((matrizInterna[f][c]==0) &&
        // el campo a la izquierda esta libre?
        (matrizInterna[f][c-1]==0) &&
        // el campo a la derecha esta libre?
        (matrizInterna[f][c+1]==0) &&
        // el campo superior esta libre?
        (matrizInterna[f-1][c]==0) &&
        // el campo inferior esta libre?
        (matrizInterna[f+1][c]==0) &&
        // el campo superior izquierdo
        (matrizInterna[f-1][c-1]==0) &&
        // el campo superior derecho
        (matrizInterna[f-1][c+1]==0) &&
        // el campo inferior izquierdo
        (matrizInterna[f+1][c-1]==0) &&
        // el campo inferior derecho
        (matrizInterna[f+1][c+1]==0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void MostrarMensajeBienvenida()
{
        cout << "********   ********** ********* ********* ****     ****     *********" << endl;
        cout << "****  **** ***    *** ********* ***   *** ****     ****     ***   ***"<< endl;
        cout << "****  **** ***    ***    ***    ***   *** ****     ****     ***   ***"<< endl;
        cout << "*********  **********    ***    ********* ****     ****     *********"<< endl;
        cout << "****  **** **********    ***    ********* ****     ****     *********"<< endl;
        cout << "****  **** ***    ***    ***    ***   *** ******** ******** ***   ***"<< endl;
        cout << "********   ***    ***    ***    ***   *** ******** ******** ***   ***\n\n\n"<< endl;

        cout << "***   *** ********** ***  *** ********** ****   "<< endl;
        cout << "***   *** ***    *** ***  *** ***    *** ****   "<< endl;
        cout << "**** **** ***    *** ***  *** ***    *** ****   "<< endl;
        cout << "********* ********** ***  *** ********** ****   "<< endl;
        cout << "**  ***** ********** ******** ********** ****   "<< endl;
        cout << "**   **** ***    ***  ******  ***    *** ********"<< endl;
        cout << "**   **** ***    ***   ****   ***    *** ********"<< endl;

        Sleep(2000);

}

void InstruccionesDelMenu()
{
        cout << "\n*******************************";
        cout << "\n         Batalla Naval         ";
        cout << "\n ______________________________\n\n\n";
        cout << " Instrucciones: \n\n\n ";
        cout << " .La finalidad del juego es hundir la flota ubicada en el tablero. \n" << endl;
        cout << " .El jugador ingresará las coordenadas en las que quiere disparar: " << endl;
        cout << " Las coordenadas que se deben especificar son dos, el primer valor " << endl;
        cout << " para ubicar horizontalmente (Fila) y el segundo valor es para   " << endl;
        cout << " posicionar verticalmente (Columna). Ambos valores van del 1 al 10. \n" << endl;
        cout << " .Si en la coordenada ingresada no hubiese embarcaciones, el disparo " << endl;
        cout << " fallo. Para identificar que el disparo dio en el agua, esa ubicacion " << endl;
        cout << " se marcara con la letra A. \n" << endl;
        cout << " .Si en la coordenada ingresada se encontrase una parte de un barco, " << endl;
        cout << " el disparo fue acertado. Para identificar que el disparo toco a una " << endl;
        cout << " parte de la embarcacion, esa ubicacion se marcara con la letra T. \n" << endl;
        cout << " .Si en la coordenada ingresada se encontrase un barco, el disparo fue " << endl;
        cout << " acertado y el barco fue hundido. Para identificar que el disparo le dio  " << endl;
        cout << " a una embarcacion, esa ubicacion se marcara con la letra H. \n" << endl;
        cout << ".El juego tiene dos niveles de dificultad para elegir: \n" << endl;
        cout << "      _Nivel 1 - Grumete: Posee 50 disparos." << endl;
        cout << "      _Nivel 2 - Almirante: Posee 25 disparos." << endl;
        cout << " ______________________________________________________________________ \n" << endl;
        cout << " ATENCION \n" << endl;
        cout << ".Al ingresar las coordenadas 11 - 11 se podran ver, por una unica vez," << endl;
        cout << "las posiciones de los barcos en el tablero \n" << endl;
        cout << ".Para poder ver las instrucciones durante el juego, ingresar las coordenadas 12 - 12 \n" << endl;
        cout << ".Para finalizar la partida y salir hacia el menu, ingresar las coordenadas 0 - 0  " << endl;
        cout << " .El juego finaliza al hundir todos los barcos o al agotar los disparos \n" << endl;
        cout << " ______________________________________________________________________ \n" << endl;
        cout << " Pulse ENTER para salir de las instrucciones " << endl;
        cout << " ______________________________________________________________________ " << endl;
}

void InstruccionesDuranteElJuego()
{
    cout << "\n*******************************";
    cout << "\n         Batalla Naval         ";
    cout << "\n ______________________________\n\n\n";
    cout << " Instrucciones: \n\n\n ";
    cout << " .La finalidad del juego es hundir la flota ubicada en el tablero. \n" << endl;
    cout << " .El jugador ingresará las coordenadas en las que quiere disparar: " << endl;
    cout << " Las coordenadas que se deben especificar son dos, el primer valor " << endl;
    cout << " para ubicar horizontalmente (Fila) y el segundo valor es para   " << endl;
    cout << " posicionar verticalmente (Columna). Ambos valores van del 1 al 10. \n" << endl;
    cout << " .Si en la coordenada ingresada no hubiese embarcaciones, el disparo " << endl;
    cout << " fallo. Para identificar que el disparo dio en el agua, esa ubicacion " << endl;
    cout << " se marcara con la letra A. \n" << endl;
    cout << " .Si en la coordenada ingresada se encontrase una parte de un barco, " << endl;
    cout << " el disparo fue acertado. Para identificar que el disparo toco a una " << endl;
    cout << " parte de la embarcacion, esa ubicacion se marcara con la letra T. \n" << endl;
    cout << " .Si en la coordenada ingresada se encontrase un barco, el disparo fue " << endl;
    cout << " acertado y el barco fue hundido. Para identificar que el disparo le dio  " << endl;
    cout << " a una embarcacion, esa ubicacion se marcara con la letra H. \n" << endl;

}

void MenuTipoDeJuego()
{
    cout << "\n*******************************";
    cout << "\n         Batalla Naval         ";
    cout << "\n ______________________________\n\n\n";
    cout << "Elegir tipo de juego\n\n";
    cout << "1) Jugar como Grumete: Posee 50 disparos\n";
    cout << "2) Jugar como Almirante: Posee 25 disparos\n";
    cout<<"\n Ingresar una opcion numerica ->: ";
}

void MenuSalida()
{

        cout << "\n*******************************";
        cout << "\n         Batalla Naval         ";
        cout << "\n ______________________________\n\n\n";
        cout << "Esta seguro que desea salir?\n\n\n";
        cout << "_Pulsar -> 1 <- para salir\n\n";
        cout << "_Pulsar -> 2 <- para volver\n\n";

}

void MensajeGanaste()
{
    cout << "\n*******************************";
    cout << "\n         Batalla Naval         ";
    cout << "\n ______________________________\n\n";
    cout << "\n                          ";
    cout << "\n           Ganaste!         ";
    cout << "\n                                \n\n";
    cout << "   Presionar Enter para volver al menu \n\n\n";
}

void MensajePerdiste()
{
    cout << "\n*******************************";
    cout << "\n         Batalla Naval         ";
    cout << "\n ______________________________\n\n";
    cout << "\n                          ";
    cout << "\n           Perdiste         ";
    cout << "\n                          ";
    cout << "\n    Te quedaste sin disparos ";
    cout << "\n                           \n\n";
    cout << "   Presionar Enter para volver al menu \n\n\n";
}

void DisparoBarcoTipo2(int matrizInterna[10][10], char matrizVisible[10][10],int fila, int columna, int &barco2, int barcoTocado2[1][2],int &indexBarco2, int &contT, int &contH)
{
        barco2++;
        if (barco2==1)
        {
            matrizVisible[fila][columna] = 'T';
            barcoTocado2[0][0] = fila;
            barcoTocado2[0][1] = columna;
            contT++;
        }

        if (barco2==2)
        {
            matrizVisible[fila][columna] = 'H';
            int fila0 = barcoTocado2[0][0];
            int columna0 = barcoTocado2[0][1];

            matrizVisible[fila0][columna0] = 'H';
            indexBarco2--;
            contH++;
        }
}

void DisparoBarcoTipo3(int matrizInterna[10][10], char matrizVisible[10][10],int fila, int columna, int &barco3, int barcoTocado3[2][2],int &indexBarco3, int &contT, int &contH)
{
        barco3++;
        if (barco3==1)
            {
            matrizVisible[fila][columna] = 'T';
            barcoTocado3[0][0] = fila;
            barcoTocado3[0][1] = columna;
            contT++;
            }

        if (barco3==2)
            {
            matrizVisible[fila][columna] = 'T';
            barcoTocado3[1][0] = fila;
            barcoTocado3[1][1] = columna;
            contT++;
            }

        if (barco3==3)
            {
            matrizVisible[fila][columna] = 'H';
            int fila0 = barcoTocado3[0][0];
            int columna0 = barcoTocado3[0][1];
            int fila1 = barcoTocado3[1][0];
            int columna1 = barcoTocado3[1][1];
            matrizVisible[fila0][columna0] = 'H';
            matrizVisible[fila1][columna1] = 'H';
            indexBarco3--;
            contH++;
            }
}

void DisparoBarcoTipo4(int matrizInterna[10][10], char matrizVisible[10][10],int fila, int columna, int &barco4, int barcoTocado4[3][2],int &indexBarco4, int &contT, int &contH)
{
        barco4++;
        if (barco4==1)
            {
            matrizVisible[fila][columna] = 'T';
            barcoTocado4[0][0] = fila;
            barcoTocado4[0][1] = columna;
            contT++;
            }

        if (barco4==2)
            {
            matrizVisible[fila][columna] = 'T';
            barcoTocado4[1][0] = fila;
            barcoTocado4[1][1] = columna;
            contT++;
            }
        if (barco4==3)
            {
            matrizVisible[fila][columna] = 'T';
            barcoTocado4[2][0] = fila;
            barcoTocado4[2][1] = columna;
            contT++;
            }


        if (barco4==4)
            {
            matrizVisible[fila][columna] = 'H';
            int fila0 = barcoTocado4[0][0];
            int columna0 = barcoTocado4[0][1];
            int fila1 = barcoTocado4[1][0];
            int columna1 = barcoTocado4[1][1];
            int fila2 = barcoTocado4[2][0];
            int columna2 = barcoTocado4[2][1];
            matrizVisible[fila0][columna0] = 'H';
            matrizVisible[fila1][columna1] = 'H';
            matrizVisible[fila2][columna2] = 'H';
            indexBarco4--;
            contH++;
            }
}
//______________________________________________________________________________












#endif // FUNCIONES_H_INCLUDED
