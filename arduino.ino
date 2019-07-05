boolean button;

void setup() {
  button = false;
  pinMode(8,INPUT);
  Serial.begin(9600);
}

void loop() 
{
  button = digitalRead(8);
   if(button)
   {Serial.write("a");
   }
   else
   {Serial.write("b");
   }
}
