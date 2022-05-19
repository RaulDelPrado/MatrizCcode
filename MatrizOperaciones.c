#include <stdio.h>
void leermatriz(int matriz[5][5],int tam);
void mostrarmatriz(int matriz[5][5],int tam);
void transpuesta(int matriz[5][5],int tam);
void sumarmatriz(int matriz[5][5],int tam, int matriz2[5][5] );
void multiplicarmatriz(int matriz[5][5],int tam, int matriz2[5][5] );
void menu(int numero,int matriz[5][5],int matriz2[5][5]);
void main()
{
  int matriz[5][5],numero,matriz2[5][5];
 
  printf("ingrese el tamaño de la matriz con la que quiere interacturar\n");
printf("el tamaño máximo es de 5x5\n");
scanf("%d",&numero);
 menu(numero,matriz,matriz2);
  
   

}
void menu(int numero,int matriz[5][5],int matriz2[5][5]){
    char op;
    int opM;
     printf("Escribe la opcion que deseas realizar\n");
    printf("a-------Leer matriz A \n");
    printf("b-------Leer matriz B \n");
    printf("c-------Mostrar matriz A \n");
    printf("d-------Mostrar matriz B \n");
    printf("e-------Calcular la suma de las matrices A y B \n");
    printf("f-------Calcular la multiplicación de las matrices A y B \n");
     printf("g-------Calcular la transpuesta de la matriz A o matriz B, el usuario especifica cual \n");
    printf("h--------salir\n");
  
    scanf(" %c",&op);
    while(op!='h'){
    
    switch(op){
    case 'a':
    leermatriz(matriz,numero);
    break;
    case 'b':
    leermatriz(matriz2,numero);
    break;
    case 'c':
    mostrarmatriz( matriz,numero);
    break;
    case 'd':
    mostrarmatriz( matriz2,numero);
    break;
    case 'e':
    sumarmatriz(matriz,numero,matriz2);
    break;
      case 'f':
      multiplicarmatriz(matriz,numero,matriz2);
      break;
      case 'g':
      printf("Cual matriz quieres trasponer A o B\n");
      printf("1)------Matriz1\n");
      printf("2)------Matriz2\n");
      scanf("%d",&opM);
      switch(opM){
      case 1:
      transpuesta(matriz,numero);
      break;
      case 2:
      transpuesta(matriz2,numero);
      break;
      }
    
    }
     printf("Escribe la opcion que deseas realizar\n");
    printf("a-------Leer matriz A \n");
    printf("b-------Leer matriz B \n");
    printf("c-------Mostrar matriz A \n");
    printf("d-------Mostrar matriz B \n");
    printf("e-------Calcular la suma de las matrices A y B \n");
    printf("f-------Calcular la multiplicación de las matrices A y B \n");
  printf("g-------Calcular la transpuesta de la matriz A o matriz B (el usuario especifica cual)\n");
printf("h--------salir\n");
    scanf(" %c",&op);

  }
}
void leermatriz(int matriz[5][5],int tam){
    int i,j;
    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            printf("ingrese el numero de la posicion %d %d \n",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
}
void mostrarmatriz(int matriz[5][5],int tam){
int i,j;
    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            printf("%4d",matriz[i][j]);
            
            
        }
        printf("\n");
    }
}
void transpuesta(int matriz[5][5],int tam){
  
int matrizR[5][5],i,j;
  for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
          matrizR[i][j]=matriz[j][i];
          }
    }
  mostrarmatriz(matrizR,tam);
}
  void sumarmatriz(int matriz[5][5],int tam, int matriz2[5][5] ){
int matrizR[5][5],i,j;
  for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
          matrizR[i][j]=matriz[i][j]+matriz2[i][j];
          }
    }
  mostrarmatriz(matrizR,tam);
}

void multiplicarmatriz(int matriz[5][5],int tam, int matriz2[5][5] ){
int matrizR[5][5],i,j,k;

  for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
          
          matrizR[i][j]=0;
          for(k=0;k<tam;k++){

            matrizR[i][j]=matrizR[i][j]+(matriz[i][k]*matriz2[k][j]);
          }
          }
    }
  mostrarmatriz(matrizR,tam);
}
