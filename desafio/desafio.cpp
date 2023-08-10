#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	
	int esc, game;
	
	cout << "escolha uma das opções: " << endl;
	cout << "[1] - tesoura" << endl;
	cout << "[2] - papel" << endl;
	cout << "[3] - pedra" << endl;
	cout << "[4] - largarto" << endl;
	cout << "[5] - spok" << endl;
	cin >> esc;
	
	game = 1+rand()%5;
	
	if(game == esc){
		cout << "empate" << endl;
	}else if(game==1 && esc==2){
		cout << "perdeu" << endl;
	}else if(game==1 && esc==3){
		cout << "ganhou" << endl;
	}else if(game==1 && esc==4){
		cout << "perdeu" << endl;
	}else if(game==1 && esc==5){
		cout << "ganhou" << endl;
	}else if(game==2 && esc==1){
	 	cout << "ganhou" << endl;
	 }else if(game==2 && esc==3){
	 	cout << "perdeu" << endl;
	 }else if(game==2 && esc==4){
	 	cout << "ganhou" << endl;
	 }else if(game==2 && esc==5){
	 	cout << "perdeu" << endl;
	 }else if(game==3 && esc==1){
	 	cout << "perdeu" << endl;
	 }else if(game==3 && esc==2){
	 	cout << "ganhou" << endl;
	 }else if(game==3 && esc==4){
	 	cout << "perdeu" << endl;
	 }else if(game==3 && esc==5){
	 	cout << "ganhou" << endl;
	 }else if(game==4 && esc==1){
	 	cout << "ganhou" << endl;
	 }else if(game==4 && esc==2){
	 	cout << "perdeu" << endl;
	 }else if(game==4 && esc==3){
	 	cout << "ganhou" << endl;
	 }else if(game==4 && esc==5){
	 	cout << "perdeu" << endl;
	 }else if(game==5 && esc==1){
	 	cout << "perdeu" << endl;
	 }else if(game==5 && esc==2){
	 	cout << "ganhou" << endl;
	 }else if(game==5 && esc==3){
	 	cout << "perdeu" << endl;
	 }else if(game==5 && esc==4){
	 	cout << "ganhou" << endl;
	 }
	
	
	return 0;
}
