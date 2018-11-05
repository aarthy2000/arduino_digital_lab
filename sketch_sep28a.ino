int trigPin = 12;
int echoPin = 11;
#define segA 2//connecting segment A to PIN2

#define segB 3// connecting segment B to PIN3

#define segC 4// connecting segment C to PIN4

#define segD 5// connecting segment D to PIN5

#define segE 6// connecting segment E to PIN6

#define segF 7// connecting segment F to PIN7

#define segG 8// connecting segment G to PIN8

 


void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600); 
   //assigns the input and output
   pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  // put your setup code here, to run once:
 for (int i=2;i<9;i++)

                  {
                

                                 pinMode(i, OUTPUT);// taking all pins from 2-8 as output

                  }


}

void loop() {
  // put your main code here, to run repeatedly:
  long duration, distance;
    digitalWrite(trigPin,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin, LOW);
  duration=pulseIn(echoPin, HIGH);
//distance calculations
  distance =(duration/2)/29.1;
  //prints the distance on the serial monitor
  Serial.print(distance);
  Serial.println("CM");
  
  

 if((distance<10)) 
  {
    displaynum(distance);
     delay(250);
}
   else if(distance>10)
 {
     Serial.print("Distance greater than 10  ");
    displaynum(-1);
     delay(100);
       }


}
void displaynum(int COUNT)

{

switch (COUNT)

                {

 
                case -1:
                digitalWrite(segA,  HIGH);

                digitalWrite(segB,  HIGH);

                digitalWrite(segC,  HIGH);

                digitalWrite(segD,  HIGH);
                digitalWrite(segE,  HIGH);

                digitalWrite(segF,  HIGH);

                digitalWrite(segG, LOW);

                break;

                  
                case 0://when count value is zero show”0” on disp

                digitalWrite(segA,  LOW);

                digitalWrite(segB,  LOW);

                digitalWrite(segC,  LOW);

                digitalWrite(segD,  LOW);
                digitalWrite(segE,  LOW);

                digitalWrite(segF,  LOW);

                digitalWrite(segG, HIGH);

                break;

 

                case 1:// when count value is 1 show”1” on disp

                digitalWrite(segA, HIGH);

                digitalWrite(segB, LOW);

                digitalWrite(segC, LOW);

                digitalWrite(segD, HIGH);

                digitalWrite(segE, HIGH);

                digitalWrite(segF, HIGH);

                digitalWrite(segG, HIGH);

                break;

 

                case 2:// when count value is 2 show”2” on disp

                digitalWrite(segA, LOW);

                digitalWrite(segB, LOW);

                digitalWrite(segC, HIGH);

                digitalWrite(segD, LOW);

                digitalWrite(segE, LOW);
                digitalWrite(segF, HIGH);

                digitalWrite(segG, LOW);

                break;

 

                case 3:// when count value is 3 show”3” on disp

                digitalWrite(segA, LOW);

                digitalWrite(segB, LOW);

                digitalWrite(segC, LOW);

                digitalWrite(segD, LOW);

                digitalWrite(segE,HIGH);

                digitalWrite(segF, HIGH);

                digitalWrite(segG,LOW);

                break;

 

                case 4:// when count value is 4 show”4” on disp

                digitalWrite(segA,HIGH);

                digitalWrite(segB, LOW);

                digitalWrite(segC, LOW);

                digitalWrite(segD, HIGH);

                digitalWrite(segE, HIGH);

                digitalWrite(segF, LOW);

                digitalWrite(segG, LOW);

                break;

 

                case 5:// when count value is 5 show”5” on disp

                digitalWrite(segA, LOW);

                digitalWrite(segB, HIGH);

                digitalWrite(segC, LOW);

                digitalWrite(segD, LOW);

                digitalWrite(segE, HIGH);

                digitalWrite(segF, LOW);

                digitalWrite(segG, LOW);

                break;

 

                case 6:// when count value is 6 show”6” on disp

                digitalWrite(segA, LOW);

                digitalWrite(segB, HIGH);

                digitalWrite(segC, LOW);

                digitalWrite(segD, LOW);

                digitalWrite(segE, LOW);

                digitalWrite(segF, LOW);

                digitalWrite(segG, LOW);

                break;

 

                case 7:// when count value is 7 show”7” on disp

                digitalWrite(segA, LOW);

                digitalWrite(segB, LOW);

                digitalWrite(segC, LOW);

                digitalWrite(segD, HIGH);

                digitalWrite(segE, HIGH);

                digitalWrite(segF, HIGH);

                digitalWrite(segG, HIGH);

                break;

 

                case 8:// when count value is 8 show”8” on disp

                digitalWrite(segA, LOW);

                digitalWrite(segB, LOW);

                digitalWrite(segC, LOW);

                digitalWrite(segD, LOW);

                digitalWrite(segE, LOW);

                digitalWrite(segF, LOW);

                digitalWrite(segG, LOW);

                break;

 

                case 9:// when count value is 9 show”9” on disp

                digitalWrite(segA, LOW);

                digitalWrite(segB, LOW);

                digitalWrite(segC, LOW);

                digitalWrite(segD, LOW);

                digitalWrite(segE, HIGH);

                digitalWrite(segF, LOW);

                digitalWrite(segG, LOW);

                break;

          }

                
}
