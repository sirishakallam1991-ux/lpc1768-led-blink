#include<lpc17xx.h>

void delay(unsigned int x);

int main(){

int i,pattern={0X81,0X42,0X24,0X18,0X24,0X42,0X81};

LPC_GPIO0->FIODIR  =(0xFF<<19);	//configure the p0.o as output port 

while(1)
{
for(i=0;i<7;i++)
{
	LPC_GPIO0->FIOSET =(pattern[i]<<19);	 //p0.o as setup
	delay(100);
	LPC_GPIO0->FIOCLR = (pattern[i]<<19);	 //p0.o as clearing 
	delay(100);
}
}

}

void delay(unsigned int x)
{
int i,j;
	for(i=0;i<x;i++){
		for(j=0;j<=10000;j++);
		}
}

