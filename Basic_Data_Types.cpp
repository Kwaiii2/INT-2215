#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  int x ;
  long long y;
  char b;
  float z;
  double t;
  scanf("%d %lld %c %f %lf ", &x, &y, &b, &z, &t);
  printf("%d\n %lld\n %c\n %.3f\n %.9lf ", x, y, b, z, t);
    return 0;
}
