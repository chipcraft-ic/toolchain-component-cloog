/* Generated from ../../../git/cloog/test/./reservoir/lim-lam2.cloog by CLooG 0.14.0-91-g5d3da4b gmp bits in 0.00s. */
for (c2=1;c2<=M;c2++) {
  S1(i = c2) ;
}
if (N >= 2) {
  for (c2=1;c2<=M;c2++) {
    for (c4=2;c4<=N;c4++) {
      S2(i = c2,j = c4) ;
    }
  }
}
if (N >= 2) {
  for (c2=1;c2<=M;c2++) {
    for (c4=1;c4<=N-1;c4++) {
      S3(i = c2,j = c4) ;
    }
  }
}