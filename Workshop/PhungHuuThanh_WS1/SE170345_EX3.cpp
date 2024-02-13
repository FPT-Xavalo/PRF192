#include <stdio.h>
int main () {
	int S, r, d;
	float PI= 3.14;
	float P;
	printf ("Enter radius =");
	scanf("%d",&r);
	d=2*r;
	P=2*PI*r;
	S=r*r*PI;
	printf ("Diameter =%d\n",d);
	printf ("Circumference =%.2f\n",P);
	printf ("Area =%d\n",S);
	return 0;
}
