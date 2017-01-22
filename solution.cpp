#include <stdio.h>
#include <string.h>
#include <iostream>

int solution(char *S){
	int lenght=strlen(S);
	int result=0;
	bool odd, sec_odd=false;
	int count_odd=0;

	for(int i=0; i<lenght; i++){
		for(int j=i; j<lenght; j++){
			// initial cond for next string
			(j+1-i)%2==0 ? odd=false: odd=true;
		        count_odd=0;
			int count[10]={0,0,0,0,0,0,0,0,0,0};
			std::cout<<"nr "<<i<<"-"<<j<<"\n";

			// checking odd colors
			for(int l=i;l<=j;l++){
				int k=S[l]-'0';
				count[k]==0 ? count[k]=1: count[k]=0;				
			};

			// geting number of odd colors in current string
			for(int k=0; k<10; k++)
				count_odd+=count[k];
			std::cout<<"count_odd "<<count_odd<<" odd "<<odd<<"\n";

			// checking if the string not applies.
			count_odd>=1 && odd==false ? result--: result-=0;
			count_odd>=2 && odd==true ? result--: result-=0;
			
			// adding string to result
			result++;
			std::cout<<"result "<<result<<"\n";
		};
	};
	return result;
};

int main(int argc,char *argv[]){
char* S=argv[1];
std::cout<<"input: "<<S<<"\n";
std::cout<<"result: "<<solution(S)<<"\n";
return 0;
};
