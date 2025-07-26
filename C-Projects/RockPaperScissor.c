#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int NumberGenerator(int n)//Makes computer to generate a random number.
{
    srand(time(NULL));
    return rand() % n;
}
     
int ScoreGenerator(char c1, char c2)//Scores of players are called by this function
{
    if (c1 == 'r' && c2 == 's' || c1 == 'p' && c2 == 'r' || c1 == 's' && c2 == 'p')
    {
        return 1; // player wins.
    }
    else if (c1 == 'r' && c2 == 'p' || c1 == 'p' && c2 == 's' || c1 == 's' && c2 == 'r')
    {
        return -1;
    }
    else if (c2 == 'r' && c1 == 's' || c2 == 'p' && c1 == 'r' || c2 == 's' && c1 == 'p')
    {
        return -1; // cpu wins.(say name of the computer is CPU)
    }
    else if (c2 == 'r' && c1 == 'p' || c2 == 'p' && c1 == 's' || c2 == 's' && c1 == 'r')
    {
        return 1;
    }

    else if (c1 == c2)
    {
        return 0; // tie game.
    }
}

int main()
{
    char name[10];
    int temp;
    int playerscore = 0, compscore = 0;
    char player;
    char computer;
    char game[] = {'r', 'p', 's'};

    printf("\tWelcome to SARJ Games\t\n");
    printf("Enter your name :");
    fgets(name,10,stdin);
    for (int i = 1; i <= 3; i++)

    {
        printf("\n");
        printf("Game %d : \n\n", i);
        printf("%s's turn :\n", name);
        printf("Enter what you want to choose : \n      0--Rock\n     1--Paper\n    2--Scissors\n");
        scanf("%d", &temp);
        if (temp >= 3)
        {
            printf("You have entered an invlaid input.");
            goto end;
        }
        player = game[temp];
        printf("You choose %c\n", player);

        printf("Computer's turn :\n\n");
        temp = NumberGenerator(3) + 1;
        computer = game[temp - 1];
        printf("Computer chose %c\n", computer);

        if (ScoreGenerator(player, computer) == 1)
        {
            playerscore++;
        }
        else if (ScoreGenerator(player, computer) == -1)
        {
            compscore++;
        }
        else
        {
            playerscore++;
            compscore++;
        }
        printf("Your score -- %d\t\ncomp score -- %d\t\n", playerscore, compscore);
    }
    if (playerscore > compscore)
    {
        printf("\t~~YOU WON THE GAME~~\t");
    }

    else if (compscore > playerscore)
    {
        printf("\t~~CPU WON THE GAME~~\t");
    }
    else
    {
        printf("\t~~TIE GAME~~\t");
    }

end:

    return 0;
}


Now we can also create a multiplayer game that enables you to play 2 players at a time on the same PC. But you know when player2 knows the move of player 1 he can tackle it with the right move. So, many will not get interested in this multiplayer game but just for programming information, I uploaded this one too.

(Of course, multiplayer games are better when it comes to online referred games.)

There is no big difference between computer game and multiplayer games. Only player 2 is added in this code and input is taken from player 2 too.

code : 

//game with Multiplayer.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


int ScoreGenerator(char c1, char c2)
{
    if (c1 == 'r' && c2 == 's' || c1 == 'p' && c2 == 'r' || c1 == 's' && c2 == 'p')
    {
        return 1; // player wins.
    }
    else if (c1 == 'r' && c2 == 'p' || c1 == 'p' && c2 == 's' || c1 == 's' && c2 == 'r')
    {
        return -1;
    }
    else if (c2 == 'r' && c1 == 's' || c2 == 'p' && c1 == 'r' || c2 == 's' && c1 == 'p')
    {
        return -1; // cpu wins.
    }
    else if (c2 == 'r' && c1 == 'p' || c2 == 'p' && c1 == 's' || c2 == 's' && c1 == 'r')
    {
        return 1;
    }

    else if (c1 == c2)
    {
        return 0; // tie game.
    }
}

int main()
{
    char name1[10];
       char name2[10];

    int temp;
    int player1score = 0,player2score = 0;
    char player1;
    char player2;
    char game[] = {'r', 'p', 's'};

    printf("\tWelcome to SARJ Games\t\n");
    printf("Enter  player 1's name :");
    scanf("%s", &name1);

     printf("Enter player 2's name :");
    scanf("%s", &name2);

    for (int i = 1; i <= 3; i++)

    {
        printf("\n");
        printf("Game %d : \n\n", i);
        printf("%s's turn :\n", name1);
        printf("Enter what you want to choose : \n      0--Rock\n     1--Paper\n    2--Scissors\n");
        scanf("%d", &temp);
        if (temp >= 3)
        {
            printf("You have entered an invlaid input.");
            goto end;
        }
        player1 = game[temp];
        printf("%s chose %c\n", name1,player1);

        printf("%s's turn :\n\n",name2);

        printf("Enter what you want to choose : \n      0--Rock\n     1--Paper\n    2--Scissors\n");
        scanf("%d", &temp);
        
        player2 = game[temp];
        printf("%s chose %c\n", name2,player2);

        if (ScoreGenerator(player1, player2) == 1)
        {
            player1score++;
        }
        else if (ScoreGenerator(player1, player2) == -1)
        {
            player2score++;
        }
        else
        {
            player1score++;
            player2score++;
        }
        printf("%s's score -- %d\t\n%s's score -- %d\t\n",name1, player1score,name2,player2score);
    }
    if (player1score > player2score)
    {
        printf("\t~~%s won the game~~\t",name1);
    }

    else if (player2score > player1score)
    {
        printf("\t~~%s won the game~~\t",name2);
    }
    else
    {
        printf("\t~~TIE GAME~~\t");
    }

end:

    return 0;
}