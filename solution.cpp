int solution(char *S){
	int lenght=strlen(S);
	int result=0;
	for(int i=0; i<lenght; i++){
		for(int j=i; j<lenght; j++){
			int count[10]={0,0,0,0,0,0,0,0,0,0};
			bool oddnr=false;
			for(int l=i;l<=j;l++){
				swich(S[l]){
					for(int k=0; k<10; k++){
						case k:
							if(count[k]==0)
								count[k]=1;
							else
								count[k]=0;
							break;
					};
					default:
						break;
				};
			};
			for(int k; k<10; k++){
				if(count[k]==1){
					if(oddnr==true){
						result-=1;
						break;
					};
					oddnr=true;
				}
			};
			result+=1;
		};
	};
	return result;
};


