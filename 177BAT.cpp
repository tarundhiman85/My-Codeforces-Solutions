#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	string S, T;
	cin >> S >> T;
	//Initialize ans with a temporal value.
	//This value should be large enough; otherwise you will get wrong answer
	//Make sure that the value will lead to the correct answer.
	int ans = T.size();
	//Brute force through all initial position in S
	for (int start = 0; start <= S.size() - T.size(); start++)
	{
		int diff = 0;
		for (int i = 0; i < T.size(); i++)
		{
			if (T[i] != S[start + i]) {
				diff++;
			}
		}
		ans = min(ans, diff);
	}
	cout << ans << endl;
}