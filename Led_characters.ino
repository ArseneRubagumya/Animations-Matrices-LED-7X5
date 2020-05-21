#include <Array.h>
#include <time.h> 
#include <stdio.h>

//Fonction pour allumer la n-iéme LED
void ledn(int col, int row){ //code to light up the nth LED
    digitalWrite(col, HIGH);
    digitalWrite(row, LOW); 

    //forcing the remaining Vcc to LOW
     switch(col){
      case 0 : digitalWrite(1, LOW);  digitalWrite(2, LOW);  digitalWrite(3, LOW);  digitalWrite(4, LOW);
              break;
      case 1 : digitalWrite(0, LOW);  digitalWrite(2, LOW);  digitalWrite(3, LOW);  digitalWrite(4, LOW);
              break;
      case 2 : digitalWrite(1, LOW);  digitalWrite(0, LOW);  digitalWrite(3, LOW);  digitalWrite(4, LOW);
              break;
      case 3 : digitalWrite(1, LOW);  digitalWrite(2, LOW);  digitalWrite(0, LOW);  digitalWrite(4, LOW);
              break;
      case 4 : digitalWrite(1, LOW);  digitalWrite(2, LOW);  digitalWrite(3, LOW);  digitalWrite(0, LOW);
              break;                        
      }

    
    //forcing the remaining Gnd to HIGH
     switch(row){
      case 6 : digitalWrite(7, HIGH);  digitalWrite(8, HIGH);  digitalWrite(9, HIGH);  digitalWrite(10, HIGH);  digitalWrite(11, HIGH);  digitalWrite(12, HIGH);
              break;
      case 7 : digitalWrite(6, HIGH);  digitalWrite(8, HIGH);  digitalWrite(9, HIGH);  digitalWrite(10, HIGH);  digitalWrite(11, HIGH);  digitalWrite(12, HIGH);
              break;
      case 8 : digitalWrite(7, HIGH);  digitalWrite(6, HIGH);  digitalWrite(9, HIGH);  digitalWrite(10, HIGH);  digitalWrite(11, HIGH);  digitalWrite(12, HIGH);
              break;
      case 9 : digitalWrite(7, HIGH);  digitalWrite(8, HIGH);  digitalWrite(6, HIGH);  digitalWrite(10, HIGH);  digitalWrite(11, HIGH);  digitalWrite(12, HIGH);
              break;
      case 10 : digitalWrite(7, HIGH);  digitalWrite(8, HIGH);  digitalWrite(9, HIGH);  digitalWrite(6, HIGH);  digitalWrite(11, HIGH);  digitalWrite(12, HIGH);
              break;                
      case 11 : digitalWrite(7, HIGH);  digitalWrite(8, HIGH);  digitalWrite(9, HIGH);  digitalWrite(10, HIGH);  digitalWrite(6, HIGH);  digitalWrite(12, HIGH);
              break;
      case 12 : digitalWrite(7, HIGH);  digitalWrite(8, HIGH);  digitalWrite(9, HIGH);  digitalWrite(10, HIGH);  digitalWrite(11, HIGH);  digitalWrite(6, HIGH);
              break;
      }
}

void setup() {
 Serial.begin(9600);
 
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
}


void loop() // the loop function runs over and over again forever
{
  int b;
  int   led[7][5]={{0,0,0,0,0},
                   {0,0,0,0,0},
                   {0,0,1,0,0},
                   {0,0,0,0,0},
                   {0,0,1,0,0},
                   {0,0,0,0,0},
                   {1,1,1,1,1}};
  
  for(int a=0;a<7;a++){ //a counter for rows
      for(int c=0;c<5;c++){ //c counter for columns
              b=led[a][c];
            if(b==1){
              //Serial.print(" Row: ");Serial.print(a);Serial.print(" , Column: ");Serial.print(c);Serial.print(": ");Serial.println(b);
              ledn(c,(a+6));
              delay(1);
              }
            }
    }
      
}
