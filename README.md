# Matrices LED Matrix Animation 7X5
Small guidelines on how to setup the projects and draw any charater on the matrix
## Materials : 
    * Arduino UNO
    * LED Matrix 7X5 (TA20-11SURKWA)
    * Breadboard
    * Connetions Cables
    * PC with an Arduino IDE
On the LED Matrix, we have 5 Vcc et 7 Gnd pins. We connect all the pins starting with the Vcc and then Gnd to facilitate easy manupialation. 

	
## Programmations
 
### we start with declaring all pins as outputs
 //declarations des pins 
  pinMode(0, OUTPUT); //Vcc
 
  pinMode(6, OUTPUT); // Gnd
 
### Function *ledn(col, row)* to light one LED at a time
With the **ledn(col, row )** function, we are able to light one LED at a time. For example if we want to light the 3rd LED on the 2nd row, it becomes **ledn(2, 7)**.

In the **ledn(col, row)** function, the command works by defining the Vcc to 1 and it's Gnd to 0. And then we force the remaining Vccs to 0 and Gnds to 1, in the switch() loop, in order to prevent misrepresentation on the matrix.

### Void loop
	* In the void loop we use a 2D array **led[7][5]** in which we represent the character to be drawn

    * With 2 for loops, we check each element making the array. At the appearance of 1, the corresponding LED is light, otherwise no LED is light.

