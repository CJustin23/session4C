#include <stdio.h>
int main(void){
    int day, month, year;
    printf("Moi ban nhap ngay, thang, nam ");
    scanf("%d %d %d", &day, &month, &year);
    if (((day>=1) && (day<=31)) && (1<=month) && (month<=12) && (year>=1)){
        if( year%400==0 || (year%4==0 && year%100!=0 )){
            if((month==4 || month==6 || month==9 || month==11) && (day<=30)){
                printf("ngay %d thang %d nam %d hop le\n", day, month, year);
            }else if(month==2 && day<=29){
                printf("ngay %d thang %d nam %d hop le\n", day, month, year);
            }else if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12 ){
                printf("ngay %d thang %d nam %d hop le\n", day, month, year);
            }else{
                printf("ngay %d thang %d nam %d khong hop le\n", day, month, year);
            }
        }else{
            if((month==4 || month==6 || month==9 || month==11) && (day<31)){
                printf("ngay %d thang %d nam %d hop le\n", day, month, year);
            }else if(month==2 && day<=28){
                printf("ngay %d thang %d nam %d hop le\n", day, month, year);
            }else if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12 ){
                printf("ngay %d thang %d nam %d hop le\n", day, month, year);
            }else{
                printf("ngay %d thang %d nam %d khong hop le\n", day, month, year);
            }
        }
    }else{
        printf("gia tri ban nhap khong hop le\n");
    }
    return 0;
}

