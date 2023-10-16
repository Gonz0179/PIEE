#include "SD.h"
#define SD_ChipSelectPin 4
#include "TMRpcm.h"

TMRpcm tmrpcm; // DECLARAMOS tmrpcm como una variable y ast poder utilizarlo en el codigo

void setup() {
 tmrpcm.speakerPin =9; // aqui se conectara la bocana uno en negativo y el otro a 9 digital
Serial.begin (9600);
if (!SD.begin (SD_ChipSelectPin)){
  Serial.println("SD fail");
  return;
}
tmrpcm.setVolume(5);
tmrpcm.play("faded.wav");
}

void loop() {
  // put your main code here, to run repeatedly:

}
