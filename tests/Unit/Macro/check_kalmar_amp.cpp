// RUN: %cxxamp %s -o %t.out && %t.out

#ifndef __KALMAR_AMP__
#error __KALMAR_AMP__ is not defined!
#endif

// __KALMAR_HC__ and __KALMAR_AMP__ are mutually exclusive
#ifdef __KALMAR_HC__
#error __KALMAR_HC__ is defined!
#endif

int main() {
  return 0;
}
