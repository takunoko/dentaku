#include<stdio.h>

int tasu(int na,int nb){
	return na + nb;
}

int hiku(int na,int nb){
	return na - nb;
}

int kakeru(int na,int nb){
	return na * nb;
}

int waru(int na, int nb){
	return na / nb;
}

void read_mojiretu(char mojiretu[]){
	printf(" : ");
	scanf("%s",mojiretu);
}

int check_mojiretu(char mojiretu[]){
	int i;
	int kazu=0,kazu1,kazu2;
	char enzansi;
	
	for ( i = 0; mojiretu[i] != '\0'; i++){
		if(mojiretu[i] <= '9' && mojiretu[i] >= '0'){
			if(kazu ==0){
				kazu1 = mojiretu[i] - '0';
				kazu = 1;
			}else{
				kazu2 = mojiretu[i] - '0';
				kazu = 2;
			}
		}else if(mojiretu[i] == '*'){
			enzansi = 'K';
		}else if(mojiretu[i] == '+'){
			enzansi = 'T';
		}else if(mojiretu[i] == '-'){
			enzansi = 'H';
		}else if(mojiretu[i] == '/'){
			enzansi = 'W';
		}
	}
	printf("kazu1=%d, kazu2=%d, enzansi=%c\n",kazu1,kazu2,enzansi);

	return -1;
}

int main(void){
	char mojiretu[100];

	read_mojiretu(mojiretu);


	printf("mojiretu = %s\n", mojiretu);

	printf("suuji = %d\n",check_mojiretu(mojiretu));



	return 0;
}
