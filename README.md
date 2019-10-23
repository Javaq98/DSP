# DSP
Proyectos DSP 

En primera instancia, usted encontrará dos carpetas nombradas respectivamente por los algoritmos que desea utilizar; los cuales son:

Convolution 

El archivo convolución, presenta dos carpetas internas, una que nombra el algoritmo desarrollado como una clase y como una libreria.
así mismo de forma general, dentro del codigo de convolución presenta el cálculo de la misma por medio de una señal de entrada y la
señal de impulso, generando así una salida en formato .DAT; Este algoritmo presenta dos distintas formas del cálculo de la misma 
(input y output).

El objetivo de poder implementar dicho algoritmo es poder observar el comportamiento de una señal al convinarse con otra para formar 
una tercera proveniente de las dos anteriores, ya que un estudio tan pequeño se puede emplear para muchos fenómenos que se viven a 
diario, como por ejemplo el eco de la voz, es una convolucion del sonido con otra funcion, en electronica puede representar la salida 
de un sistema lineal etc. 

DFT (Discrete Fourier Transform)

Dentro del archivo DFT usted de igual manera encontrara dos archivos, el desarrollo del algoritmo como una clase y como una librería;
dentro del mismo usted será capaz de poder evaluar una señal como se comporta dentro del dominio de la frecuencia, descomponiendola por la parte Real de la misma y la imaginaria. Por otro lado muy importante, tambien será capaz de poder observar la magnitud de la misma. Así mismo tambien va poder regresar la señal a su estado original por medio de otro algoritmo empleado, IDFT (inverse Discrete Fourier Transform) el cual es el encargado de utilizar las dos señales de salida de la DFT para poder convertir del dominio de la frecuencia al tiempo, teniendo así la señal original que se decidio analizar. 


OBSERVACIONES 

Cabe destacar que dentro del archivo waveform, se encuentra un arreglo .DAT predetermiando, el cual se puede cambiar para analizar otra señal, se importo otra señal con el fin de poder probarla y utilizar la clase y libreria de la mejor manera. 
