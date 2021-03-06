#ifndef	LPT_GAUSS_LEGENDRE_H_
#define	LPT_GAUSS_LEGENDRE_H_

#include <vector>
#include "utils.hpp"

// Class to hold the abscissae and weights for G-L integration.
// Form:  \int_{-1}^{+1} dx f(x) = \sum w_j f(x_j)
class	GaussLegendre {
public:
    GaussLegendre() {}
    GaussLegendre(const int N) {set(N);}
    void set(const int NN);
public:
    std::vector<double> x,w;
    int N;
};
#endif
