//Variables
int v_int;

void setup() {
  // put your setup code here, to run once:
  v_int = 0;

Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(v_int);
  v_int++;
}
