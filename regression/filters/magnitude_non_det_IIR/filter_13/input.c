//lp4E(13)

#include <dsverifier.h>

digital_system ds = {
    .b =  {0.027571327441966,   0.099461145770798,   0.144345404113169,   0.099461145770798,   0.027571327441966},
    .b_size = 5,
    .a = { 1.000000000000000,  -1.588182983074052,  1.744382680417883,  -1.017142411284744,   0.307966479630243},
    .a_size = 5
};

filter_parameters filter = {
    .Ap =  0.8, 
    .Ac =  0.707945784384138, 
    .Ar = 0.5,
    .wp = 0.3, 
    .wc = 0.4, 
    .wr = 0.5,
    .type = 1
};

implementation impl = {
    .int_bits = 4,
    .frac_bits = 10,
    .min = -1.6,
    .max = 1.6,
};
