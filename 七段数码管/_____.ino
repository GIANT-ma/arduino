int i=0;
int j=0;
int k=0;

void setup()
{
  Serial.begin(9600);
  for(i=0;i<=7;i++)
  {
    pinMode(i,OUTPUT);
  }
  for(i=0;i<=7;i++)
  {
    digitalWrite(i,HIGH);
  }
}

void loop()
{
  int num[10][7]={
    {3,4,6,7,8,9},
    {8,9},
    {3,5,6,7,8},
    {3,5,7,8,9},
    {4,5,8,9},
    {3,4,5,7,9},
    {3,4,5,6,7,9},
    {3,8,9},
    {3,4,5,6,7,8,9},
    {3,4,5,7,8,9}
  };
  if(Serial.available() > 0)
  {
  for(i=0;i<10;i++)
  {
    for(j=0;j<7;j++)
    {
      digitalWrite(num[i][j],LOW); 
    }
    delay(200);
    for(k=1;k<=7;k++)
    {
      digitalWrite(k,HIGH);
    }
    delay(200);
  }
}
}
