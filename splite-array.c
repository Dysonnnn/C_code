#include <stdio.h>
#include <string.h>
#define SIZE 60
int splite_msg(char str[],char saparator,char dest_arr[][SIZE]) {
	int i=0;
	int k=0,j=0;
	while(str[i]) {
		if(str[i] == saparator)	{
			//*(*(dest_arr+k)+j) = '\0';
            dest_arr[k][j] = '\0';
			j=0;
			k++;
			i++;	
			continue;
		}
		//*(*(dest_arr+k)+j) = str[i];
        dest_arr[k][j] = str[i];
		i++;
		j++;
	}
	//*n_count = k;
	return k;
}
int splite_msg(char str[],char saparator,char dest_arr[][SIZE]);
int main(){
    char str[] = "#LBS,0.000,0.053,0.000,-0.000,0.000,0.000,0.000,0.00*#LBS,0.000,0.053,0.000,-0.000,0.000,0.000,0.000,0.00*#LBS,0.000,0.053,0.000,-0.000,0.000,0.000,0.000,0.00*#LBS,0.000,0.053,0.000,-0.000,0.000,0.000,0.000,0.00*";
    char str2[SIZE][SIZE] = {0};
    char str3[SIZE][SIZE] = {0};
    int n_rt;
    int n_count = 0;
    int i,j = 0;
    n_rt = splite_msg(str, '#' , str2);
    printf("there is %d array\n", n_rt);
    for(i = 0; i < n_rt; i++){
		printf("str[%d]: ", i);
        for(j = 0; j < SIZE; j++){
            if(str2[i][j]!= '\0' ){
                //printf("str2[%d][%d] =  %c \t", i, j, str2[i][j]);
				printf("%c", str2[i][j]);
                
            }
        }
        printf("\n");
    }
    return 0;
}
