#include "binomial.h"

Binomial::Binomial(float a, int h, float b, int i) {
  c[0] = a;
  c[1] = b;
  if (h < 1){
    h = 1;
  }
  p[0] = h;
  if (i < 1){
    i = 1;
  }
  p[1] = i;

}
float Binomial::GetCoefficient(int a){
  if (a < 1 || a > 2){
  return -1.0;
  }
  return c[a-1];
}
int Binomial::GetPower(int b){
  if (b < 1 || b > 2){
  return -1;
  }
  return p[b-1];
}
int Binomial::SetPower(int h, int i){
  if (h < 1 || h > 2){
  return -1;
  }
  if (i < 0){
    i = 1;
  }
  p[h-1] = i;
  return 0;
}
int Binomial::Add(Binomial& bit){
  if (p[0] != bit.GetPower(1)){
    return -1; 
  }
  if (p[1] != bit.GetPower(2)){
    return -1; 
  }
c[0] = c[0] + bit.GetCoefficient(1);
c[1] = c[1] + bit.GetCoefficient(2);
return 0;
}
void Binomial::Multiply(float x){
  c[0] = c[0] * x;
  c[1] = c[1] * x;
}
void Binomial::Multiply(float x, int y){
  c[0] = c[0] * x;
  p[0] = p[0] + y;
  c[1] = c[1] * x;
  p[1] = p[1] + y; 
}
