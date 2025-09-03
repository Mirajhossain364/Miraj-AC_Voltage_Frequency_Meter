int pulse = 0;

unsigned long ct = 0;
unsigned long pt = 0;

void setup()
{
  Serial.begin (9600);
}

void miraj()
{
  pulse++ ;
}

void loop ()
{
  attachInterrupt (0 , miraj , FALLING);
  ct = millis();

  if (ct-pt>1000)
  {
    Serial.print ("Frequency  = ");
    Serial.print (pulse/2);
    Serial.println (" Hz");

    pulse = 0;
    
    pt = ct ;


  }

}
