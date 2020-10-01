#include <stdio.h>
int main() {    
  int i,j, count=0, subtrair=0,countTruly;
  char p[28][2] = {"AC","AL","AP","AM","BA","CE","DF","ES","GO","MA","MT","MS","MG","PA","PB","PR","PE","PI","RJ","RN","RS","RO","RR","SC","SP","SE","TO"};

  for(i=0;i<27;i++){
    for(j=0;j<27;j++){
      count +=1;    
      
      if (p[j] == p[i]){
      subtrair++;
      }else{
      countTruly +=1;    
      printf(" (%.2s -> %.2s),",p[j],p[i]);
      }
      
    }
    printf("\n");
  }  
  printf("\nForam criadas %d rotas.\n", count);
  printf("%d sao rotas repetidas.", subtrair);
  printf("\n%d sao rotas válidas e foram printadas.", countTruly);
  return 0;
}