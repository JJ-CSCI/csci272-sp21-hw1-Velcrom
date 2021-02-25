#ifndef BINOMIAL_H
#define BINOMIAL_H
class Binomial {

private:
  float c[2]={1.0,1.0};
  int p[2]={1,1};

public:

  Binomial(float a = 1.0, int h = 1, float b = 1.0, int i = 1);


  float GetCoefficient(int a);
  int GetPower(int b);

  int SetPower(int h, int i);
  int Add(Binomial& bit);

  void Multiply(float x);
  void Multiply(float x, int y);

};
#endif