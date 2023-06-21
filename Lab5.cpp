#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i,k,flag=0;
    //تخزين المتغيرات و نوع كل متغير ولتخزين المعادلة
    char vari[15],typ[15],b[15],c;
    printf("Enter number of variables : ");
    scanf("%d",&n);
    //عشان نخلي المستخدم يدخل المتغير ونوعه
    for (int i = 0; i < n ;++i) {
        //ندخل المتغير الاول
        printf("Enter the variable[%d]:", i);
        scanf("%s", &vari[i]);
        //ندخل نوع المتغير الثاني
        printf("Enter the variable-type[%d](float-f,int-i):", i);
        scanf("%s", &typ[i]);

        if (typ[i] == 'f')
            flag = 1;
    }
    i=0;
    //عشان نخليه يدخل المعادله كامله
    printf("Enter the Expression (end with $):");
    //عشان نخدل مجموعه احرف
    getchar();
    while ((c=getchar())!='$') {
        //نخزنها بالمصوصفه
        b[i] = c;
        i++;
    }
    k=i;
    for (int j = 0; j < k; ++j) {
        if (b[j] == '/') {//نتاكد لو فيه قسمة يعني بيكون النوع فلوت
            flag = 1;
            break;//خلاص لو لقيها بنطلع من الفور
        }
    }
    //نسوي لوب تتاكد اذا كان اول نوع متغير فعلا نفس المطلوب او لا
    for (int j = 0; j < n; ++j) {
        if(b[0]==vari[j]){
            if(flag==1){
                if(typ[j]=='f') {//اذا كان العدد الاول فلوت ونوعه كذلك فلوت
                    printf("\nthe datatype is correctly defined..!\n");
                    break;
                }else {//اذا كان العدد الاول فلوت وكان نوعه صحيح
                    printf("Identifier %c must be a float type..!\n", vari[j]);
                    break;
                }
                }
                }else{//اذا كان صحيح (انت)
                    printf("\nthe datatype is correctly defined..!\n");
                    break;
        }
    }
    return 0;
}
