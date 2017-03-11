//lp12EST(6)

#include <dsverifier.h>

digital_system ds = {
    .b =  {  5.877612817505889e-27,     7.053135381007066e-26, 3.879224459553887e-25,     1.293074819851295e-24, 2.909418344665415e-24,     4.655069351464664e-24, 5.430914243375441e-24,     4.655069351464664e-24, 2.909418344665415e-24,     1.293074819851295e-24, 3.879224459553887e-25,     7.053135381007066e-26, 5.877612817505889e-27 },
            .b_size = 13,
            .a =  {1.000000000000000e+00,    -1.189971388253273e+01, 6.490187843004021e+01,    -2.145343549070942e+02, 4.786774594341755e+02,   -7.595027291126580e+02, 8.787093952503672e+02,    -7.469136207963491e+02, 4.629403629982017e+02,   -2.040421671984753e+02, 6.070456086598145e+01,    -1.094564876329493e+01, 9.045776816379923e-01 },
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
         .wp = 0, 
         .wc = 0.0041, 
         .wr = 0.1041,
         .type = 1
};
