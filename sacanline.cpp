#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    int n = 5;
    int i, j, k, dy, dx, y, temp;

    int a[20][2] = {
        {320, 100},
        {450, 200},
        {400, 350},
        {240, 350},
        {190, 200}
    };

    int xi[20];
    float slope[20];

    /* Close the polygon */
    a[n][0] = a[0][0];
    a[n][1] = a[0][1];

    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    /* Draw Pentagon */
    for(i = 0; i < n; i++)
    {
        line(a[i][0], a[i][1], a[i + 1][0], a[i + 1][1]);
    }

    outtextxy(10, 10, "5-Sided Polygon Scan-Line Filling");
    getch();

    /* Calculate Slopes */
    for(i = 0; i < n; i++)
    {
        dy = a[i + 1][1] - a[i][1];
        dx = a[i + 1][0] - a[i][0];

        if(dy == 0)
            slope[i] = 1.0;
        else if(dx == 0)
            slope[i] = 0.0;
        else
            slope[i] = (float)dx / dy;
    }

    /* Scan Line Fill */
    for(y = 0; y < 480; y++)
    {
        k = 0;

        for(i = 0; i < n; i++)
        {
            if(((a[i][1] <= y) && (a[i + 1][1] > y)) ||
               ((a[i][1] > y) && (a[i + 1][1] <= y)))
            {
                xi[k] = (int)(a[i][0] +
                        slope[i] * (y - a[i][1]));
                k++;
            }
        }

        /* Sort Intersection Points */
        for(j = 0; j < k - 1; j++)
        {
            for(i = 0; i < k - 1 - j; i++)
            {
                if(xi[i] > xi[i + 1])
                {
                    temp = xi[i];
                    xi[i] = xi[i + 1];
                    xi[i + 1] = temp;
                }
            }
        }

        /* Draw Fill Lines */
        for(i = 0; i < k; i += 2)
        {
            line(xi[i], y, xi[i + 1], y);
        }
    }

    getch();
    closegraph();
    return 0;
}