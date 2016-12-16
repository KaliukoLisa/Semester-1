#include <iostream>
#include "Matrix.h"
#include "String.h"

using namespace std;

void replace(int, char[], char[], char[], char[], char[][N], char[][N]);
int pos(int, char[], char[][N]);

int main()
{
    char str[N];
    cin.getline(str, N);
    char str1[N], str2[N];
    cout << "Enter relaceable word and word to replace" << endl;
    cin.getline(str1,N);
    cin.getline(str2, N);
    char arr[N][N];
    int k;
    obtainArrayOfWords(str, arr, k);
    char arr2[N][N];
    int kk;
    obtainArrayOfNotWords(str, arr2, kk);
    int NN = 2 * N;
    char strr[NN];
    if(pos(k,str1,arr)==-1)
    {
        cout << "No word in string" << endl;
        return 0;
    }
    replace(k, str, str1, str2, strr, arr, arr2);
    cout << strr << endl;
    return 0;
}

int pos(int k ,char str1[], char arr[][N])
{
    int pos = -1;
    int c = 0;
    for(int i = 0; i < k; i++)
    {
        c = 0;
        for(int j = 0; j < StrLen(str1); j++)
            if(arr[i][j]==str1[j])
                c++;
        if(c==StrLen(arr[i]) && c==StrLen(str1))
        {
            pos = i;
            break;
        }
    }
    return pos;
}

void replace(int k, char str[], char str1[], char str2[], char strr[], char arr[][N], char arr2[][N])
{
    for(int i = 0; i < k; i++)
    {
        if(i==pos(k,str1,arr))
        {
            if(IsAlphabet(str[0]))
            {
                catStr(strr, str2);
                catStr(strr, arr2[i]);
                continue;
            }
            else
            {
                catStr(strr, arr2[i]);
                catStr(strr, str2);
                continue;
            }
        }
        if(IsAlphabet(str[0]))
        {   catStr(strr, arr[i]);
            catStr(strr, arr2[i]);
        }
        else
        {   catStr(strr, arr2[i]);
            catStr(strr, arr[i]);
        }
    }
    
}
