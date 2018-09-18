#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
    // Crear Variable para almacenar el código morse
    char Morse[48][7];
    // Matriz que almacena los caracteres correspondientes a la traducción
    // al código morse asociando los índices de las dos matrices
    char Simbolos[48];
    // Variable para solicitar el código morse
    char FraseMorse[200];
    // Variable para almacenar el código traducido
    char FraseNormal[200];
    // Variables auxiliares
    int contador;
    int encontrado;
    int contadorfrasenormal=0;
    // Variable de tipo cadena para trabajar con ella en vez de trabajar
    // con la variable original, se podría omitir
    char CopiaFraseMorse[200];
    // Puntero para trabajar con las palabras de la frase morse
    char *Puntero;
    // Delimitador para romper la cadena morse en trozos
    char Delimitador[5]=" ";
    // Guardar los caracteres correspondientes al código morse
    // en una matriz y guardar los caracteres correspondientes de la
    // traducción en otra matriz asociando así los códigos de índice
    // entre las dos matrices
    strcpy(Morse[0],".-"); // A
    Simbolos[0]='A';
    strcpy(Morse[1],"-..."); // B
    Simbolos[1]='B';
    strcpy(Morse[2],"-.-."); // C
    Simbolos[2]='C';
    strcpy(Morse[3],"-.."); // D
    Simbolos[3]='D';
    strcpy(Morse[4],"."); // E
    Simbolos[4]='E';
    strcpy(Morse[5],"..-."); // F
    Simbolos[5]='A';
    strcpy(Morse[6],"--."); // G
    Simbolos[6]='G';
    strcpy(Morse[7],"...."); // H
    Simbolos[7]='H';
    strcpy(Morse[8],".."); // I
    Simbolos[8]='I';
    strcpy(Morse[9],".---"); // J
    Simbolos[9]='J';
    strcpy(Morse[10],"-.-"); // K
    Simbolos[10]='K';
    strcpy(Morse[11],".-.."); // L
    Simbolos[11]='L';
    strcpy(Morse[12],"--"); // M
    Simbolos[12]='M';
    strcpy(Morse[13],"-."); // N
    Simbolos[13]='N';
    strcpy(Morse[14],"---"); // O
    Simbolos[14]='O';
    strcpy(Morse[15],".--."); // P
    Simbolos[15]='P';
    strcpy(Morse[16],"--.-"); // Q
    Simbolos[16]='Q';
    strcpy(Morse[17],".-."); // R
    Simbolos[17]='R';
    strcpy(Morse[18],"..."); // S
    Simbolos[18]='S';
    strcpy(Morse[19],"-"); // T
    Simbolos[19]='T';
    strcpy(Morse[20],"..-"); // U
    Simbolos[20]='U';
    strcpy(Morse[21],"...-"); // V
    Simbolos[21]='V';
    strcpy(Morse[22],".--"); // W
    Simbolos[22]='W';
    strcpy(Morse[23],"-..-"); // X
    Simbolos[23]='X';
    strcpy(Morse[24],"-.--"); // Y
    Simbolos[24]='Y';
    strcpy(Morse[25],"--.."); // Z
    Simbolos[25]='Z';
    strcpy(Morse[26],".-.-"); // Ä
    Simbolos[26]='Ä';
    strcpy(Morse[27],"---."); // Ö
    Simbolos[27]='Ö';
    strcpy(Morse[28],"..--"); // Ü
    Simbolos[28]='Ü';
    strcpy(Morse[29],"----"); // Ch
    Simbolos[29]='$'; // no se ha especificado el símbolo correcto
    strcpy(Morse[30],"-----"); // 0
    Simbolos[30]='0';
    strcpy(Morse[31],".----"); // 1
    Simbolos[31]='1';
    strcpy(Morse[32],"..---"); // 2
    Simbolos[32]='2';
    strcpy(Morse[33],"...--"); // 3
    Simbolos[33]='3';
    strcpy(Morse[34],"....-"); // 4
    Simbolos[34]='4';
    strcpy(Morse[35],"....."); // 5
    Simbolos[35]='5';
    strcpy(Morse[36],"-...."); // 6
    Simbolos[36]='6';
    strcpy(Morse[37],"--..."); // 7
    Simbolos[37]='7';
    strcpy(Morse[38],"---.."); // 8
    Simbolos[38]='8';
    strcpy(Morse[39],"----."); // 9
    Simbolos[39]='9';
    strcpy(Morse[40],".-.-.-"); // .
    Simbolos[40]='.';
    strcpy(Morse[41],"--..--"); //  ,
    Simbolos[41]=',';
    strcpy(Morse[42],"..--.."); // ?
    Simbolos[42]='?';
    strcpy(Morse[43],"..--."); // !
    Simbolos[43]='!';
    strcpy(Morse[44],"---..."); // :
    Simbolos[44]=':';
    strcpy(Morse[45],".-..-."); // "
    Simbolos[45]='"';
    strcpy(Morse[46],".----."); // '
    Simbolos[46]='\'';
    strcpy(Morse[47],"-...-"); // =
    Simbolos[47]='=';
    // Solicitar la frase en morse
    printf("\nFrase en morse:");
    gets(FraseMorse);
    // Realizar copia de la cadena para trabajar con ella
    strcpy(CopiaFraseMorse,FraseMorse);
    printf("\nFrase a analizar: %s",CopiaFraseMorse);
    // Descomposición de la cadena en trozos
    contadorfrasenormal = 0;
    printf("\ndescomposición de la cadena en trozos\n");
    // Primera llamada => Primer token
    Puntero = strtok( CopiaFraseMorse, Delimitador);
    // Mientras exista una palabra asociada al puntero recorrer la frase
    while(Puntero!=NULL) {
       printf( "\n%s", Puntero );
       // Buscar el carácter correspondiente a la cadena
       // Inicializar los contadores para recorrer la matriz de símbolos
       // y código morse hasta encontrar el carácter correspondiente
       contador=0;
       encontrado=0;
       while(contador<48 && encontrado!=1) {
           // Si se encuentra el carácter se cambia la var encontrado
           if (strcmp(Puntero,Morse[contador++])==0) encontrado=1;
       }
       // si se ha encontrado el carácter
       if (encontrado==1) {
          // se guarda el carácter en la variable de frase normal
          FraseNormal[contadorfrasenormal++]=Simbolos[contador-1];
          // se visualiza el símbolo correspondiente al carácter encontrado
          printf(" %c",Simbolos[contador-1]);
       }
       // Siguientes llamadas de descomposición de la cadena
       Puntero = strtok( NULL, Delimitador );
    }
    // Finalizar la variable que guarda la frase traducida con el símbolo de
    // fin de cadena
    FraseNormal[contadorfrasenormal]='\0';
    // Visualizar la frase traducida
    printf("\nLa frase traducida es %s\n",FraseNormal);
  system("PAUSE");
  return 0;
}
