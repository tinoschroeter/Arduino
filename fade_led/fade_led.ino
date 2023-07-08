int ledPin = 9;       // Pin, an dem die LED angeschlossen ist
int brightness = 5;   // Aktuelle Helligkeit der LED
int fadeAmount = 2;   // Schrittweite zur Änderung der Helligkeit

void setup() {
    pinMode(ledPin, OUTPUT);  // LED-Pin als Ausgang festlegen
}

void loop() {
    analogWrite(ledPin, brightness);  // Helligkeit auf den aktuellen Wert setzen

    brightness = brightness + fadeAmount;  // Helligkeit inkrementieren

    // Überprüfen, ob die maximale oder minimale Helligkeit erreicht wurde
    if (brightness <= 5 || brightness >= 250) {
        fadeAmount = -fadeAmount;  // Richtung umkehren
    }

    delay(5);  // Kurze Verzögerung für den Effekt sichtbar machen
}
