#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,i;  // n=User-entered integer,i=Cycle sign
    printf("Enter an integer:");
    scanf("%d",&n);

    // if n>=2 then Execute the following loop
    for(i=2; i<=n; i++){
        while(n!=i){
            if(n%i==0){
                printf("%d ",i);
                n=n/i;
            }else
                break;
        }
    }
    printf("%d\n",n);
    system("pause");
	return 0;
}
