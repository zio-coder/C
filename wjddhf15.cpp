#include <string.h>
#include <stdio.h>
 
struct info{
    char name[100];
    char tel[100];
    char addres[100];
     
};
struct info fff[3];

void input(struct info* st){
    scanf("%s %s %s", st->name, st->tel, st->addres);
}
void output(struct info st){
    printf("name : %s\n", st.name); 
    printf("tel : %s\n", st.tel);
    printf("addr : %s", st.addres);
}
 
int main(struct info* st){
struct info A, B, C;
struct info min;
for(int i=0; i<3; i++){
	input(&fff[i]); 
}
    min = fff[0];]
	 for(int i=0;i<3;i++){
		if(strcmp(fff[i].name, min) > 0){
			min = fff[i];
		}
	}
output(min);		
	            
 
}
