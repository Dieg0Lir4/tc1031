# Proyecto: Organizador de Resultados VGC
El proyecto tiene como objetivo analizar un archivo de texto que contiene información sobre equipos de Pokémon, específicamente los Pokémon y los movimientos que los componen. El objetivo principal del proyecto es determinar cuáles son los Pokémon más usados en los equipos y cuáles son los movimientos más comunes. Despues ser capaz de consultar el pokemon y movimentos segun su rango de usabilidad

A continuación, se presenta un resumen general del proyecto:

1. **Lectura del Archivo de Texto**: El programa comienza abriendo un archivo de texto especificado por el usuario. Este archivo contiene información sobre varios equipos de Pokémon, donde se enumeran los Pokémon y sus movimientos.

2. **Análisis de Equipos y Pokémon**: El programa recorre línea por línea el archivo de texto y realiza un seguimiento de los Pokémon presentes en cada equipo. Utiliza un mapa (diccionario) para contar cuántas veces aparece cada Pokémon y movimiento en los equipos.

4. **Determinación de Pokémon Más Usados**: El programa encuentra el Pokémon que aparece con mayor frecuencia en los equipos, lo que indica cuál es el Pokémon más usado en general.

5. **Determinación de Movimientos Más Usados**: También identifica los movimientos que se repiten con mayor frecuencia, lo que indica cuáles son los movimientos más comunes entre los Pokémon de los equipos.

6. **Presentación de Resultados**: Finalmente, el programa regresa un archivo de texto con los resultados, mostrando cuál es el Pokémon más usado y los movimientos más comunes.

Es importante destacar que este es un proyecto simplificado y que podría extenderse y mejorarse en función de los requisitos específicos del usuario. Por ejemplo, se podrían realizar análisis más detallados, como calcular estadísticas adicionales.


## Descripción del avance 1
En este avance lo que se logra es extraer de forma correcta los resultados de un archivo txt de los resultados de los torneos VGC y son guardados en un vector para luego ordenar, usando un ordenamiento shell sort, a pokemons y movimeintos mayor usados a menor usados. Finalmente se desplagan los resultados en una lista en un archivo aparte.

## Descripción del avance 2
En este avance se logra pasar los datos ya ordenados del vector con los datos a un lista doblemente ligaada.

### Cambios sobre el primer avance
1. Escribe la lista de cambios realizados sobre el planteamiento original: Argumenta la razón por la que decidiste el cambio. Estos argumentos puedes retomarlos más adelante en tu argumentación de competencias.
2. Cambio 1: Decide pasar los datos de un vector a una lista doblemente ligada, esto con el fin de que consultar los datos ya sea de mayor a menor o de menor a mayor. Porque aunque es cierto que casi siempre se quieren ver los equipo con mejores resultados, tambien hay gente que le interesa saber que combinaciones de equipos estan inciando en el meta del competitivo.
3. Cambio 2: Decide en lugar de tener los pokemons y movimeintos en una misma estructura de dato, clasificar los resultados en Pokemons y movimientos. De esa forma es más facil consultar la informacion que quieres, ya sea que no sepas que pokemon quieres para tu equipo o que movimientos quieres que aprenda.


## Descripción del avance 3
Escribe aquí la descripción de lo que contiene este avance. 

### Cambios sobre el segundo avance
Cambio 1: Decidi implementar la funcion de agregar pokemons o de quitarlos de la listas para que de esa forma puede considerar a pokemons no tan usados o quitar pokemons que sientes que son tan conocidos que no hay mucho en lo que puedas inovar. Ademas esto hace que el programa sea interacctivo.

## Instrucciones para compilar el avance de proyecto
Ejecuta el siguiente comando en la terminal:

g++ datos.h ordenamientos.h dlist.h main.cpp -o primer_avance

## Instrucciones para ejecutar el avance de proyecto
Ejecuta el siguiente comando en la terminal:

./primer_avance infoDelTorneo.txt resultados.txt

## Descripción de las entradas del avance de proyecto
Las entradas del proyecto consisten en un archivo de texto que contiene información sobre equipos de Pokémon que participan en un torneo. El formato de este archivo de entrada es el siguiente:

El primer número representa la cantidad de equipos que serán analizados en el torneo. En el ejemplo proporcionado, se tiene un total de 3 equipos.

Luego, para cada equipo, se presenta la siguiente estructura:

Se inicia con la etiqueta "Equipo" seguida de un número que indica la posición del equipo en el torneo (por ejemplo, "Equipo 1:").
A continuación, se enumeran seis Pokémon que componen el equipo, cada uno con sus cuatro movimientos.
Cada Pokémon se presenta con su nombre y sus cuatro movimientos. En el ejemplo, se muestran los movimientos de los Pokémon, como "Charizard" con "Flamethrower," "Dragon Claw," "Earthquake," y "Swords Dance."
Ejemplo de entrada del proyecto:
3
Equipo 1:
Charizard
Flamethrower
Dragon Claw
Earthquake
Swords Dance
Venusaur
Solar Beam
Sludge Bomb
Leech Seed
Synthesis
Blastoise
Hydro Pump
Ice Beam
Surf
Protect
Alakazam
Psychic
Shadow Ball
Calm Mind
Thunder Wave
Machamp
Dynamic Punch
Cross Chop
Rock Slide
Earthquake
Gengar
Shadow Ball
Sludge Bomb
Thunderbolt
Hypnosis
Equipo 2:
Blastoise
Hydro Pump
Ice Beam
Surf
Protect
Gyarados
Dragon Rage
Hydro Pump
Hyper Beam
Thunder Wave
Jolteon
Thunderbolt
Shadow Ball
Thunder Wave
Double Kick
Machamp
Dynamic Punch
Cross Chop
Rock Slide
Earthquake
Aerodactyl
Hyper Beam
Rock Slide
Sky Attack
Earthquake
Lapras
Surf
Ice Beam
Thunderbolt
Sing
Equipo 3:
Snorlax
Hyper Beam
Earthquake
Blizzard
Rest
Exeggutor
Solar Beam
Psychic
Leech Seed
Stun Spore
Tangela
Solar Beam
Slam
Sleep Powder
Hyper Beam
Kangaskhan
Hyper Beam
Dizzy Punch
Rock Slide
Earthquake
Pidgeot
Wing Attack
Quick Attack
Sky Attack
Double Edge
Rhydon
Earthquake
Rock Slide
Hyper Beam
Surf

## Descripción de las salidas del avance de proyecto
Los resultados de la ejecución del programa consisten en listas de Pokémon y movimientos, ordenados de mayor a menor y de menor a mayor según su frecuencia de aparición en los equipos de Pokémon analizados. Estos resultados proporcionan información sobre qué Pokémon y movimientos son los más comunes entre los equipos del torneo. Estos resultados pueden ser útiles para identificar tendencias o patrones en los equipos de Pokémon del torneo.

## Desarrollo de competencias

### SICT0301: Evalúa los componentes
#### Hace un análisis de complejidad correcto y completo para los algoritmos de ordenamiento usados en el programa.
(Copia de la entrega 1) Opté por utilizar el algoritmo de ordenamiento Shell Sort para organizar la lista de Pokémon y movimientos. Esta elección se basó en mi comprensión de que Shell Sort es un algoritmo de ordenamiento por comparación que, cuando se utiliza con la secuencia de brechas adecuada, puede ofrecer un rendimiento eficiente en diversos casos, ya que en este proyecto puede depender como lo organises, y es facil solo cambiar la brecha.

Reconocí la importancia de evaluar la complejidad en el peor caso del algoritmo Shell Sort. Que es O(n(log(n))^2). Dado eso, pense entonces que lo mejor sería usar un merge short o un quick sort, que son más rapidos hablando en complejidad de tiempo. Pero analise la entrada de datos y considere que la entrada de datos no llevaria a que se presente ese caso. y el peor caso es que tenga que reacomodar todos los datos, pero gracias a como se comporta el meta del VGC, hay varios pokemons que se repiten y tienen el mismo numero de frecuencia. Eso significa que tendra que hacer menos cambios ya que los datos tienen el mismo valor y no hay razon para moverlos de lugar. Entonces viendo que el tiempo no es un factor muy influyente entonces me base en la memoria, como el merge usa una complejidad de espacio de O(n) y el quick sort usa O(log(n)), mientras que el shell sort usa O(1). Opte por el shell ya que los datos pueden ser desde los 10 primeros equipo hasta todos los equipos que se registraron a el torneo. Entonces como los datos de entrada pueden llegar a tener una gran diferencia, especialmente cuando son datos muy grandes, decidí usar el shell short que a mi consideración es el mejor para los datos de entrada.

#### Hace un análisis de complejidad correcto y completo de todas las estructuras de datos y cada uno de sus usos en el programa.
(Copira de entrega 2)Primeramente, opté por utilizar un árbol binario de búsqueda como mi estructura de datos, ya que en promedio, su acceso, búsqueda, inserción y eliminación de datos tienen una complejidad de O(log n), que es la más eficiente de las estructuras vistas en clase. Sin embargo, tuve que descartar esta opción rápidamente, ya que aunquen los árboles binarios de búsqueda permiten tener valores repetidos, voy a querer consultar de menor a mayor o mayor a menor en el programa, haciendo que tenga que recorrer hasta el nodo más pequeño y recorrr desde ahí para arriba, en lugar de empezar el final, como el las lista doble ligadas.

Finalmente, al considerar las demas estructuras de datos como listas ligadas, listas doblemente ligadas, pilas y colas, opté por utilizar listas doblemente ligadas. Elegí esta estructura porque, en todas las estructuras, en el peor de sus casos su acceso y búsqueda son de O(n) y en el mejor es de o(1). Esto significa que al final decidí utilizar la estructura de datos que mejor se adaptaba a las necesidades de mi proyecto, y resultó que las listas doblemente ligadas eran la elección más apropiada.

El uso de listas doblemente ligadas me permite mostrar los datos tanto de mayor a menor como de menor a mayor con facilidad. Aunque es cierto que también podría obtener el efecto de invertir los datos utilizando una pila, hay ocasiones en las que necesito acceder al valor en el medio, y las listas doblemente ligadas hacen que esto sea más sencillo. Por otro lado, las listas ligadas y las colas no me permiten invertir los datos de manera sencilla. Por estas razones, finalmente decidí utilizar listas doblemente ligadas como la estructura de datos más adecuada para mi proyecto.


#### Hace un análisis de complejidad correcto y completo para todos los demás componentes del programa y determina la complejidad final del programa.

Componente: while (getline(inputFile, linea))
Documento: main.cpp
Linea: 69
Complejidad: O(n)
Como va a recorrer todos los datos del archivo su complejidad tiene que ser de la cantidad de datos

Componente: Datos dato(linea, POKEMON, datitos[linea].returnFrecuencia(), cantidad + 1);
Documento: main.cpp
Linea: 75
Complejidad: O(log n)
Los mapas tiene una complejidad de O(log n) ya que en su mayoria son implementados como un BST

Componente: for (map<string, Datos>::iterator it = datitos.begin(); it != datitos.end();
Documento: main.cpp
Linea: 91
Complejidad: O(n)
Como va a recorrer todos los datos del archivo su complejidad tiene que ser de la cantidad de datos

Componente: ordenador.shellSort(vectorPokemon,2);
Documento: main.cpp
Linea: 96
Complejidad: O(n(log(n))2)
En un shell short el peor de los casos y en promedio es de complejidad O(n(log(n))2)

Componente: pokemonList.deleteDataFromTop(pokemonList.head,pokemon);
Documento: main.cpp
Linea: 124
Complejidad: O(n)
En el peor de los casos, el valor que estamos buscando sea tails y tengamos que recorrer toda la lista

Considero que en promedio mi programa tiene una complejidad de O(nlog(n)), hay varios casos donde la complejidad de algunas funciones son de O(n), pero considerando la implementacion de mi programa y la tendencia de los datos, es poco probable que siempre se presente el peor de los casos. Por eso determino que mi programa tiene una complejidad de O(nlog(n))

### SICT0302: Toma decisiones
#### Selecciona un algoritmo de ordenamiento adecuado al problema y lo usa correctamente.
(Copia de entrega 1)En mi proyecto, he demostrado competencia al seleccionar e implementar un algoritmo de ordenamiento adecuado para el problema específico que estoy abordando, que es ordenar una lista de Pokémon y sus movimientos en función de su frecuencia de aparición en equipos de un torneo. Mi elección de utilizar el algoritmo de ordenamiento Shell Sort fue una decisión informada. Evalué las características de los datos y las posibles cantidades de datos. Shell Sort fue una elección apropiada debido a su eficiencia en situaciones en las que la lista no está completamente desordenada y su capacidad para adaptarse a diferentes tamaños de datos.

He implementado el algoritmo Shell Sort correctamente en mi programa. Aseguré que el código cumpla con los pasos esenciales del algoritmo, que incluyen la división de la lista en subgrupos y la aplicación de la ordenación en cada uno de estos subgrupos utilizando brechas decrecientes. Además de seleccionar y aplicar el algoritmo, he tenido en cuenta la eficiencia y la adaptabilidad del mismo. A través de la elección de secuencias de brechas adecuadas, actualmente solo organiza todos los datos, y para eso use una diviosion entre 2 para la brecha, pero puede ser adaptada segun los datos. Esto demuestra mi capacidad para ajustar y personalizar el algoritmo según las necesidades del problema.

#### Selecciona una estructura de datos adecuada al problema y la usa correctamente.
(copia de entrega 2)El uso de listas doblemente ligadas me permite mostrar los datos tanto de mayor a menor como de menor a mayor con facilidad. Aunque es cierto que también podría obtener el efecto de invertir los datos utilizando una pila, hay ocasiones en las que necesito acceder al valor en el medio, y las listas doblemente ligadas hacen que esto sea más sencillo. Por otro lado, las listas ligadas y las colas no me permiten invertir los datos de manera sencilla. Por estas razones, finalmente decidí utilizar listas doblemente ligadas como la estructura de datos más adecuada para mi proyecto. Esto se muestra a la hora de mostrar los resultados en el arichivo de texto de salida. Uso las propiedad de las listas doblemente ligadas para facilitar el trabajo de obtención de datos de menor a mayor y viceversa

### SICT0303: Implementa acciones científicas
#### Implementa mecanismos para consultar información de las estructras correctos.
(Copia de entrega 2)Considero que he desarrollado esta competencia a la hora de consultar los datos de mi listas doblemente ligada para obtener los pokemons y movimientos más usados, ahi hago uso del atributo head para leer la lista en orden. Mientras que a la hora de usar tail lo uso para leer la lista de forma inversa y entregar los pokemons y movimientos menos usados.

#### Implementa mecanismos de lectura de archivos para cargar datos a las estructuras de manera correcta.
(copia de entrega 2)Considero que he desarrollado esta competencia, ya que en mi main se puede ver como uso de forma correcta las librerias iostream, fstream y sstream, para leer los datos del archivo de texto infoDelToreno.txt y regresar la informacion en un nuevo archivo de texto. Uso las getline() para leer las lineas del archivo de texto. 

### Implementa mecanismos de escritura de archivos para guardar los datos  de las estructuras de manera correcta
Se puede observar esta competencia, en el momento en el que se te regresan los resultados ya analizados del torneo en un archivo txt y tambien donde cuando se edita el archivo txt con las modificaciones del usuario, para eliminar pokemons que no quiere que se consideren.