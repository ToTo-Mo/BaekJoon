#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>



//단어와 빈도를 가지고 있는 구조체
typedef struct stbowl{
      char letter[50];
      int count;
      int length;
      
   }stbowl;

typedef enum {false, true} bool;

bool wordis(stbowl *pattern, int patter_length,char *word){
   
   for(int i=0; i<patter_length; i++)
      if(strcmp(pattern[i].letter,word)){
         return false;
      }

   return true;
}

int main() 
{
   char**words;  //입력에 대한 단어
    int N;     //입력한 단어 수
   stbowl *pat;   //중복을 제외한 단어
   stbowl dgroup;   
   int count = 0;   // 중복을 제외하고 등장한 단어들의 갯수


   scanf("%d",&N);
   while(getchar() != '\n');

   //words 동적할당
   words = (char **)malloc(sizeof(char *) * N);

   for (int i =0; i < N; i++)
      words[i] = (char *)malloc(sizeof(char) * 50);

   pat = (stbowl *)malloc(sizeof(stbowl) * N);
   for(int i=0; i<N;i++)
      pat[i].count = 0;

   //비교할 단어 입력
   for (int i = 0; i < N; i++)
      scanf("%s", words[i]);


   // for (int i=0; i<N; i++)
   //    printf("%s\n",words[i]);

   // tot에서 중복되지 않도록 단어를 pat에 저장
   for (int i = 0; i < N; i++){
      if (wordis(pat,count,words[i]) == false){
         strcpy(pat[count].letter, words[i]);
         count++; 
      }
   }

   for (int i=0; i<count; i++)
      printf("%s\n",pat[i].letter);
   
   //tot의 단어를 보고 pat에서 단어 빈도를 추가
   for(int i = 0; i < N; i++ ){
      for(int j=0; j<count; j++){
         if(strcmp(pat[j].letter,words[i]))
            pat[j].count++;
      }
   }
      
   printf("단어\t빈도\n");
   for(int i=0; i<count; i++)
      printf("%s\t%d\n",pat[i].letter,pat[i].count);
      
   for (int j = 0; j < N; j++) 
      free(words[j]);


   free(words);
   system("pause");
   getchar();
   
   return 0;
}