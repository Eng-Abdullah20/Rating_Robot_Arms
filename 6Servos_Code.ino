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
