#ifndef ARDUINO_DUO_H
#define ARDUINO_DUO_H

class ArduinoDuo {
public:
  // Pinleri tan�mlama fonksiyonlar�
  void setPins(int pins[], bool isDigital);
  void showSerial(int pins[], bool isDigital);
  void printLDR(int pin);

  // RX ve TX pinlerini belirleme fonksiyonlar�
  void setRX(int rxPin);
  void setTX(int txPin);

  // Bluetooth ve Wi-Fi mod�lleri i�in s�n�flar veya fonksiyonlar
  class BluetoothModule {
    // Bluetooth ile ilgili fonksiyonlar
  };
  class WifiModule {
    // Wi-Fi ile ilgili fonksiyonlar
  };



  void turnOnLED(int pin) {
    digitalWrite(pin, HIGH);
  }

  void turnOffLED(int pin) {
    digitalWrite(pin, LOW);
  }


  void setPinMode(int pin, bool isOutput) {
    pinMode(pin, isOutput ? OUTPUT : INPUT);
  }
};
};

#endif
