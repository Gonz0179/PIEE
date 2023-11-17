#include "SD.h"
#define SD_ChipSelectPin 4
#include "TMRpcm.h"
#include "SPI.h"

TMRpcm tmrpcm;

void setup(){
tmrpcm.speakerPin = 9;
Serial.begin(9600);
if (!SD.begin(SD_ChipSelectPin)) {
Serial.println("SD fail");
return;
}

tmrpcm.setVolume(5);
tmrpcm.play("3.wav");
}

void loop(){  
tmrpcm.play("1.wav");
delay(60000);
tmrpcm.play("2.wav");
delay(60000);
tmrpcm.play("3.wav");
delay(60000);
}
