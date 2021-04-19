//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)
bool isPrime(long long int n)
{
  if (n <= 1)
    return false;
  if (n <= 3)
    return true;
  if (n % 2 == 0 || n % 3 == 0)
    return false;

  for (long long int i = 5; i * i <= n; i = i + 6)
    if (n % i == 0 || n % (i + 2) == 0)
      return false;
  return true;
}
void solve(int r)
{
  long long int N;
  cin >> N;
  double k = N;
  long long int maxp = ceil(sqrt(k));
  long long int a, b;
  for (long long int i = maxp; i <= maxp + 1000000000000000000; i++)
  {
    if (isPrime(i))
    {
      maxp = i;
      a = i;
      break;
    }
  }
  long long int ans;
  while (1)
  {
    for (long long int i = a; i >= 3; i--)
    {
      if (isPrime(i))
      {
        a = i;
        break;
      }
    }
    for (long long int i = a - 1; i >= 2; i--)
    {
      if (isPrime(i))
      {
        b = i;
        break;
      }
    }
    if (a * b <= N)
    {
      ans = a * b;
      break;
    }
    else
    {
      a = b;
      b--;
    }
  }
  cout << "Case #" << r << ": " << ans << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int T;
  cin >> T;
  int k = 1;
  while (T--)
  {
    solve(k++);
  }
  return 0;
}