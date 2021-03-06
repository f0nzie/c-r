// http://gallery.rcpp.org/articles/a-first-boost-example/

// We can now use the BH package
// [[Rcpp::depends(BH)]]

#include <Rcpp.h>
#include <boost/math/common_factor.hpp>  

using namespace Rcpp;

// [[Rcpp::export]]
int computeGCD(int a, int b) {
    return boost::math::gcd(a, b);
}

// [[Rcpp::export]]
int computeLCM(int a, int b) {
    return boost::math::lcm(a, b);
}


// Use the embedded boot library
//

/*** R
a <- 6
b <- 15
cat( c(computeGCD(a,b), computeLCM(a,b)), "\n")
*/


/*** R
a <- 96
b <- 484
cat( c(computeGCD(a,b), computeLCM(a,b)), "\n")


*/

