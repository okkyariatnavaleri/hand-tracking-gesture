
#include <Wire.h> // Library kabel sedikit

String data_serial_receive;
int time_delay = 2;
int ledPins = A1; 


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  // pinMode(LED_BUILTIN, OUTPUT);
  for(int i = 0; i < A1; i++){
     pinMode(ledPins = A1,OUTPUT);  //this is a loop and will repeat eight times
  }
  
}

void loop() {
  // put your main code here, to run repeatedly:

   if (Serial.available() > 0) {
    data_serial_receive = Serial.readStringUntil('\n');

    if (data_serial_receive == "15"){ // Kode yang diterima dari serial python, tangan kanan dan 1 jari yang terdeteksi

      digitalWrite(ledPins = A1, HIGH); // LED nyala
      
      //delay(time_delay);// wait for a second
    }



      
      // delay(time_delay);// wait for a second
    }
    else if (data_serial_receive == "25"){ // disamakan dengan '11' jadi 1 LED saja yang menyala

      digitalWrite(ledPins = A1, HIGH); // LED nyala

      
      //delay(time_delay);// wait for a second
    }





    else if (data_serial_receive == "10" or data_serial_receive == "20"){
     

      for (int i=0; i<5; i++){
        digitalWrite(ledPins = A1, LOW); // Jika tangan mengepal maka semua LED mati
      }
      
      // delay(time_delay);// wait for a second
    }
  }
