#include <IBusBM.h>

#define tempID 1
#define RPMID 2
#define voltageID 3
#define odo1ID 124
#define odo2ID 125 
#define speID 126 

IBusBM IBus;

void setup() {
  Serial.begin(115200);

  IBus.begin(Serial2, 1, 16, 17);


    IBus.addSensor(RPMID);
    IBus.addSensor(RPMID);
    IBus.addSensor(RPMID);
    IBus.addSensor(RPMID);
    IBus.addSensor(RPMID);
    IBus.addSensor(RPMID);
    IBus.addSensor(RPMID);
    IBus.addSensor(RPMID);
    IBus.addSensor(RPMID);
    IBus.addSensor(RPMID);
    IBus.addSensor(RPMID);
    IBus.addSensor(RPMID);
    IBus.addSensor(RPMID);
    IBus.addSensor(RPMID);

  
}

int16_t v1 = 500, v2 = 40, v3 = 59, v4 = 67;
int16_t v5 = 300, v6 = 336, v7 = 987, v8 = 345;
int16_t v9 = 345, v10 = 820, v11 = 911, v12 = 387;
int16_t v13 = 3675, v14 = 1220, v15 = 5431;

void loop() {
  IBus.setSensorMeasurement(1, v1);
  IBus.setSensorMeasurement(2, v2);
  IBus.setSensorMeasurement(3, v3);
  IBus.setSensorMeasurement(4, v4);
  IBus.setSensorMeasurement(5, v5);
  IBus.setSensorMeasurement(6, v6);
  IBus.setSensorMeasurement(7, v7);
  IBus.setSensorMeasurement(8, v8);
  IBus.setSensorMeasurement(9, v9);
  IBus.setSensorMeasurement(10, v10);
  IBus.setSensorMeasurement(11, v11);
  IBus.setSensorMeasurement(12, v12);
  IBus.setSensorMeasurement(13, v13);
  IBus.setSensorMeasurement(14, v14);
  delay(500);  
}