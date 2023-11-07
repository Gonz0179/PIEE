#include "SD.h"
#include <SPI.h> 
#define SD_ChipSelectPin 4
#include "TMRpcm.h"

TMRpcm tmrpcm; // DECLARAMOS tmrpcm como una variable y ast poder utilizarlo en el codigo

void setup() {
tmrpcm.speakerPin =9;
tmrpcm.quality(1);
tmrpcm.setVolume(5);// aqui se conectara la bocana uno en negativo y el otro a 9 digital
Serial.begin (9600);
 if (!SD.begin(SD_ChipSelectPin)) {  // Comprueba si la tarjeta SD se ha inicializado correctamente
    Serial.println("Fallo de la tarjeta SD, revisa las conexiones papu :v");  
    return;   // Si la tarjeta SD falla, el programa termina
  }
  else{
    Serial.println("SD inicializada correctamente!");
      }

}
void loop() {
  // put your main code here, to run repeatedly: 
      tmrpcm.play("6.wav");
      delay(1000);
      tmrpcm.play("4.wav");
     delay(3000);
      tmrpcm.play("5.wav");
     delay(4000);
      tmrpcm.play("3.wav");
      delay(2000);
      tmrpcm.play("88.wav");
      delay(50000);
}
