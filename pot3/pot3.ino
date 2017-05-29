const int pot=A0;
const int buzzer = 11;
int durum=0;
int cikti=0;


void setup() {
Serial.begin(9600);
pinMode(buzzer, OUTPUT);


}

void loop() {
durum=analogRead(pot);
Serial.println(durum);
cikti=map( durum, 0, 1023, 0, 255);
analogWrite(buzzer, cikti);

}
