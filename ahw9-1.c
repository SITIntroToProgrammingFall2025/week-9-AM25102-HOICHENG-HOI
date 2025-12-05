#include <stdio.h>

int main() 
{
	int r, g, b, x=0, y=0, z=0;
	scanf("%d", &r);
	scanf("%d", &g);
	scanf("%d", &b);

	if(r>127){x=1;}
	if(g>127){y=1;}
	if(b>127){z=1;}

	if(x==0&&y==0&&z==0){printf("The nearest color is Black\n");}
	if(x==1&&y==0&&z==0){printf("The nearest color is Red\n");}
	if(x==0&&y==1&&z==0){printf("The nearest color is Black\n");}
	if(x==0&&y==0&&z==1){printf("The nearest color is Black\n");}
	else{printf("The nearest color is Black\n");}

	return 0;
}
