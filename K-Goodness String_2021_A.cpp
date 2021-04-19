#include <bits/stdc++.h>
using namespace std;
int main()
{
  int T, Q = 1;
  cin >> T;
  while (T--)
  {
    int N, K;
    cin >> N >> K;
    char S[N];
    cin >> S;
    int len = strlen(S);
    int match = 0;
    for (int i = 0; i <= (len / 2) - 1; i++)
    {
      if (S[i] != S[len - i -1])
      {
        match++;
      }
    }
    int ans = abs(K - match);
    cout << "Case #" << Q++ << ": " << ans << "\n";
  }
  return 0;
}