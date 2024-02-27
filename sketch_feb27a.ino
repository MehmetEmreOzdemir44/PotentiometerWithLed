int deger=0;
int k_led=10;
int y_led=11;
int s_led=12;
int m_led=13;

void setup() {
  pinMode(A0,INPUT);

  pinMode(k_led,OUTPUT);
  pinMode(y_led,OUTPUT);
  pinMode(s_led,OUTPUT);
  pinMode(m_led,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  deger=analogRead(A0);
  Serial.print("Deger = ");
  Serial.println(deger);
  if(deger<=250)
  {
    digitalWrite(k_led,HIGH);
    digitalWrite(y_led,LOW);
    digitalWrite(s_led,LOW);
    digitalWrite(m_led,LOW);
  }
  else if(deger<=500)
  {
    digitalWrite(k_led,LOW);
    digitalWrite(y_led,HIGH);
    digitalWrite(s_led,LOW);
    digitalWrite(m_led,LOW);
  }
  else if(deger<=750)
  {
    digitalWrite(k_led,LOW);
    digitalWrite(y_led,LOW);
    digitalWrite(s_led,HIGH);
    digitalWrite(m_led,LOW);
  }
  else if(deger<=1024)
  {
    digitalWrite(k_led,LOW);
    digitalWrite(y_led,LOW);
    digitalWrite(s_led,LOW);
    digitalWrite(m_led,HIGH);
  }


}
