
int led[5];

int led_prender;

void setup() {
  // put your setup code here, to run once:

for(int i =0;i<5;i++){
pinMode(led_1,OUTPUT);
}

randomSeed(analogRead(A0);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i =0; i<5;i++){
    digitalWrite(led[i],0);
  }
  led_prender=random(5);
  digitalWrite(led[led_prender],1);
delay(2000);
  }

  
