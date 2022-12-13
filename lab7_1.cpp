#include<iostream>
#include<string>

using namespace std;

string reverse_text(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string upper_text(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string lower_text(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
	
	string text;

	cout << "Input text: ";
    cin >> text;
	
	cout << "Reversed text: ";
    cout << reverse_text(text);
	
	cout << "\nPalindrome: ";
    
	if(upper_text(text) == reverse_text(upper_text(text)))
	{
		cout << "Yes";
	}
	
	else
	{
		cout << "No";
	}
	
	return 0;
}
