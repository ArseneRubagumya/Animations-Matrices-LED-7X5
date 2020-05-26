# Animations Matrices LED 7X5

## Materials : 
    * Arduino UNO
    * LED Matrix 7X5 (TA20-11SURKWA)
    * Breadboard
    * Connetions Cables
    * PC with an Arduino IDE
On the LED Matrix, we have 5 Vcc et 7 Gnd pins. We connect all the pins starting with the Vcc and then Gnd, as we can see on the table below, to facilitate easy manupialation. 


	| Vcc (Columns) |
	| ------ |
	|Pin Matrice | Pin Arduino |
	| ------ | ------- |
	| 13 | 0 |
	| 3 | 1 |
	| 4 (or 11) | 2 |
	| 10 | 3 |
	| 6 | 4 |
	| Gnd (Rows) |
	| ----- | 	
	| 9 | 6 |
	| 14 | 7 |
	| 8 | 8 |
	| 12 (or 5) | 9 |
	| 1 | 10 |
	| 7 | 11 |
	| 2 | 12 |


## Programmations
Lors de l’affichage sur la matrice, on utilise un array2D (matrice 2 dimensions) avec l’exemple ci-dessus qui décrit comme caractère le chiffre 1, Tableau 2. La programmation est en langage C oriente Arduino.
	0, 0, 1, 0, 0 ;
	0, 1, 1, 0, 0 ;
	1, 0, 1, 0, 0 ;
	0, 0, 1, 0, 0 ;
	0, 0, 1, 0, 0 ;
	0, 0, 1, 0, 0 ;
	1, 1, 1, 1, 1 ;