#include <stdio.h>

void cubicBezier(float p0, float p1, float p2, float p3, float *pX, float *pY)
{
	double xt, yt;
	for (t = 0.0; t < 1.0; t += 0.0005)
	{
		xt = pow(1 - t, 3) * x[0] + 3 * t * pow(1 - t, 2) * x[1] +
			3 * pow(t, 2) * (1 - t) * x[2] + pow(t, 3) * x[3];

		yt = pow(1 - t, 3) * y[0] + 3 * t * pow(1 - t, 2) * y[1] +
			3 * pow(t, 2) * (1 - t) * y[2] + pow(t, 3) * y[3];
	}
	*pX = (float)xt;
	*pY = (float)yt;
}