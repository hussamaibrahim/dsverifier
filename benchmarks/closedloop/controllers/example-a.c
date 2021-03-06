#include <dsverifier.h>

#define SCHEMA_COUNT 9

#if DS_ID == 1

	digital_system ds = {
		.b = { -18.7913011069951, 11.3839445828215 },
		.b_size = 2,
		.a = { 1.0, 3.63545078000333 },
		.a_size = 2,
		.sample_time = 0.5
	};

	#define	IMPLEMENTATION_COUNT 3

	#if IMPLEMENTATION_ID == 1
		implementation impl = {
			.int_bits = 16,
			.frac_bits = 4,
			.scale = 1
		};
	#endif

	#if IMPLEMENTATION_ID == 2
		implementation impl = {
			.int_bits = 16,
			.frac_bits = 8,
			.scale = 1
		};
	#endif

	#if IMPLEMENTATION_ID == 3
		implementation impl = {
			.int_bits = 16,
			.frac_bits = 12,
			.scale = 1
		};
	#endif

#endif

#if DS_ID == 2

	digital_system ds = {
		.b = { 18.5304651429392, -16.7960874196180 },
		.b_size = 2,
		.a = { 1.0, -2.08535650257322 },
		.a_size = 2,
		.sample_time = 0.1
	};

	#define	IMPLEMENTATION_COUNT 3

	#if IMPLEMENTATION_ID == 1
		implementation impl = {
			.int_bits = 16,
			.frac_bits = 4,
			.scale = 1
		};
	#endif

	#if IMPLEMENTATION_ID == 2
		implementation impl = {
			.int_bits = 16,
			.frac_bits = 8,
			.scale = 1
		};
	#endif

	#if IMPLEMENTATION_ID == 3
		implementation impl = {
			.int_bits = 16,
			.frac_bits = 12,
			.scale = 1
		};
	#endif

#endif

#if DS_ID == 3

	digital_system ds = {
		.b = { 14.2344952240432, -13.5523885821810 },
		.b_size = 2,
		.a = { 1.0, -1.42685562045612 },
		.a_size = 2,
		.sample_time = 0.05
	};

	#define	IMPLEMENTATION_COUNT 1

	#if IMPLEMENTATION_ID == 1
		implementation impl = {
			.int_bits = 16,
			.frac_bits = 4,
			.scale = 1
		};
	#endif

	#if IMPLEMENTATION_ID == 2
		implementation impl = {
			.int_bits = 16,
			.frac_bits = 4,
			.scale = 1
		};
	#endif

	#if IMPLEMENTATION_ID == 3
		implementation impl = {
			.int_bits = 16,
			.frac_bits = 4,
			.scale = 1
		};
	#endif

#endif

#if DS_ID == 4

	digital_system ds = {
		.b = { 12.9891735487942, -12.6121006969068 },
		.b_size = 2,
		.a = { 1.0, -1.23596847805225},
		.a_size = 2,
		.sample_time = 0.03
	};

	#define IMPLEMENTATION_COUNT 3

	#if IMPLEMENTATION_ID == 1
		implementation impl = {
			.int_bits = 16,
			.frac_bits = 4,
			.scale = 1
		};
	#endif

	#if IMPLEMENTATION_ID == 2
		implementation impl = {
			.int_bits = 16,
			.frac_bits = 8,
			.scale = 1
		};
	#endif

	#if IMPLEMENTATION_ID == 3
		implementation impl = {
			.int_bits = 16,
			.frac_bits = 12,
			.scale = 1
		};
	#endif

#endif

#if DS_ID == 5

	digital_system ds = {
		.b = { 11.9254708617320, -11.8089453595694 },
		.b_size = 2,
		.a = { 1.0, -1.07292051194339 },
		.a_size = 2,
		.sample_time = 0.01
	};

	#define	IMPLEMENTATION_COUNT 3

	#if IMPLEMENTATION_ID == 1
		implementation impl = {
			.int_bits = 16,
			.frac_bits = 4,
			.scale = 1
		};
	#endif

	#if IMPLEMENTATION_ID == 2
		implementation impl = {
			.int_bits = 16,
			.frac_bits = 8,
			.scale = 1
		};
	#endif

	#if IMPLEMENTATION_ID == 3
		implementation impl = {
			.int_bits = 16,
			.frac_bits = 12,
			.scale = 1
		};
	#endif

#endif

#if DS_ID == 6

	digital_system ds = {
		.b = { 11.6833505110710, -11.6261308811661 },
		.b_size = 2,
		.a = { 1.0, -1.03580748101003 },
		.a_size = 2,
		.sample_time = 0.005
	};

	#define	IMPLEMENTATION_COUNT 3

	#if IMPLEMENTATION_ID == 1
		implementation impl = {
			.int_bits = 16,
			.frac_bits = 4,
			.scale = 1
		};
	#endif

	#if IMPLEMENTATION_ID == 2
		implementation impl = {
			.int_bits = 16,
			.frac_bits = 8,
			.scale = 1
		};
	#endif

	#if IMPLEMENTATION_ID == 3
		implementation impl = {
			.int_bits = 16,
			.frac_bits = 12,
			.scale = 1
		};
	#endif

#endif

#if DS_ID == 7

	digital_system ds = {
		.b = { 11.4958082843740, -11.4845259551093 },
		.b_size = 2,
		.a = { 1.0, -1.00706037056799 },
		.a_size = 2,
		.sample_time = 0.001
	};

	#define	IMPLEMENTATION_COUNT 3

	#if IMPLEMENTATION_ID == 1
		implementation impl = {
			.int_bits = 16,
			.frac_bits = 4,
			.scale = 1
		};
	#endif

	#if IMPLEMENTATION_ID == 2
		implementation impl = {
			.int_bits = 16,
			.frac_bits = 8,
			.scale = 1
		};
	#endif

	#if IMPLEMENTATION_ID == 3
		implementation impl = {
			.int_bits = 16,
			.frac_bits = 12,
			.scale = 1
		};
	#endif

#endif

#ifdef DS_ID == 8

	digital_system ds = {
		.b = { 11.4502063947756, -11.4500939644139 },
		.b_size = 4,
		.a = { 1.0, -1.00007035781332 },
		.a_size = 4,
		.sample_time = 0.00001
	};

	#define	IMPLEMENTATION_COUNT 3

	#if IMPLEMENTATION_ID == 1
		implementation impl = {
			.int_bits = 16,
			.frac_bits = 4,
			.scale = 1
		};
	#endif

	#if IMPLEMENTATION_ID == 2
		implementation impl = {
			.int_bits = 16,
			.frac_bits = 8,
			.scale = 1
		};
	#endif

	#if IMPLEMENTATION_ID == 3
		implementation impl = {
			.int_bits = 16,
			.frac_bits = 12,
			.scale = 1
		};
	#endif

#endif

#if DS_ID == 9

	digital_system ds = {
		.b = { 11.4502063947756, -11.4500939644139 },
		.b_size = 4,
		.a = { 1.0, -1.00007035781332 },
		.a_size = 4,
		.sample_time = 0.000001
	};

	#define	IMPLEMENTATION_COUNT 3

	#if IMPLEMENTATION_ID == 1
		implementation impl = {
			.int_bits = 16,
			.frac_bits = 4,
			.scale = 1
		};
	#endif

	#if IMPLEMENTATION_ID == 2
		implementation impl = {
			.int_bits = 16,
			.frac_bits = 8,
			.scale = 1
		};
	#endif

	#if IMPLEMENTATION_ID == 3
		implementation impl = {
			.int_bits = 16,
			.frac_bits = 12,
			.scale = 1
		};
	#endif

#endif
