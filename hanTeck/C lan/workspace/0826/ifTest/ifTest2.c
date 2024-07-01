#include <stdio.h>
/*



*/
void main()
{
	//점심 메뉴 고르기
	//1 >> 김치찌개
	//2 >> 된장찌개
	//3 >> 순두부찌개
	//4 >> 부대찌개

	//수도 코드: 코드를 만들기전에 코드의 진행과정을 주석에 적어놓는것
	int menu=0;
	printf(" oo식당메뉴\n 1.김치찌개\n 2.된장찌개\n 3.순두부찌개\n 4.부대찌개\n 메뉴의 숫자를 입력해주세요. ");
	scanf("%d" , &menu);

	if(menu == 1){
		printf(" 김치찌개 주문되었습니다.\n");
	}else if(menu == 2){
		printf("된장찌개 주문되었습니다.\n");
	}else if(menu == 3){
		printf("순두부찌개 주문되었습니다.\n");
	}else if(menu == 4){
		printf("부대찌개 주문되었습니다.\n");
	}else{
		printf("잘못된 주문입니다.");
	}

}