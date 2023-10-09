#ifndef ABS(X)
#define ABS(X) \
do {    if (x < 1){		\
	x *= -1;return (x);}	\
	else			\
	{return (x);}}	\
while (0)

#endif /*ifndef SIZE*/
