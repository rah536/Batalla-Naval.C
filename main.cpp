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




#include <iostream>
#include <string.h>
#include "funciones.h"
#include <stdlib.h>
#include<windows.h>
using namespace std;

int main()
{
        MostrarMensajeBienvenida();
        system("cls");

        string salida;
        string opcionString;
        char opcion;
        int matrizInterna[10][10];
        char matrizVisible[10][10];

        int indexBarco1 = 4;

        int barco20=0; //barco 2 , grupo 0
        int indexBarco2 = 3;
        int barcoTocado20[1][2]; //para almacenar f y c, en caso de ser Tocado y no perder ese dato, lo mismo en las demas matrices debajo


        int barco21=0; //barco 2 , grupo 1
        int barcoTocado21[1][2];

        int barco22=0; //barco 2 , grupo 2
        int barcoTocado22[1][2];

        int barco30=0; //barco 3 , grupo 0
        int indexBarco3 =2;
        int barcoTocado30[2][2];

        int barco31=0; // barco 3, grupo 1
        int barcoTocado31[2][2];

        int barco4=0; //barco 4
        int indexBarco4 =1;
        int barcoTocado4[3][2];

        int contA = 0; //Contador Agua
        int contT = 0; //         Tocados
        int contH = 0; //         Hundidos

        do {
            cout<<"\n   B A T A L L A    N A V A L ";
            cout<<"\n /////////////////////////////";
            cout<<"\n==============================";
            cout<<"\n||           Menu           ||";
            cout<<"\n==============================";
            cout<<"\n||        1) Jugar          ||";
            cout<<"\n||        2) Ayuda          ||";
            cout<<"\n||        3) Salir          ||";
            cout<<"\n==============================";

            cout<<"\n Ingresar una opcion ->: ";
            cin >> opcionString;
            if (opcionString.length() > 1)
            {
                system("cls");
                cout << "La opcion no es valida \n";
                system("pause");
                system("cls");
                continue; //
            }
            opcion = opcionString[0];
            switch (opcion){
                case '1':
                    {
                        bool volverJugar = false;
                        // volver a jugar
                        do{
                            IniciarMatrizVisible(matrizVisible);
                            CargarMatrizInterna(matrizInterna);
                            system("cls");
                            string tipodejuego;
                            int  cantidadDisparos;
                            int cont1111 = 0; //Contador para mostrar solo una vez el flash 11-11

                            do {
                            system("cls");
                            MenuTipoDeJuego();
                            cin >> tipodejuego;
                            cin.ignore();

                                if (tipodejuego == "1")
                                {
                                    cantidadDisparos = 50;
                                }
                                if (tipodejuego == "2")
                                {
                                    cantidadDisparos = 25;
                                }
                            }while (!(tipodejuego == "1" || tipodejuego == "2"));

                            do{
                                system("cls"); // Limpiar pantalla
                                cout << "\n Para salir hacia el menu del juego ingresar las coordenadas 0 y 0\n";
                                cout << "\n Para ver las las posiciones de los barcos por un momento ingresar 11 y 11 (Funciona una sola vez)\n";
                                cout << "\n Para ver las instrucciones del juego ingresar las coordenadas 12 y 12\n";
                                cout << "\n Cantidad de disparos disponibles:" << cantidadDisparos;
                                cout << "\n Cantidad de disparos al agua:" << contA;
                                cout << "\n Cantidad de disparos a una parte del barco:" << contT;
                                cout << "\n Cantidad de disparos que hundieron al barco:" << contH << ".\n\n";

                                cout << "\n Cantidad de barcos tamaño 1 por hundir:" << indexBarco1;//contador variable;
                                cout << "\n Cantidad de barcos tamaño 2 por hundir:" << indexBarco2; //contador variable;
                                cout << "\n Cantidad de barcos tamaño 3 por hundir:" << indexBarco3;//contador variable;
                                cout << "\n Cantidad de barcos tamaño 4 por hundir:" << indexBarco4 << ".\n\n";

                                ImprimirGrafico(matrizVisible);
                                int fila, columna;
                                cout << "Ingresar fila: ";
                                cin>>fila;
                                cin.ignore();
                                cout << "Ingresar columna: ";
                                cin>>columna;
                                cin.ignore();

                                if (fila == 0 && columna == 0) // Ir al menu de salida durante el juego
                                {
                                    do{
                                    system("pause");
                                    system("cls");
                                    MenuSalida();

                                    cin >> salida;
                                    if (salida == "1")
                                        {
                                            system("pause");
                                            system("cls");
                                            return main();
                                        }
                                        if (salida == "2") //nada. que siga el juego
                                            {

                                            }
                                            else
                                                {
                                                    cout << "La opcion no es valida \n";
                                                }
                                    }while (!(salida == "1" || salida == "2"));
                                }

                                if (fila == 12 && columna == 12)  // Ir a Instrucciones durante el juego
                                 {
                                        system("cls");
                                        InstruccionesDuranteElJuego();
                                        system("pause");
                                        system("cls");
                                 }

                                if (fila == 11 && columna == 11)
                                {
                                    if (cont1111 == 0) //Contador para mostrar solo una vez el flash 11 11, entra una vez, queda en 1- y no entra mas al if
                                    {
                                        system("cls");
                                        ImprimirMatrizInterna(matrizInterna);
                                        Sleep(3000);
                                        cont1111++;
                                        continue;
                                    }
                                    continue;
                                }

                                if ((fila <= 10 && fila >= 1) && (columna <= 10 && columna >= 1)) //Filtrando disparos del 1 al 10
                                {
                                    fila--; // del 1 a10 -> 0al9
                                    columna--;

                                    if (matrizVisible[fila][columna] != '.')
                                        {
                                            cantidadDisparos--;
                                            continue;
                                        }

                                    if (matrizInterna[fila][columna] == 0)
                                        {
                                            matrizVisible[fila][columna] = 'A';
                                            cantidadDisparos--;
                                            contA++;
                                        }

                                    if (matrizInterna[fila][columna] == 1)
                                        {
                                        matrizVisible[fila][columna] = 'H';
                                        indexBarco1--;
                                        contH++;
                                        }

                                    if (matrizInterna[fila][columna] == 20)
                                    {
                                        DisparoBarcoTipo2(matrizInterna, matrizVisible, fila, columna, barco20, barcoTocado20, indexBarco2, contT, contH);
                                    }
                                    if (matrizInterna[fila][columna] == 21)
                                    {
                                        DisparoBarcoTipo2(matrizInterna, matrizVisible, fila, columna, barco21, barcoTocado21, indexBarco2, contT, contH);
                                    }
                                    if (matrizInterna[fila][columna] == 22)
                                    {
                                        DisparoBarcoTipo2(matrizInterna, matrizVisible, fila, columna, barco22, barcoTocado22, indexBarco2, contT, contH);
                                    }
                                    if (matrizInterna[fila][columna] == 30)
                                    {
                                        DisparoBarcoTipo3(matrizInterna, matrizVisible, fila, columna, barco30, barcoTocado30,indexBarco3, contT, contH);
                                    }
                                    if (matrizInterna[fila][columna] == 31)
                                    {
                                        DisparoBarcoTipo3(matrizInterna, matrizVisible, fila, columna, barco31, barcoTocado31,indexBarco3, contT, contH);
                                    }
                                    if (matrizInterna[fila][columna] == 4)
                                    {
                                        DisparoBarcoTipo4(matrizInterna, matrizVisible, fila, columna, barco4, barcoTocado4,indexBarco4, contT, contH);
                                    }
                                    if (indexBarco1==0 && indexBarco2 == 0 && indexBarco3 == 0 && indexBarco4 ==0) // Ganaste!
                                    {

                                        system("cls");
                                        MensajeGanaste();
                                        ImprimirMatrizInterna(matrizInterna);
                                        system("pause");
                                        system("cls");
                                        return main();
                                    }
                                }
                                else
                                {
                                    cout << "Por favor, ingresar una coordenada correcta (entre 1 y 10).\n";
                                    system("pause");
                                }
                            } while (cantidadDisparos > 0);

                                system("pause");
                                system("cls");
                                MensajePerdiste();
                                ImprimirMatrizInterna(matrizInterna);
                                system("pause");
                                system("cls");
                                return main();

                        } while (volverJugar == true);

                                system("pause");
                                system("cls");
                    }break;

                case '2': //INSTRUCCIONES
                    {
                                system("cls");
                                InstruccionesDelMenu();
                                system("pause");
                                system("cls");

                    }break;

                case '3': //salida
                    {
                        do{
                                system("pause");
                                system("cls");
                                MenuSalida();
                                cin >> salida;
                                if (salida == "1")
                                    {
                                        system ("cls");
                                        MostrarMensajeBienvenida();

                                        return 0; //Salida
                                    }
                                    if (salida == "2")
                                        {
                                            system("pause");
                                            system("cls");
                                            break;
                                        }
                                    else
                                        {
                                            cout << "La opcion no es valida \n";
                                        }
                                system("pause");

                        }while (!(salida == "1" || salida == "2"));
                    }break;

                default:
                    {
                        system("cls");
                        cout << "La opcion no es valida \n";
                        system("pause");
                        system("cls");
                        break;
                    }

                }   //llave switch
            } while (opcion!=3);  // do while menu
}   //llave main



