#include <stdio.h>
#include <Windows.h>
#include <tchar.h>
#include <conio.h>

#pragma warning (disable:4996)
#define OBJECT_NAME _T("Local\\INTERPRO")
#define PAGE_SIZE 0x1000

int main(void){
    HANDLE hMapping;
    char* buf;
    hMapping = CreateFileMapping(INVALID_HANDLE_VALUE,NULL,PAGE_READWRITE,0,PAGE_SIZE,OBJECT_NAME);

    buf = (char*)MapViewOfFile(hMapping,PAGE_READONLY,0,0,0);

    printf("서버입니다.\n내용 : ");
    strcpy(buf,"20161213 최범휘");
    printf("%s",buf);
    getch();
    UnmapViewOfFile(buf);
    CloseHandle(hMapping);

    return 0;
}