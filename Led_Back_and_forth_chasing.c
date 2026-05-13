#include<lpc17xx.h>

void delay(unsigned int x);

int main(){
int i;
LPC_GPIO0->FIODIR  =(0xFF<<19);	//configure the p0.19 as output port 

while(1)
{
for(i=19;i<=26;i++){
	LPC_GPIO0->FIOSET =(1<<i);	 //p0.19 as setup
	delay(500);
	LPC_GPIO0->FIOCLR = (1<<i);	 //p0.19 as clearing 
	delay(500);
	}
for(i=26;i>=19;i--){
	LPC_GPIO0->FIOSET =(1<<i);	 //p0.26 as setup
	delay(500);
	LPC_GPIO0->FIOCLR = (1<<i);	 //p0.26 as clearing 
	delay(500);
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

