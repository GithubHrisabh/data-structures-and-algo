#include<stdio.h>
using namespace std;
#include<bits/stdc++.h>
int
chocolate_distribution (int a[], int n, int m)
{
  int i, diff;
  sort (a, a + n);
  int min = a[m - 1] - a[0];

  for (i = m; i < n; i++)
    {
      int diff = a[i] - a[i - m + 1];
      if (diff < min)
	min = diff;

    }
  return min;


}

int
main ()
{
  int i, m, n;
  cout << "enter n and m";
  cin >> n >> m;
  int a[n];
  cout << "enter array elements";
  for (i = 0; i < n; i++)
    cin >> a[i];
  int call = chocolate_distribution (a, n, m);
  cout << " " << "the min diff is " << call;
}
