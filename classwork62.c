// #include <stdio.h>

// int main() {
//     int leaderboard[] = {100, 90, 90, 80, 75, 60};
//     int leaderboardSize = sizeof(leaderboard) / sizeof(leaderboard[0]);

//     int playerScores[] = {50, 65, 77, 90, 102};
//     int playerSize = sizeof(playerScores) / sizeof(playerScores[0]);

//     int ranks[playerSize];

//     calculateRanks(leaderboard, leaderboardSize, playerScores, playerSize, ranks);

//     printf("Player Ranks:\n");
//     for (int i = 0; i < playerSize; i++) {
//         printf("Score %d: Rank %d\n", playerScores[i], ranks[i]);
//     }

//     return 0;
// }
// void calculateRanks(int leaderboard[], int leaderboardSize, int playerScores[], int playerSize, int ranks[]) {
//     for (int i = 0; i < playerSize; i++) {
//         int rank = 1;
//         for (int j = 0; j < leaderboardSize; j++) {
//             if (playerScores[i] < leaderboard[j]) {
//                 rank++;
//             } else {
//                 break;
//             }
//         }
//         ranks[i] = rank;
//     }
// }
#include <stdio.h>
void trackPlayerRanks(int ranked[], int n, int player[], int m, int ranks[]){
    for (int i = 0; i < m; i++) {
        int rank = 1;
        for (int j = 0; j < n; j++) {
            if (player[i] < ranked[j]) {
                rank++;
            } else {
                break;
            }
        }
        ranks[i] = rank;
    }
}
int main(){
    int n,m;
    scanf("%d",&n);
    int ranked[200000];
    for(int i=0;i<n;i++){
        scanf("%d",&ranked[i]);
    }
    scanf("%d",&m);
    int player[200000];
    for(int i=0;i<m;i++){
        scanf("%d",&player[i]);
    }

    int ranks[m];
    trackPlayerRanks(ranked, n, player, m, ranks);
    printf("Player Ranks:\n");
    for (int i = 0; i < m; i++) {
        printf("Score %d: Rank %d\n", player[i], ranks[i]);
    }
    return 0;
}