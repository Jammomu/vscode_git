#include <stdio.h>
#define STD_NUM 3
#define SUB_NUM 4

/*
	 2차원 배열에서
		일괄처리 - for문 돌리기    행에서  각각의 열변화, 열변화 끝났으면 행변화

	행변화 for문
		열변화 for문

	2차원 배열->2중 for문
				
*/
void main()
{
	//3명의 학생이 4과목 시험봤다.
	int i=0;  // row 행  학생
	int j=0;  // col(oum)    행(=학생)마다->점수(0~3)들
	int arr[STD_NUM][SUB_NUM]={0};
	int arHap[STD_NUM] ={0};

	//학생 마다 0~2 <3  
	for(i=0; i<STD_NUM; i++)
	{
		//과목 점수 입력
		for(j=0; j<SUB_NUM; j++)
		{
			printf("%d번 학생 %d번 점수 : ", i+1, j+1);
			scanf("%d", &arr[i][j]);

			arHap[i] += arr[i][j];  //각 0행마다(학생마다) 성적을
									//누적해 놓자
		}
	}
	puts("=========== 점수 출력 =============");
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			/*
				번호	국	영	수	과 총 평
				1	x	x	x	x	x x
				2	x	x	x	x	x x
				3	x	x	x	x	x x

			*/

		}

	}

}