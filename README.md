# two-button-remote
XIAO ESP32C6 Two Button Remote for SONOFF Basic Switch Programmed with Tasmota

The include/configuration.h file has all the settings needed to be set for the timing and MQTT Server connection.
The include/secrets.h has all the passwords that need to be set.

If you want to change the amount of time before it goes to sleep change this: SLEEP_DELAY_M (number in minutes)

I'm just a Hobbiest Programmer and at Electronics so feel free to make suggestions to make it better.


There is only one program file so you should be able to bring in the code into Arduino 2.x and program your ESP32C6 from there if your not familiar with VSCode and PlatformIO. Probably just create a new project and copy in the code. Make sure to add the libraries listed in the platformio.ini file. Copy the configuration.h and secrets.h into the Arduino project folder you created.

I haven't tried it but programming the ESP32C6 with ESPHome should work though not directly with the SONOFF Basic with Tasmota.
You would have to set it up to go through Home Assistant to control the SONOFF Basic or any other HA compatable switch.