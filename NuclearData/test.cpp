#include<iostream>
#include"NuclearData.h"

using namespace std;

int main(){
	NuclearData nd;
/*	cout<<"BCal.: "<<nd.getBCal(20,45)<<endl;
	cout<<"BTh.: "<<nd.getBTh(20,45)<<endl;
	cout<<"STotal.: "<<nd.getSTotal(20,45)<<endl;
	cout<<"BExp.: "<<nd.getBExp(20,45)<<endl;
	cout<<"SN.: "<<nd.getSN(20,45)<<endl;
	cout<<"SP.: "<<nd.getSP(20,45)<<endl;
	cout<<"S2N.: "<<nd.getS2N(20,45)<<endl;
	cout<<"S2P.: "<<nd.getS2P(20,45)<<endl;
	cout<<"QAlpha.: "<<nd.getQAlpha(20,45)<<endl;
	cout<<"QBetaMinus.: "<<nd.getQBetaMinus(20,45)<<endl;
	cout<<"QBetaPlus.: "<<nd.getQBetaPlus(20,45)<<endl;
	cout<<"QBetaEC.: "<<nd.getQBetaEC(20,45)<<endl;
	cout<<"DeltaN.: "<<nd.getDeltaN(20,45)<<endl;
	cout<<"DeltaP.: "<<nd.getDeltaP(20,45)<<endl;
*/

	nd.printAll(8, 16);
	return 0;
}
