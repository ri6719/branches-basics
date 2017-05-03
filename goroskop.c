#include  <stdio.h>
int main () {
	int d,m;
	printf("Введите дату и месяц");
	scanf("%d %d",&d,&m);
	switch(m){
	
	case 1:

		if (d>=20) {
			printf("Aquarius(Водолей)");
		}
		else {
			printf("Capricorn(Козерог)");
		}
		break;
    case 2:
        if (d>=20) {
            printf("Fish(Рыбы)");
        }
        else {
            printf("Aquarius(Водолей)");
        }
        break;
    case 3:
        if (d>=21) {
            printf("Aries(Овен)");
        }
        else {
            printf("Fish(Рыбы)");
        }
        break;
    case 4:
        if (d>=20) {
            printf("Taurus(Телец)");
        }
        else {
            printf("Aries(Овен)");
        }
		break;
    case 5:
        if (d>=21) {
            printf("Twins(Близницы)");
        }
        else {
            printf("Taurus(Телец)");
        }
  		break;
    case 6:
        if (d>=21) {
            printf("Cancer(Рак!)");
        }
        else {
            printf("Twins(Близнецы)");
        }
        break;
    case 7:
        if (d>=23) {
            printf("Lion(Лев)");
        }
        else {
            printf("Cancer(Рак!)");
        }
        break;
    case 8:
        if (d>=23) {
            printf("Virgo(Дева)");
        }
        else {
            printf("Lion(Лев)");
        }
        break;
    case 9:
        if (d>=23) {
            printf("Libra(Весы)");
        }
        else {
            printf("Virgo(Дева)");
        }
        break;

    case 10:
        if (d>=24) {
            printf("Scorpio(Скорпион)");
        }
        else {
            printf("Libra(Весы)");
        }
        break;
        
     case 11:
        if (d>=23) {
            printf("Sagittarius(Стрелец)");
        }
        else {
            printf("Scorpio(Скорпион)");
        }
        break;
      case 12:
        if (d>=21) {
            printf("Capricorn(Козерог)");
        }
        else {
            printf("Sagittarius(Стрелец)");
        }
        break;
        
        return 0;
        
     }
}