# Animations Matrices LED 7X5

## Matérielles : 
    * Arduino UNO (avec son USB)
    * Matrice LED 7X5 (TA20-11SURKWA)
    * Breadboard
    * Fils des connections
    * Poste de travail (ordinateur) avec un Arduino IDE

Sur la matrice on a 5 Vcc et 7 Gnd (masses) . On connectes tous les pins en commençant avec les Vccs et puis les Gnds, comme décrit dans Tableau 1, pour faciliter la lisibilité et compréhension direct du projet.

## Programmations
Lors de l’affichage sur la matrice, on utilise un array2D (matrice 2 dimensions) avec l’exemple ci-dessus qui décrit comme caractère le chiffre 1, Tableau 2. La programmation est en langage C oriente Arduino.
	0, 0, 1, 0, 0 ;
	0, 1, 1, 0, 0 ;
	1, 0, 1, 0, 0 ;
	0, 0, 1, 0, 0 ;
	0, 0, 1, 0, 0 ;
	0, 0, 1, 0, 0 ;
	1, 1, 1, 1, 1 ;