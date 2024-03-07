#include <iostream>
using namespace std;

int climbingStairs(int n) {
  int prevStep = 0;
  int currentStep = 1;
  for (int i = 0; i < n; i++) {
    int nextStep = prevStep + currentStep;
    prevStep = currentStep;
    currentStep = nextStep;
  }
  return currentStep;
}

int main() {
  int n = 4;
  cout << climbingStairs(n);
  return 0;
}
