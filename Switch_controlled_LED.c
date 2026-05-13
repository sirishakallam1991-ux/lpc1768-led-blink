#include<lpc17xx.h>

#define SWITCH (1<<12)

void delay(unsigned int x);

int main(){

LPC_GPIO1->FIODIR  =(0xFF<<19);	//configure the p0.o as output port 

while(1)
{
if(LPC_GPIO2 ->FIOPIN & SWITCH){

	LPC_GPIO1->FIOSET =(1<<19);	 //p0.o as setup
	}
	else
	{
	LPC_GPIO1->FIOCLR = (1<<19);	 //p0.o as clearing 
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

