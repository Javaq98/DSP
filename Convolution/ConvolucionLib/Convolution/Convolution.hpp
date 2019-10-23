#ifndef CONVOLUTION_H
#define CONVOLUTION_H
class convolution{
private:
    double *sig_src_arr,
    double *sig_dest_arr,
    double *imp_response_arr
    int    *sig_src_length
    int    *imp_response_length
public:
    convolution(double *_sig_src_arr,double *_sig_dest_arr,double *_imp_response_arr,int  _sig_src_length,int  _imp_response_length){
    void convolution_output();
    void convolution_input();
};
#endif // CONVOLUTION_H
