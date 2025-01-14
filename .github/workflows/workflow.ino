#include <Arduino.h>
#include <BLEMIDI_Transport.h>
#include <hardware/BLEMIDI_ESP32_NimBLE.h>

BLEMIDI_CREATE_INSTANCE("Player Piano", MIDI);

void setup() {
    MIDI.begin(MIDI_CHANNEL_OMNI);
}

void loop() {
    MIDI.read();
}