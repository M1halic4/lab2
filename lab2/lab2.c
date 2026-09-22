#include <stdio.h>
#include <locale.h>

int task1()
{
	//1
	printf("123\n");
	//2
	printf("1\n2\n3\n");
	//3
	printf("1\t2\t\t3\n");
	//4
	printf("%d %d %d %d\n", 1, 2, 3, 4);
	//5
	printf("%10.3f\n", 12.234657);
	//6
	printf("%10.5f\n", 12.234657);
	//7
	printf("Остаток от деления %d на %d равен %d\n ", 5, 2, 5 % 2);
	//8
	printf("Результат деления %d на %d равен %.1f\n", 7, 5, 7.0 / 5);
	//9
	printf("Резултат умножения %d на %d равен %d\n", 2000, 4, 2000 * 4);
	//10
	printf("%g разделить %e равно %f\n ", 5., 2000000., 5. / 2000000);
	return 0;
}

int task2()
{
	int n = 11., k = 14.;
	printf("Сейчас %d часов %d минут 00 секунд\n", n, k);
	printf("Идет %d минута суток\n", n * 60 + k);
	printf("До полуночи осталось %d часов и %d минут\n", 23 - n, 60 - k);
	printf("С 8.00 прошло %d секунд\n", (n - 8) * 3600 + k * 60);
	printf("Текущий час  = %4.2f суток  и текущая минута =  %4.2f часа", n / 24., k / 60.);
	return 0;
}

int task3()
{
	float L = 393., n = 4.;
	int k = 2, m = 6;
	printf("Дано:\n%10.0f\n%10.0f\n       __________\nОтвет:\n       %+0*.*f", n, L, m + k + 2, m, n / L);
	return 0;
}


int dz()
{
	int rasstoyanie = 390, rolls = 15, ford = 36;
	printf("Поездка на Роллс-Ройсе будет стоить %d фунтов\n", rasstoyanie / rolls);
	printf("Поездка на Форд-эскорт сэкономит %f фунтов", (rasstoyanie / rolls) - (rasstoyanie * 1.0 / ford));

	return 0;
}

int main()
{
	setlocale(LC_ALL, "RUS");
	dz();


	return 0;
}