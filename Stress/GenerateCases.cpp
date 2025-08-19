#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#include "generative.h"

// You can use These Generated Functions to generate whatever Types of Case You Want
// generate_number(l,r) ->l - r | generates numbers in range from [l , r) inclusive
// generate_array(l,r,n) ->[l - r) -> range of values for the array where n is the size of array
// generate_permutation(l,r) -> generates a random perm with element from l,l+1,....r 
// generate_string(l,r,n) -> for eg (0,3) - a,b,c containing string will be generated zero based indexing  (0<=l<=r<26)
// generate_tree(n) -> Generates a random tree with n nodes
// generate_numeric_string(low_limit,upper_limit,size) -> Generate Numeric Strings 
//void generate_alpha_numeric_string(int nl, int nr, int cl, int cr, int size)->can be used to generate alpha-numeric string [nl, nr) numeric range [cl, cr) characters range

int main (int argc, char **argv) {
  /*-----> Replace logic for Generating the testcase <-----*/

  ll t = 1;
  while (t--) {
    int n = generate_number(3,10);
    cout << n << " " << generate_number(2,10) << " " << generate_number(1,n) << "\n";
    generate_array(1, 100, n);
  }
}
