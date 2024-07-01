#include <stdio.h>

int changeValue(int y, int m)
{
	//y에는 9가 넘어왂고, m에는 monthdml 2018이 들어 있다.
	//우선 y와 m의 값을 서로 바꿔야 한다.(swicth)

	//??? 바꿔보기~!
	int t;
	t = y;
	y = m;
	m = t;
	printf("(change함수) y:%d , m:%d\n)", y, m);

	//return y, m; 한번에 두값을 불러오지 못한다. 
}
 
void main()
{
	int year =9;
	int month=2018;

	printf("year:%d , month:%d\n", year, month);

	changeValue(year,month);

	printf("year: %d, month: %d\n",year, month);
}