/* Control H Bidge Gear Motor Control [P003] : http://rdiot.tistory.com/290 [RDIoT Demo] */

int dir1PinA = 2;
int dir2PinA = 3;

int dir1PinB = 4;
int dir2PinB = 5;

int speedPinA = 9;
int speedPinB = 10;

int speed1;

int dir;

void setup()
{

  pinMode(dir1PinA,OUTPUT); // IN1
  pinMode(dir2PinA,OUTPUT); // IN2
  pinMode(speedPinA,OUTPUT); // ENA

  pinMode(dir1PinB,OUTPUT); // IN3
  pinMode(dir2PinB,OUTPUT); // IN4
  pinMode(speedPinB,OUTPUT); // ENB

  speed1 = 200;
  dir = 1;

  delay(1000);

}

void loop()
{
  //analogWrite(speedPinA, speed1); // 200 -> ENA 
  if(dir == 1)
  {
    digitalWrite(speedPinA, HIGH);
    digitalWrite(speedPinB, HIGH);
    
    digitalWrite(dir1PinA, LOW);
    digitalWrite(dir2PinA, HIGH);

    digitalWrite(dir1PinB, LOW);
    digitalWrite(dir2PinB, HIGH);
    
    delay(5000);

    digitalWrite(speedPinA, HIGH);
    digitalWrite(speedPinB, HIGH);
    
    digitalWrite(dir1PinA, HIGH);
    digitalWrite(dir2PinA, LOW);
    
    digitalWrite(dir1PinB, HIGH);
    digitalWrite(dir2PinB, LOW);
    
    delay(5000);

    //digitalWrite(speedPinA, LOW);
    //dir = 0;
  }
}
