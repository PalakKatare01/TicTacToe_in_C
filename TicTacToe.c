#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include<conio.h>
char square[10]={'0','1','2','3','4','5','6','7','8','9'};
int CheckWin();
void drawBoard();

int main()
{
    system("Color 0B");
    int player=1,i,move;
    char symbol;// X 0

    do{
        drawBoard();
        player =(player%2) ? 1 : 2;// if player %2 == 1 then player 1 will select position if not equal then player 2 will move
        printf("Player %d enter the move:",player);
        scanf("%d",&move);
        symbol= (player == 1) ? 'X' : '0';

  /*if(player == 1){
        symbol='X';
    }
    else if( player == 2){
        symbol='0';
    }*/
        if(move == 1 && square[1]=='1')
            square[1]=symbol;
        else if(move == 2 && square[2]=='2')
            square[2]=symbol;
        else if(move == 3 && square[3]=='3')
            square[3]=symbol;
        else if(move == 4 && square[4]=='4')
            square[4]=symbol;
        else if(move == 5 && square[5]=='5')
            square[5]=symbol;
        else if(move == 6 && square[6]=='6')
            square[6]=symbol;
        else if(move == 7 && square[7]=='7')
            square[7]=symbol;
        else if(move == 8 && square[8]=='8')
            square[8]=symbol;
        else if(move == 9 && square[9]=='9')
            square[9]=symbol;
        else
            {
                printf("Invalid option!!!!");
                --player;
                getch();
            }
            i = CheckWin();
            player++;

    }while(i== -1);
    drawBoard();

    if (i == 1)
    {
        printf("***** Player %d is Winner *****",--player);
        Beep(234,453);
        Beep(124,853);
        Beep(344,653);
    }
    else{
        printf("*****GAME draw*****");
    }
    getch();
    return 0;

}
int CheckWin()
{
if (square[1]== square[2] && square[2]==square[3])
    return 1;
else if (square[4]== square[5] && square[5]==square[6])
    return 1;
else if (square[7]== square[8] && square[8]==square[9])
    return 1;
else if (square[1]== square[4] && square[4]==square[7])
    return 1;
else if (square[2]== square[5] && square[5]==square[8])
    return 1;
else if (square[3]== square[6] && square[6]==square[9])
    return 1;
else if (square[1]== square[5] && square[5]==square[9])
    return 1;
else if (square[3]== square[5] && square[5]==square[7])
    return 1;
else if (square[1]!='1' && square[2]!='2'&& square[3]!='3' && square[4]!='4' && square[5]!='5'&& square[6]!='6'&& square[7]!='7' && square[8]!='8' && square[9]!='9')
    return 0;
else
    return -1;

}

void drawBoard()
{
    system("cls");
    printf("-----------------Console Application---------------------\n\n ");
    printf("********TIC TAC TOE*********\n\n");
    printf("Player 1(X) - Player 2(0)\n\n\n\n");
    printf("||   ||   ||   \n");
    printf("|| %c || %c || %c \n",square[1],square[2],square[3]);
    printf("||---||---||---\n");
    printf("||   ||   ||   \n");
    printf("|| %c || %c || %c\n",square[4],square[5],square[6]);
    printf("||---||---||--- \n");
    printf("||   ||   ||   \n");
    printf("|| %c || %c || %c\n",square[7],square[8],square[9]);
    printf("||   ||   ||   \n");
}

