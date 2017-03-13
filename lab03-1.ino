const byte LED = 13;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.print("Hello, World!");
pinMode(LED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val;
  if(Serial.available() )
{ 
   val = Serial.read();
   switch(val)
   {
     case '1':
    {
      digitalWrite(LED, HIGH);
      Serial.print("LED ON");
      break;
    }
     case '0':
    {
      digitalWrite(LED, LOW);
      Serial.print("LED OFF");
      break;
    }
    }
  }  
}
