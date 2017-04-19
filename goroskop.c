#include  <stdio.h>
int main () {
	int d,m;
	printf("ВВЕДИТЕ ДАТУ И МЕСЯЦ");
	scanf("%d %d",&d,&m);
	switch(m){
	
	case 1:

		if (d>=20) {
			printf("Водолей");
		}
		else {
			printf("Козерог");
		}
		break;
    case 2:
        if (d>=20) {
            printf("Рыбы");
        }
        else {
            printf("Водолей");
        }
        break;
    case 3:
        if (d>=21) {
            printf("Овен");
        }
        else {
            printf("Рыбы");
        }
        break;
    case 4:
        if (d>=20) {
            printf("Телец");
        }
        else {
            printf("Овен");
        }
		break;
    case 5:
        if (d>=21) {
            printf("Близницы");
        }
        else {
            printf("Телец");
        }
  		break;
    case 6:
        if (d>=21) {
            printf("Рак!");
        }
        else {
            printf("Близнецы");
        }
        break;
    case 7:
        if (d>=23) {
            printf("Лев");
        }
        else {
            printf("Рак!");
        }
        break;
    case 8:
        if (d>=23) {
            printf("Дева");
        }
        else {
            printf("Лев");
        }
        break;
    case 9:
        if (d>=23) {
            printf("Весы");
        }
        else {
            printf("Дева");
        }
        break;

    case 10:
        if (d>=24) {
            printf("Скорпион");
        }
        else {
            printf("Весы");
        }
        break;
        
     case 11:
        if (d>=23) {
            printf("Стрелец");
        }
        else {
            printf("Скорпион");
        }
        break;
      case 12:
        if (d>=21) {
            printf("Козерог");
        }
        else {
            printf("Стрелец");
        }
        break;
        
        return 0;
        
     }
}