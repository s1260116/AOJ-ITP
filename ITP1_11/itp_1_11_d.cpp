#include <bits/stdc++.h>
using namespace std;

class Dice{
public:
	int d[6];
	void MoveN();
	void MoveS();
	void MoveE();
	void MoveW();
	void Shift();
};

void Dice::MoveN(){
	swap(d[0],d[1]);
	swap(d[1],d[4]);
	swap(d[1],d[5]);
}
void Dice::MoveS(){
	swap(d[0],d[1]);
	swap(d[0],d[4]);
	swap(d[4],d[5]);
}
void Dice::MoveE(){
	swap(d[0],d[3]);
	swap(d[2],d[3]);
	swap(d[3],d[5]);
}
void Dice::MoveW(){
	swap(d[0],d[2]);
	swap(d[2],d[3]);
	swap(d[2],d[5]);
}
void Dice::Shift(){
	swap(d[1],d[2]);
	swap(d[3],d[4]);
	swap(d[1],d[4]);
}
int main(){
	int n;
	cin>>n;
	Dice dc[100];
	bool ans=true;
	for(int i=0;i<n;i++){
		for(int j=0;j<6;j++) cin>>dc[i].d[j];
	}
	for(int x=0;x<n;x++){
		for(int y=0;y<n;y++){
			if(x==y) continue;
			for(int i=0;i<2;i++){
				for(int j=0;j<4;j++){
					dc[y].MoveN();
					for(int k=0;k<4;k++){
						dc[y].Shift();
						bool f=true;
						for(int l=0;l<6;l++){
							if(dc[x].d[l]!=dc[y].d[l]) f=false;
						}
						if(f) ans=false;
					}
				}
				dc[y].MoveE();
			}
		}
	}
	if(ans) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	return 0;
}
