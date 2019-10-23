#include <iostream>
#include <fstream>
#include "Convolution.hpp"

#define SIG_LENGTH 320
#define IMP_RSP_LENGTH 29


using namespace std;

extern double InputSignal_f32_1kHz_15kHz[SIG_LENGTH];
extern double  Impulse_response[IMP_RSP_LENGTH];
double OutputSignal[SIG_LENGTH +IMP_RSP_LENGTH];

int main()
{
    convolution *testSignal = new convolution((double *)&InputSignal_f32_1kHz_15kHz[0],
                                               (double *)&OutputSignal[0],
                                               (double *)&Impulse_response[0],
                                               (int) SIG_LENGTH,
                                                (int)  IMP_RSP_LENGTH)
    ofstream file1,file2;

 testSignal->convolution_input((double *)&InputSignal_f32_1kHz_15kHz[0],
                 (double *)&OutputSignal[0],
                 (double *)&Impulse_response[0],
                 (int) SIG_LENGTH,
                 (int)  IMP_RSP_LENGTH)


 testSignal->convolution_output(
                 (double *)&InputSignal_f32_1kHz_15kHz[0],
                 (double *)&OutputSignal[0],
                 (double *)&Impulse_response[0],
                 (int) SIG_LENGTH,
                 (int)  IMP_RSP_LENGTH
                 );


    file1.open("output_signal.DAT");
    file2.open("input_signal.DAT");

    for(int i =0;i<SIG_LENGTH+IMP_RSP_LENGTH;i++){

        file1<<OutputSignal[i]<<endl;
        if(i <SIG_LENGTH){
        file2<<InputSignal_f32_1kHz_15kHz[i]<<endl;
        }
    }
    file1.close();
    file2.close();
    return 0;
}





