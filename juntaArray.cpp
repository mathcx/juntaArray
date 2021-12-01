	#include <iostream>
	#include <stdlib.h>

	using namespace std; 

	class valores{
		
	int i, arrayA[6], arrayB[6], arrayC[12];
	
	public:
			
	junta(int arrayC[12]);
	
	};
	
	int valores::junta(int arrayC[12]){
	
	for (i=0;i<6;i++){
	cout << "Digite o valor da posicao: " << i << endl;
	cin >> arrayA[i];}
	
	for (i=0;i<6;i++){
	cout << "Digite o valor da posicao: " << i << endl;
	cin >> arrayB[i];}
	
    for (i=0; i<6; i++){
    arrayC[i] = arrayA[i];}
    
    for (i=6; i<12; i++){
    arrayC[i] = arrayB[i-6];}

    for (i=0; i<12; i++){
    cout << arrayC[i] << " ";}
}
	int main(){
		
		int arrayC[12];
		
		valores posicao;
		posicao.junta(arrayC);
		
	}

