//
//  main.c
//  ZOJ3819
//
//  Created by frank on 15-10-25.
//  Copyright (c) 2015年 frank. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int T;
    scanf("%d",&T);
    int an[50],am[50];
    while(T-->0){
        int n,m,i,j,sco_bob;
        int min_bob=-1;
        int max_bob=-1;
        float sum_n=0;
        float sum_m=0;
        float avg_n=0;
        float avg_m=0;
        scanf("%d %d",&n,&m);
        for(i=0;i<n-1;i++){
            scanf("%d",&an[i]);
            sum_n+=an[i];
        }
        for(j=0;j<m;j++){
            scanf("%d",&am[j]);
            sum_m+=am[j];
        }
        avg_n = sum_n/(n-1);
        avg_m = sum_m/m;
        sco_bob = 0;
        for(sco_bob = 0;sco_bob<max_bob+2||max_bob==-1;sco_bob++){
        if((sum_n+sco_bob)/n*1.0<avg_n&&(sum_m+sco_bob)/(m+1)*1.0>avg_m){
            if(min_bob==-1||sco_bob<min_bob) min_bob = sco_bob;
            if(sco_bob>max_bob) max_bob = sco_bob;
        }
        }
        
        printf("%d %d\n",min_bob,max_bob);
    }
    return 0;
}
