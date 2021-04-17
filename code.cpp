
#include<iostream>
#include <cstdlib>
using namespace std;

 
int main()
{
    int n,count=0,max=0;
    cin >> n;
    int* Hights = new int[n];


     
    
    for (int i = 0; i < n; i++)
    {
        cin >> Hights[i];
    }
     
    for (int i = 0; i < n; i++)
    {
        count = 1;

        for (int r = i - 1; r >= 0; r--)
        {
            if (Hights[r] <= Hights[r + 1])count++;
            else
            {
                break;
            }

        }
        for (int l = i + 1; l<n; l++)
        {
            if (Hights[l] <= Hights[l - 1]) 
            {
                count++;
            }
            else
            {
                break;
            }
        }
        if (max < count)
        {
            max = count;
        }
    }
    
    cout << max << endl;
    return 0;
}
