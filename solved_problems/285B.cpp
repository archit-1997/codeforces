/*Petya and Vasya are playing a game. Petya's got n non-transparent glasses, standing in a row. The glasses' positions are indexed with integers from 1 to n from left to right. Note that the positions are indexed but the glasses are not.

First Petya puts a marble under the glass in position s. Then he performs some (possibly zero) shuffling operations. One shuffling operation means moving the glass from the first position to position p1, the glass from the second position to position p2 and so on. That is, a glass goes from position i to position pi. Consider all glasses are moving simultaneously during one shuffling operation. When the glasses are shuffled, the marble doesn't travel from one glass to another: it moves together with the glass it was initially been put in.

After all shuffling operations Petya shows Vasya that the ball has moved to position t. Vasya's task is to say what minimum number of shuffling operations Petya has performed or determine that Petya has made a mistake and the marble could not have got from position s to position t.

Input
The first line contains three integers: n, s, t (1 ≤ n ≤ 105; 1 ≤ s, t ≤ n) — the number of glasses, the ball's initial and final position. The second line contains n space-separated integers: p1, p2, ..., pn (1 ≤ pi ≤ n) — the shuffling operation parameters. It is guaranteed that all pi's are distinct.

Note that s can equal t.

Output
If the marble can move from position s to position t, then print on a single line a non-negative integer — the minimum number of shuffling operations, needed to get the marble to position t. If it is impossible, print number -1.

Examples
inputCopy
4 2 1
2 3 4 1
outputCopy
3
inputCopy
4 3 3
4 1 3 2
outputCopy
0
inputCopy
4 3 4
1 2 3 4
outputCopy
-1
inputCopy
3 1 3
2 1 3
outputCopy
-1
*/

#include <cstdio>

int main()
{
    int n, s, t, p[100000+1];
    scanf("%d%d%d", &n, &s, &t);
    for (int i = 1; i <= n; ++i)
    {
        scanf("%d", &p[i]);
    }
    int step = 0;
    while (s != t && p[s] != 0)
    {
        int temp = p[s];
        p[s] = 0;
        s = temp;
        step += 1;
    }
    printf("%d\n", s == t ? step : -1);
    return 0;
}
