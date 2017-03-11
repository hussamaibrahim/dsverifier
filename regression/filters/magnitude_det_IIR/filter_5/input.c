//hp12(5)

#include <dsverifier.h>

digital_system ds = {
    .b =  {0.005070337741352,  -0.060844052896224,   0.334642290929229,  -1.115474303097431,   2.509817181969221,  -4.015707491150753,4.684992073009212,  -4.015707491150753,   2.509817181969221,  -1.115474303097431,   0.334642290929229,  -0.060844052896224,0.005070337741352},
    .b_size = 13,
    .a = { 1.000000000000000,  -2.393643991551107,   4.113621058366342,  -4.594707860177271,   3.987520576986953,  -2.604377026937115,1.340805025908971,  -0.530071941777575,   0.161061450057486,  -0.036049397170938,   0.005664193637792,  -0.000555145649249,0.000025720356837},
    .a_size = 13
};

implementation impl = {
    .int_bits = 4,
    .frac_bits = 10,
    .min = -1.6,
    .max = 1.6,
};

filter_parameters filter = {
    .Ap =  0.8, 
    .Ac =  0.707945784384138, 
    .Ar = 0.5,
    .wp = 0.5, 
    .wc = 0.4, 
    .wr = 0.3,
    .type = 2
};
