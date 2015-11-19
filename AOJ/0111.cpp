#include <iostream>
#include <map>
 
using namespace std;
 
map<string,char> n;
map<char,string> m;
 
void init1(){
    n["101"] = ' ';
    n["000000"] = '\'';
    n["000011"] = ',';
    n["10010001"] = '-';
    n["010001"] = '.';
    n["000001"] = '?';
    n["100101"] = 'A';
    n["10011010"] = 'B';
    n["0101"] = 'C';
    n["0001"] = 'D';
    n["110"] = 'E';
    n["01001"] = 'F';
    n["10011011"] = 'G';
    n["010000"] = 'H';
    n["0111"] = 'I';
    n["10011000"] = 'J';
    n["0110"] = 'K';
    n["00100"] = 'L';
    n["10011001"] = 'M';
    n["10011110"] = 'N';
    n["00101"] = 'O';
    n["111"] = 'P'; 
    n["10011111"] = 'Q';
    n["1000"] = 'R';
    n["00110"] = 'S'; 
    n["00111"] = 'T';
    n["10011100"] = 'U';
    n["10011101"] = 'V';
    n["000010"] = 'W';
    n["10010010"] = 'X';
    n["10010011"] = 'Y';
    n["10010000"] = 'Z';
}
 
void init2(){
    m['A'] = "00000";
    m['B'] = "00001";
    m['C'] = "00010";
    m['D'] = "00011";
    m['E'] = "00100";
    m['F'] = "00101";
    m['G'] = "00110";
    m['H'] = "00111";
    m['I'] = "01000";
    m['J'] = "01001";
    m['K'] = "01010";
    m['L'] = "01011";
    m['M'] = "01100";
    m['N'] = "01101";
    m['O'] = "01110";
    m['P'] = "01111";
    m['Q'] = "10000";
    m['R'] = "10001";
    m['S'] = "10010";
    m['T'] = "10011";
    m['U'] = "10100";
    m['V'] = "10101";
    m['W'] = "10110";
    m['X'] = "10111";
    m['Y'] = "11000";
    m['Z'] = "11001";
    m[' '] = "11010";
    m['.'] = "11011";
    m[','] = "11100";
    m['-'] = "11101";
    m['\''] = "11110";
    m['?'] = "11111";
}
 
int main(){
    string str;
 
    init1();
    init2();
 
    while(getline(cin,str)){
	string s = "";
	for(int i = 0 ; i < (int)str.size() ; i++){
	    s += m[str[i]];
	}
     
	string ans = "";
	for(int i = 0 ; i < (int)s.size() ; i++){
	    for(int j = 3 ; j <= 8 ; j++){
		string ss = s.substr(i,j);
		if(n[ss]){
		    ans += n[ss];
		    i += j;
		    i--;
		    break;
		}
	    }
	}
     
	cout << ans << endl;
    } 
    return 0;
}
