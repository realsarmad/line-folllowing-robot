//LINE FOLLOWING ROBOT

#define Leftmotor_forward 1       // left motor
#define Leftmotor_reverse 2       // left motor
#define Rightmotor_forward 3        // right motor
#define Rightmotor_reverse 4   // right motor

#define left A0
#define right A1

void setup()
{
  
  pinMode(Leftmotor_forward, OUTPUT);
  pinMode(Leftmotor_reverse, OUTPUT);
  pinMode(Rightmotor_forward, OUTPUT);
  pinMode(Rightmotor_reverse, OUTPUT);
  pinMode(left, INPUT);
  pinMode(right, INPUT);
}

void loop()
{
  if(analogRead(left)<500 && analogRead(right)<500 )     // Move Forward
  {
   digitalWrite(Leftmotor_forward, HIGH);
//    digitalWrite(Leftmotor_reverse, LOW);
   digitalWrite(Rightmotor_forward, HIGH);
//    digitalWrite(Rightmotor_reverse, LOW);
  }
  
  else if (analogRead(left)<500 && analogRead(right)>=500)     // Turn right
  {
    digitalWrite(Leftmotor_forward, HIGH);
//    digitalWrite(Leftmotor_reverse, LOW);
    digitalWrite(Rightmotor_forward, LOW);
//    digitalWrite(Rightmotor_reverse, HIGH);
  }
  
  else if(analogRead(left)>=500 && analogRead(right)<500)    // turn left
  {
    digitalWrite(Leftmotor_forward, LOW);
//    digitalWrite(Leftmotor_reverse, LOW);
    digitalWrite(Rightmotor_forward, HIGH);
//    digitalWrite(Rightmotor_reverse, LOW);
  }
  
  else if (analogRead(left)>=500 && analogRead(right)>=500);     // stop
  {
    digitalWrite(Leftmotor_forward, LOW);
    digitalWrite(Leftmotor_reverse, LOW);
    digitalWrite(Rightmotor_forward, LOW);
    digitalWrite(Rightmotor_reverse, LOW);
  }
}
