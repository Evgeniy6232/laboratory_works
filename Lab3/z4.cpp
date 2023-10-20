#includePath <stdlib.h>
#includePath <stdio.h>
#includePath <math.h>

int main() {
	
	system("chcp 65001");
	int m,d,t ;
	printf("Введите месяц: ");
	scanf("%d", &m);
	
	while ((m<0) || (m>12)) {printf("Ошибка: ");scanf("%d",&m); }
	
	switch(m)
    {
        case 1 : t = 0; break;
        case 2 : t = 31; break;
        case 3 : t = 59; break;
        case 4 : t = 90; break;
        case 5 : t = 120; break;
        case 6 : t = 151; break;
        case 7 : t = 181; break;
        case 8 : t = 212; break;
        case 9 : t = 243; break;
        case 10 : t = 274; break;
        case 11 : t = 304; break;
        case 12 : t = 335; break;
        default : printf("Ошибка"); break;
    }
    printf("Введите день: ");
    switch (m)
    {
        case 1 : scanf("%d",&d); while ((d<0) || (d>31)) {printf("Ошибка: ");scanf("%d",&d); } break;
        case 2 : scanf("%d",&d); while ((d<0) || (d>28)) {printf("Ошибка: ");scanf("%d",&d); } break;
        case 3 : scanf("%d",&d); while ((d<0) || (d>31)) {printf("Ошибка: ");scanf("%d",&d); } break;
        case 4 : scanf("%d",&d); while ((d<0) || (d>30)) {printf("Ошибка: ");scanf("%d",&d); } break;
        case 5 : scanf("%d",&d); while ((d<0) || (d>31)) {printf("Ошибка: ");scanf("%d",&d); } break;
        case 6 : scanf("%d",&d); while ((d<0) || (d>30)) {printf("Ошибка ");scanf("%d",&d); } break;
        case 7 : scanf("%d",&d); while ((d<0) || (d>31)) {printf("Ошибка ");scanf("%d",&d); } break;
        case 8 : scanf("%d",&d); while ((d<0) || (d>31)) {printf("Ошибка ");scanf("%d",&d); } break;
        case 9 : scanf("%d",&d); while ((d<0) || (d>30)) {printf("Ошибка ");scanf("%d",&d); } break;
        case 10 : scanf("%d",&d); while ((d<0) || (d>31)) {printf("Ошибка ");scanf("%d",&d); } break;
        case 11 : scanf("%d",&d); while ((d<0) || (d>30)) {printf("Ошибка ");scanf("%d",&d); } break;
        case 12 : scanf("%d",&d); while ((d<0) || (d>31)) {printf("Ошибка ");scanf("%d",&d); } break;
    }
    t += d;
    printf("День %d", t);
}