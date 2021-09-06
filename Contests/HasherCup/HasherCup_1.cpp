#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<long long int> ans;
    while (t--)
    {
        string s;
        cin >> s;

        int *map = new int[26];
        for (int i = 0; i < 26; i++)
        {
            map[i] = 0;
        }
        for (int i = 0; i < s.size(); i++)
        {
            int ind = s[i] - 65;
            // cout << ind;
            map[ind]++;
        }

        int count = 0;
        int num_vowels = 0, num_consonants = 0, time_1 = 0;
        int vowel_max, consonant_max;

        int max_1 = 0, max_2 = 0;

        num_vowels = map[0] + map[4] + map[8] + map[14] + map[20];
        for (int i = 0; i < 26; i++)
        {
            num_consonants += map[i];
            if (map[i] > 0)
            {
                count += 1;
            }

            if (i == 0 || i == 4 || i == 8 || i == 14 || i == 20)
            {
                if (map[i] > max_1)
                {
                    max_1 = map[i];
                    vowel_max = i;
                }
            }
            else
            {
                if (map[i] > max_2)
                {
                    max_2 = map[i];
                    consonant_max = i;
                }
            }
        }
        num_consonants -= num_vowels;

        if (count == 1 || count == 0)
        {
            time_1 = 0;
        }
        else if (num_vowels > num_consonants)
        {
            for (int i = 0; i < 26; i++)
            {
                if (i == 0 || i == 4 || i == 8 || i == 14 || i == 20)
                {
                    time_1 += 1 * map[i];
                }
                else
                {
                    if (i == consonant_max)
                    {
                        continue;
                    }
                    else
                    {
                        time_1 += 2 * map[i];
                    }
                }
            }
        }
        else if (num_consonants > num_vowels)
        {
            for (int i = 0; i < 26; i++)
            {
                if (i == 0 || i == 4 || i == 8 || i == 14 || i == 20)
                {
                    if (i == vowel_max)
                    {
                        continue;
                    }
                    time_1 += 2 * map[i];
                }
                else
                {
                    time_1 += 1 * map[i];
                }
            }
        }
        else
        {
            if (max_1 > max_2)
            {
                for (int i = 0; i < 26; i++)
                {
                    if (i == 0 || i == 4 || i == 8 || i == 14 || i == 20)
                    {
                        if (i == vowel_max)
                        {
                            continue;
                        }
                        time_1 += 2 * map[i];
                    }
                    else
                    {
                        time_1 += 1 * map[i];
                    }
                }
            }
            else
            {
                for (int i = 0; i < 26; i++)
                {
                    if (i == 0 || i == 4 || i == 8 || i == 14 || i == 20)
                    {
                        time_1 += 1 * map[i];
                    }
                    else
                    {
                        if (i == consonant_max)
                        {
                            continue;
                        }
                        else
                        {
                            time_1 += 2 * map[i];
                        }
                    }
                }
            }
        }

        ans.push_back(time_1);

        delete[] map;
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << "Case #" << i+1 << ": " << ans[i] << endl;
    }
}