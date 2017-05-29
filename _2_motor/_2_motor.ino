const int in1=11;
const int in2=10;
const int in3=9;
const int in4=8;

const int e1=5;
const int e2=6;


void setup() {


pinMode(in1, OUTPUT);
 pinMode(in2, OUTPUT);
 pinMode(in3, OUTPUT);
 pinMode(in4, OUTPUT);

 pinMode(e1, OUTPUT);
 pinMode(e2, OUTPUT);

}

void loop() {
analogWrite(e1, 100);
analogWrite(e2, 100);

  
digitalWrite(in1, HIGH); 
digitalWrite(in2, LOW); 
digitalWrite(in3, HIGH); 
digitalWrite(in4, LOW); 
 

}
