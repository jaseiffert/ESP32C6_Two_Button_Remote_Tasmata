// Program Configuration

// MQTT Configuration
#define MQTT_CLIENTID "twobutton_remote01"
#define MQTT_SERVERIP "192.168.15.92"
#define MQTT_SERVERPORT 1883
#define MQTT_SENSORTOPIC "familyroom/button/twobutton01"

// Amount of time after button press that it goes into sleep mode if button isn't pressed again
#define mS_TO_S_FACTOR 1000ULL // DO NOT CHANGE - Conversion factor for milliseconds to seconds
#define SLEEP_DELAY_S 30    // Wait Time after button push for the ESP32 to go to sleep (in Seconds)

// Ip address and command of the Tasmota controlled relay
#define LEFT_BUTTON_SERVER_IP "http://192.168.15.96/cm?cmnd=Power%20Toggle"
#define RIGHT_BUTTON_SERVER_IP "http://192.168.15.96/cm?cmnd=Power%20Toggle"