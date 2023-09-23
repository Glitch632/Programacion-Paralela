# Instrucciones

El archivo "sumafibopar.c" es la suma de los n indices pares, iniciando desde 0, hasta n=500, valor que puede ser modificado desde el método main del archivo. Esta tarea se lleva acabo de manera secuencial. 
Para compilarlo se hace uso del comando "gcc sumafibopar.c -std=c99 -o fibo -lm" y seguido se puede ejecutar utilizando el comando "./fibo".

Por otra parte tenemos el archivo "omp_sumafibopar.c" que desarrolla la misma tarea que el primer archivo mencionado, pero hace la suma de manera paralela. También es posible modificarle el n en el método main.
Para compilarlo se hace uso del comando "gcc -fopenmp omp_sumafibopar.c -std=c99 -o ompfibo -lm" y seguido se puede ejecutar utilizando el comando "./ompfibo".


# Conclusiones

Al ejecutar ambos códigos en el super computador GUANE, se observó el mismo resultado pero se tenía un mejor tiempo de la forma secuencial, tardaba *0.000000* segundos, mientras que de la forma paralela tardaba alrededor de *0.000467* segundos.
Esto se debe a que la serie de Fibonacci se desarrolla más eficientemente con un enfoque secuencial en vez de uno paralelo. Es interesante saber que no siempre la mejor opción es utilizar la programación paralela para los procesos, sin embargo, esta tarea es bastante simple y de una secuencia por lo que tiene sentido.
