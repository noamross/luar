#include <Rcpp.h>
#include <stdio.h>
#include <string.h>
#include "lua-5.3.4/src/lua.hpp"


using namespace Rcpp;

// This is a simple example of exporting a C++ function to R. You can
// source this function into an R session using the Rcpp::sourceCpp
// function (or via the Source button on the editor toolbar). Learn
// more about Rcpp at:
//
//   http://www.rcpp.org/
//   http://adv-r.had.co.nz/Rcpp.html
//   http://gallery.rcpp.org/
//

//' @export
// [[Rcpp::export]]
int luatest() {
  lua_State *state = luaL_newstate();
  lua_close(state);
  return 0;

}


// You can include R code blocks in C++ files processed with sourceCpp
// (useful for testing and development). The R code will be automatically
// run after the compilation.
//

