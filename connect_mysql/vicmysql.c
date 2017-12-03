#include<stdio.h>
#include"/usr/include/mysql/mysql.h"
int main()
{
	int res = 0;
	MYSQL mysql;
	MYSQL * connect = NULL;
	//connect = mysql_init(&mysql);
	connect = mysql_real_connect(connect, "10.132.37.126", "root", "root","faith_st", 0, NULL, 0);
	if(connect == NULL)
	{
		res =  mysql_errno(&mysql);
		printf("err is : \n", mysql_error(&mysql));
		return res;
	}
	printf("ok");
}
