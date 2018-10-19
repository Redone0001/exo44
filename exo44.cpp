#include <iostream>
#include <vector>
using namespace std;
vector <int> nouvelleLigne(vector <int>);

int main(){
	vector <int> ligne;
	int dim;
	cin >> dim;
	for (int i= 0; i<dim;i++){
	ligne = nouvelleLigne(ligne);
	cout <<i+1 << ") ";
		for (auto x : ligne){
			cout<< x <<", ";
		}
	cout <<endl;
	}
	

}

vector <int> nouvelleLigne(vector <int> ligne){
	vector <int> prevLine;
	prevLine=ligne;
	ligne.push_back(1);
	if (ligne.size() >2){
		for (unsigned int i =1; i != ligne.size() -1; i ++){
			ligne.at(i)= prevLine.at(i-1)+prevLine.at(i);
		}
	}
	return ligne;

}
