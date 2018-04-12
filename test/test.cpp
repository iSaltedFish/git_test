/*#include "test.h"
#include "stdio.h"
#include "stdlib.h"
#include "dlfcn.h"
#include <signal.h>
#include<stdio.h>*/
#include <stdio.h>
#include <string>

using namespace std;

int main()
{

	string s1 = "ver-1";
	string s2 = "789";


	string s = s1.append(s2);

	printf("____s si %s\n", s.c_str());


/*	char *buffer = new char[7];

	for (int i=0; i<10; ++i) {buffer[i] = i;}
	
	register int tmp;
	unsigned int re_index= 3;
	int re_cache = 0;

	char buf_avoid_overflow[4] = {0};
	const char *data = (const char *)buffer + (re_index>>3);
	memcpy(buf_avoid_overflow, data, sizeof(data));

	re_cache = AV_RB32(buf_avoid_overflow) << (re_index & 0x07);

	return tmp;
*/

/*	signal(SIGTERM, func1);
	signal(SIGINT, func1);
	
      	void *handle = NULL;
      	void (*h_func2)();

      	handle = dlopen("./libtest.so",RTLD_LAZY);
      	if(handle == NULL)
      	{
      	 	printf("dll loading error.\n");
          	return 0;
      	}
      	h_func2 = (void(*)(void))dlsym(handle,"func2");
      	if(dlerror()!=NULL)
      	{
          	printf("fun2 load error.\n");
          	return 0;
      	}
	h_func2();  */


	

	return 0;
}

/*void func1(int sig)
{
	printf("signal comes\n");

	int a = 1;
	if (a==1)
	{
		a = 2;
	}
	else{
		a = 3;
	}
	printf(" a = %d\n", a);
	
	exit(0);
}*/

