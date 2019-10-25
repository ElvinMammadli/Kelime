#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 2415

typedef struct Kelimelik{
     char *kelime;
};

 struct stack {
  int  data[50];
  int top;
};

typedef struct stack tack;
tack Stack;
int farksayi (char *kelime1 , char *kelime2);
int adimsayi(char *kelime1 , char *kelime2,int **komsuluk,struct Kelimelik * dizi);
int deneme (char *kelime1 , char *kelime2,int **komsuluk,struct Kelimelik * dizi);
void push(int i);
int pop();
int look();

int main() {

  int **komsuluk = (int **)malloc(MAXSIZE * sizeof(int*));
  for(int i = 0; i < MAXSIZE; i++) komsuluk[i] = (int *)malloc(MAXSIZE * sizeof(int));


struct Kelimelik dizi[MAXSIZE];
int i =0,j=0;
char *word;
FILE *fp;
    fp=fopen("kelime.txt","r");
    while(!feof(fp)){
          word=(char*)malloc(5*sizeof(char));
          fscanf(fp,"%s",word);
          dizi[i].kelime=word;
          i++;
    }
    i=0;
        for(i=0;i<MAXSIZE;i++){
          for(j=0;j<MAXSIZE;j++){
  komsuluk[i][j] = farksayi(dizi[i].kelime,dizi[j].kelime);
}
}
adimsayi("abase","abuse",komsuluk,dizi);




    return 0;
}

int adimsayi(char *kelime1 , char *kelime2,int **komsuluk,struct Kelimelik * dizi){
  int i=0,j=0;
  while (strcmp(kelime1,dizi[i].kelime)&&i<MAXSIZE){
    i++;
  }
  printf("%d\n",i );
  for ( j = 0; j < MAXSIZE; j++) {

    if((komsuluk[i][j])==1){
      push(j);

      printf("%d\n",j );
    }}


    printf("%s\n",dizi[pop()].kelime );
int b=0;
   while(look()==NULL||strcmp(dizi[b].kelime,kelime2)){
       b=pop();
       printf("%s\n",b );
      if(strcmp(dizi[b],kelime2)){
        return 0;
      }else{

      }
    }


}








int farksayi (char *kelime1 , char *kelime2){
    int i=0,b=0;

          while(kelime1[i]!=NULL&&kelime2[i]!=NULL&&b<=1){
            if(kelime1[i]!=kelime2[i]){
                    b++;
                }
                     i++;
          }
          if(b==1){
            return 1;
          }
          return 0;

           }


 int deneme (char *kelime1 , char *kelime2,int **komsuluk,struct Kelimelik * dizi){
int i =0;
int j=0;

    while (strcmp(kelime1,dizi[i].kelime)&&i<MAXSIZE){
      i++;
    }

  while (strcmp(kelime2,dizi[j].kelime)&&j<MAXSIZE){
    j++;
  }
return komsuluk[i][j];

}





void push (int num)
{
    if (Stack.top == ( 50))
    {
        printf ("Stack is Full\n");
        return;
    }
    else
    {
      Stack.top = Stack.top + 1;

        Stack.data[Stack.top] = num;


    }
    return;
}
int pop ()
{
    int num;
    if (Stack.top == -1)
    {
        printf ("Stack is Empty\n");
          return (Stack.top);
    }
    else
    {
        num = Stack.data[Stack.top];
        Stack.top = Stack.top - 1;
        return(num);

    }
}


int look(){
  if(Stack.top==0){
    printf("Stack is empty" );
  }
  else{
  return Stack.data[Stack.top];

}
}
