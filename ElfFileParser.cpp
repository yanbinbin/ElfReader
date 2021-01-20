// ElfFileParser.cpp : Defines the entry point for the application.
//

#include <iostream>
#include "ElfParser.h"

#include <unistd.h>

using namespace std;

int main()
{
	cout << "开始解析:" << endl;
	char *buffer;
	if((buffer = getcwd(NULL,0))==NULL){
		perror("getcwd error");
	}
	else{
		printf("当前路径为%s\n",buffer);
		free(buffer);
	}

	ElfParser elf_parser(R"(../file/armeabi-v7a/libfoo.so)");
	// ElfParser elf_parser(R"(..\..\..\file\arm64-v8a\libfoo.so)");
	elf_parser.parse();
	cout << "\n解析完毕！" << endl;
	return 0;
}
