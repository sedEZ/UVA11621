#include<iostream>
#include<math.h>

using namespace std;

int main(){
        long input;
        cin>>input;
        while(input!=0){
            long radix2,radix3;
            radix2=radix3=input;
            int exp2Counter=0,exp3Counter=0;
            while(radix2!=0){
                radix2/=2;
                exp2Counter++;
            }//т块2计Ωよ程计

            while(radix3!=0){
                radix3/=3;
                exp3Counter++;
            }//т块3计Ωよ程计

            long result=input*3;//result饼тぇヘ夹计

            for(int i=0;i<=exp2Counter;i++){
                for(int j=0;j<=exp3Counter;j++){
                    long num = (long)pow(2,i)*pow(3,j);

                    if(num>=input&&num<=result){

                        result = num;
                    }

                }
            }

            cout<<result<<endl;


            cin>>input;
        }

}
