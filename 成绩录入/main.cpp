//
//  main.cpp
//  成绩录入
//
//  Created by 朱博宇 on 2018/6/29.
//  Copyright © 2018年 朱博宇. All rights reserved.
//

#include<stdio.h>
#include<string>
#include<fstream>
using namespace std;
struct Stu{
    string Number;
    string Name;
    string Sex;
    int Birth;
    string Class;
    int Phone;
    int Judge[5];
};
int main(){
    int min,max,average=0;
    int i,j,n,t=0;
    scanf("%d",&n);
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
}
    
    
    /*for(i=0;i<n;i++){
        freopen("studentdata.csv","r", stdin);
    }
    
    
    for(i=0;i<n;i++){
        freopen("test.csv", "w", stdout);
    }*/
    
    
}
