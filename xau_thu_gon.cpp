//xau thu gon
#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cout << "hay nhap s: ";
	getline(cin,s);
// xoa cac khoang trang thua trong xau
	stringstream ss(s);
	string word;
	string tam="";
	while (ss >> word){
		tam+=word;
	}
	s=tam;
	// xau thu gon : A2B5
	// xau nguon : AABBBBB
	string xn="";
	/*for (int i=0;i<s.size();i++){
		if (isdigit(s[i])){
			int num=s[i]-48;
			for (int j=1;j<num;j++){
				xn+=s[i-1];
			}
		}else{
			xn+=s[i];
		}
	}*/
	// xau thu gon : A12B5
	// xau nguon : AAAAAAAAAAAABBBBB
	char lastchar;
	for(int i=0;i<s.size();i++){
		if (isdigit(s[i])){
			int num=0;
			while(i<s.size() && isdigit(s[i])){
				num =num*10+(s[i]-48);
				i++;				
			}
			for(int j=1;j<num;j++){
				xn+=lastchar;
			}
			i--;
		}else{
			xn+=s[i];
			lastchar=s[i];
		}
	}
	cout << xn;
	return 0;
}
