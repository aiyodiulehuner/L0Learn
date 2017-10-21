#ifndef GRID1D_H
#define GRID1D_H
#include "Params.h"
#include "GridParams.h"
#include "FitResult.h"

class Grid1D{
private:
	unsigned int G_ncols;
	Params P;
	const arma::mat * X;
	const arma::vec * y;
	unsigned int p;
	std::vector<FitResult*> G;
	arma::vec Lambdas;
	bool LambdaU;
	unsigned int NnzStopNum;
	std::vector<double> * Xtr;
	double LambdaMinFactor;
	bool Refine;
	bool PartialSort;

public:
	Grid1D(const arma::mat& Xi, const arma::vec& yi, const GridParams& PG);
	std::vector<FitResult*> Fit();
};

#endif