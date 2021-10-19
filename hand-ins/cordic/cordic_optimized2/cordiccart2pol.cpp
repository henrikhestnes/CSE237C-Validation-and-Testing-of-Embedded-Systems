#include "cordiccart2pol.h"
#include <ap_fixed.h>

typedef ap_fixed<17, 4> internal_data_t;

internal_data_t pi = 3.141592654;

internal_data_t Kvalues[NO_ITER] = {1.,	0.500000000000000,	0.250000000000000,	0.125000000000000,	0.0625000000000000,	0.0312500000000000,	0.0156250000000000,	0.00781250000000000,	0.00390625000000000,	0.00195312500000000,	0.000976562500000000,	0.000488281250000000,	0.000244140625000000,	0.000122070312500000,	6.10351562500000e-05,	3.05175781250000e-05};

internal_data_t angles[NO_ITER] = {0.785398163397448,	0.463647609000806,	0.244978663126864,	0.124354994546761,	0.0624188099959574,	0.0312398334302683,	0.0156237286204768,	0.00781234106010111,	0.00390623013196697,	0.00195312251647882,	0.000976562189559320,	0.000488281211194898,	0.000244140620149362,	0.000122070311893670,	6.10351561742088e-05,	3.05175781155261e-05};


void cordiccart2pol(data_t x, data_t y, data_t * r,  data_t * theta)
{
	// Write your code here
	internal_data_t x_i = x;
	internal_data_t y_i = y;
	internal_data_t theta_i = 0;

	if(x_i < 0){
		x_i = -x_i;
		y_i = -y_i;
		theta_i = pi;
	}

	internal_data_t x_temp;
	for(ap_uint<5> i = 0; i < NO_ITER; i++){
		x_temp = x_i;
		if(y_i > 0){
			x_i += (y_i>>i);
			y_i -= (x_temp>>i);
			theta_i += angles[i];
		}
		else{
			x_i -= (y_i>>i);
			y_i += (x_temp>>i);
			theta_i -= angles[i];
		}
	}
	*r = x_i*(internal_data_t)0.6072;
	*theta = theta_i;
}
