#include <iostream>
using namespace std;

//DECLARACION DE VARIABLES
int cantidadTotalEstudiantes;
int cantidadTotalGrupos;
int notaMasAltaGeneral;
int cantEstudiantesxGrupo = 3;
int cC = 1;
int inicio = 0;

//TEXTOS Y ESPACIOS QUE SALEN EN CONSOLA
string entryText  = "\033[1;7mINGRESE EL NUMERO DE ESTUDIANTES TOTALES DEL SALÓN DE CLASE (NO MAYOR A 300): \033[0m";
string noteText   = "\033[1;35mNOTA DEL ESTUDIANTE #\033[0m";
string groupText  = "\033[1;31mGRUPO #\033[0m";
string bS = " ";
string s       = "\n";
string s2      = "\n\n";

//FUNCION DE CALIFICACION
void calificacionMasAlta()
{
    cout << entryText;
    cin  >> cantidadTotalEstudiantes;
    cout << s;

    //DEFINIENDO LA CANTIDAD TOTAL DE GRUPOS Y NUMERO DE CICLOS DEL FOR EXTERNO
    cantidadTotalGrupos = cantidadTotalEstudiantes/cantEstudiantesxGrupo; 

    //BUCLE DE GRUPOS DE ESTUDIANTES
    int temporal = 0;
    int contador = 0;
    int gruposConNotaMasAlta[300]; // máximo 300 estudiantes
    int estudiantesConNotaMasAlta[300];
    int matrizDeNotasDeCadaGrupo[cantEstudiantesxGrupo];
    int posicionesNotaMasAlta[300]; // para guardar la posición real del estudiante
    for (int contGrupo=inicio; contGrupo <cantidadTotalGrupos; contGrupo++)
    {   
        //system("clear"); //LIMPIEZA DE LA CONSOLA
        cout << groupText << contGrupo + cC;
        cout << s2;
        //BUCLE DE NOTAS DE ESTUDIANTES POR GRUPO
        for (int contEstudiante=inicio; contEstudiante < cantEstudiantesxGrupo; contEstudiante++)
        {
            cout << noteText << contEstudiante + cC;
            cout << bS;
            cin  >> matrizDeNotasDeCadaGrupo[contEstudiante];
            cout << s2;
        }
        // Buscar la posición del estudiante con la nota más alta antes de ordenar
        int posNotaMasAlta = 0;
        int valorNotaMasAlta = matrizDeNotasDeCadaGrupo[0];
        for (int i = 1; i < cantEstudiantesxGrupo; i++) {
            if (matrizDeNotasDeCadaGrupo[i] > valorNotaMasAlta) {
                valorNotaMasAlta = matrizDeNotasDeCadaGrupo[i];
                posNotaMasAlta = i;
            }
        }

        // ...existing code...

        //ORDENAMIENTO BURBUJA
        for (int i=0; i<cantEstudiantesxGrupo; i++)
        {
            for (int k=0; k<cantEstudiantesxGrupo-i-1; k++)
            {    
                if(matrizDeNotasDeCadaGrupo[k]<matrizDeNotasDeCadaGrupo[k+1])
                {
                    temporal                     = matrizDeNotasDeCadaGrupo[k];
                    matrizDeNotasDeCadaGrupo[k]     = matrizDeNotasDeCadaGrupo[k+1];
                    matrizDeNotasDeCadaGrupo[k+1]   = temporal;
                }
            }
        }
        
        

        cout << "La nota más alta del grupo es: " << matrizDeNotasDeCadaGrupo[0] << s2;
        if (matrizDeNotasDeCadaGrupo[0] > notaMasAltaGeneral) {
            notaMasAltaGeneral = matrizDeNotasDeCadaGrupo[0];
            // Reiniciar contador y guardar el primer grupo/estudiante
            contador = 0;
            gruposConNotaMasAlta[contador] = contGrupo + 1;
            estudiantesConNotaMasAlta[contador] = posNotaMasAlta + 1;
            posicionesNotaMasAlta[contador] = posNotaMasAlta;
            contador++;
        } else if (matrizDeNotasDeCadaGrupo[0] == notaMasAltaGeneral) {
            gruposConNotaMasAlta[contador] = contGrupo + 1;
            estudiantesConNotaMasAlta[contador] = posNotaMasAlta + 1;
            posicionesNotaMasAlta[contador] = posNotaMasAlta;
            contador++;
        }
    }
    cout << "La nota más alta general es: " << notaMasAltaGeneral << s2;
    cout << "Estudiantes con la nota más alta general:" << s2;
    for (int i = 0; i < contador; i++) {
        cout << "Grupo: " << gruposConNotaMasAlta[i] << ", Estudiante: " << estudiantesConNotaMasAlta[i] << s2;
    }
    cout << s2;
}