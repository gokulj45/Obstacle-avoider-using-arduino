int ls=digitalRead(4);//left sensor input
int rs=digitalRead(8);//right sensor input
void setup() {
  // put your setup code here, to run once:
  pinMode(4,INPUT);
  pinMode(8,INPUT);
  pinMode(2,OUTPUT);//5 volt enable
  pinMode(5,OUTPUT);//right motor backward
  pinMode(6,OUTPUT);//right motor forward
  pinMode(9,OUTPUT);//left motor backward
  pinMode(10,OUTPUT);//left motor forward
  digitalWrite(2,HIGH);
}

void loop() {
  
  //forward
  if((ls==LOW)&&(rs==LOW))
  {
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  delay(200);
  }
  /*backward
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
*/
  
  if((ls==LOW)&&(rs==HIGH))
  {
    //left
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  delay(200);
  }

  if((ls==HIGH)&&(rs==LOW))
  {
  //right 
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  delay(200);
  }
   if((ls==HIGH)&&(rs==HIGH))
  {
    //right
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  delay(200);
  }
 // put your main code here, to run repeatedly:

} 
