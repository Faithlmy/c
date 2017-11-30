#ifndef __TEACHER_H_
#define __TEACHER_H_
struct address
{
	char *country;
	char *city;
	char *street;
};

struct teacher
{
	int num;
	int age;
	char *name;
	int teach_year;
	struct address addr;
};
#endif
