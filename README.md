# How to use:
1. I have used the ibusBM library but with a little modification. This library is tested on ESP Core 3.3.0 only and on ESP32 DevKit V1 30 pin version.
   # The modifications:
   1. Changed line 116 to 119 to make it compatible with the esp32 core 3.X
   2. Changed the MaxNumberofSensor from 10 to 15
   3. This works for 14 sensors though the offical flysky manual states that it can take up to 15 sensor. This is probably due to the libraries coding strategy.
   4. The sensor ID provided in the library are not for flysky fs i6. only id 0x01, 0x02 and 0x03 works 0x01 for temperature, 0x02 for RPM and 0x03 for voltage. Eaqch of this Sensor data has their own scaling factor. such as 400 means 0 degree celicus. For voltage 50 means .5V . For RPM there is no scaling factor.
2. Upload the ibusBM library inside Arduino/libraries folder. Then use the codes given.
# Sending-i-bus-Sensor-Data-from-Drone-to-Flysky-Transmitter
This code is only tested for ESP32 Devkit-v1 30 pin version
Only the FSIA10B 10 channel receiver is tested.
Only the flysky fs-i6 6 channel transmitter is tested 
The flysky FS-i6 transmitter firmware version is FLY SKY FS-i6 2.0 1-Feb-2018.
# Things to note:
1. The Serial2 of ESP32 Devkit-V1 is used which is of pin 16 and pin 17 denoted at RX2 and TX2.
2. Serial2 runs at 115200 baudrate.
3. The official ibusBM library found in arduino gallary does not compiles successfully for ESP32 core  3.3.0.
4. The ibusBM library has been modified a little on line 116 to 119 because the timer declaration code has changed a little in ESP Core 3.3.0. The officidal ibusBM library supports ESP Core 2.X


# The cirtcuit setup:
1. The circuit is same as show in the ibus library
2. ESP GPIO16 (RX2)..............i-bus Sensor pin of the receiver
3. GPIO16 (RX2) is connected to GPIO17 (TX2) using a 1.2 KOhm Resistor.
4. 5V is suplied to the receiver using the Vin Pin.


# Some additional info 
can be found in the CleanFlight Flight Control Repository.
https://github.com/cleanflight/cleanflight/tree/7cd417959b3cb605aa574fc8c0f16759943527ef
https://github.com/betaflight/betaflight/wiki/Single-wire-FlySky-(IBus)-telemetry

# The main Source Library
https://github.com/bmellink/IBusBM-
