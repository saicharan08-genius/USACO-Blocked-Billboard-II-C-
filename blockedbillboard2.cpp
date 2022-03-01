#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream fin("billboard.in");
	ofstream fout("billboard.out");
    int lawnmowernbillboardx1 , lawnmowernbillboardy1 , lawnmowernbillboardx2 , lawnmowernbillboardy2;
    fin >> lawnmowernbillboardx1 >> lawnmowernbillboardy1 >> lawnmowernbillboardx2 >> lawnmowernbillboardy2;
    int cowfeedbillboardx1 , cowfeedbillboardy1 , cowfeedbillboardx2 , cowfeedbillboardy2;
    fin >> cowfeedbillboardx1 >> cowfeedbillboardy1 >> cowfeedbillboardx2 >> cowfeedbillboardy2;
    int ans;
    if(lawnmowernbillboardx1>=cowfeedbillboardx1 && lawnmowernbillboardx1<=cowfeedbillboardx2 && lawnmowernbillboardy1>=cowfeedbillboardy1 && lawnmowernbillboardy1<=cowfeedbillboardy2)
    {
        ans = (abs(lawnmowernbillboardx2-cowfeedbillboardx2))*(abs(lawnmowernbillboardy2-lawnmowernbillboardy1));
        fout << ans;
    }
    else if(lawnmowernbillboardx2>=cowfeedbillboardx1 && lawnmowernbillboardx2<=cowfeedbillboardx2 && lawnmowernbillboardy2>=cowfeedbillboardy1 && lawnmowernbillboardy2<=cowfeedbillboardy2)
    {
        ans = (abs(cowfeedbillboardy1-lawnmowernbillboardy1))*(abs(lawnmowernbillboardx2-lawnmowernbillboardx1));
        fout << ans;
    }
    else if(lawnmowernbillboardx2>=cowfeedbillboardx1 && lawnmowernbillboardx2<=cowfeedbillboardx2 && lawnmowernbillboardy2<=cowfeedbillboardy2 && lawnmowernbillboardy2>=cowfeedbillboardy1)
    {
        ans = (abs(cowfeedbillboardx1-lawnmowernbillboardx1))*(abs(lawnmowernbillboardy1-lawnmowernbillboardy2));
        fout << ans;
    }
    else if(lawnmowernbillboardx1==cowfeedbillboardx1 && lawnmowernbillboardx2==cowfeedbillboardx2 && lawnmowernbillboardy1==cowfeedbillboardy1 && lawnmowernbillboardy2==cowfeedbillboardy2)
    {
        fout << 0;
    }
    else if(lawnmowernbillboardx1>=cowfeedbillboardx1 && lawnmowernbillboardx1<=cowfeedbillboardx2 && lawnmowernbillboardy1>=cowfeedbillboardy1 && lawnmowernbillboardy1<=cowfeedbillboardy2)
    {
        ans = (abs(lawnmowernbillboardx1-lawnmowernbillboardx2))*(abs(lawnmowernbillboardy2-cowfeedbillboardy2));
        fout << ans;
    }
    else
    {
        ans = (abs(lawnmowernbillboardx1-lawnmowernbillboardx2))*(abs(lawnmowernbillboardy1-lawnmowernbillboardy2));
        fout << ans;
    }
    
    return 0;
}
