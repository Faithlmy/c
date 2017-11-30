#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"teacher.h"

struct score
{
	int math_sc;
	int cn_sc;
	int en_sc;
};

struct student
{
	int h;
	char *name;
	int class;
	struct address addr;
	struct score all_score;
}zzf={1, "zzf", 3,{"chian","shenzhen","nanshan"},{80,90,78}};

void printfStudentInfo(struct student stu);
void printfTeacherInfo(struct teacher tea);

int main()
{
	printfStudentInfo(zzf);
	return 0;
}

void printfStudentInfo(struct student stu)
{
	printf ("stu h: %d\n",stu.h);
	printf ("stu name: %s\n",stu.name);
	printf ("stu class: %d\n",stu.class);
	printf ("student country:%s,city:%s,street:%s\n",stu.addr.country , stu.addr.city , stu.addr.street );
	printf ("teacher country:%s,city:%s,street:%s\n",stu.all_score.math_sc,stu.all_score.cn_sc,stu.all_score.en_sc);
}
