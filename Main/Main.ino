//Pins
const int LDR_pin = 13;
const int Vout_pin = A0;

//Values
float Vout = 0;
bool Lamp_state = 1;

void setup() {
  pinMode(LDR_pin, OUTPUT);
  pinMode(Vout_pin, INPUT);

  digitalWrite(LDR_pin, HIGH);
  
  Serial.begin(9600);
  // put your setup code here, to run once:
}

void loop() {
  if (Lamp_state==1){
    digitalWrite(LDR_pin, HIGH);
    Vout = map(analogRead(Vout_pin), 0, 1024, 0, 500);
    Vout = Vout/100; //dV to V
    Serial.print(Vout);
    Serial.print("V\n");
    delay(100);
  }
  else{
    digitalWrite(LDR_pin, LOW);
  }
  // put your main code here, to run repeatedly:

}
