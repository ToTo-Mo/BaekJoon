#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>



//�ܾ�� �󵵸� ������ �ִ� ����ü
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
   char**words;  //�Է¿� ���� �ܾ�
    int N;     //�Է��� �ܾ� ��
   stbowl *pat;   //�ߺ��� ������ �ܾ�
   stbowl dgroup;   
   int count = 0;   // �ߺ��� �����ϰ� ������ �ܾ���� ����


   scanf("%d",&N);
   while(getchar() != '\n');

   //words �����Ҵ�
   words = (char **)malloc(sizeof(char *) * N);

   for (int i =0; i < N; i++)
      words[i] = (char *)malloc(sizeof(char) * 50);

   pat = (stbowl *)malloc(sizeof(stbowl) * N);
   for(int i=0; i<N;i++)
      pat[i].count = 0;

   //���� �ܾ� �Է�
   for (int i = 0; i < N; i++)
      scanf("%s", words[i]);


   // for (int i=0; i<N; i++)
   //    printf("%s\n",words[i]);

   // tot���� �ߺ����� �ʵ��� �ܾ pat�� ����
   for (int i = 0; i < N; i++){
      if (wordis(pat,count,words[i]) == false){
         strcpy(pat[count].letter, words[i]);
         count++; 
      }
   }

   for (int i=0; i<count; i++)
      printf("%s\n",pat[i].letter);
   
   //tot�� �ܾ ���� pat���� �ܾ� �󵵸� �߰�
   for(int i = 0; i < N; i++ ){
      for(int j=0; j<count; j++){
         if(strcmp(pat[j].letter,words[i]))
            pat[j].count++;
      }
   }
      
   printf("�ܾ�\t��\n");
   for(int i=0; i<count; i++)
      printf("%s\t%d\n",pat[i].letter,pat[i].count);
      
   for (int j = 0; j < N; j++) 
      free(words[j]);


   free(words);
   system("pause");
   getchar();
   
   return 0;
}