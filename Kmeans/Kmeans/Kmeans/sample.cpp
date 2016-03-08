#include<iostream>
#include<string>
#include"sample.h"
using namespace std;

sample::sample() {
	cluster = -1;
	featureNumber = 0;
}
sample::sample(int n,float value[], string name[]) {
	featureNumber = n;
	for (int i = 0; i < n; i++) {
		featureValue[i] = value[i];
		featureName[i] = name[i];
	}
}
void sample::printInfo() {
	for (int i = 0; i < featureNumber; i++)
	{
		cout << featureName[i] << " : " << featureValue[i] << endl;
	}
}
void sample::set(int n, float value[], string name[]) {
	featureNumber = n;
	for (int i = 0; i < n; i++) {
		featureValue[i] = value[i];
		featureName[i] = name[i];
	}
}