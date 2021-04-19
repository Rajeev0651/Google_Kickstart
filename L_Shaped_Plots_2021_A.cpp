#include <bits/stdc++.h>
using namespace std;

int main()
{
  int T,Q=1;
  cin >> T;
  while (T--)
  {
    int R, C;
    cin >> R >> C;
    int M[R][C];
    for (int i = 0; i < R; i++)
    {
      for (int j = 0; j < C; j++)
      {
        cin >> M[i][j];
      }
    }
    int right[R][C], left[R][C], top[R][C], down[R][C];
    // Left
    for (int i = 0; i < R; i++)
    {
      for (int j = 0; j < C; j++)
      {
        if (j == 0)
        {
          if (M[i][j] == 1)
            left[i][j] = 1;
          else
            left[i][j] = 0;
        }
        else
        {
          if (M[i][j] == 1)
          {
            if (M[i][j - 1] == 1)
            {
              left[i][j] = left[i][j - 1] + 1;
            }
            else
            {
              left[i][j] = 1;
            }
          }
          else
          {
            left[i][j] = 0;
          }
        }
      }
    }
    //Right
    for (int i = 0; i < R; i++)
    {
      for (int j = C - 1; j >= 0; j--)
      {
        if (j == C - 1)
        {
          if (M[i][j] == 1)
            right[i][j] = 1;
          else
            right[i][j] = 0;
        }
        else
        {
          if (M[i][j] == 1)
          {
            if (M[i][j + 1] == 1)
            {
              right[i][j] = right[i][j + 1] + 1;
            }
            else
            {
              right[i][j] = 1;
            }
          }
          else
          {
            right[i][j] = 0;
          }
        }
      }
    }
    //Top
    for (int j = 0; j < C; j++)
    {
      for (int i = 0; i < R; i++)
      {
        if (i == 0)
        {
          if (M[i][j] == 1)
            top[i][j] = 1;
          else
            top[i][j] = 0;
        }
        else
        {
          if (M[i][j] == 1)
          {
            if (M[i - 1][j] == 1)
            {
              top[i][j] = top[i - 1][j] + 1;
            }
            else
            {
              top[i][j] = 1;
            }
          }
          else
          {
            top[i][j] = 0;
          }
        }
      }
    }
    //Bottom
    for (int j = 0; j < C; j++)
    {
      for (int i = R - 1; i >= 0; i--)
      {
        if (i == R - 1)
        {
          if (M[i][j] == 1)
            down[i][j] = 1;
          else
            down[i][j] = 0;
        }
        else
        {
          if (M[i][j] == 1)
          {
            if (M[i + 1][j] == 1)
            {
              down[i][j] = down[i + 1][j] + 1;
            }
            else
            {
              down[i][j] = 1;
            }
          }
          else
          {
            down[i][j] = 0;
          }
        }
      }
    }
    int ans = 0;
    int max_val, min_val, op1, op2,r,t;
    for (int i = 0; i < R; i++)
    {
      for (int j = 0; j < C; j++)
      {
        //top right
        t = top[i][j];
        r = right[i][j];
        if (t >= 2 && r >= 2)
        {
          op1 = min(t/2,r)-1;
          op2 = min(t,r/2)-1;
          ans+=op1+op2;
        }
        //top left
        t = top[i][j];
        r = left[i][j];
         if (t >= 2 && r >= 2)
        {
          op1 = min(t/2,r)-1;
          op2 = min(t,r/2)-1;
          ans+=op1+op2;
        }
        //down right
        t = down[i][j];
        r = right[i][j];
         if (t >= 2 && r >= 2)
        {
          op1 = min(t/2,r)-1;
          op2 = min(t,r/2)-1;
          ans+=op1+op2;
        }
        //down left
        t = down[i][j];
        r = left[i][j];
         if (t >= 2 && r >= 2)
        {
          op1 = min(t/2,r)-1;
          op2 = min(t,r/2)-1;
          ans+=op1+op2;
        }
      }
    }
    cout << "Case #" << Q++ << ": " << ans << "\n";
  }
  return 0;
}