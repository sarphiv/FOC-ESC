#include <Arduino.h>

#include "Transform.hpp"
#include "PID.hpp"
#include "Motor.hpp"
#include "QEncoder.hpp"
#include "ADC_Motor.hpp"

uint32_t iteration = 0;

//PID and transform
uint16_t angle = 0;

Idq dq;
Iabc abc;

PID_Controller PID_waste(0.3, 0.2, 0, 0.5);
PID_Controller PID_torque(0.62, 0.47, 0, 0.4);

// ADC_Phase ADC_M0_A(ADC_PIN::M0_PHASE_A);
// ADC_Phase ADC_M0_B(ADC_PIN::M0_PHASE_B);
// ADC_Phase ADC_M1_A(ADC_PIN::M1_PHASE_A);
// ADC_Phase ADC_M1_B(ADC_PIN::M1_PHASE_B);

ADC_Motor ADC_Motor0(ADC_PHASE_PAIR::Motor0);
ADC_Motor ADC_Motor1(ADC_PHASE_PAIR::Motor1);

void setup()
{
    Serial.begin(9600);

    // abc.Ia = 0;
    // abc.Ib = 0;
    // abc.Ic = 0;

    Motor::get(0).initialize().set_pwm_low();
    Motor::get(0).set_pwm(2);
    Motor::get(0).set_pwm(1);
    // Motor::get(0).initialize();
    // QEncoder::get(0);


    //Set PWM of Motor0 in case of emergency
    // Motor::get(0).initialize().set_pwm(1, 1, 1);
    Serial.println();
    Serial.println();
    Serial.println();

    // float pa, pb;

    // ADC_Motor0.get_samples(pa, pb);

    // // float t = ADC_M0_A.get_sample();

    // Serial.print(pa);
    // Serial.print(" ");
    // Serial.print(pb);

    // adcStart((uint8_t)ADC_PIN::M0_PHASE_A);
    // adcStart((uint8_t)ADC_PIN::M0_PHASE_A);
    // delay(1);
    // bool t = adcBusy((uint8_t)ADC_PIN::M0_PHASE_A);
    // ADC_M0_A.get_sample();
    // ADC_M0_A.get_sample();
    // Serial.println(t);

    // ADC_M0_A.get_sample();
    // ADC_M0_B.get_sample();
    // ADC_M1_A.get_sample();
    // ADC_M1_B.get_sample();

    // for (int m = 0; m < 5; m++)
    // {
        uint32_t start = micros();

        float a, b, c, d;
        c = d = 0;

        for (int i = 0; i < 40000; i++)
        {
            ADC_Motor0.get_samples(a, b);
            c += a;
            d += b;

            ADC_Motor1.get_samples(a, b);
            c += a;
            d += b;
        }

        Serial.println("----------------");
        //Frequency of full cycle samples given in kHz
        Serial.println(40*1000/((micros() - start)*pow10(-6)));
        //Average value
        Serial.println(c / 40000);
        Serial.println(d / 40000);
    // }
}

void loop() 
{
    // dq = Transform::de_phase(angle, abc);

    // dq.Id = PID_waste.update(dq.Id, (float)0);
    // dq.Iq = PID_torque.update(dq.Iq, (float)60);

    // abc = Transform::to_phase(angle, dq);

    // abc.Ia = abc.Ia +3;
    // abc.Ib = abc.Ib -4;
    // abc.Ic = abc.Ic +2;

    // Motor0::get().set_pwm(abc.Ia, abc.Ib, abc.Ic);
    
    // float a = ADC_M0_A.get_sample();
    // if (ADC_M0_A.ask_sample_updated() && a > 0)
    //     Serial.println(a);

    // Serial.print(abc.Ia);
    // Serial.print(',');
    // Serial.print(abc.Ib);
    // Serial.print(',');
    // Serial.print(abc.Ic);
    // Serial.print(',');

    // Serial.print(dq.Id);
    // Serial.print(',');
    // Serial.println(dq.Iq);

    // angle = (uint16_t)(angle);
    // ((angle < MECHANICAL_ROTATION_STEPS))
    //     ? angle++
    //     : angle = 0;
    // Serial.println((uint16_t)(posX/60 % (MECHANICAL_ROTATION_STEPS)));
    // Serial.println(angle);
    // Serial.println("---");
    // delayMicroseconds(1000);

    // Serial.println("-----------------");
    // Serial.println(posX);
    // Serial.println(posY);
    // Serial.println(posX - posY);

    // Serial.println(QEncoder::get(0).get_axis_position());
    // Serial.println(ADC_M0_A.get_sample());

    // Serial.print(" ");
    // Serial.println(ADC_M0_A.ask_sample_updated());
    // delay(1000);

    // Serial.println(ADC_M0_A.get_sample()); //Sample Current through wire to Motor 0 Phase A

}



