#include <LiquidCrystal_I2C.h>
#include <Wire.h> 

// Inisialisasi LCD
LiquidCrystal_I2C lcd(0x27, 16, 2);
#define LDR A0
#define LED 2
#define switchPin 3

int sensorValue = 0;// Variabel untuk menyimpan nilai sensor
int lux;
int switchState = 0; // Variabel untuk menyimpan status slide switch


int sensorLum(int raw){
// Konversi nilai 
float Vout = float(raw) * (5 / float(1023));// An ke V
float RLDR = (5000* (5 - Vout))/Vout; // Konversi V ke R
int phys=500/(RLDR/1000); // Konversi R ke Lumen (aprox)
return phys;
} 

void setup() {
  // inisialisasi pin sebagai input/output
  lcd.init(); // Inisialisasi LCD
  lcd.begin (16,2);
  lcd.backlight(); // Nyalakan backlight
  lcd.setCursor(0, 0); // Atur kursor ke baris 1 kolom 1
  lcd.print("AUTOMATIC LIGHT");
  pinMode(LED, OUTPUT);
  pinMode(LDR, INPUT);// Deklarasi LDR sebagai Input
  pinMode(switchPin, INPUT);
  Serial.begin(9600);
}
  
  void loop() {  
  sensorValue = analogRead(LDR); // baca nilai LDR dari pin analog input
  lux = sensorLum(sensorValue);
  switchState = digitalRead(switchPin);
    
  Serial.print("Sensor value: ");
  Serial.print(sensorValue);
  Serial.print(", Lux: ");
  Serial.println(lux);

  // mengatur kecerahan LED berdasarkan nilai sensor LDR
 if (switchState == HIGH) {
  if (lux < 300) {
   digitalWrite(2, HIGH);
   lcd.setCursor(0,0);
   lcd.print("Lampu Taman: ON  ");
   lcd.setCursor(0,1);
   lcd.print("Lux: ");
   lcd.print(lux);
   lcd.print("   ");
   delay(1000);
   lcd.clear();
   Serial.println("Lampu Taman ON");
  } else {
   digitalWrite(2, LOW);
   lcd.setCursor(0,0);
   lcd.print("Lampu Taman: OFF  ");
   lcd.setCursor(0,1);
   lcd.print("Lux: ");
   lcd.print(lux);
   lcd.print("   ");
   delay(1000);
   lcd.clear();
  }
}
else {
    digitalWrite(2, LOW);
    lcd.setCursor(0,0);
  }
  }
