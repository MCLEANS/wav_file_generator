#include "sine_oscillator.h"

Sine_oscillator::Sine_oscillator(float frequency, float amplitude): frequency(frequency),
                                                                    amplitude(amplitude){


}

float Sine_oscillator::process(){
    float sample =  (this->amplitude * (sin(angle)));
    angle += 2 * M_PI * this->frequency / SAMPLE_RATE;
    return sample;
}