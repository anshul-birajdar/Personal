char*x[]={	"Vegetables",		//0
		"Coke(Aluminium)",	//1
		"food",			//0
		"Coke(Glass)",		//1
		"Plastic Plates",	//1
		"Chips pack",		//1
		"pencil",		//1
		"Pizza Box",		//0
		"Milk packet",		//1
		"Biscuit Packet",	//1 
	};
int y []= {0,1,0,1,1,1,1,0,1,1};
#define LEN 10
#include<stdio.h>
char p();
int main(){
	printf("Welcome to the toycathon Waste segregation quiz by Anshul Birajdar\n");
	printf("0:Biodegradable[Green Waste Bin]\n");
	printf("1:Non-Biodegradable[White Waste Bin]\n");
	p();	
	int points=0;
	int queNow=0;
	int ansNow=0;
	printf("Points=%d\n",points);
	while(queNow<LEN){
		ansNow=-1;
		printf("%s: ",x[queNow]);
		scanf("%d",&ansNow);
		if(y[queNow]==ansNow)points++;
		printf("Points=%d/%d;",points,LEN);
		printf("done=%d/%d\n",queNow+1,LEN);p();
		queNow++;
	}
	printf("Final Points=%d/%d\n",points,LEN);p();
	printf("Fun Facts:\n");
	printf("1:There are alternatives to plastic,but for profit, many companies use non-biodegragable stuff\n");
	printf("2:Plastics are made from crude oil\n");
	return 0;
}
char p(){
	printf("=====================================================================\n");
	return '\n';
}

