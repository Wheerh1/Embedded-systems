const int soundPin = A0; // Connect AO to A0
const int windowSize = 50; // Window of readings to check for volume (in milliseconds)

void setup() {
  Serial.begin(115200);
  // Set ADC resolution to 12-bits for higher granularity (0-4095)
  analogReadResolution(12); 
}

void loop() {
  int signalMax = 0;
  int signalMin = 4095;
  
  unsigned long startMillis = millis();
  
  // Sample the signal for the specified window size
  while (millis() - startMillis < windowSize) {
    int soundSample = analogRead(soundPin);
    
    // Discard any erroneous 0 readings
    if (soundSample < 4095) {
      if (soundSample > signalMax) {
        signalMax = soundSample; // Save the peak
      }
      if (soundSample < signalMin) {
        signalMin = soundSample; // Save the valley
      }
    }
  }
  
  // Calculate the amplitude (Peak-to-Peak)
  int soundLevel = signalMax - signalMin;
  
  // Print the value to the Serial Plotter (Tools -> Serial Plotter)
  Serial.println(soundLevel);
}
