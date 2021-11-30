#ifndef _SINE_OSCILLATOR_H
#define _SINE_OSCILLATOR_H

#include <cmath>

#define SAMPLE_RATE 44100

class Sine_oscillator{
    private:
        float frequency;
        float amplitude;
        float angle = 0.0;
    private:
    public:
    public:
        Sine_oscillator(float frequency, float amplitude);
        float process();
};

#endif //_SINE_OSCILLATOR_H