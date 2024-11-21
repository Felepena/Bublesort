#include <stdio.h>


    int main() {
        printf("Bubble sort: ");
        int unsortedarr[10] = {2,5,1,4,6,8,3,7,9,0};
        int size = sizeof(unsortedarr) / sizeof(unsortedarr[0]);
        bool ischanged = true;

        while(ischanged) {
            ischanged = false;
            for (int i = 0; i < size - 1; i++) {
                if (unsortedarr[i] > unsortedarr[i + 1]) {
                    int vetsicislo = unsortedarr[i];
                    unsortedarr[i] = unsortedarr[i + 1];
                    unsortedarr[i + 1] = vetsicislo;

                    ischanged = true;
                }
            }
        }

        for (int i = 0; i < size; ++i) {
            printf("%d ", unsortedarr[i]);
        }

        return 0;
    }
#include <stdio.h>

int main() {
        printf("Selection sort: ");
        int INeedToSortThis[10] = {1, 5, 2, 0, 40, 5, 8, 7, 4, -1};
        int size = sizeof(INeedToSortThis) / sizeof(INeedToSortThis[0]);

        for (int i = 0; i < size - 1; i++) {
            int smolNum = i;
            for (int j = i + 1; j < size; j++) {
                if (INeedToSortThis[j] < INeedToSortThis[smolNum]) {
                    smolNum = j;
                }
            }

            if (smolNum != i) {
                int chosen = INeedToSortThis[i];
                INeedToSortThis[i] = INeedToSortThis[smolNum];
                INeedToSortThis[smolNum] = chosen;
            }
        }

        for (int i = 0; i < size; ++i) {
            printf("%d ", INeedToSortThis[i]);
        }

        return 0;
    } 


