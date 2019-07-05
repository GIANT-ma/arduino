#include<string.h>
String letters[26]={
// A to I
".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..",
// J to R 
".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.",
// S to Z
"...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.." 
};

String a = "";
int pin = 13;   
void setup() 
{   
  pinMode(pin, OUTPUT); 
  Serial.begin(9600);
  }   
  void loop() 
  {
  
  dot(); dot(); dot();
  dash(); dash(); dash();   
  dot(); dot(); dot();  
  delay(3000); }   
  void dot() 
  {   
    digitalWrite(pin, HIGH);   
    delay(250);   
    digitalWrite(pin, LOW);   
    delay(250); }   
    void dash() 
    {   
      digitalWrite(pin, HIGH);   
      delay(1000);   
      digitalWrite(pin, LOW);   
      delay(250);
         while (Serial.available() > 0)  
    {
        a+= char(Serial.read());
        delay(2);
    }
    String b="";
int n;
int m;
n=a.length();
for (int x=0;x<n;x++)
   {
    if (a[x]>=97&&a[x]<=122)
      { m=int(a[x]-97);
        b+=letters[m];
        for(int k=0;k<=4;k++)
            {
             if (letters[m][k]==".")
             {
                dot();
                break;
             }
             if (letters[m][k]=="-")
             {
             dash;
             break;
             }
            }
        }
   }
    if (a.length() > 0)
    {
        Serial.println(a);
      a= "";
    }
   }        
