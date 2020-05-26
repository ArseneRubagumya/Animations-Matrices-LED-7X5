# Matrices LED Matrix Animation 7X5
Small guidelines on how to setup the projects and draw any charater on the matrix
## Materials : 
    * Arduino UNO
    * LED Matrix 7X5 (TA20-11SURKWA)
    * Breadboard
    * Connetions Cables
    * PC with an Arduino IDE
On the LED Matrix, we have 5 Vcc et 7 Gnd pins. We connect all the pins starting with the Vcc and then Gnd, as we can see on the table below, to facilitate easy manupialation. 

	|Pin Matrice | Pin Arduino |
	| ------ | ------- |
	| Vcc (Columns) |
	| ------ |
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
 
### we start with declaring all pins as outputs
 //declarations des pins 
  pinMode(0, OUTPUT); //Vcc
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  
  pinMode(6, OUTPUT); // Gnd
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);

    ### Function *ledn(col, row)* to light one LED at a time
With the **ledn(col, row )** function, we are able to light one LED at a time. For example if we want to light the 3rd LED on the 2nd row, it becomes **ledn(2, 7)**.

In the **ledn(col, row)** function, the command works by defining the Vcc to 1 and it's Gnd to 0. And then we force the remaining Vccs to 0 and Gnds to 1, in the switch() loop, in order to prevent misrepresentation on the matrix.

    ### Void loop
	* In the void loop we use a 2D array **led[7][5]** in which we represent the character to be drawn

    * With 2 for loops, we check each element making the array. At the appearance of 1, the corresponding LED is light, otherwise no LED is light.

