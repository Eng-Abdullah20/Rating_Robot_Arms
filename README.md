Controlling Rating Robot Arms Technical Description 

1.	Hardware Description

In this task, the circuit has been designed to be composed of a 9V DC voltage source to power the servo motors, a microcontroller (Arduino Uno) and six servo motors tom move the robot arms. 

2.	Implementation 

To construct the circuit, first connect al servos to the power source (9V battery) and take three servo motors and connect them in parallel to pin 7 and the other three to pin 6. In this construction each three motors are controlling one robot arm.

3.	Programing Description

The motors were programmed to move three different movements. These movements are from 0 to 180 (to raise hand), from 0 to 45 (to welcome the user) and from 0 to 145 (to react after rating). The initial position was set to 0 degrees as requested by mechanical engineers. 

// include Servo Library

#include <Servo.h> // include the library for servo motors

//Define the servos

Servo servo1;

Servo servo2;

Servo servo3;

Servo servo4;

Servo servo5;

Servo servo6;


// declare intial position

int pos =0;

void setup() {  

servo1.attach(7);

servo2.attach(7);

servo3.attach(7);

servo4.attach(6);

servo5.attach(6);

servo6.attach(6);

}

void loop (){
    for (pos = 0; pos <= 180; pos += 1){
    
          servo1.write(pos);              // tell servo to go to position in variable 'pos'
          
          delay(15);
          
          servo2.write(pos);
          
          delay(15);
         
          servo3.write(pos);   
          
          delay(15);
         
          servo4.write(pos);
          
          delay(15);
          
          servo5.write(pos); 
         
          delay(15);
          
          servo6.write(pos);
          
          delay(15);
          

          if (pos==180){
          
            pos=0;
            
            break;
         
   }
    }
    for (pos = 0; pos <= 45; pos += 1){
    
          servo1.write(pos);              // tell servo to go to position in variable 'pos'
          
          delay(15);
         
          servo2.write(pos);
          
          delay(15);
          
          servo3.write(pos); 
          
          delay(15);
         
          servo4.write(pos);
          
          delay(15);
          
          servo5.write(pos);   
          
          delay(15);
          
          servo6.write(pos);
          
          delay(15);

          if(pos==45){
          
            pos=0;
            
            break;
            
          }
    }
     for (pos = 0; pos <= 145; pos += 1){
     
          servo1.write(pos);              // tell servo to go to position in variable 'pos'
          
          delay(15);
         
          servo2.write(pos);
          
          delay(15);
          
          servo3.write(pos);  
          
          delay(15);
         
          servo4.write(pos);
          
          delay(15);
          servo5.write(pos);  
          
          delay(15);
          servo6.write(pos);
          
          delay(15);

          if(pos==145){
          
            pos=0;
            
            break;
            
          }
    }
 
  }

