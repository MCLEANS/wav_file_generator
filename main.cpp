#include <iostream>
#include <fstream>
#include "sine_oscillator.h"

const int DURATION = 2;
const int bit_depth = 16;

Sine_oscillator sine_oscillator(440,0.5);

int main(){

    std::ofstream audioFile;
    audioFile.open("waveform",std::ios::binary);

    int max_amplitude = pow(2,bit_depth-1) -1 ;

    for(int i = 0; i < (SAMPLE_RATE * DURATION); i++){
        float sample = sine_oscillator.process();
        int int_sample = static_cast<int>(sample * max_amplitude);
        audioFile.write(reinterpret_cast<char*> (&int_sample),2);
    }

    audioFile.close();
    return 0;
}
