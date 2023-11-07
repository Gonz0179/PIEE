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
    Serial.println("Fallo de la tarjeta SD");  
    return;   // Si la tarjeta SD falla, el programa termina
  }
  else{
    Serial.println("SD inicializada correctamente!");
      }

}
void loop() {
  // put your main code here, to run repeatedly: 
      tmrpcm.play("prue1.wav");
      
      tmrpcm.play("prue2.wav");

}
