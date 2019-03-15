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
            }//��X�j���J���A2�����Ʀ��誺�̤p����

            while(radix3!=0){
                radix3/=3;
                exp3Counter++;
            }//��X�j���J���A3�����Ʀ��誺�̤p����

            long result=input*3;//result������줧�ؼмƦr

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
