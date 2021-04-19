//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve(int T)
{
  int N, len = 1;
  cin >> N;
  string S;
  cin >> S;
  cout << "Case #" << T << ":"
       << " 1 ";
  for (int i = 1; i < N; i++)
  {
    if (S[i] > S[i - 1])
    {
      cout << len + 1 << " ";
      len++;
    }
    else
    {
      len = 1;
      cout << len << " ";
    }
  }
  cout << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int T, k;
  cin >> T;
  k = 1;
  while (T--)
  {
    solve(k++);
  }
  return 0;
}