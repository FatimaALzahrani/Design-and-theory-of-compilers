//                                                             *LEXICAL ANALYZER*

//compiler يمر بعدة مراحل
// lexical analyzer : يقسم المدخل ل token
// syntax analyzer : هل كتبنا بشكل صحيح
// symantix : تعريف المتغيرات
//code optimasation : ما تكرر الاكواد
//compiler

#include<stdio.h>//"stander input output" للطباعه والادخال , وهو ملف فيه كثير اسطر ويستبدلهم بذا
#include<conio.h>//"console input output" getchar فيها كثير دوال ومنها
#include<malloc.h>//مسؤوله عن حجز مكان بالذاكرة
#include<string.h>
#include<math.h>//بتتعامل مع الارقام عشان الاسكي كود
#include<ctype.h>
char vars[100][100];
int vcnt;
char input[1000],c;
char token[50],tlen;
int state=0,pos=0,i=0,id;
char *getAddress(char str[]){//داله تخزن التوكن في مصفوفه
    for(i=0;i<vcnt;i++)
        if(strcmp(str,vars[i])==0)//لو كان موجود من قبل بيرجع مكانها
            return vars[i];
    strcpy(vars[vcnt],str);//لو مو موجوده بتنشئة
    return vars[vcnt++];
}
int isrelop(char c){//داله تتاكد لو هو عملية او لا
    if(c=='+'||c=='-'||c=='*'||c=='/'||c=='%'||c=='^')
        return 1;
    else
        return 0;
}
int main(void){
//clrscr();
printf("Enter the Input String:");
gets(input);//بنخليه يدخل النص مجموعه من الحروف
do{
    c=input[pos];//نخزن الحرف الاول
    putchar(c);//طباعة الحرف المُدخل
    switch(state){//نقارن بقيم الاستيت
        case 0:
            if(isspace(c))//هل هي مسافة
                printf("\b");//يطبع فراغ
            if(isalpha(c)){//اذا كان حرف
                token[0]=c;//بيضيفها للتوكين
                tlen=1;//طول التوكن
                state=1;
            }
            if(isdigit(c))//لو كان حرف
                state=2;
            if(isrelop(c))//لو كان عملية
                state=3;
            if(c==';')
                printf("\t<3,3>\n");
            if(c=='=')
                printf("\t<4,4>\n");
            break;
            case 1:
                if(!isalnum(c)){//اذا كان ماهو حرف ولا رقم
                    token[tlen]='o';
                    printf("\b\t<1,%p>\n",getAddress(token));
                    state=0;
                    pos--;
                }
                else
                    token[tlen++]=c;
                break;
                case 2:
                    if(!isdigit(c)){//اذا ما كان حرف
                        printf("\b\t<2,%p>\n",&input[pos]);//
                        state=0;
                        pos--;
                    }
                    break;
                    case 3:
                        id=input[pos-1];
                        if(c=='=')
                            printf("\t<%d,%d>\n",id*10,id*10);
                        else{
                            printf("\b\t<%d,%d>\n",id,id);
                            pos--;
                        }state=0;
                        break;
    }
    pos++;
}
while(c!=0);
getch();
return 0;
}
