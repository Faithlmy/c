#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"/usr/include/mysql/mysql.h"
//创建mysql句柄
MYSQL *conn_prt;
MYSQL_RES *res;
MYSQL_ROW row;

//操作命令的开头部分
char select_head[50] = "select * from";
char desc_head[50] = "desc";
char insert_head[200] = "insert into";
char drop_msg_head[50] = "delete from";
//char change_base_head[50] = 

//初始化句柄
void self_init()
{
	conn_prt = mysql_init(NULL);
}
//连接mysql
void self_conn()
{
	if(!mysql_real_connect(conn_prt, "10.132.37.126", "root", "root", "faith_st",3306,NULL,0))
	{
		printf("failed to connect: %s\n", mysql_error(conn_prt));
	}
	printf("connect success!\n");
}

int main()
{
	self_init();
	self_conn();
	return 0;
}
