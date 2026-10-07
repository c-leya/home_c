#include <stdio.h>

int main()
{		
	int x1, y1, x2, y2;
	
	scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
	
	// y1 = kx1 + b
	// y1 = kx1 + y2 - kx2
	// kx2 - kx1 = y2 - y1
	// x2 - x1 = (y2 - y1) / k
	// k = (y2 - y1) / (x2 - x1)
	float k = (float)(y2 - y1) / (x2 - x1); 
	// y2 = kx2 + b
	// b = y2 - kx2
	float b = y2 - k * x2;
	
	printf("%.2f %.2f\n", k, b);
	
	return 0;
}
