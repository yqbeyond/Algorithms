/* Problem ID: 2506
 * Author: 1307010418
 * Memory: 608K
 * Time: 0MS
 */

    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    void Add(char *source1, char *source2, char *result)
    {
        int len1 = strlen(source1);
        int len2 = strlen(source2);
        int len = len1 >= len2 ? len1 : len2;
        int i = len1 - 1, j = len2 - 1, k = 0;
        char *temp = (char *)malloc(sizeof(char) * (len + 2));
        char x, y, z;
        int carryBit = 0;

        while (i >= 0 || j >= 0)
        {
            if (i < 0) x = &#39;0&#39;;
            else x = source1[i];

            if (j < 0) y = &#39;0&#39;;
            else y = source2[j];

            z = x + y - &#39;0&#39; - &#39;0&#39; + carryBit;
            temp[k++] = z % 10 + &#39;0&#39;;
            carryBit = z / 10;

            i--;
            j--;
        }

        while (carryBit)
        {
            temp[k++] = carryBit % 10 + &#39;0&#39;;
            carryBit /= 10;
        }

        for (--k, i = 0; k >= 0; k--, i++)
        {
            result[i] = temp[k];
        }
        result[i] = &#39;\0&#39;;

        free(temp);// 释放内存
    }

    int main()
    {
        int t,i;
        char temp[1000];
        char source[250][1000];
        source[0][0]=&#39;1&#39;;
        source[1][0]=&#39;3&#39;;

        for(i=2;i<250;i++)
        {
            Add(source[i-2], source[i-1], source[i]);
            strcpy(temp,source[i]);
            Add(source[i-2], temp, source[i]);
        }

        while(scanf("%d",&t)!=EOF)
        {
            if(t==0)
                printf("1\n");
            else
                printf("%s\n", source[t-1]);
        }
        return 0;
    }
