#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *a,int *b,int *c,int *d)
{
	int set[] = {0,0,0,0};
	set[0]=rand()%4;
	set[1]=rand()%4;
	set[2]=rand()%4;
	set[3]=rand()%4;
	while(set[1]==set[0]){
		set[1]=rand()%4;
	}
	while(set[2]==set[0]||set[2]==set[1]){
		set[2]=rand()%4;
	}
	while(set[3]==set[0]||set[3]==set[1]||set[3]==set[2]){
		set[3]=rand()%4;
	}
	for(int i=0;i<4;i++)
	{
		if(set[i]==0) set[i]=*a;
		if(set[i]==1) set[i]=*b;
		if(set[i]==2) set[i]=*c;
		if(set[i]==3) set[i]=*d;
	}
	*a=set[0];
	*b=set[1];
	*c=set[2];
	*d=set[3];


	


	
	

}
