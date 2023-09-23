#include <stdio.h>
#include <time.h>       // for clock_t, clock(), CLOCKS_PER_SEC
int calcularSuma(int n){
    int sum, temppar, tempimpar;
    sum=0;
    temppar=0;
    tempimpar=1;

    for(int i=0; i<n;i++){
        temppar=temppar+tempimpar;
        tempimpar=temppar+tempimpar;
        sum=temppar+sum;
    }

    return sum;
}

int main(){
        // para almacenar el tiempo de ejecución del código
             double time_spent = 0.0;
              
                  clock_t begin = clock(); //Inicio de contador de tiempo
                  
                       int n=500;
                          int sum= calcularSuma(n);
                              printf("La suma de los %d indices pares (contando desde el 0) es de %d \n",
                                         n, sum);
        
                                              
                                                  clock_t end = clock(); //Fin de contador de tiempo
                                                      
                                                          time_spent += (double)(end - begin) / CLOCKS_PER_SEC; //Convierte a segundos
                                                              printf("El tiempo de ejecucion es de %f segundos", time_spent);
                                                                  return 0;}
