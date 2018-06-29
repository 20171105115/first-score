

#include<iostream>
#include<string>
#include<fstream>
using namespace std;
/*struct Stu{
    string Number;
    string Name;
    string Sex;
    int Birth;
    string Class;
    int Phone;
    int Judge[5];
};*/
//int main(){
    /*int min,max,average=0;
    int i,j,n,t=0;
    cin>>n;
    struct Stu a[10];
    for(i=0;i<n;i++){
        scanf("%s,%s,%s,%d,%s,%d",&a[i].Number,&a[i].Name,&a[i].Sex,&a[i].Birth,&a[i].Class,&a[i].Phone);
        for(j=0;j<5;j++){
            scanf("%d",&a[i].Judge[j]);
            max=0;
            min=0;
            
            if(max<a[i].Judge[j])
            {
                a[i].Judge[max]=a[i].Judge[j];
            }
            if(min>a[i].Judge[j])
            {
                a[i].Judge[min]=a[i].Judge[j];
            }
            average=(a[i].Judge[1]+ a[i].Judge[2]+a[i].Judge[3]+a[i].Judge[4]+a[i].Judge[5]-a[i].Judge[max]-a[i].Judge[min])/3.0;
        }
    }*/
    
    int main(int argc,const char * argv[])
    {
        FILE *a;
        FILE *b;
        b=fopen("/Users/s20171105115/Desktop/test.csv","a");
        char s1[50];
        char s2[50];
        char s3[50];
        char s4[50];
        char s5[50];
        char s6[50];
        char s7[50];
        char s8[50];
        char s9[50];
        char s10[50];
        char s11[50];
        
        if((a=fopen("/Users/s20171105115/Desktop/studentdata.csv","r"))==0)
        {
            printf("文件不存在\n");
        }
        else{
            fscanf(a,"%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ",s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11);
            fprintf(b,"%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11);
            printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11);

            //freopen("/Users/s20171105115/Desktop/test621/test.csv", "w", stdout);
        }
    }
//}
