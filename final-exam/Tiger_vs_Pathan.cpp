#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int testCase;
    scanf("%d", &testCase);
    int numberOfRounds;

    for (int i = 0; i < testCase; i++)
    {
        scanf("%d", &numberOfRounds);

        char winsTrack[numberOfRounds];
        scanf("%s", winsTrack);

        int tiger = 0, pathan = 0;

        for (int j = 0; j < numberOfRounds; j++)
            if (winsTrack[j] == 'T')
                tiger++;
            else 
                pathan++;
        printf("%s\n", tiger > pathan ? "Tiger" : pathan > tiger ? "Pathaan" : "Draw");
    }

    return 0;
}
