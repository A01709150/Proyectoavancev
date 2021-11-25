# Proyecto-avance
Contexto:

Este proyecto es un simulador de un mercado con diferentes pasillos. Cada pasillo es una sección diferentes que contiene diferentes productos. Estos siendo frutas, vegetales y carnes. 


Funcionalidad:

Por el momento el programa permite al usuario escoguer las frutas, los vegetales y las diferentes carnes y sus cantidades. El usurio puede escoguer sus alimentos preferidos del menu disponible. El programa todavia no puede sumar la cantidad exacta de productos escogidos, ni sus precios.


Consideraciones:

Este programa solo corre en la consola y esta hecho con c++. compilarlo y correrlo se utilizaria "g++ Main.cpp && ./a.out"


Corrección:

Los siguientes cambios fueron realizados:
-Se cambio la base del main, es decir es bastante diferente al modelo anterior. 
-Las clases ahora estan en archivos diferentes ya que han sido extedido bastante. A cada clase se le agrego una función nueva con el proposito de desplegar el menu de ese pasillo y dejar que el usuario escoga lo que quiere con su cantidad deseada. 
-Incluso se agrego un compañante al usuario para que se sienta un poco mas intuitivo.