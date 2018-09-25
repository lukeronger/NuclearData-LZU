#ifndef NuclearData_
#define NuclearData_ 1

class NuclearData
{
public:
	NuclearData();
	double getBCal(int Z, int A);
	double getBTh(int Z, int A);
	double getSTotal(int Z, int A);
	double getBExp(int Z, int A);
	double getSN(int Z, int A);
	double getSP(int Z, int A);
	double getS2N(int Z, int A);
	double getS2P(int Z, int A);
	double getQAlpha(int Z, int A);
	double getQBetaMinus(int Z, int A);
	double getQBetaPlus(int Z, int A);
	double getQBetaEC(int Z, int A);
	double getDeltaN(int Z, int A);
	double getDeltaP(int Z, int A);
	void   printAll(int Z, int A);
	virtual ~NuclearData(void);

private:
	int    *validity;
	double *arrayBCal;
	double *arrayBTh;
	double *arraySTotal;
	double *arrayBExp;
	double *arraySN;
	double *arraySP;
	double *arrayS2N;
	double *arrayS2P;
	double *arrayQAlpha;
	double *arrayQBetaMinus;
	double *arrayQBetaPlus;
	double *arrayQBetaEC;
	double *arrayDeltaN;
	double *arrayDeltaP;
};

#endif
