#include <stdio.h>
#include <Windows.h>
#include <tchar.h>
#include <conio.h>

#pragma warning (disable:4996)

#define OBJECT_NAME _T("Local\\INTERPRO")

int main (void){

    HANDLE hMapping;
    char* buf;

    hMapping = OpenFileMapping(FILE_MAP_READ | FILE_MAP_WRITE,
                                FALSE,
                                OBJECT_NAME
                                );

    buf = (char*)MapViewOfFile(hMapping,
                                PAGE_READONLY,
                                0,
                                0,
                                0);

    printf("클라이언트입니다\n");
    printf("내용: %s\n", buf);
    getch();
    UnmapViewOfFile(buf);
    CloseHandle(hMapping);
    return 0;
}