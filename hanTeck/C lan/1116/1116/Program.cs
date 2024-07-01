using System;

namespace _1116
{
    class Program
    {
        // 내년 연봉 구하기 : 올해 연봉 보다 500만원 더 많게 하기
        static string GetMyYearlySalaryStr(int year)
        {
            string salary = "1억"; //기존 연봉
            int salaryRaise = 500; //연봉 인상금액
            int career = year - 2018; //경력
            if (career > 1) //경력이 1년이상 일경우 이 문장을 실행한다.
            {
                salaryRaise = salaryRaise * career; // 연봉인상
                salary = salary + "salaryRaise만원"; // 총연봉
            }
            
           
            
           

            return salary;
        }

        // 희망하는 키 구하기 : 현재 키 보다 5.6 Cm 더 크게 하기
        static float GetNextYearMyHeight(int age)
        {
            float some = 5.6F;
            float total;

            total = age + some;
            return total;
        }

        static void Main(string[] args)
        {
            int year = 2019;
            Console.WriteLine("올해 연봉은 ..... %s", salaryString);
            string salaryString = GetMyYearlySalaryStr(year);
            Console.WriteLine("내년 연봉은 ..... %s", salaryString);

            // ----------------------------------------------
            Console.WriteLine("-----------------------------------");
            float abc;
            abc = GetNextYearMyHeight(177);

            Console.WriteLine("나의 키에 5.6을 더한 값 ..... {0}Cm", abc);


            // 컴퓨터 증명
            Console.WriteLine("-----------------------------------");
            Console.WriteLine("User: {0}, Domain: {1}", Environment.UserName, Environment.UserDomainName);
            Console.WriteLine("Directory: {0}", Environment.CurrentDirectory);

            // 종료 방지.
            Console.Read();
        }
    }
}