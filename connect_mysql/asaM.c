#include<stdio.h>
#include"/usr/include/mysql/mysql.h"
int main()
{
	MYSQL mysql;
	MYSQL_RES *res;
	mysql_init(&mysql);
	nysql_real_connect(&mysql, "10.132.37.126","root","root", "faith_st",3306,NULL,0);
	return 0;
}
