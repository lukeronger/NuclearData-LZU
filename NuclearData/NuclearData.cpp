#include<vector>
#include<iostream>
#include<fstream>
using namespace std;

#include"NuclearData.h"

NuclearData::NuclearData()
{
	int Z, N, A;
	double bcal, bth, stotal, bexp, sn, sp, s2n, s2p, qalpha, qbetam, qbetap, qbetaec, deltan, deltap;
	vector<int>* vectorValidity = new vector<int>(45000);
	vector<double>* vectorBCal = new vector<double>(45000);
	vector<double>* vectorBTh = new vector<double>(45000);
	vector<double>* vectorSTotal = new vector<double>(45000);
	vector<double>* vectorBExp = new vector<double>(45000);
	vector<double>* vectorSN = new vector<double>(45000);
	vector<double>* vectorSP = new vector<double>(45000);
	vector<double>* vectorS2N = new vector<double>(45000);
	vector<double>* vectorS2P = new vector<double>(45000);
	vector<double>* vectorQAlpha = new vector<double>(45000);
	vector<double>* vectorQBetaMinus = new vector<double>(45000);
	vector<double>* vectorQBetaPlus = new vector<double>(45000);
	vector<double>* vectorQBetaEC = new vector<double>(45000);
	vector<double>* vectorDeltaN = new vector<double>(45000);
	vector<double>* vectorDeltaP = new vector<double>(45000);
	validity = vectorValidity->data();
	arrayBCal = vectorBCal->data();
	arrayBTh = vectorBTh->data();
	arraySTotal = vectorSTotal->data();
	arrayBExp = vectorBExp->data();
	arraySN = vectorSN->data();
	arraySP = vectorSP->data();
	arrayS2N = vectorS2N->data();
	arrayS2P = vectorS2P->data();
	arrayQAlpha = vectorQAlpha->data();
	arrayQBetaMinus = vectorQBetaMinus->data();
	arrayQBetaPlus = vectorQBetaPlus->data();
	arrayQBetaEC = vectorQBetaEC->data();
	arrayDeltaN = vectorDeltaN->data();
	arrayDeltaP = vectorDeltaP->data();

	ifstream datain("data_table.txt");
	while(datain>>Z>>N>>A>>bcal>>bth>>stotal>>bexp>>sn>>sp>>s2n>>s2p>>qalpha>>qbetam>>qbetap>>qbetaec>>deltan>>deltap)
	{
		validity[(Z-1)*300 + N] = 111111;
		arrayBCal[(Z-1)*300 + N] = bcal;	
		arrayBTh[(Z-1)*300 + N] = bth;	
		arraySTotal[(Z-1)*300 + N] = stotal;	
		arrayBExp[(Z-1)*300 + N] = bexp;	
		arraySN[(Z-1)*300 + N] = sn;	
		arraySP[(Z-1)*300 + N] = sp;	
		arrayS2N[(Z-1)*300 + N] = s2n;	
		arrayS2P[(Z-1)*300 + N] = s2p;	
		arrayQAlpha[(Z-1)*300 + N] = qalpha;	
		arrayQBetaMinus[(Z-1)*300 + N] = qbetam;	
		arrayQBetaPlus[(Z-1)*300 + N] = qbetap;	
		arrayQBetaEC[(Z-1)*300 + N] = qbetaec;	
		arrayDeltaN[(Z-1)*300 + N] = deltan;	
		arrayDeltaP[(Z-1)*300 + N] = deltap;	
	}
	datain.close();
}

double NuclearData::getBCal(int Z, int A)
{
	int N = A-Z;
	if(validity[(Z-1)*300 + N]!=111111)
	{
		cout<<"The data of this nucleus is not provided!!!"<<endl;
		cout<<"Error! Z = "<<Z<<"? A = "<<A<<"?"<<endl;
		return 888888;
	}
	if(arrayBCal[(Z-1)*300 + N]==888888)
	{
		cout<<"BCal data of this nucleus is not provided!!!"<<endl;
		cout<<"Warning! for Z = "<<Z<<", A = "<<A<<"."<<endl;
	}
	return arrayBCal[(Z-1)*300 + N];
}

double NuclearData::getBTh(int Z, int A)
{
	int N = A-Z;
	if(validity[(Z-1)*300 + N]!=111111)
	{
		cout<<"The data of this nucleus is not provided!!!"<<endl;
		cout<<"Error! Z = "<<Z<<"? A = "<<A<<"?"<<endl;
		return 888888;
	}
	if(arrayBTh[(Z-1)*300 + N]==888888)
	{
		cout<<"BTh data of this nucleus is not provided!!!"<<endl;
		cout<<"Warning! for Z = "<<Z<<", A = "<<A<<"."<<endl;
	}
	return arrayBTh[(Z-1)*300 + N];
}

double NuclearData::getSTotal(int Z, int A)
{
	int N = A-Z;
	if(validity[(Z-1)*300 + N]!=111111)
	{
		cout<<"The data of this nucleus is not provided!!!"<<endl;
		cout<<"Error! Z = "<<Z<<"? A = "<<A<<"?"<<endl;
		return 888888;
	}
	if(arraySTotal[(Z-1)*300 + N]==888888)
	{
		cout<<"STotal data of this nucleus is not provided!!!"<<endl;
		cout<<"Warning! for Z = "<<Z<<", A = "<<A<<"."<<endl;
	}
	return arraySTotal[(Z-1)*300 + N];
}

double NuclearData::getBExp(int Z, int A)
{
	int N = A-Z;
	if(validity[(Z-1)*300 + N]!=111111)
	{
		cout<<"The data of this nucleus is not provided!!!"<<endl;
		cout<<"Error! Z = "<<Z<<"? A = "<<A<<"?"<<endl;
		return 888888;
	}
	if(arrayBExp[(Z-1)*300 + N]==888888)
	{
		cout<<"BExp data of this nucleus is not provided!!!"<<endl;
		cout<<"Warning! for Z = "<<Z<<", A = "<<A<<"."<<endl;
	}
	return arrayBExp[(Z-1)*300 + N];
}

double NuclearData::getSN(int Z, int A)
{
	int N = A-Z;
	if(validity[(Z-1)*300 + N]!=111111)
	{
		cout<<"The data of this nucleus is not provided!!!"<<endl;
		cout<<"Error! Z = "<<Z<<"? A = "<<A<<"?"<<endl;
		return 888888;
	}
	if(arraySN[(Z-1)*300 + N]==888888)
	{
		cout<<"SN data of this nucleus is not provided!!!"<<endl;
		cout<<"Warning! for Z = "<<Z<<", A = "<<A<<"."<<endl;
	}
	return arraySN[(Z-1)*300 + N];
}

double NuclearData::getSP(int Z, int A)
{
	int N = A-Z;
	if(validity[(Z-1)*300 + N]!=111111)
	{
		cout<<"The data of this nucleus is not provided!!!"<<endl;
		cout<<"Error! Z = "<<Z<<"? A = "<<A<<"?"<<endl;
		return 888888;
	}
	if(arraySP[(Z-1)*300 + N]==888888)
	{
		cout<<"SP data of this nucleus is not provided!!!"<<endl;
		cout<<"Warning! for Z = "<<Z<<", A = "<<A<<"."<<endl;
	}
	return arraySP[(Z-1)*300 + N];
}

double NuclearData::getS2N(int Z, int A)
{
	int N = A-Z;
	if(validity[(Z-1)*300 + N]!=111111)
	{
		cout<<"The data of this nucleus is not provided!!!"<<endl;
		cout<<"Error! Z = "<<Z<<"? A = "<<A<<"?"<<endl;
		return 888888;
	}
	if(arrayS2N[(Z-1)*300 + N]==888888)
	{
		cout<<"S2N data of this nucleus is not provided!!!"<<endl;
		cout<<"Warning! for Z = "<<Z<<", A = "<<A<<"."<<endl;
	}
	return arrayS2N[(Z-1)*300 + N];
}

double NuclearData::getS2P(int Z, int A)
{
	int N = A-Z;
	if(validity[(Z-1)*300 + N]!=111111)
	{
		cout<<"The data of this nucleus is not provided!!!"<<endl;
		cout<<"Error! Z = "<<Z<<"? A = "<<A<<"?"<<endl;
		return 888888;
	}
	if(arrayS2P[(Z-1)*300 + N]==888888)
	{
		cout<<"S2P data of this nucleus is not provided!!!"<<endl;
		cout<<"Warning! for Z = "<<Z<<", A = "<<A<<"."<<endl;
	}
	return arrayS2P[(Z-1)*300 + N];
}

double NuclearData::getQAlpha(int Z, int A)
{
	int N = A-Z;
	if(validity[(Z-1)*300 + N]!=111111)
	{
		cout<<"The data of this nucleus is not provided!!!"<<endl;
		cout<<"Error! Z = "<<Z<<"? A = "<<A<<"?"<<endl;
		return 888888;
	}
	if(arrayQAlpha[(Z-1)*300 + N]==888888)
	{
		cout<<"QAlpha data of this nucleus is not provided!!!"<<endl;
		cout<<"Warning! for Z = "<<Z<<", A = "<<A<<"."<<endl;
	}
	return arrayQAlpha[(Z-1)*300 + N];
}

double NuclearData::getQBetaMinus(int Z, int A)
{
	int N = A-Z;
	if(validity[(Z-1)*300 + N]!=111111)
	{
		cout<<"The data of this nucleus is not provided!!!"<<endl;
		cout<<"Error! Z = "<<Z<<"? A = "<<A<<"?"<<endl;
		return 888888;
	}
	if(arrayQBetaMinus[(Z-1)*300 + N]==888888)
	{
		cout<<"QBetaMinus data of this nucleus is not provided!!!"<<endl;
		cout<<"Warning! for Z = "<<Z<<", A = "<<A<<"."<<endl;
	}
	return arrayQBetaMinus[(Z-1)*300 + N];
}

double NuclearData::getQBetaPlus(int Z, int A)
{
	int N = A-Z;
	if(validity[(Z-1)*300 + N]!=111111)
	{
		cout<<"The data of this nucleus is not provided!!!"<<endl;
		cout<<"Error! Z = "<<Z<<"? A = "<<A<<"?"<<endl;
		return 888888;
	}
	if(arrayQBetaPlus[(Z-1)*300 + N]==888888)
	{
		cout<<"QBetaPlus data of this nucleus is not provided!!!"<<endl;
		cout<<"Warning! for Z = "<<Z<<", A = "<<A<<"."<<endl;
	}
	return arrayQBetaPlus[(Z-1)*300 + N];
}

double NuclearData::getQBetaEC(int Z, int A)
{
	int N = A-Z;
	if(validity[(Z-1)*300 + N]!=111111)
	{
		cout<<"The data of this nucleus is not provided!!!"<<endl;
		cout<<"Error! Z = "<<Z<<"? A = "<<A<<"?"<<endl;
		return 888888;
	}
	if(arrayQBetaEC[(Z-1)*300 + N]==888888)
	{
		cout<<"QBetaEC data of this nucleus is not provided!!!"<<endl;
		cout<<"Warning! for Z = "<<Z<<", A = "<<A<<"."<<endl;
	}
	return arrayQBetaEC[(Z-1)*300 + N];
}

double NuclearData::getDeltaN(int Z, int A)
{
	int N = A-Z;
	if(validity[(Z-1)*300 + N]!=111111)
	{
		cout<<"The data of this nucleus is not provided!!!"<<endl;
		cout<<"Error! Z = "<<Z<<"? A = "<<A<<"?"<<endl;
		return 888888;
	}
	if(arrayDeltaN[(Z-1)*300 + N]==888888)
	{
		cout<<"DeltaN data of this nucleus is not provided!!!"<<endl;
		cout<<"Warning! for Z = "<<Z<<", A = "<<A<<"."<<endl;
	}
	return arrayDeltaN[(Z-1)*300 + N];
}

double NuclearData::getDeltaP(int Z, int A)
{
	int N = A-Z;
	if(validity[(Z-1)*300 + N]!=111111)
	{
		cout<<"The data of this nucleus is not provided!!!"<<endl;
		cout<<"Error! Z = "<<Z<<"? A = "<<A<<"?"<<endl;
		return 888888;
	}
	if(arrayDeltaP[(Z-1)*300 + N]==888888)
	{
		cout<<"DeltaP data of this nucleus is not provided!!!"<<endl;
		cout<<"Warning! for Z = "<<Z<<", A = "<<A<<"."<<endl;
	}
	return arrayDeltaP[(Z-1)*300 + N];
}

void NuclearData::printAll(int Z, int A)
{
	cout<<"Nucleus of Z = "<<Z<<", N = "<<(A-Z)<<", A = "<<A<<endl;
        cout<<"BCal.:\t"<<getBCal(Z,A)<<endl;
        cout<<"BTh.:\t"<<getBTh(Z,A)<<endl;
        cout<<"STotal.:\t"<<getSTotal(Z,A)<<endl;
        cout<<"BExp.:\t"<<getBExp(Z,A)<<endl;
        cout<<"SN.:\t"<<getSN(Z,A)<<endl;
        cout<<"SP.:\t"<<getSP(Z,A)<<endl;
        cout<<"S2N.:\t"<<getS2N(Z,A)<<endl;
        cout<<"S2P.:\t"<<getS2P(Z,A)<<endl;
        cout<<"QAlpha.:\t"<<getQAlpha(Z,A)<<endl;
        cout<<"QBetaMinus.:\t"<<getQBetaMinus(Z,A)<<endl;
        cout<<"QBetaPlus.:\t"<<getQBetaPlus(Z,A)<<endl;
        cout<<"QBetaEC.:\t"<<getQBetaEC(Z,A)<<endl;
        cout<<"DeltaN.:\t"<<getDeltaN(Z,A)<<endl;
        cout<<"DeltaP.:\t"<<getDeltaP(Z,A)<<endl;	
}

NuclearData::~NuclearData(void){}
