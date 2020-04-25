
// Define our pins
int blue = D7; // External LED Green
int white = D6; // External LED Orange
int red = D5; // External LED Red


void setup() {
  pinMode(blue, OUTPUT);
  pinMode(white, OUTPUT);
  pinMode(red, OUTPUT);

  digitalWrite(blue, LOW);
  digitalWrite(white, LOW);
  digitalWrite(red, LOW);
  
  Particle.function("led",ledToggle);

}
void loop()
{
}

int ledToggle(String command) {

    if (command=="blue") {
        digitalWrite(blue,HIGH);
        digitalWrite(white, LOW);
        digitalWrite(red, LOW);
        return 1;
    }
    else if (command=="white") {
        digitalWrite(blue,LOW);
        digitalWrite(white, HIGH);
        digitalWrite(red, LOW);
        
        return 1;
    }
    else if (command=="red") {
        digitalWrite(blue,LOW);
        digitalWrite(white, LOW);
        digitalWrite(red, HIGH);
    
    return 1;
}
    else {
        return 0;
    }
}
