
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


void member();
void how();
typedef struct{
    int wii;
    
}winnig;
typedef struct{
    char name1[10],name2[10];
    int win1,win2;
}His;
typedef struct{
    char name[10];
    int win;
}playerHQ;


int winner(char board[3][3]);
void draw_board(char board[3][3]);

int main()
{   
    int num=0;
    His H[10];
    playerHQ st[2];
    winnig win[9]; 
    

    int find;
    int *p=&find;
    do{

    printf("\n\n");
    printf("\t####~~~~~*     TicTacToe   *~~~~~####\n\n\n");

    printf("\t~*~ Start            (Press : 1) ~*~\n");
    printf("\t~*~ History          (Press : 2) ~*~\n");
    printf("\t~*~ Credits          (Press : 3) ~*~\n");
    printf("\t~*~ How to Play ?    (Press : 4) ~*~\n");
    printf("\t~*~ Quit             (Press : 5) ~*~\n");
    
    printf("\n\n\n=>> ");
    scanf("%d",&find);

    if(find == 1 ){
        printf("\tSolo        (Press : 1)\n");
        printf("\tMultiplayer (Press : 2)\n");

        printf("\n=>> ");
        scanf("%d",&find);

        if(find==1){
            printf("\tEasy   (Press : 1)\n\n");
            
            printf("\tHard   (Press : 2)\n");
            printf("\n=>> ");
            scanf("%d",&find);

            if(find == 1){
    printf("Choose X or O (X moves first)\n");
    printf("\tPress 1 for X\n\tPress 2 for O");
    printf("\n\n=>> ");
    scanf("%d", &find);

    if(find == 1 ){
    printf("\n");
    printf("Human Player Name : ");
    scanf("%s",st[0].name);
    strcpy(H[num].name1,st[0].name);
    strcpy(st[1].name,"Computer");
    strcpy(H[num].name2,st[1].name);



    st[0].win = 0 ;
    st[1].win = 0 ;

    
    int rounds = 1;
    int position, player, row, col,ii=1,gg=0;
    char mark, c,cc;
    int *ip = &ii,*po = &position;
    
   
     do{
    printf("\n");
    char board[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };
    
    draw_board(board);
    
    printf("\n");
    while(rounds <= 9  ){
        printf("\n\t%s : %d ",st[0].name,st[0].win);
        printf("\n\t%s : %d ",st[1].name,st[1].win);
        
        player = (rounds % 2) ? 1 : 2;
        mark = (player == 1) ? 'X' : 'O';
        
        if(player == 2){

            *po = (int)rand()%10 ;
            printf("\n");

        }else{
        printf("\n\n%s select a position from 1 to 9: ", st[player-1].name);
        printf("\n\t\t=>> ");
        scanf("%d", &position);
        }
        
        
        if(position == 404){
            printf("\nBye Bye\n");
            return 0;
        }
        row = (position - 1) / 3;
        col = (position - 1) % 3;
        if(board[row][col] != 'X' && board[row][col] != 'O' && position > 0 && position < 10) { // check valid inputs
            board[row][col] = mark;
            draw_board(board);
            if(winner(board)) {
                printf("\n*~*~* Congratulations %s. You win! *~*~*\n", st[player-1].name);
                st[player-1].win ++ ;
                printf("\n\t%s : %d ",st[0].name,st[0].win);
                printf("\n\t%s : %d ",st[1].name,st[1].win);
                printf("\n");
                
                break;
            }
            rounds++;
        } else {
            printf("\nInvalid position try again. ");
            
        }
    }
    
    if(rounds > 9) {
        printf("\nGood game players. It was a Tie !!!\n");
       
    }
    if(position == 404){
            printf("\nBye Bye\n");
            return 0 ;
        }
    H[num].win1 = st[0].win ;
    H[num].win2 = st[1].win  ;

    

    printf("\nWant to Play Again ?(Press 1 for YES! / Press 0 for NO )\n");
    printf("\n=>> ");
    scanf("%d",p);
    
    if(find == 1){
        
        find = 1;
        rounds = 1;
    }else if(find == 0){
        find = 0 ;
         num++;
    }else if(find == 404){
        return 0;
    }
    
    
    
    }while(find != 0);


    }else if(find == 2){
    
    printf("\n");
    printf("Human Player Name : ");
    scanf("%s",st[1].name);
    strcpy(H[num].name1,st[1].name);
    strcpy(st[0].name,"Computer");
    strcpy(H[num].name2,st[0].name);



    st[0].win = 0 ;
    st[1].win = 0 ;

    
    int rounds = 1;
    int position, player, row, col,ii=1,gg=0;
    char mark, c,cc;
    int *ip = &ii,*po = &position;
    
   
     do{
    printf("\n");
    char board[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };
    
    draw_board(board);
    
    printf("\n");
    while(rounds <= 9  ){
        printf("\n\t%s : %d ",st[0].name,st[0].win);
        printf("\n\t%s : %d ",st[1].name,st[1].win);
        
        player = (rounds % 2) ? 1 : 2;
        mark = (player == 1) ? 'X' : 'O';
        
        if(player == 1){

            *po = (int)rand()%10 ;
            printf("\n");

        }else{
        printf("\n\n%s select a position from 1 to 9: ", st[player-1].name);
        printf("\n\t\t=>> ");
        scanf("%d", &position);
        }
        
        
        if(position == 404){
            printf("\nBye Bye\n");
            return 0;
        }
        row = (position - 1) / 3;
        col = (position - 1) % 3;
        if(board[row][col] != 'X' && board[row][col] != 'O' && position > 0 && position < 10) { // check valid inputs
            board[row][col] = mark;
            draw_board(board);
            if(winner(board)) {
                printf("\n*~*~* Congratulations %s. You win! *~*~*\n", st[player-1].name);
                st[player-1].win ++ ;
                printf("\n\t%s : %d ",st[0].name,st[0].win);
                printf("\n\t%s : %d ",st[1].name,st[1].win);
                printf("\n");
                
                break;
            }
            rounds++;
        } else {
            printf("\nInvalid position try again. ");
            
        }
    }
    
    if(rounds > 9) {
        printf("\nGood game players. It was a Tie !!!\n");
       
    }
    if(position == 404){
            printf("\nBye Bye\n");
            return 0 ;
        }
    H[num].win1 = st[1].win ;
    H[num].win2 = st[0].win  ;

    

    printf("\nWant to Play Again ?(Press 1 for YES! / Press 0 for NO )\n");
    printf("\n=>> ");
    scanf("%d",p);
    
    if(find == 1){
        
        find = 1;
        rounds = 1;
    }else if(find == 0){
        find = 0 ;
         num++;
    }else if(find == 404){
        printf("\nBye Bye\n");
        return 0;
    }
    
    
    
    }while(find != 0);


    }
    }
    else if(find == 2){

            printf("Choose X or O (X moves first)\n");
            printf("\tPress 1 for X\n\tPress 2 for O");
            printf("\n\n=>> ");
            scanf("%d", &find);
            if(find == 1){
                printf("\n");
    printf("Human Player Name : ");
    scanf("%s",st[0].name);
    strcpy(H[num].name1,st[0].name);
    strcpy(st[1].name,"Computer");
    strcpy(H[num].name2,st[1].name);



    st[0].win = 0 ;
    st[1].win = 0 ;

    
    int rounds = 1;
    int position, player, row, col,ii=1,gg=0;
    char mark, c,cc;
    int *ip = &ii,*po = &position;
    
   
     do{
    printf("\n");
    char board[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };
    
    draw_board(board);
    
    printf("\n");
    while(rounds <= 9  ){
        printf("\n\t%s : %d ",st[0].name,st[0].win);
        printf("\n\t%s : %d ",st[1].name,st[1].win);
        
        player = (rounds % 2) ? 1 : 2;
        mark = (player == 1) ? 'X' : 'O';
        
        if(player == 2){

            if(rounds == 2){
                if(win[0].wii != 5){
                    *po = 5 ;
                }else{
                    *po = 9 ;
                }
                win[rounds-1].wii = position;
            }
            else if(rounds == 4){
                if(win[1].wii==5){
                if((win[0].wii == 9 && win[2].wii == 3 )||(win[0].wii == 3 && win[2].wii == 9 )){
                    *po = 6 ;
                }else if((win[0].wii == 9 && win[2].wii == 7 )||(win[0].wii == 7 && win[2].wii == 9 )){
                    *po = 8 ;
                }else if((win[0].wii == 1 && win[2].wii == 3 )||(win[0].wii == 3 && win[2].wii == 1 )){
                    *po = 2 ;
                }else if((win[0].wii == 1 && win[2].wii == 7 )||(win[0].wii == 7 && win[2].wii == 1 )){
                    *po = 4 ;
                }else if(((win[0].wii==9 && win[2].wii==2)||(win[0].wii==2&&win[2].wii==9))||((win[0].wii==1&&win[2].wii==6)||(win[0].wii==6&&win[2].wii==1))){
                    *po = 3 ;
                }
                else if(((win[0].wii==7 && win[2].wii==6)||(win[0].wii==6&&win[2].wii==7))||((win[0].wii==8&&win[2].wii==3)||(win[0].wii==3&&win[2].wii==8))){
                    *po = 9 ;
                }else if(((win[0].wii==8 && win[2].wii==1)||(win[0].wii==1&&win[2].wii==8))||((win[0].wii==4&&win[2].wii==9)||(win[0].wii==9&&win[2].wii==4))){
                    *po = 7 ;
                }
                else if(((win[0].wii==4 && win[2].wii==3)||(win[0].wii==3&&win[2].wii==4))||((win[0].wii==7&&win[2].wii==2)||(win[0].wii==2&&win[2].wii==7))){
                    *po = 1 ;
                }
                
                else if(((win[0].wii==9 && win[2].wii==8)||(win[0].wii==8&&win[2].wii==9))||((win[0].wii==1&&win[2].wii==4)||(win[0].wii==4&&win[2].wii==1))){
                    *po = 7 ;
                }else if(((win[0].wii==4 && win[2].wii==7)||(win[0].wii==7&&win[2].wii==4))||((win[0].wii==2&&win[2].wii==3)||(win[0].wii==3&&win[2].wii==2))){
                    *po = 1 ;
                }else if(((win[0].wii==1 && win[2].wii==2)||(win[0].wii==2&&win[2].wii==1))||((win[0].wii==6&&win[2].wii==9)||(win[0].wii==9&&win[2].wii==6))){
                    *po = 3 ;
                }else if(((win[0].wii==3 && win[2].wii==6)||(win[0].wii==6&&win[2].wii==3))||((win[0].wii==7&&win[2].wii==8)||(win[0].wii==8&&win[2].wii==7))){
                    *po = 9 ;
                }else if(win[2].wii != 8){
                    *po = 8 ;
                }
                else if(win[2].wii != 6){
                    *po = 6 ;
                }else if(win[2].wii != 2){
                    *po = 2 ;
                }else if(win[2].wii != 4){
                    *po = 4 ;
                }
                

                }else if(win[1].wii == 9){
                    if(win[2].wii==8){
                        *po = 2 ;
                    }else if(win[2].wii==7){
                        *po = 3 ;
                    }else if(win[2].wii==4){
                        *po = 6 ;
                    }else if(win[2].wii==2){
                        *po = 8 ;
                    }else if(win[2].wii==3){
                        *po = 7 ;
                    }else if(win[2].wii==6){
                        *po = 4 ;
                    }else if(win[2].wii==1){
                        *po = 7 ;
                    }
                }
                
            win[rounds-1].wii = position;

            }

            else if(rounds == 6){

                if(win[1].wii == 5){
                     if((win[0].wii == 2 && win[2].wii == 7 && win[4].wii == 9)||(win[0].wii == 2 && win[2].wii == 9 && win[4].wii == 7)||(win[0].wii == 7 && win[2].wii == 2 && win[4].wii == 9)||(win[0].wii == 7 && win[2].wii == 9 && win[4].wii == 2)||(win[0].wii == 9 && win[2].wii == 2 && win[4].wii == 7)||(win[0].wii == 9 && win[2].wii == 7 && win[4].wii == 2)){

                            *po = 6 ;
                }else if((win[0].wii == 1 && win[2].wii == 6 && win[4].wii == 7)||(win[0].wii == 1 && win[2].wii == 7 && win[4].wii == 6)||(win[0].wii == 6 && win[2].wii == 1 && win[4].wii == 7)||(win[0].wii == 6 && win[2].wii == 7 && win[4].wii == 1)||(win[0].wii == 7 && win[2].wii == 1 && win[4].wii == 6)||(win[0].wii == 7 && win[2].wii == 6 && win[4].wii == 1)){

                            *po = 8 ;
                }else if((win[0].wii == 1 && win[2].wii == 3 && win[4].wii == 8)||(win[0].wii == 1 && win[2].wii == 8 && win[4].wii == 3)||(win[0].wii == 3 && win[2].wii == 1 && win[4].wii == 8)||(win[0].wii == 3 && win[2].wii == 8 && win[4].wii == 1)||(win[0].wii == 8 && win[2].wii == 1 && win[4].wii == 3)||(win[0].wii == 8 && win[2].wii == 3 && win[4].wii == 1)){

                            *po = 4 ;
                }else if((win[0].wii == 3 && win[2].wii == 4 && win[4].wii == 9)||(win[0].wii == 3 && win[2].wii == 9 && win[4].wii == 4)||(win[0].wii == 4 && win[2].wii == 3 && win[4].wii == 9)||(win[0].wii == 4 && win[2].wii == 9 && win[4].wii == 3)||(win[0].wii == 9 && win[2].wii == 3 && win[4].wii == 4)||(win[0].wii == 9 && win[2].wii == 4 && win[4].wii == 3)){

                            *po = 2 ;
                }
                
                else if((win[0].wii == 2 && win[2].wii == 4 && win[4].wii == 6)||(win[0].wii == 2 && win[2].wii == 6 && win[4].wii == 4)||(win[0].wii == 6 && win[2].wii == 2 && win[4].wii == 4)||(win[0].wii == 6 && win[2].wii == 4 && win[4].wii == 2)||(win[0].wii == 4 && win[2].wii == 2 && win[4].wii == 6)||(win[0].wii == 4 && win[2].wii == 6 && win[4].wii == 2)){

                            *po = 7 ;
                }else if((win[0].wii == 2 && win[2].wii == 6 && win[4].wii == 8)||(win[0].wii == 2 && win[2].wii == 8 && win[4].wii == 6)||(win[0].wii == 6 && win[2].wii == 2 && win[4].wii == 8)||(win[0].wii == 6 && win[2].wii == 8 && win[4].wii == 2)||(win[0].wii == 8 && win[2].wii == 2 && win[4].wii == 6)||(win[0].wii == 8 && win[2].wii == 6 && win[4].wii == 2)){

                            *po = 1 ;
                }else if((win[0].wii == 4 && win[2].wii == 6 && win[4].wii == 8)||(win[0].wii == 4 && win[2].wii == 8 && win[4].wii == 6)||(win[0].wii == 6 && win[2].wii == 4 && win[4].wii == 8)||(win[0].wii == 6 && win[2].wii == 8 && win[4].wii == 4)||(win[0].wii == 8 && win[2].wii == 4 && win[4].wii == 6)||(win[0].wii == 8 && win[2].wii == 6 && win[4].wii == 4)){

                            *po = 3 ;
                }else if((win[0].wii == 2 && win[2].wii == 4 && win[4].wii == 8)||(win[0].wii == 2 && win[2].wii == 8 && win[4].wii == 4)||(win[0].wii == 4 && win[2].wii == 2 && win[4].wii == 8)||(win[0].wii == 4 && win[2].wii == 8 && win[4].wii == 2)||(win[0].wii == 8 && win[2].wii == 2 && win[4].wii == 4)||(win[0].wii == 8 && win[2].wii == 4 && win[4].wii == 2)){

                            *po = 9 ;
                }else if((win[0].wii==9 && win[2].wii==8)||(win[0].wii==8&&win[2].wii==9)){
                    if(win[4].wii != 3){
                        *po = 3 ;
                    }else{
                        *po = 6 ;
                    }
                }else if((win[0].wii==4 && win[2].wii==7)||(win[0].wii==7&&win[2].wii==4)){
                    if(win[4].wii != 9){
                        *po = 9 ;
                    }else{
                        *po = 8 ;
                    }
                }else if((win[0].wii==1 && win[2].wii==2)||(win[0].wii==2&&win[2].wii==1)){
                    if(win[4].wii != 7){
                        *po = 7 ;
                    }else{
                        *po = 4 ;
                    }
                }else if((win[0].wii==3 && win[2].wii==6)||(win[0].wii==6&&win[2].wii==3)){
                    if(win[4].wii != 1){
                        *po = 1 ;
                    }else{
                        *po = 2 ;
                    }
                }else if((win[0].wii==1&&win[2].wii==4)||(win[0].wii==4&&win[2].wii==1)){
                    if(win[4].wii != 3){
                        *po = 3 ;
                    }else{
                        *po = 2 ;
                    }
                }else if((win[0].wii==2&&win[2].wii==3)||(win[0].wii==3&&win[2].wii==2)){
                    if(win[4].wii != 9){
                        *po = 9 ;
                    }else{
                        *po = 6 ;
                    }
                }else if((win[0].wii==6&&win[2].wii==9)||(win[0].wii==9&&win[2].wii==6)){
                        if(win[4].wii != 7){
                        *po = 7 ;
                    }else{
                        *po = 8 ;
                    }
                }else if((win[0].wii==7&&win[2].wii==8)||(win[0].wii==8&&win[2].wii==7)){
                    if(win[4].wii != 1){
                        *po = 1 ;
                    }else{
                        *po = 4 ;
                    }
                }
                    else if(win[3].wii== 8){
                        if(win[4].wii!=2){
                            *po = 2 ;
                        }
                    }else if(win[3].wii== 4){
                        if(win[4].wii!=6){
                            *po = 6 ;
                        }
                    }else if(win[3].wii== 2){
                        if(win[4].wii!=8){
                            *po = 8 ;
                        }
                    }else if(win[3].wii== 6){
                        if(win[4].wii!=4){
                            *po = 4 ;
                        }
                    }else if(win[3].wii== 9){
                        if(win[4].wii!=1){
                            *po = 1 ;
                        }
                    }else if(win[3].wii== 7){
                        if(win[4].wii!=3){
                            *po = 3 ;
                        }
                    }else if(win[3].wii== 1){
                        if(win[4].wii!=9){
                            *po = 9 ;
                        }
                    }else if(win[3].wii== 3){
                        if(win[4].wii!=7){
                            *po = 7 ;
                        }
                    }
                   
            
                }

                else if(win[1].wii == 9){
                    if(win[2].wii==8){
                        if(win[4].wii!=3){
                            *po = 3 ;
                        }else{
                            *po = 7 ;
                        }
                    }else if(win[2].wii==7){
                        if(win[4].wii!=6){
                            *po = 6 ;
                        }else{
                            *po = 4 ;
                        }
                    }else if(win[2].wii==4){
                        if(win[4].wii!=3){
                            *po = 3 ;
                        }else{
                            *po = 7 ;
                        }
                    }else if(win[2].wii==2){
                        if(win[4].wii!=7){
                            *po = 7 ;
                        }else{
                            *po = 3 ;
                        }
                    }else if(win[2].wii==3){
                        if(win[4].wii!=8){
                            *po = 8 ;
                        }else{
                            *po = 2 ;
                        }
                    }else if(win[2].wii==6){
                        if(win[4].wii!=7){
                            *po = 7 ;
                        }else{
                            *po = 3 ;
                        }
                    }else if(win[2].wii==1){
                        if(win[4].wii!=8){
                            *po = 8 ;
                        }else{
                            *po = 2 ;
                        }
                    }
                }

                win[rounds-1].wii = position;

            }else if(rounds == 8){

                if(win[1].wii ==5 ){
                    if((win[0].wii == 2 && win[2].wii == 7 && win[4].wii == 9)||(win[0].wii == 2 && win[2].wii == 9 && win[4].wii == 7)||(win[0].wii == 7 && win[2].wii == 2 && win[4].wii == 9)||(win[0].wii == 7 && win[2].wii == 9 && win[4].wii == 2)||(win[0].wii == 9 && win[2].wii == 2 && win[4].wii == 7)||(win[0].wii == 9 && win[2].wii == 7 && win[4].wii == 2)){

                            if(win[6].wii!=4){
                                *po = 4;
                            }else{
                                *po = 1 ;
                            }
                }else if((win[0].wii == 1 && win[2].wii == 6 && win[4].wii == 7)||(win[0].wii == 1 && win[2].wii == 7 && win[4].wii == 6)||(win[0].wii == 6 && win[2].wii == 1 && win[4].wii == 7)||(win[0].wii == 6 && win[2].wii == 7 && win[4].wii == 1)||(win[0].wii == 7 && win[2].wii == 1 && win[4].wii == 6)||(win[0].wii == 7 && win[2].wii == 6 && win[4].wii == 1)){

                            if(win[6].wii!=2){
                                *po = 2;
                            }else{
                                *po = 3 ;
                            }
                }else if((win[0].wii == 1 && win[2].wii == 3 && win[4].wii == 8)||(win[0].wii == 1 && win[2].wii == 8 && win[4].wii == 3)||(win[0].wii == 3 && win[2].wii == 1 && win[4].wii == 8)||(win[0].wii == 3 && win[2].wii == 8 && win[4].wii == 1)||(win[0].wii == 8 && win[2].wii == 1 && win[4].wii == 3)||(win[0].wii == 8 && win[2].wii == 3 && win[4].wii == 1)){

                            if(win[6].wii!=6){
                                *po = 6;
                            }else{
                                *po = 9 ;
                            }
                }else if((win[0].wii == 3 && win[2].wii == 4 && win[4].wii == 9)||(win[0].wii == 3 && win[2].wii == 9 && win[4].wii == 4)||(win[0].wii == 4 && win[2].wii == 3 && win[4].wii == 9)||(win[0].wii == 4 && win[2].wii == 9 && win[4].wii == 3)||(win[0].wii == 9 && win[2].wii == 3 && win[4].wii == 4)||(win[0].wii == 9 && win[2].wii == 4 && win[4].wii == 3)){

                            if(win[6].wii!=8){
                                *po = 8;
                            }else{
                                *po = 7 ;
                            }
                }else if((win[0].wii == 2 && win[2].wii == 4 && win[4].wii == 6)||(win[0].wii == 2 && win[2].wii == 6 && win[4].wii == 4)||(win[0].wii == 6 && win[2].wii == 2 && win[4].wii == 4)||(win[0].wii == 6 && win[2].wii == 4 && win[4].wii == 2)||(win[0].wii == 4 && win[2].wii == 2 && win[4].wii == 6)||(win[0].wii == 4 && win[2].wii == 6 && win[4].wii == 2)){

                            if(win[6].wii!=9){
                                *po = 9;
                            }else{
                                *po = 3 ;
                            }
                }else if((win[0].wii == 2 && win[2].wii == 6 && win[4].wii == 8)||(win[0].wii == 2 && win[2].wii == 8 && win[4].wii == 6)||(win[0].wii == 6 && win[2].wii == 2 && win[4].wii == 8)||(win[0].wii == 6 && win[2].wii == 8 && win[4].wii == 2)||(win[0].wii == 8 && win[2].wii == 2 && win[4].wii == 6)||(win[0].wii == 8 && win[2].wii == 6 && win[4].wii == 2)){

                            if(win[6].wii!=7){
                                *po = 7;
                            }else{
                                *po = 9 ;
                            }
                }else if((win[0].wii == 4 && win[2].wii == 6 && win[4].wii == 8)||(win[0].wii == 4 && win[2].wii == 8 && win[4].wii == 6)||(win[0].wii == 6 && win[2].wii == 4 && win[4].wii == 8)||(win[0].wii == 6 && win[2].wii == 8 && win[4].wii == 4)||(win[0].wii == 8 && win[2].wii == 4 && win[4].wii == 6)||(win[0].wii == 8 && win[2].wii == 6 && win[4].wii == 4)){

                            if(win[6].wii!=7){
                                *po = 7;
                            }else{
                                *po = 1 ;
                            }
                }else if((win[0].wii == 2 && win[2].wii == 4 && win[4].wii == 8)||(win[0].wii == 2 && win[2].wii == 8 && win[4].wii == 4)||(win[0].wii == 4 && win[2].wii == 2 && win[4].wii == 8)||(win[0].wii == 4 && win[2].wii == 8 && win[4].wii == 2)||(win[0].wii == 8 && win[2].wii == 2 && win[4].wii == 4)||(win[0].wii == 8 && win[2].wii == 4 && win[4].wii == 2)){

                            if(win[6].wii!=1){
                                *po = 1;
                            }else{
                                *po = 3 ;
                            }
                }else if((win[0].wii==9 && win[2].wii==8)||(win[0].wii==8&&win[2].wii==9)){
                    if(win[6].wii != 4){
                        *po = 4 ;
                    }else{
                        *po = 1 ;
                    }
                }else if((win[0].wii==4 && win[2].wii==7)||(win[0].wii==7&&win[2].wii==4)){
                    if(win[4].wii != 2){
                        *po = 2 ;
                    }else{
                        *po = 3 ;
                    }
                }else if((win[0].wii==1 && win[2].wii==2)||(win[0].wii==2&&win[2].wii==1)){
                    if(win[6].wii != 6){
                        *po = 6 ;
                    }else{
                        *po = 9 ;
                    }
                }else if((win[0].wii==3 && win[2].wii==6)||(win[0].wii==6&&win[2].wii==3)){
                    if(win[6].wii != 8){
                        *po = 8 ;
                    }else{
                        *po = 7 ;
                    }
                }else if((win[0].wii==1&&win[2].wii==4)||(win[0].wii==4&&win[2].wii==1)){
                    if(win[6].wii != 8){
                        *po = 8 ;
                    }else{
                        *po = 9 ;
                    }
                }else if((win[0].wii==2&&win[2].wii==3)||(win[0].wii==3&&win[2].wii==2)){
                    if(win[6].wii != 4){
                        *po = 4 ;
                    }else{
                        *po = 7 ;
                    }
                }else if((win[0].wii==6&&win[2].wii==9)||(win[0].wii==9&&win[2].wii==6)){
                        if(win[6].wii != 2){
                        *po = 2 ;
                    }else{
                        *po = 1 ;
                    }
                }else if((win[0].wii==7&&win[2].wii==8)||(win[0].wii==8&&win[2].wii==7)){
                    if(win[6].wii != 6){
                        *po = 6 ;
                    }else{
                        *po = 3 ;
                    }
                }

                
                }
                else if(win[1].wii == 9){
                    if(win[2].wii==8){
                        if(win[5].wii==3){
                            if(win[6].wii!=6){
                                *po = 6 ;
                            }else {
                                *po = 1 ;
                            }
                        }else if(win[6].wii!= 6){

                            *po = 6 ;
                            
                        }else {
                            *po = 4 ;
                        }
                    }else if(win[2].wii==7){
                        if(win[6].wii != 2){
                            *po = 2 ;
                        }else {
                            *po = 8 ;
                        }
                    }else if(win[2].wii==4){
                        if(win[6].wii!=8){
                            *po = 8 ;
                        }else{
                            *po = 2 ;
                        }
                    }else if(win[2].wii==2){
                        if(win[6].wii!=6){
                            *po = 6 ;
                        }else{
                            *po = 4 ;
                        }
                    }else if(win[2].wii==3){
                        if(win[6].wii!=4){
                            *po = 4 ;
                        }else{
                            *po = 6 ;
                        }
                    }else if(win[2].wii==6){
                        if(win[5].wii==7){
                            if(win[6].wii != 1){
                                *po = 1 ;
                            }else{
                                *po = 8 ;
                            }
                        }else{
                            *po = 3 ;
                        }
                    }else if(win[2].wii==1){
                        if(win[6].wii!=6){
                            *po = 6 ;
                        }else{
                            *po = 4 ;
                        }
                    }
                }

            win[rounds-1].wii = position;

            }
            printf("\n");
           
        
        }else{
        printf("\n\n%s select a position from 1 to 9: ", st[player-1].name);
        printf("\n\t\t=>> ");
        scanf("%d", &position);
        win[rounds-1].wii = position;
        }
        
        
        if(position == 404){
            printf("\nBye Bye\n");
            return 0;
        }
        row = (position - 1) / 3;
        col = (position - 1) % 3;
        if(board[row][col] != 'X' && board[row][col] != 'O' && position > 0 && position < 10) { // check valid inputs
            board[row][col] = mark;
            draw_board(board);
            if(winner(board)) {
                printf("\n*~*~* Congratulations %s. You win! *~*~*\n", st[player-1].name);
                st[player-1].win ++ ;
                printf("\n\t%s : %d ",st[0].name,st[0].win);
                printf("\n\t%s : %d ",st[1].name,st[1].win);
                printf("\n");
                
                break;
            }
            rounds++;
        } else {
            printf("\nInvalid position try again. ");
            
        }
    }
    
    if(rounds > 9) {
        printf("\nGood game players. It was a Tie !!!\n");
       
    }
    if(position == 404){
            printf("\nBye Bye\n");
            return 0 ;
        }
    H[num].win1 = st[0].win ;
    H[num].win2 = st[1].win  ;

    

    printf("\nWant to Play Again ?(Press 1 for YES! / Press 0 for NO )\n");
    printf("\n=>> ");
    scanf("%d",p);
    
    if(find == 1){
        
        find = 1;
        rounds = 1;
    }else if(find == 0){
        find = 0 ;
         num++;
    }else if(find == 404){
        printf("\nBye Bye\n");
        
        return 0;
    }
    
    
    
    }while(find != 0);



            }else if(find == 2){

                printf("\n");
    printf("Human Player Name : ");
    scanf("%s",st[1].name);
    strcpy(H[num].name1,st[1].name);
    strcpy(st[0].name,"Computer");
    strcpy(H[num].name2,st[0].name);



    st[0].win = 0 ;
    st[1].win = 0 ;

    
    int rounds = 1;
    int position, player, row, col,ii=1,gg=0;
    char mark, c,cc;
    int *ip = &ii,*po = &position;
    
   
     do{
    printf("\n");
    char board[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };
    
    draw_board(board);
    
    printf("\n");
    while(rounds <= 9  ){
        printf("\n\t%s : %d ",st[0].name,st[0].win);
        printf("\n\t%s : %d ",st[1].name,st[1].win);
        
        player = (rounds % 2) ? 1 : 2;
        mark = (player == 1) ? 'X' : 'O';
        
        if(player == 1){

            if(rounds == 1){
                *po = 9 ;
            }else if(rounds == 3){
                if(win[1].wii != 7){
                    *po = 7;
                }else{
                    *po = 3;
                }
                

                win[rounds-1].wii = position;
            }else if(rounds == 5){
                if(win[2].wii == 7){
                    if(win[3].wii== 8 && win[1].wii == 5){
                        *po = 2 ;

                    }
                    else if(win[3].wii!= 8){
                        *po = 8;
                    }else{
                        if(win[1].wii!= 3){
                            *po = 3;
                        }else{
                            *po = 1 ;
                        }
                    }
                    
                }else if(win[2].wii == 3){
                    if(win[3].wii!= 6){
                        *po = 6;
                    }else{
                        *po = 1;
                    }
                    
                }
                

                win[rounds-1].wii = position;
            }else if(rounds == 7){
                if(win[3].wii== 8 && win[1].wii == 5){
                    if(win[5].wii != 6){
                        *po = 6;
                    }else{
                        *po = 4;
                    }
                }
                else if(win[5].wii != 5){
                    *po = 5;
                }else{
                    *po = 2 ;
                }
            win[rounds-1].wii = position;
            }
            else if(rounds == 9){
                *po = (int)rand()%10 ;
                win[rounds-1].wii = position;
            }
            
            
            printf("\n");

        }else{
        printf("\n\n%s select a position from 1 to 9: ", st[player-1].name);
        printf("\n\t\t=>> ");
        scanf("%d", &position);
        win[rounds-1].wii = position;
        }
        
        
        if(position == 404){
            printf("\nBye Bye\n");
            return 0;
        }
        row = (position - 1) / 3;
        col = (position - 1) % 3;
        if(board[row][col] != 'X' && board[row][col] != 'O' && position > 0 && position < 10) { // check valid inputs
            board[row][col] = mark;
            draw_board(board);
            if(winner(board)) {
                printf("\n*~*~* Congratulations!!! %s win! *~*~*\n", st[player-1].name);
                st[player-1].win ++ ;
                printf("\n\t%s : %d ",st[0].name,st[0].win);
                printf("\n\t%s : %d ",st[1].name,st[1].win);
                printf("\n");
                
                break;
            }
            rounds++;
        } else {
            printf("\nInvalid position try again. ");
            
        }
    }
    
    if(rounds > 9) {
        printf("\nGood game players. It was a Tie !!!\n");
       
    }
    if(position == 404){
            printf("\nBye Bye\n");
            return 0;
        }
    H[num].win1 = st[1].win ;
    H[num].win2 = st[0].win  ;

    

    printf("\nWant to Play Again ?(Press 1 for YES! / Press 0 for NO )\n");
    printf("\n=>> ");
    scanf("%d",p);
    
    if(find == 1){
        
        find = 1;
        rounds = 1;
    }else if(find == 0){
        find = 0 ;
         num++;
    }else if(find == 404){
        return 0;
    }
    
    
    
    }while(find != 0);



            }else if(find == 404){
                return 0;
            }

        }
            else if(find == 404){
                return 0;
            }



        }
        else if(find == 404){
            printf("\nBye Bye\n");
                return 0;
            }
        else if(find == 2){

    printf("\n");
    printf("Player 1 with X : ");
    scanf("%s",st[0].name);
    strcpy(H[num].name1,st[0].name);
    printf("Player 2 with O : ");
    scanf("%s",st[1].name);
    strcpy(H[num].name2,st[1].name);
    
    st[0].win = 0 ;
    st[1].win = 0 ;
    H[num].win1 = 0 ;
    H[num].win2 = 0 ;
    
    int rounds = 1;
    int position, player, row, col,ii=1,gg=0;
    char mark, c,cc;
    int *ip = &ii;
    
   
     do{
    printf("\n");
    char board[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };
    
    draw_board(board);
    
    printf("\n");
    while(rounds <= 9  ){
        printf("\n\t%s : %d ",st[0].name,st[0].win);
        printf("\n\t%s : %d ",st[1].name,st[1].win);
        
        player = (rounds % 2) ? 1 : 2;
        mark = (player == 1) ? 'X' : 'O';
        printf("\n\n%s select a position from 1 to 9: ", st[player-1].name);
        printf("\n\t\t=>> ");
        scanf("%d", &position);
        
        if(position == 404){
            printf("\nBye Bye\n");
            break;
        }
        row = (position - 1) / 3;
        col = (position - 1) % 3;
        if(board[row][col] != 'X' && board[row][col] != 'O' && position > 0 && position < 10) { // check valid inputs
            board[row][col] = mark;
            draw_board(board);
            if(winner(board)) {
                printf("\n*~*~* Congratulations %s. You win! *~*~*\n", st[player-1].name);
                st[player-1].win ++ ;
                printf("\n\t%s : %d ",st[0].name,st[0].win);
                printf("\n\t%s : %d ",st[1].name,st[1].win);
                printf("\n");
                
                break;
            }
            rounds++;
        } else {
            printf("\nInvalid position try again. ");
            
        }
    }
    
    if(rounds > 9) {
        printf("\nGood game players. It was a Tie !!!\n");
       
    }
    if(position == 404){
            printf("\nBye Bye\n");
            return 0;
        }
    H[num].win1 = st[0].win ;
    H[num].win2 = st[1].win  ;

    

    printf("\nWant to Play Again ?(Press 1 for YES! / Press 0 for NO )\n");
    printf("\n=>> ");
    scanf("%d",p);
    
    if(find == 1){
        
        find = 1;
        rounds = 1;
    }else if(find == 0){
        find = 0 ;
         num++;
    }else if(find == 404){
        return 0;
    }
    
    
    
    }while(find != 0);


        }

    
    }
    else if(find == 5 ){
        return 0;
    }
    else if(find == 2 ){

        printf("\nMatch History :\n");
        for(int iii = 0 ; iii< num ; iii++){
            printf("\n\t%s : %d  VS  %s : %d\n",H[iii].name1,H[iii].win1,H[iii].name2,H[iii].win2);
        }
        do{
            printf("\nBack (Press 0)\n");
            printf("=>> ");
            scanf("%d",p);


        }while(find != 0);
        
    }else if(find == 3){

        member();
        do{
            printf("\nBack (Press 0)\n");
            printf("=>> ");
            scanf("%d",p);

        if(find == 404){
         printf("\nBye Bye\n");
        return 0;
        }
        }while(find != 0);


    }else if(find == 4){
        how();
        do{
            printf("\nBack (Press 0)\n");
            printf("=>> ");
            scanf("%d",p);

        if(find == 404){
        printf("\nBye Bye\n");
        return 0;
        }
        }while(find != 0);
    }






    }while(find != 404);




    return 0;
}


void draw_board(char board[3][3])
{   

    int i;
    for(i = 0; i < 3; i++) {
        printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
        if(i != 2) {
            printf("---|---|---\n");
        }
    }
}



int winner(char board[3][3]) {
    int i;
    for(i = 0; i < 3; i++) {
        if((board[i][0] == board[i][1] && board[i][1] == board[i][2]) ||
           (board[0][i] == board[1][i] && board[1][i] == board[2][i])) {
            return 1;
        }
    }
    
    if((board[0][0] == board[1][1] && board[1][1] == board[2][2]) ||
       (board[0][2] == board[1][1] && board[1][1] == board[2][0])) { 
        return 1;
    }
    return 0;
}

void member(){
    printf("\n~*~ Rasheeq Ishmam\n");
    printf("\n~*~ rasheeq132@gmail.com\n");
    
    }



void how(){
    printf("~*~ Rules : \n");
    printf("\t* Select 1 to 9 to make your move \n");
    printf("\t* For Kill Switch Press : 404 (it will Quit the Game)\n");
}
