#include  <stdio.h>
int main () {
	int d,m;
	printf("Введите дату и месяц:");
	scanf("%d %d",&d,&m);
	switch(m){
	
	case 1:

		if (d>=20) {
			printf("(Aquarius)");
		}
		else {
			printf("(Capricorn)");
		}
		break;
    case 2:
        if (d>=20) {
            printf("(Fish)");
        }
        else {
            printf("(Aquarius)");
        }
        break;
    case 3:
        if (d>=21) {
            printf("(Aries)");
        }
        else {
            printf("(Fish)");
        }
        break;
    case 4:
        if (d>=20) {
            printf("(Taurus)");
        }
        else {
            printf("(Aries)");
        }
		break;
    case 5:
        if (d>=21) {
            printf("(Twins)");
        }
        else {
            printf("(Taurus)");
        }
  		break;
    case 6:
        if (d>=21) {
            printf("(Cancer!)");
        }
        else {
            printf("(Twins)");
        }
        break;
    case 7:
        if (d>=23) {
            printf("(Leo)");
        }
        else {
            printf("(Cancer!)");
        }
        break;
    case 8:
        if (d>=23) {
            printf("(Virgo)");
        }
        else {
            printf("(Leo)");
        }
        break;
    case 9:
        if (d>=23) {
            printf("(Libra)");
        }
        else {
            printf("(Virgo)");
        }
        break;

    case 10:
        if (d>=24) {
            printf("(Scorpio)");
        }
        else {
            printf("(Libra)");
        }
        break;
        
     case 11:
        if (d>=23) {
            printf("(Sagittarius)");
        }
        else {
            printf("(Scorpio)");
        }
        break;
      case 12:
        if (d>=21) {
            printf("(Capricorn)");
        }
        else {
            printf("(Sagittarius)");
        }
        break;
        
        return 0;
        
     }
}
