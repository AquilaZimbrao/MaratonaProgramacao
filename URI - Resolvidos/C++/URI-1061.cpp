#include <iostream>

using namespace std;

int main(){
	int dia[3], hora[3], min[3], seg[3];

	scanf("Dia %d", &dia[0]);
	scanf("%d : %d : %d\n", &hora[0], &min[0], &seg[0]);

	scanf("Dia %d", &dia[1]);
	scanf("%d : %d : %d", &hora[1], &min[1], &seg[1]);

	fflush(stdin);

	if(dia[0] == dia[1]){
		dia[2] = 0;
	}
	else{
		dia[2] = dia[1] - dia[0];
	}


	if(hora[0] == hora[1]){
		hora[2] = 0;
	}
	else{
		if(hora[1] > hora[0]){
			hora[2] = hora[1] - hora[0];
		}
		else{
			hora[2] = 24 - (hora[0] - hora[1]);
			dia[2] = dia[2] - 1;
		}
	}

	if(min[0] == min[1]){
		min[2] = 0;
	}
	else{
		if(min[1] > min[0]){
			min[2] = min[1] - min[0];
		}
		else{
			min[2] = 60 - (min[0] - min[1]);
			hora[2] = hora[2] - 1;
		}
	}

	if(seg[0] == seg[1]){
		seg[2] = 0;
	}
	else{
		if(seg[1] > seg[0]){
			seg[2] = seg[1] - seg[0];
		}
		else{
			seg[2] = 60 - (seg[0] - seg[1]);
			min[2] = min[2] - 1;
		}
	}


	printf("%d dia(s)\n", dia[2]);
	printf("%d hora(s)\n", hora[2]);
	printf("%d minuto(s)\n", min[2]);
	printf("%d segundo(s)\n", seg[2]);

	return 0;
}