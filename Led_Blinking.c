#include<lpc17xx.h>

void delay(unsigned int x);

int main(){

LPC_GPIO0->FIODIR  =(0xFF<<0);	//configure the p0.o as output port 

while(1)
{
	LPC_GPIO0->FIOSET =(0xFF<<0);	 //p0.o as setup
	delay(100);
	LPC_GPIO0->FIOCLR = (0xFF<<0);	 //p0.o as clearing 
	delay(100);
}

}

void delay(unsigned int x)
{
int i,j;
	for(i=0;i<x;i++){
		for(j=0;j<=10000;j++);
		}
}

