#include <stdio.h>

int main() {
     
  int i,j, count=0, subtrair;
  char p[28][2] = {"AC","AL","AP","AM","BA","CE","DF","ES","GO","MA","MT","MS","MG","PA","PB","PR","PE","PI","RJ","RN","RS","RO","RR","SC","SP","SE","TO"};

  for(i=0;i<27;i++){
    for(j=0;j<27;j++){
      count +=1;
     printf(" (%.2s -> %.2s),",p[j],p[i]);
    
    if (p[j] == p[i] || p[i] == p[j])
      subtrair+=1;
      printf("");
  }  
}  
 printf("\nSerao %d rotas.\n", count-subtrair);
 printf("%d sao rotas repetidas.", subtrair);
return 0;
}
