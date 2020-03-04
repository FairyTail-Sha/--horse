#include "horse.h"
#include "struct.h"
#include <QApplication>
void Horse::init(){
    //this->route[0].point[64][2] = {
    this->route[0].point[0][0] = 0;         this->route[0].point[0][1] = 0;
    this->route[0].point[1][0] = 2;         this->route[0].point[1][1] = 1;
    this->route[0].point[2][0] = 4;         this->route[0].point[2][1] = 0;
    this->route[0].point[3][0] = 6;         this->route[0].point[3][1] = 1;
    this->route[0].point[4][0] = 7;         this->route[0].point[4][1] = 3;
    this->route[0].point[5][0] = 6;         this->route[0].point[5][1] = 5;
    this->route[0].point[6][0] = 7;         this->route[0].point[6][1] = 7;
    this->route[0].point[7][0] = 5;         this->route[0].point[7][1] = 6;
    this->route[0].point[8][0] = 7;         this->route[0].point[8][1] = 5;
    this->route[0].point[9][0] = 6;         this->route[0].point[9][1] = 7;
    this->route[0].point[10][0] = 4;        this->route[0].point[10][1] = 6;
    this->route[0].point[11][0] = 2;        this->route[0].point[11][1] = 7;
    this->route[0].point[12][0] = 0;        this->route[0].point[12][1] = 6;
    this->route[0].point[13][0] = 1;        this->route[0].point[13][1] = 4;
    this->route[0].point[14][0] = 0;        this->route[0].point[14][1] = 2;
    this->route[0].point[15][0] = 1;        this->route[0].point[15][1] = 0;
    this->route[0].point[16][0] = 3;        this->route[0].point[16][1] = 1;
    this->route[0].point[17][0] = 5;        this->route[0].point[17][1] = 0;
    this->route[0].point[18][0] = 7;        this->route[0].point[18][1] = 1;
    this->route[0].point[19][0] = 6;        this->route[0].point[19][1] = 3;
    this->route[0].point[20][0] = 4;        this->route[0].point[20][1] = 2;
    this->route[0].point[21][0] = 3;        this->route[0].point[21][1] = 0;
    this->route[0].point[22][0] = 1;        this->route[0].point[22][1] = 1;
    this->route[0].point[23][0] = 0;        this->route[0].point[23][1] = 3;
    this->route[0].point[24][0] = 2;        this->route[0].point[24][1] = 2;
    this->route[0].point[25][0] = 0;        this->route[0].point[25][1] = 1;
    this->route[0].point[26][0] = 2;        this->route[0].point[26][1] = 0;
    this->route[0].point[27][0] = 4;        this->route[0].point[27][1] = 1;
    this->route[0].point[28][0] = 6;        this->route[0].point[28][1] = 0;
    this->route[0].point[29][0] = 7;        this->route[0].point[29][1] = 2;
    this->route[0].point[30][0] = 5;        this->route[0].point[30][1] = 1;
    this->route[0].point[31][0] = 7;        this->route[0].point[31][1] = 0;
    this->route[0].point[32][0] = 6;        this->route[0].point[32][1] = 2;
    this->route[0].point[33][0] = 7;        this->route[0].point[33][1] = 4;
    this->route[0].point[34][0] = 6;        this->route[0].point[34][1] = 6;
    this->route[0].point[35][0] = 5;        this->route[0].point[35][1] = 4;
    this->route[0].point[36][0] = 3;        this->route[0].point[36][1] = 5;
    this->route[0].point[37][0] = 4;        this->route[0].point[37][1] = 7;
    this->route[0].point[38][0] = 5;        this->route[0].point[38][1] = 5;
    this->route[0].point[39][0] = 7;        this->route[0].point[39][1] = 6;
    this->route[0].point[40][0] = 5;        this->route[0].point[40][1] = 7;
    this->route[0].point[41][0] = 3;        this->route[0].point[41][1] = 6;
    this->route[0].point[42][0] = 1;        this->route[0].point[42][1] = 7;
    this->route[0].point[43][0] = 0;        this->route[0].point[43][1] = 5;
    this->route[0].point[44][0] = 2;        this->route[0].point[44][1] = 6;
    this->route[0].point[45][0] = 0;        this->route[0].point[45][1] = 7;
    this->route[0].point[46][0] = 1;        this->route[0].point[46][1] = 5;
    this->route[0].point[47][0] = 3;        this->route[0].point[47][1] = 4;
    this->route[0].point[48][0] = 5;        this->route[0].point[48][1] = 3;
    this->route[0].point[49][0] = 4;        this->route[0].point[49][1] = 5;
    this->route[0].point[50][0] = 6;        this->route[0].point[50][1] = 4;
    this->route[0].point[51][0] = 4;        this->route[0].point[51][1] = 3;
    this->route[0].point[52][0] = 2;        this->route[0].point[52][1] = 4;
    this->route[0].point[53][0] = 3;        this->route[0].point[53][1] = 2;
    this->route[0].point[54][0] = 1;        this->route[0].point[54][1] = 3;
    this->route[0].point[55][0] = 2;        this->route[0].point[55][1] = 5;
    this->route[0].point[56][0] = 3;        this->route[0].point[56][1] = 7;
    this->route[0].point[57][0] = 1;        this->route[0].point[57][1] = 6;
    this->route[0].point[58][0] = 0;        this->route[0].point[58][1] = 4;
    this->route[0].point[59][0] = 2;        this->route[0].point[59][1] = 3;
    this->route[0].point[60][0] = 4;        this->route[0].point[60][1] = 4;
    this->route[0].point[61][0] = 5;        this->route[0].point[61][1] = 2;
    this->route[0].point[62][0] = 3;        this->route[0].point[62][1] = 3;
    this->route[0].point[63][0] = 1;        this->route[0].point[63][1] = 2;

    //1     26      15      24      59      44      13      46
    //16    23      64      55      14      47      58      43
    //27    2       25      60      53      56      45      12
    //22    17      54      63      48      37      42      57
    //3     28      21      52      61      50      11      38
    //18    31      62      49      36      39      8       41
    //29    4       33      20      51      6       35      10
    //32    19      30      5       34      9       40      7
    //stepOfHouse = 64

    //this->route[1].point[64][2] = {
    this->route[1].point[0][0] = 0;         this->route[1].point[0][1] = 1;
    this->route[1].point[1][0] = 2;         this->route[1].point[1][1] = 0;
    this->route[1].point[2][0] = 4;         this->route[1].point[2][1] = 1;
    this->route[1].point[3][0] = 6;         this->route[1].point[3][1] = 0;
    this->route[1].point[4][0] = 7;         this->route[1].point[4][1] = 2;
    this->route[1].point[5][0] = 6;         this->route[1].point[5][1] = 4;
    this->route[1].point[6][0] = 7;         this->route[1].point[6][1] = 6;
    this->route[1].point[7][0] = 5;         this->route[1].point[7][1] = 7;
    this->route[1].point[8][0] = 6;         this->route[1].point[8][1] = 5;
    this->route[1].point[9][0] = 7;         this->route[1].point[9][1] = 7;
    this->route[1].point[10][0] = 5;        this->route[1].point[10][1] = 6;
    this->route[1].point[11][0] = 7;        this->route[1].point[11][1] = 5;
    this->route[1].point[12][0] = 6;        this->route[1].point[12][1] = 7;
    this->route[1].point[13][0] = 4;        this->route[1].point[13][1] = 6;
    this->route[1].point[14][0] = 2;        this->route[1].point[14][1] = 7;
    this->route[1].point[15][0] = 0;        this->route[1].point[15][1] = 6;
    this->route[1].point[16][0] = 1;        this->route[1].point[16][1] = 4;
    this->route[1].point[17][0] = 0;        this->route[1].point[17][1] = 2;
    this->route[1].point[18][0] = 1;        this->route[1].point[18][1] = 0;
    this->route[1].point[19][0] = 2;        this->route[1].point[19][1] = 2;
    this->route[1].point[20][0] = 3;        this->route[1].point[20][1] = 0;
    this->route[1].point[21][0] = 1;        this->route[1].point[21][1] = 1;
    this->route[1].point[22][0] = 0;        this->route[1].point[22][1] = 3;
    this->route[1].point[23][0] = 1;        this->route[1].point[23][1] = 5;
    this->route[1].point[24][0] = 0;        this->route[1].point[24][1] = 7;
    this->route[1].point[25][0] = 2;        this->route[1].point[25][1] = 6;
    this->route[1].point[26][0] = 4;        this->route[1].point[26][1] = 7;
    this->route[1].point[27][0] = 6;        this->route[1].point[27][1] = 6;
    this->route[1].point[28][0] = 7;        this->route[1].point[28][1] = 4;
    this->route[1].point[29][0] = 6;        this->route[1].point[29][1] = 2;
    this->route[1].point[30][0] = 7;        this->route[1].point[30][1] = 0;
    this->route[1].point[31][0] = 5;        this->route[1].point[31][1] = 1;
    this->route[1].point[32][0] = 6;        this->route[1].point[32][1] = 3;
    this->route[1].point[33][0] = 7;        this->route[1].point[33][1] = 1;
    this->route[1].point[34][0] = 5;        this->route[1].point[34][1] = 0;
    this->route[1].point[35][0] = 3;        this->route[1].point[35][1] = 1;
    this->route[1].point[36][0] = 4;        this->route[1].point[36][1] = 3;
    this->route[1].point[37][0] = 5;        this->route[1].point[37][1] = 5;
    this->route[1].point[38][0] = 3;        this->route[1].point[38][1] = 6;
    this->route[1].point[39][0] = 1;        this->route[1].point[39][1] = 7;
    this->route[1].point[40][0] = 0;        this->route[1].point[40][1] = 5;
    this->route[1].point[41][0] = 2;        this->route[1].point[41][1] = 4;
    this->route[1].point[42][0] = 4;        this->route[1].point[42][1] = 5;
    this->route[1].point[43][0] = 3;        this->route[1].point[43][1] = 7;
    this->route[1].point[44][0] = 1;        this->route[1].point[44][1] = 6;
    this->route[1].point[45][0] = 3;        this->route[1].point[45][1] = 5;
    this->route[1].point[46][0] = 5;        this->route[1].point[46][1] = 4;
    this->route[1].point[47][0] = 7;        this->route[1].point[47][1] = 3;
    this->route[1].point[48][0] = 6;        this->route[1].point[48][1] = 1;
    this->route[1].point[49][0] = 5;        this->route[1].point[49][1] = 3;
    this->route[1].point[50][0] = 3;        this->route[1].point[50][1] = 4;
    this->route[1].point[51][0] = 4;        this->route[1].point[51][1] = 2;
    this->route[1].point[52][0] = 2;        this->route[1].point[52][1] = 3;
    this->route[1].point[53][0] = 0;        this->route[1].point[53][1] = 4;
    this->route[1].point[54][0] = 1;        this->route[1].point[54][1] = 2;
    this->route[1].point[55][0] = 0;        this->route[1].point[55][1] = 0;
    this->route[1].point[56][0] = 2;        this->route[1].point[56][1] = 1;
    this->route[1].point[57][0] = 4;        this->route[1].point[57][1] = 0;
    this->route[1].point[58][0] = 5;        this->route[1].point[58][1] = 2;
    this->route[1].point[59][0] = 3;        this->route[1].point[59][1] = 3;
    this->route[1].point[60][0] = 2;        this->route[1].point[60][1] = 5;
    this->route[1].point[61][0] = 4;        this->route[1].point[61][1] = 4;
    this->route[1].point[62][0] = 3;        this->route[1].point[62][1] = 2;
    this->route[1].point[63][0] = 1;        this->route[1].point[63][1] = 3;

    //56    1       18      23      54      41      16      25
    //19    22      55      64      17      24      45      40
    //2     57      20      53      42      61      26      15
    //21    36      63      60      51      46      39      44
    //58    3       52      37      62      43      14      27
    //35    32      59      50      47      38      11      8
    //4     49      30      33      6       9       28      13
    //31    34      5       48      29      12      7       10
    //stepOfHouse = 64

    //this->route[2].point[64][2] = {
    this->route[2].point[0][0] = 0;         this->route[2].point[0][1] = 2;
    this->route[2].point[1][0] = 1;         this->route[2].point[1][1] = 0;
    this->route[2].point[2][0] = 3;         this->route[2].point[2][1] = 1;
    this->route[2].point[3][0] = 5;         this->route[2].point[3][1] = 0;
    this->route[2].point[4][0] = 7;         this->route[2].point[4][1] = 1;
    this->route[2].point[5][0] = 6;         this->route[2].point[5][1] = 3;
    this->route[2].point[6][0] = 7;         this->route[2].point[6][1] = 5;
    this->route[2].point[7][0] = 6;         this->route[2].point[7][1] = 7;
    this->route[2].point[8][0] = 4;         this->route[2].point[8][1] = 6;
    this->route[2].point[9][0] = 2;         this->route[2].point[9][1] = 7;
    this->route[2].point[10][0] = 0;        this->route[2].point[10][1] = 6;
    this->route[2].point[11][0] = 1;        this->route[2].point[11][1] = 4;
    this->route[2].point[12][0] = 2;        this->route[2].point[12][1] = 6;
    this->route[2].point[13][0] = 0;        this->route[2].point[13][1] = 7;
    this->route[2].point[14][0] = 1;        this->route[2].point[14][1] = 5;
    this->route[2].point[15][0] = 0;        this->route[2].point[15][1] = 3;
    this->route[2].point[16][0] = 1;        this->route[2].point[16][1] = 1;
    this->route[2].point[17][0] = 3;        this->route[2].point[17][1] = 0;
    this->route[2].point[18][0] = 5;        this->route[2].point[18][1] = 1;
    this->route[2].point[19][0] = 7;        this->route[2].point[19][1] = 0;
    this->route[2].point[20][0] = 6;        this->route[2].point[20][1] = 2;
    this->route[2].point[21][0] = 7;        this->route[2].point[21][1] = 4;
    this->route[2].point[22][0] = 6;        this->route[2].point[22][1] = 6;
    this->route[2].point[23][0] = 4;        this->route[2].point[23][1] = 7;
    this->route[2].point[24][0] = 5;        this->route[2].point[24][1] = 5;
    this->route[2].point[25][0] = 7;        this->route[2].point[25][1] = 6;
    this->route[2].point[26][0] = 5;        this->route[2].point[26][1] = 7;
    this->route[2].point[27][0] = 3;        this->route[2].point[27][1] = 6;
    this->route[2].point[28][0] = 1;        this->route[2].point[28][1] = 7;
    this->route[2].point[29][0] = 0;        this->route[2].point[29][1] = 5;
    this->route[2].point[30][0] = 2;        this->route[2].point[30][1] = 4;
    this->route[2].point[31][0] = 4;        this->route[2].point[31][1] = 3;
    this->route[2].point[32][0] = 2;        this->route[2].point[32][1] = 2;
    this->route[2].point[33][0] = 0;        this->route[2].point[33][1] = 1;
    this->route[2].point[34][0] = 2;        this->route[2].point[34][1] = 0;
    this->route[2].point[35][0] = 4;        this->route[2].point[35][1] = 1;
    this->route[2].point[36][0] = 6;        this->route[2].point[36][1] = 0;
    this->route[2].point[37][0] = 7;        this->route[2].point[37][1] = 2;
    this->route[2].point[38][0] = 6;        this->route[2].point[38][1] = 4;
    this->route[2].point[39][0] = 4;        this->route[2].point[39][1] = 5;
    this->route[2].point[40][0] = 3;        this->route[2].point[40][1] = 7;
    this->route[2].point[41][0] = 1;        this->route[2].point[41][1] = 6;
    this->route[2].point[42][0] = 3;        this->route[2].point[42][1] = 5;
    this->route[2].point[43][0] = 5;        this->route[2].point[43][1] = 6;
    this->route[2].point[44][0] = 7;        this->route[2].point[44][1] = 7;
    this->route[2].point[45][0] = 6;        this->route[2].point[45][1] = 5;
    this->route[2].point[46][0] = 7;        this->route[2].point[46][1] = 3;
    this->route[2].point[47][0] = 5;        this->route[2].point[47][1] = 4;
    this->route[2].point[48][0] = 4;        this->route[2].point[48][1] = 2;
    this->route[2].point[49][0] = 6;        this->route[2].point[49][1] = 1;
    this->route[2].point[50][0] = 5;        this->route[2].point[50][1] = 3;
    this->route[2].point[51][0] = 3;        this->route[2].point[51][1] = 4;
    this->route[2].point[52][0] = 1;        this->route[2].point[52][1] = 3;
    this->route[2].point[53][0] = 3;        this->route[2].point[53][1] = 2;
    this->route[2].point[54][0] = 4;        this->route[2].point[54][1] = 0;
    this->route[2].point[55][0] = 5;        this->route[2].point[55][1] = 2;
    this->route[2].point[56][0] = 4;        this->route[2].point[56][1] = 4;
    this->route[2].point[57][0] = 2;        this->route[2].point[57][1] = 5;
    this->route[2].point[58][0] = 3;        this->route[2].point[58][1] = 3;
    this->route[2].point[59][0] = 2;        this->route[2].point[59][1] = 1;
    this->route[2].point[60][0] = 0;        this->route[2].point[60][1] = 0;
    this->route[2].point[61][0] = 1;        this->route[2].point[61][1] = 2;
    this->route[2].point[62][0] = 0;        this->route[2].point[62][1] = 4;
    this->route[2].point[63][0] = 2;        this->route[2].point[63][1] = 3;

    //61    34      1       16      63      30      11      14
    //2     17      62      53      12      15      42      29
    //35    60      33      64      31      58      13      10
    //18    3       54      59      52      43      28      41
    //55    36      49      32      57      40      9       24
    //4     19      56      51      48      25      44      27
    //37    50      21      6       39      46      23      8
    //20    5       38      47      22      7       26      45
    //stepOfHouse = 64

    //this->route[3].point[64][2] = {
    this->route[3].point[0][0] = 0;         this->route[3].point[0][1] = 3;
    this->route[3].point[1][0] = 1;         this->route[3].point[1][1] = 1;
    this->route[3].point[2][0] = 3;         this->route[3].point[2][1] = 0;
    this->route[3].point[3][0] = 5;         this->route[3].point[3][1] = 1;
    this->route[3].point[4][0] = 7;         this->route[3].point[4][1] = 0;
    this->route[3].point[5][0] = 6;         this->route[3].point[5][1] = 2;
    this->route[3].point[6][0] = 7;         this->route[3].point[6][1] = 4;
    this->route[3].point[7][0] = 6;         this->route[3].point[7][1] = 6;
    this->route[3].point[8][0] = 4;         this->route[3].point[8][1] = 7;
    this->route[3].point[9][0] = 2;         this->route[3].point[9][1] = 6;
    this->route[3].point[10][0] = 0;        this->route[3].point[10][1] = 7;
    this->route[3].point[11][0] = 1;        this->route[3].point[11][1] = 5;
    this->route[3].point[12][0] = 2;        this->route[3].point[12][1] = 7;
    this->route[3].point[13][0] = 0;        this->route[3].point[13][1] = 6;
    this->route[3].point[14][0] = 1;        this->route[3].point[14][1] = 4;
    this->route[3].point[15][0] = 0;        this->route[3].point[15][1] = 2;
    this->route[3].point[16][0] = 1;        this->route[3].point[16][1] = 0;
    this->route[3].point[17][0] = 2;        this->route[3].point[17][1] = 2;
    this->route[3].point[18][0] = 0;        this->route[3].point[18][1] = 1;
    this->route[3].point[19][0] = 2;        this->route[3].point[19][1] = 0;
    this->route[3].point[20][0] = 4;        this->route[3].point[20][1] = 1;
    this->route[3].point[21][0] = 6;        this->route[3].point[21][1] = 0;
    this->route[3].point[22][0] = 7;        this->route[3].point[22][1] = 2;
    this->route[3].point[23][0] = 6;        this->route[3].point[23][1] = 4;
    this->route[3].point[24][0] = 7;        this->route[3].point[24][1] = 6;
    this->route[3].point[25][0] = 5;        this->route[3].point[25][1] = 7;
    this->route[3].point[26][0] = 4;        this->route[3].point[26][1] = 5;
    this->route[3].point[27][0] = 3;        this->route[3].point[27][1] = 7;
    this->route[3].point[28][0] = 1;        this->route[3].point[28][1] = 6;
    this->route[3].point[29][0] = 0;        this->route[3].point[29][1] = 4;
    this->route[3].point[30][0] = 2;        this->route[3].point[30][1] = 3;
    this->route[3].point[31][0] = 3;        this->route[3].point[31][1] = 5;
    this->route[3].point[32][0] = 5;        this->route[3].point[32][1] = 6;
    this->route[3].point[33][0] = 7;        this->route[3].point[33][1] = 7;
    this->route[3].point[34][0] = 6;        this->route[3].point[34][1] = 5;
    this->route[3].point[35][0] = 7;        this->route[3].point[35][1] = 3;
    this->route[3].point[36][0] = 6;        this->route[3].point[36][1] = 1;
    this->route[3].point[37][0] = 5;        this->route[3].point[37][1] = 3;
    this->route[3].point[38][0] = 3;        this->route[3].point[38][1] = 4;
    this->route[3].point[39][0] = 5;        this->route[3].point[39][1] = 5;
    this->route[3].point[40][0] = 6;        this->route[3].point[40][1] = 7;
    this->route[3].point[41][0] = 7;        this->route[3].point[41][1] = 5;
    this->route[3].point[42][0] = 6;        this->route[3].point[42][1] = 3;
    this->route[3].point[43][0] = 7;        this->route[3].point[43][1] = 1;
    this->route[3].point[44][0] = 5;        this->route[3].point[44][1] = 0;
    this->route[3].point[45][0] = 4;        this->route[3].point[45][1] = 2;
    this->route[3].point[46][0] = 5;        this->route[3].point[46][1] = 4;
    this->route[3].point[47][0] = 4;        this->route[3].point[47][1] = 6;
    this->route[3].point[48][0] = 2;        this->route[3].point[48][1] = 5;
    this->route[3].point[49][0] = 4;        this->route[3].point[49][1] = 4;
    this->route[3].point[50][0] = 3;        this->route[3].point[50][1] = 6;
    this->route[3].point[51][0] = 1;        this->route[3].point[51][1] = 7;
    this->route[3].point[52][0] = 0;        this->route[3].point[52][1] = 5;
    this->route[3].point[53][0] = 1;        this->route[3].point[53][1] = 3;
    this->route[3].point[54][0] = 3;        this->route[3].point[54][1] = 2;
    this->route[3].point[55][0] = 4;        this->route[3].point[55][1] = 0;
    this->route[3].point[56][0] = 5;        this->route[3].point[56][1] = 2;
    this->route[3].point[57][0] = 3;        this->route[3].point[57][1] = 3;
    this->route[3].point[58][0] = 2;        this->route[3].point[58][1] = 1;
    this->route[3].point[59][0] = 0;        this->route[3].point[59][1] = 0;
    this->route[3].point[60][0] = 1;        this->route[3].point[60][1] = 2;
    this->route[3].point[61][0] = 3;        this->route[3].point[61][1] = 1;
    this->route[3].point[62][0] = 4;        this->route[3].point[62][1] = 3;
    this->route[3].point[63][0] = 2;        this->route[3].point[63][1] = 4;

    //60    19      16      1       30      53      14      11
    //17    2       61      54      15      12      29      52
    //20    59      18      31      64      49      10      13
    //3     62      55      58      39      32      51      28
    //56    21      46      63      50      27      48      9
    //45    4       57      38      47      40      33      26
    //22    37      6       43      24      35      8       41
    //5     44      23      36      7       42      25      34
    //stepOfHouse = 64

    //this->route[4].point[64][2] = {
    this->route[4].point[0][0] = 0;         this->route[4].point[0][1] = 4;
    this->route[4].point[1][0] = 1;         this->route[4].point[1][1] = 6;
    this->route[4].point[2][0] = 3;         this->route[4].point[2][1] = 7;
    this->route[4].point[3][0] = 5;         this->route[4].point[3][1] = 6;
    this->route[4].point[4][0] = 7;         this->route[4].point[4][1] = 7;
    this->route[4].point[5][0] = 6;         this->route[4].point[5][1] = 5;
    this->route[4].point[6][0] = 7;         this->route[4].point[6][1] = 3;
    this->route[4].point[7][0] = 6;         this->route[4].point[7][1] = 1;
    this->route[4].point[8][0] = 4;         this->route[4].point[8][1] = 0;
    this->route[4].point[9][0] = 2;         this->route[4].point[9][1] = 1;
    this->route[4].point[10][0] = 0;        this->route[4].point[10][1] = 0;
    this->route[4].point[11][0] = 1;        this->route[4].point[11][1] = 2;
    this->route[4].point[12][0] = 2;        this->route[4].point[12][1] = 0;
    this->route[4].point[13][0] = 0;        this->route[4].point[13][1] = 1;
    this->route[4].point[14][0] = 1;        this->route[4].point[14][1] = 3;
    this->route[4].point[15][0] = 0;        this->route[4].point[15][1] = 5;
    this->route[4].point[16][0] = 1;        this->route[4].point[16][1] = 7;
    this->route[4].point[17][0] = 2;        this->route[4].point[17][1] = 5;
    this->route[4].point[18][0] = 0;        this->route[4].point[18][1] = 6;
    this->route[4].point[19][0] = 2;        this->route[4].point[19][1] = 7;
    this->route[4].point[20][0] = 4;        this->route[4].point[20][1] = 6;
    this->route[4].point[21][0] = 6;        this->route[4].point[21][1] = 7;
    this->route[4].point[22][0] = 7;        this->route[4].point[22][1] = 5;
    this->route[4].point[23][0] = 6;        this->route[4].point[23][1] = 3;
    this->route[4].point[24][0] = 7;        this->route[4].point[24][1] = 1;
    this->route[4].point[25][0] = 5;        this->route[4].point[25][1] = 0;
    this->route[4].point[26][0] = 4;        this->route[4].point[26][1] = 2;
    this->route[4].point[27][0] = 3;        this->route[4].point[27][1] = 0;
    this->route[4].point[28][0] = 1;        this->route[4].point[28][1] = 1;
    this->route[4].point[29][0] = 0;        this->route[4].point[29][1] = 3;
    this->route[4].point[30][0] = 2;        this->route[4].point[30][1] = 4;
    this->route[4].point[31][0] = 3;        this->route[4].point[31][1] = 2;
    this->route[4].point[32][0] = 5;        this->route[4].point[32][1] = 1;
    this->route[4].point[33][0] = 7;        this->route[4].point[33][1] = 0;
    this->route[4].point[34][0] = 6;        this->route[4].point[34][1] = 2;
    this->route[4].point[35][0] = 7;        this->route[4].point[35][1] = 4;
    this->route[4].point[36][0] = 5;        this->route[4].point[36][1] = 5;
    this->route[4].point[37][0] = 4;        this->route[4].point[37][1] = 3;
    this->route[4].point[38][0] = 3;        this->route[4].point[38][1] = 1;
    this->route[4].point[39][0] = 5;        this->route[4].point[39][1] = 2;
    this->route[4].point[40][0] = 6;        this->route[4].point[40][1] = 0;
    this->route[4].point[41][0] = 7;        this->route[4].point[41][1] = 2;
    this->route[4].point[42][0] = 6;        this->route[4].point[42][1] = 4;
    this->route[4].point[43][0] = 7;        this->route[4].point[43][1] = 6;
    this->route[4].point[44][0] = 5;        this->route[4].point[44][1] = 7;
    this->route[4].point[45][0] = 4;        this->route[4].point[45][1] = 5;
    this->route[4].point[46][0] = 6;        this->route[4].point[46][1] = 6;
    this->route[4].point[47][0] = 5;        this->route[4].point[47][1] = 4;
    this->route[4].point[48][0] = 3;        this->route[4].point[48][1] = 3;
    this->route[4].point[49][0] = 4;        this->route[4].point[49][1] = 1;
    this->route[4].point[50][0] = 5;        this->route[4].point[50][1] = 3;
    this->route[4].point[51][0] = 3;        this->route[4].point[51][1] = 4;
    this->route[4].point[52][0] = 2;        this->route[4].point[52][1] = 2;
    this->route[4].point[53][0] = 1;        this->route[4].point[53][1] = 0;
    this->route[4].point[54][0] = 0;        this->route[4].point[54][1] = 2;
    this->route[4].point[55][0] = 1;        this->route[4].point[55][1] = 4;
    this->route[4].point[56][0] = 3;        this->route[4].point[56][1] = 5;
    this->route[4].point[57][0] = 4;        this->route[4].point[57][1] = 7;
    this->route[4].point[58][0] = 2;        this->route[4].point[58][1] = 6;
    this->route[4].point[59][0] = 0;        this->route[4].point[59][1] = 7;
    this->route[4].point[60][0] = 1;        this->route[4].point[60][1] = 5;
    this->route[4].point[61][0] = 3;        this->route[4].point[61][1] = 6;
    this->route[4].point[62][0] = 4;        this->route[4].point[62][1] = 4;
    this->route[4].point[63][0] = 2;        this->route[4].point[63][1] = 3;

    //11    14      55      30      1       16      19      60
    //54    29      12      15      56      61      2       17
    //13    10      53      64      31      18      59      20
    //28    39      32      49      52      57      62      3
    //9     50      27      38      63      46      21      58
    //26    33      40      51      48      37      4       45
    //41    8       35      24      43      6       47      22
    //34    25      42      7       36      23      44      5
    //stepOfHouse = 64

    //this->route[5].point[64][2] = {
    this->route[5].point[0][0] = 0;         this->route[5].point[0][1] = 5;
    this->route[5].point[1][0] = 1;         this->route[5].point[1][1] = 7;
    this->route[5].point[2][0] = 3;         this->route[5].point[2][1] = 6;
    this->route[5].point[3][0] = 5;         this->route[5].point[3][1] = 7;
    this->route[5].point[4][0] = 7;         this->route[5].point[4][1] = 6;
    this->route[5].point[5][0] = 6;         this->route[5].point[5][1] = 4;
    this->route[5].point[6][0] = 7;         this->route[5].point[6][1] = 2;
    this->route[5].point[7][0] = 6;         this->route[5].point[7][1] = 0;
    this->route[5].point[8][0] = 4;         this->route[5].point[8][1] = 1;
    this->route[5].point[9][0] = 2;         this->route[5].point[9][1] = 0;
    this->route[5].point[10][0] = 0;        this->route[5].point[10][1] = 1;
    this->route[5].point[11][0] = 1;        this->route[5].point[11][1] = 3;
    this->route[5].point[12][0] = 2;        this->route[5].point[12][1] = 1;
    this->route[5].point[13][0] = 0;        this->route[5].point[13][1] = 0;
    this->route[5].point[14][0] = 1;        this->route[5].point[14][1] = 2;
    this->route[5].point[15][0] = 0;        this->route[5].point[15][1] = 4;
    this->route[5].point[16][0] = 1;        this->route[5].point[16][1] = 6;
    this->route[5].point[17][0] = 3;        this->route[5].point[17][1] = 7;
    this->route[5].point[18][0] = 5;        this->route[5].point[18][1] = 6;
    this->route[5].point[19][0] = 7;        this->route[5].point[19][1] = 7;
    this->route[5].point[20][0] = 6;        this->route[5].point[20][1] = 5;
    this->route[5].point[21][0] = 7;        this->route[5].point[21][1] = 3;
    this->route[5].point[22][0] = 6;        this->route[5].point[22][1] = 1;
    this->route[5].point[23][0] = 4;        this->route[5].point[23][1] = 0;
    this->route[5].point[24][0] = 5;        this->route[5].point[24][1] = 2;
    this->route[5].point[25][0] = 7;        this->route[5].point[25][1] = 1;
    this->route[5].point[26][0] = 5;        this->route[5].point[26][1] = 0;
    this->route[5].point[27][0] = 3;        this->route[5].point[27][1] = 1;
    this->route[5].point[28][0] = 1;        this->route[5].point[28][1] = 0;
    this->route[5].point[29][0] = 0;        this->route[5].point[29][1] = 2;
    this->route[5].point[30][0] = 2;        this->route[5].point[30][1] = 3;
    this->route[5].point[31][0] = 4;        this->route[5].point[31][1] = 4;
    this->route[5].point[32][0] = 2;        this->route[5].point[32][1] = 5;
    this->route[5].point[33][0] = 0;        this->route[5].point[33][1] = 6;
    this->route[5].point[34][0] = 2;        this->route[5].point[34][1] = 7;
    this->route[5].point[35][0] = 4;        this->route[5].point[35][1] = 6;
    this->route[5].point[36][0] = 6;        this->route[5].point[36][1] = 7;
    this->route[5].point[37][0] = 7;        this->route[5].point[37][1] = 5;
    this->route[5].point[38][0] = 6;        this->route[5].point[38][1] = 3;
    this->route[5].point[39][0] = 4;        this->route[5].point[39][1] = 2;
    this->route[5].point[40][0] = 3;        this->route[5].point[40][1] = 0;
    this->route[5].point[41][0] = 1;        this->route[5].point[41][1] = 1;
    this->route[5].point[42][0] = 3;        this->route[5].point[42][1] = 2;
    this->route[5].point[43][0] = 5;        this->route[5].point[43][1] = 3;
    this->route[5].point[44][0] = 7;        this->route[5].point[44][1] = 4;
    this->route[5].point[45][0] = 6;        this->route[5].point[45][1] = 6;
    this->route[5].point[46][0] = 5;        this->route[5].point[46][1] = 4;
    this->route[5].point[47][0] = 6;        this->route[5].point[47][1] = 2;
    this->route[5].point[48][0] = 7;        this->route[5].point[48][1] = 0;
    this->route[5].point[49][0] = 5;        this->route[5].point[49][1] = 1;
    this->route[5].point[50][0] = 4;        this->route[5].point[50][1] = 3;
    this->route[5].point[51][0] = 5;        this->route[5].point[51][1] = 5;
    this->route[5].point[52][0] = 4;        this->route[5].point[52][1] = 7;
    this->route[5].point[53][0] = 3;        this->route[5].point[53][1] = 5;
    this->route[5].point[54][0] = 1;        this->route[5].point[54][1] = 4;
    this->route[5].point[55][0] = 3;        this->route[5].point[55][1] = 3;
    this->route[5].point[56][0] = 4;        this->route[5].point[56][1] = 5;
    this->route[5].point[57][0] = 2;        this->route[5].point[57][1] = 6;
    this->route[5].point[58][0] = 0;        this->route[5].point[58][1] = 7;
    this->route[5].point[59][0] = 1;        this->route[5].point[59][1] = 5;
    this->route[5].point[60][0] = 3;        this->route[5].point[60][1] = 4;
    this->route[5].point[61][0] = 2;        this->route[5].point[61][1] = 2;
    this->route[5].point[62][0] = 0;        this->route[5].point[62][1] = 3;
    this->route[5].point[63][0] = 2;        this->route[5].point[63][1] = 4;

    //14    11      30      63      16      1       34      59
    //29    42      15      12      55      60      17      2
    //10    13      62      31      64      33      58      35
    //41    28      43      56      61      54      3       18
    //24    9       40      51      32      57      36      53
    //27    50      25      44      47      52      19      4
    //8     23      48      39      6       21      46      37
    //49    26      7       22      45      38      5       20
    //stepOfHouse = 64

    //this->route[6].point[64][2] = {
    this->route[6].point[0][0] = 0;         this->route[6].point[0][1] = 6;
    this->route[6].point[1][0] = 2;         this->route[6].point[1][1] = 7;
    this->route[6].point[2][0] = 4;         this->route[6].point[2][1] = 6;
    this->route[6].point[3][0] = 6;         this->route[6].point[3][1] = 7;
    this->route[6].point[4][0] = 7;         this->route[6].point[4][1] = 5;
    this->route[6].point[5][0] = 6;         this->route[6].point[5][1] = 3;
    this->route[6].point[6][0] = 7;         this->route[6].point[6][1] = 1;
    this->route[6].point[7][0] = 5;         this->route[6].point[7][1] = 0;
    this->route[6].point[8][0] = 6;         this->route[6].point[8][1] = 2;
    this->route[6].point[9][0] = 7;         this->route[6].point[9][1] = 0;
    this->route[6].point[10][0] = 5;        this->route[6].point[10][1] = 1;
    this->route[6].point[11][0] = 7;        this->route[6].point[11][1] = 2;
    this->route[6].point[12][0] = 6;        this->route[6].point[12][1] = 0;
    this->route[6].point[13][0] = 4;        this->route[6].point[13][1] = 1;
    this->route[6].point[14][0] = 2;        this->route[6].point[14][1] = 0;
    this->route[6].point[15][0] = 0;        this->route[6].point[15][1] = 1;
    this->route[6].point[16][0] = 1;        this->route[6].point[16][1] = 3;
    this->route[6].point[17][0] = 0;        this->route[6].point[17][1] = 5;
    this->route[6].point[18][0] = 1;        this->route[6].point[18][1] = 7;
    this->route[6].point[19][0] = 2;        this->route[6].point[19][1] = 5;
    this->route[6].point[20][0] = 3;        this->route[6].point[20][1] = 7;
    this->route[6].point[21][0] = 1;        this->route[6].point[21][1] = 6;
    this->route[6].point[22][0] = 0;        this->route[6].point[22][1] = 4;
    this->route[6].point[23][0] = 1;        this->route[6].point[23][1] = 2;
    this->route[6].point[24][0] = 0;        this->route[6].point[24][1] = 0;
    this->route[6].point[25][0] = 2;        this->route[6].point[25][1] = 1;
    this->route[6].point[26][0] = 4;        this->route[6].point[26][1] = 0;
    this->route[6].point[27][0] = 6;        this->route[6].point[27][1] = 1;
    this->route[6].point[28][0] = 7;        this->route[6].point[28][1] = 3;
    this->route[6].point[29][0] = 6;        this->route[6].point[29][1] = 5;
    this->route[6].point[30][0] = 7;        this->route[6].point[30][1] = 7;
    this->route[6].point[31][0] = 5;        this->route[6].point[31][1] = 6;
    this->route[6].point[32][0] = 6;        this->route[6].point[32][1] = 4;
    this->route[6].point[33][0] = 7;        this->route[6].point[33][1] = 6;
    this->route[6].point[34][0] = 5;        this->route[6].point[34][1] = 7;
    this->route[6].point[35][0] = 3;        this->route[6].point[35][1] = 6;
    this->route[6].point[36][0] = 4;        this->route[6].point[36][1] = 4;
    this->route[6].point[37][0] = 5;        this->route[6].point[37][1] = 2;
    this->route[6].point[38][0] = 3;        this->route[6].point[38][1] = 3;
    this->route[6].point[39][0] = 5;        this->route[6].point[39][1] = 4;
    this->route[6].point[40][0] = 6;        this->route[6].point[40][1] = 6;
    this->route[6].point[41][0] = 7;        this->route[6].point[41][1] = 4;
    this->route[6].point[42][0] = 5;        this->route[6].point[42][1] = 5;
    this->route[6].point[43][0] = 4;        this->route[6].point[43][1] = 7;
    this->route[6].point[44][0] = 3;        this->route[6].point[44][1] = 5;
    this->route[6].point[45][0] = 4;        this->route[6].point[45][1] = 3;
    this->route[6].point[46][0] = 3;        this->route[6].point[46][1] = 1;
    this->route[6].point[47][0] = 1;        this->route[6].point[47][1] = 0;
    this->route[6].point[48][0] = 0;        this->route[6].point[48][1] = 2;
    this->route[6].point[49][0] = 2;        this->route[6].point[49][1] = 3;
    this->route[6].point[50][0] = 4;        this->route[6].point[50][1] = 2;
    this->route[6].point[51][0] = 3;        this->route[6].point[51][1] = 0;
    this->route[6].point[52][0] = 1;        this->route[6].point[52][1] = 1;
    this->route[6].point[53][0] = 3;        this->route[6].point[53][1] = 2;
    this->route[6].point[54][0] = 5;        this->route[6].point[54][1] = 3;
    this->route[6].point[55][0] = 4;        this->route[6].point[55][1] = 5;
    this->route[6].point[56][0] = 2;        this->route[6].point[56][1] = 4;
    this->route[6].point[57][0] = 0;        this->route[6].point[57][1] = 3;
    this->route[6].point[58][0] = 2;        this->route[6].point[58][1] = 2;
    this->route[6].point[59][0] = 3;        this->route[6].point[59][1] = 4;
    this->route[6].point[60][0] = 1;        this->route[6].point[60][1] = 5;
    this->route[6].point[61][0] = 0;        this->route[6].point[61][1] = 7;
    this->route[6].point[62][0] = 2;        this->route[6].point[62][1] = 6;
    this->route[6].point[63][0] = 1;        this->route[6].point[63][1] = 4;

    //25    16      49      58      23      18      1       62
    //48    53      24      17      64      61      22      19
    //15    26      59      50      57      20      63      2
    //52    47      54      39      60      45      36      21
    //27    14      51      46      37      56      3       44
    //8     11      38      55      40      43      32      35
    //13    28      9       6       33      30      41      4
    //10    7       12      29      42      5       34      31
    //stepOfHouse = 64

    //this->route[7].point[64][2] = {
    this->route[7].point[0][0] = 0;         this->route[7].point[0][1] = 7;
    this->route[7].point[1][0] = 2;         this->route[7].point[1][1] = 6;
    this->route[7].point[2][0] = 4;         this->route[7].point[2][1] = 7;
    this->route[7].point[3][0] = 6;         this->route[7].point[3][1] = 6;
    this->route[7].point[4][0] = 7;         this->route[7].point[4][1] = 4;
    this->route[7].point[5][0] = 6;         this->route[7].point[5][1] = 2;
    this->route[7].point[6][0] = 7;         this->route[7].point[6][1] = 0;
    this->route[7].point[7][0] = 5;         this->route[7].point[7][1] = 1;
    this->route[7].point[8][0] = 7;         this->route[7].point[8][1] = 2;
    this->route[7].point[9][0] = 6;         this->route[7].point[9][1] = 0;
    this->route[7].point[10][0] = 4;        this->route[7].point[10][1] = 1;
    this->route[7].point[11][0] = 2;        this->route[7].point[11][1] = 0;
    this->route[7].point[12][0] = 0;        this->route[7].point[12][1] = 1;
    this->route[7].point[13][0] = 1;        this->route[7].point[13][1] = 3;
    this->route[7].point[14][0] = 0;        this->route[7].point[14][1] = 5;
    this->route[7].point[15][0] = 1;        this->route[7].point[15][1] = 7;
    this->route[7].point[16][0] = 3;        this->route[7].point[16][1] = 6;
    this->route[7].point[17][0] = 5;        this->route[7].point[17][1] = 7;
    this->route[7].point[18][0] = 7;        this->route[7].point[18][1] = 6;
    this->route[7].point[19][0] = 6;        this->route[7].point[19][1] = 4;
    this->route[7].point[20][0] = 4;        this->route[7].point[20][1] = 5;
    this->route[7].point[21][0] = 3;        this->route[7].point[21][1] = 7;
    this->route[7].point[22][0] = 1;        this->route[7].point[22][1] = 6;
    this->route[7].point[23][0] = 0;        this->route[7].point[23][1] = 4;
    this->route[7].point[24][0] = 2;        this->route[7].point[24][1] = 5;
    this->route[7].point[25][0] = 0;        this->route[7].point[25][1] = 6;
    this->route[7].point[26][0] = 2;        this->route[7].point[26][1] = 7;
    this->route[7].point[27][0] = 4;        this->route[7].point[27][1] = 6;
    this->route[7].point[28][0] = 6;        this->route[7].point[28][1] = 7;
    this->route[7].point[29][0] = 7;        this->route[7].point[29][1] = 5;
    this->route[7].point[30][0] = 5;        this->route[7].point[30][1] = 6;
    this->route[7].point[31][0] = 7;        this->route[7].point[31][1] = 7;
    this->route[7].point[32][0] = 6;        this->route[7].point[32][1] = 5;
    this->route[7].point[33][0] = 7;        this->route[7].point[33][1] = 3;
    this->route[7].point[34][0] = 6;        this->route[7].point[34][1] = 1;
    this->route[7].point[35][0] = 5;        this->route[7].point[35][1] = 3;
    this->route[7].point[36][0] = 3;        this->route[7].point[36][1] = 4;
    this->route[7].point[37][0] = 5;        this->route[7].point[37][1] = 5;
    this->route[7].point[38][0] = 6;        this->route[7].point[38][1] = 3;
    this->route[7].point[39][0] = 7;        this->route[7].point[39][1] = 1;
    this->route[7].point[40][0] = 5;        this->route[7].point[40][1] = 0;
    this->route[7].point[41][0] = 4;        this->route[7].point[41][1] = 2;
    this->route[7].point[42][0] = 5;        this->route[7].point[42][1] = 4;
    this->route[7].point[43][0] = 3;        this->route[7].point[43][1] = 5;
    this->route[7].point[44][0] = 4;        this->route[7].point[44][1] = 3;
    this->route[7].point[45][0] = 2;        this->route[7].point[45][1] = 4;
    this->route[7].point[46][0] = 3;        this->route[7].point[46][1] = 2;
    this->route[7].point[47][0] = 4;        this->route[7].point[47][1] = 4;
    this->route[7].point[48][0] = 5;        this->route[7].point[48][1] = 2;
    this->route[7].point[49][0] = 4;        this->route[7].point[49][1] = 0;
    this->route[7].point[50][0] = 2;        this->route[7].point[50][1] = 1;
    this->route[7].point[51][0] = 0;        this->route[7].point[51][1] = 0;
    this->route[7].point[52][0] = 1;        this->route[7].point[52][1] = 2;
    this->route[7].point[53][0] = 3;        this->route[7].point[53][1] = 3;
    this->route[7].point[54][0] = 1;        this->route[7].point[54][1] = 4;
    this->route[7].point[55][0] = 0;        this->route[7].point[55][1] = 2;
    this->route[7].point[56][0] = 2;        this->route[7].point[56][1] = 3;
    this->route[7].point[57][0] = 3;        this->route[7].point[57][1] = 1;
    this->route[7].point[58][0] = 1;        this->route[7].point[58][1] = 0;
    this->route[7].point[59][0] = 2;        this->route[7].point[59][1] = 2;
    this->route[7].point[60][0] = 3;        this->route[7].point[60][1] = 0;
    this->route[7].point[61][0] = 1;        this->route[7].point[61][1] = 1;
    this->route[7].point[62][0] = 0;        this->route[7].point[62][1] = 3;
    this->route[7].point[63][0] = 1;        this->route[7].point[63][1] = 5;

    //52    13      56      63      24      15      26      1
    //59    62      53      14      55      64      23      16
    //12    51      60      57      46      25      2       27
    //61    58      47      54      37      44      17      22
    //50    11      42      45      48      21      28      3
    //41    8       49      36      43      38      31      18
    //10    35      6       39      20      33      4       29
    //7     40      9       34      5       30      19      32
    //stepOfHouse = 64

    //this->route[8].point[64][2] = {
    this->route[8].point[0][0] = 1;         this->route[8].point[0][1] = 0;
    this->route[8].point[1][0] = 0;         this->route[8].point[1][1] = 2;
    this->route[8].point[2][0] = 2;         this->route[8].point[2][1] = 1;
    this->route[8].point[3][0] = 0;         this->route[8].point[3][1] = 0;
    this->route[8].point[4][0] = 1;         this->route[8].point[4][1] = 2;
    this->route[8].point[5][0] = 2;         this->route[8].point[5][1] = 0;
    this->route[8].point[6][0] = 0;         this->route[8].point[6][1] = 1;
    this->route[8].point[7][0] = 1;         this->route[8].point[7][1] = 3;
    this->route[8].point[8][0] = 0;         this->route[8].point[8][1] = 5;
    this->route[8].point[9][0] = 1;         this->route[8].point[9][1] = 7;
    this->route[8].point[10][0] = 3;        this->route[8].point[10][1] = 6;
    this->route[8].point[11][0] = 5;        this->route[8].point[11][1] = 7;
    this->route[8].point[12][0] = 7;        this->route[8].point[12][1] = 6;
    this->route[8].point[13][0] = 6;        this->route[8].point[13][1] = 4;
    this->route[8].point[14][0] = 7;        this->route[8].point[14][1] = 2;
    this->route[8].point[15][0] = 6;        this->route[8].point[15][1] = 0;
    this->route[8].point[16][0] = 4;        this->route[8].point[16][1] = 1;
    this->route[8].point[17][0] = 6;        this->route[8].point[17][1] = 2;
    this->route[8].point[18][0] = 7;        this->route[8].point[18][1] = 0;
    this->route[8].point[19][0] = 5;        this->route[8].point[19][1] = 1;
    this->route[8].point[20][0] = 3;        this->route[8].point[20][1] = 0;
    this->route[8].point[21][0] = 1;        this->route[8].point[21][1] = 1;
    this->route[8].point[22][0] = 0;        this->route[8].point[22][1] = 3;
    this->route[8].point[23][0] = 2;        this->route[8].point[23][1] = 2;
    this->route[8].point[24][0] = 4;        this->route[8].point[24][1] = 3;
    this->route[8].point[25][0] = 5;        this->route[8].point[25][1] = 5;
    this->route[8].point[26][0] = 7;        this->route[8].point[26][1] = 4;
    this->route[8].point[27][0] = 6;        this->route[8].point[27][1] = 6;
    this->route[8].point[28][0] = 4;        this->route[8].point[28][1] = 7;
    this->route[8].point[29][0] = 2;        this->route[8].point[29][1] = 6;
    this->route[8].point[30][0] = 0;        this->route[8].point[30][1] = 7;
    this->route[8].point[31][0] = 1;        this->route[8].point[31][1] = 5;
    this->route[8].point[32][0] = 3;        this->route[8].point[32][1] = 4;
    this->route[8].point[33][0] = 5;        this->route[8].point[33][1] = 3;
    this->route[8].point[34][0] = 6;        this->route[8].point[34][1] = 1;
    this->route[8].point[35][0] = 4;        this->route[8].point[35][1] = 0;
    this->route[8].point[36][0] = 3;        this->route[8].point[36][1] = 2;
    this->route[8].point[37][0] = 2;        this->route[8].point[37][1] = 4;
    this->route[8].point[38][0] = 4;        this->route[8].point[38][1] = 5;
    this->route[8].point[39][0] = 3;        this->route[8].point[39][1] = 7;
    this->route[8].point[40][0] = 1;        this->route[8].point[40][1] = 6;
    this->route[8].point[41][0] = 0;        this->route[8].point[41][1] = 4;
    this->route[8].point[42][0] = 2;        this->route[8].point[42][1] = 5;
    this->route[8].point[43][0] = 0;        this->route[8].point[43][1] = 6;
    this->route[8].point[44][0] = 2;        this->route[8].point[44][1] = 7;
    this->route[8].point[45][0] = 4;        this->route[8].point[45][1] = 6;
    this->route[8].point[46][0] = 6;        this->route[8].point[46][1] = 7;
    this->route[8].point[47][0] = 7;        this->route[8].point[47][1] = 5;
    this->route[8].point[48][0] = 6;        this->route[8].point[48][1] = 3;
    this->route[8].point[49][0] = 7;        this->route[8].point[49][1] = 1;
    this->route[8].point[50][0] = 5;        this->route[8].point[50][1] = 0;
    this->route[8].point[51][0] = 4;        this->route[8].point[51][1] = 2;
    this->route[8].point[52][0] = 5;        this->route[8].point[52][1] = 4;
    this->route[8].point[53][0] = 7;        this->route[8].point[53][1] = 3;
    this->route[8].point[54][0] = 6;        this->route[8].point[54][1] = 5;
    this->route[8].point[55][0] = 7;        this->route[8].point[55][1] = 7;
    this->route[8].point[56][0] = 5;        this->route[8].point[56][1] = 6;
    this->route[8].point[57][0] = 4;        this->route[8].point[57][1] = 4;
    this->route[8].point[58][0] = 5;        this->route[8].point[58][1] = 2;
    this->route[8].point[59][0] = 3;        this->route[8].point[59][1] = 3;
    this->route[8].point[60][0] = 1;        this->route[8].point[60][1] = 4;
    this->route[8].point[61][0] = 3;        this->route[8].point[61][1] = 5;
    this->route[8].point[62][0] = 2;        this->route[8].point[62][1] = 3;
    this->route[8].point[63][0] = 3;        this->route[8].point[63][1] = 1;

    //4     7       2       23      42      9       44      31
    //1     22      5       8       61      32      41      10
    //6     3       24      63      38      43      30      45
    //21    64      37      60      33      62      11      40
    //36    17      52      25      58      39      46      29
    //51    20      59      34      53      26      57      12
    //16    35      18      49      14      55      28      47
    //19    50      15      54      27      48      13      56
    //stepOfHouse = 64

    //this->route[9].point[64][2] = {
    this->route[9].point[0][0] = 1;         this->route[9].point[0][1] = 1;
    this->route[9].point[1][0] = 3;         this->route[9].point[1][1] = 0;
    this->route[9].point[2][0] = 5;         this->route[9].point[2][1] = 1;
    this->route[9].point[3][0] = 7;         this->route[9].point[3][1] = 0;
    this->route[9].point[4][0] = 6;         this->route[9].point[4][1] = 2;
    this->route[9].point[5][0] = 7;         this->route[9].point[5][1] = 4;
    this->route[9].point[6][0] = 6;         this->route[9].point[6][1] = 6;
    this->route[9].point[7][0] = 4;         this->route[9].point[7][1] = 7;
    this->route[9].point[8][0] = 2;         this->route[9].point[8][1] = 6;
    this->route[9].point[9][0] = 0;         this->route[9].point[9][1] = 7;
    this->route[9].point[10][0] = 1;        this->route[9].point[10][1] = 5;
    this->route[9].point[11][0] = 0;        this->route[9].point[11][1] = 3;
    this->route[9].point[12][0] = 2;        this->route[9].point[12][1] = 2;
    this->route[9].point[13][0] = 1;        this->route[9].point[13][1] = 0;
    this->route[9].point[14][0] = 0;        this->route[9].point[14][1] = 2;
    this->route[9].point[15][0] = 1;        this->route[9].point[15][1] = 4;
    this->route[9].point[16][0] = 0;        this->route[9].point[16][1] = 6;
    this->route[9].point[17][0] = 2;        this->route[9].point[17][1] = 7;
    this->route[9].point[18][0] = 4;        this->route[9].point[18][1] = 6;
    this->route[9].point[19][0] = 6;        this->route[9].point[19][1] = 7;
    this->route[9].point[20][0] = 7;        this->route[9].point[20][1] = 5;
    this->route[9].point[21][0] = 6;        this->route[9].point[21][1] = 3;
    this->route[9].point[22][0] = 7;        this->route[9].point[22][1] = 1;
    this->route[9].point[23][0] = 5;        this->route[9].point[23][1] = 0;
    this->route[9].point[24][0] = 3;        this->route[9].point[24][1] = 1;
    this->route[9].point[25][0] = 4;        this->route[9].point[25][1] = 3;
    this->route[9].point[26][0] = 5;        this->route[9].point[26][1] = 5;
    this->route[9].point[27][0] = 7;        this->route[9].point[27][1] = 6;
    this->route[9].point[28][0] = 5;        this->route[9].point[28][1] = 7;
    this->route[9].point[29][0] = 3;        this->route[9].point[29][1] = 6;
    this->route[9].point[30][0] = 1;        this->route[9].point[30][1] = 7;
    this->route[9].point[31][0] = 0;        this->route[9].point[31][1] = 5;
    this->route[9].point[32][0] = 2;        this->route[9].point[32][1] = 4;
    this->route[9].point[33][0] = 1;        this->route[9].point[33][1] = 6;
    this->route[9].point[34][0] = 3;        this->route[9].point[34][1] = 7;
    this->route[9].point[35][0] = 4;        this->route[9].point[35][1] = 5;
    this->route[9].point[36][0] = 6;        this->route[9].point[36][1] = 4;
    this->route[9].point[37][0] = 7;        this->route[9].point[37][1] = 2;
    this->route[9].point[38][0] = 6;        this->route[9].point[38][1] = 0;
    this->route[9].point[39][0] = 4;        this->route[9].point[39][1] = 1;
    this->route[9].point[40][0] = 2;        this->route[9].point[40][1] = 0;
    this->route[9].point[41][0] = 0;        this->route[9].point[41][1] = 1;
    this->route[9].point[42][0] = 1;        this->route[9].point[42][1] = 3;
    this->route[9].point[43][0] = 3;        this->route[9].point[43][1] = 4;
    this->route[9].point[44][0] = 5;        this->route[9].point[44][1] = 3;
    this->route[9].point[45][0] = 3;        this->route[9].point[45][1] = 2;
    this->route[9].point[46][0] = 4;        this->route[9].point[46][1] = 0;
    this->route[9].point[47][0] = 6;        this->route[9].point[47][1] = 1;
    this->route[9].point[48][0] = 7;        this->route[9].point[48][1] = 3;
    this->route[9].point[49][0] = 6;        this->route[9].point[49][1] = 5;
    this->route[9].point[50][0] = 7;        this->route[9].point[50][1] = 7;
    this->route[9].point[51][0] = 5;        this->route[9].point[51][1] = 6;
    this->route[9].point[52][0] = 4;        this->route[9].point[52][1] = 4;
    this->route[9].point[53][0] = 5;        this->route[9].point[53][1] = 2;
    this->route[9].point[54][0] = 3;        this->route[9].point[54][1] = 3;
    this->route[9].point[55][0] = 2;        this->route[9].point[55][1] = 5;
    this->route[9].point[56][0] = 0;        this->route[9].point[56][1] = 4;
    this->route[9].point[57][0] = 1;        this->route[9].point[57][1] = 2;
    this->route[9].point[58][0] = 0;        this->route[9].point[58][1] = 0;
    this->route[9].point[59][0] = 2;        this->route[9].point[59][1] = 1;
    this->route[9].point[60][0] = 4;        this->route[9].point[60][1] = 2;
    this->route[9].point[61][0] = 5;        this->route[9].point[61][1] = 4;
    this->route[9].point[62][0] = 3;        this->route[9].point[62][1] = 5;
    this->route[9].point[63][0] = 2;        this->route[9].point[63][1] = 3;

    //59    42      15      12      57      32      17      10
    //14    1       58      43      16      11      34      31
    //41    60      13      64      33      56      9       18
    //2     25      46      55      44      63      30      35
    //47    40      61      26      53      36      19      8
    //24    3       54      45      62      27      52      29
    //39    48      5       22      37      50      7       20
    //4     23      38      49      6       21      28      51
    //stepOfHouse = 64

    //this->route[10].point[64][2] = {
    this->route[10].point[0][0] = 1;        this->route[10].point[0][1] = 2;
    this->route[10].point[1][0] = 0;        this->route[10].point[1][1] = 0;
    this->route[10].point[2][0] = 2;        this->route[10].point[2][1] = 1;
    this->route[10].point[3][0] = 4;        this->route[10].point[3][1] = 0;
    this->route[10].point[4][0] = 6;        this->route[10].point[4][1] = 1;
    this->route[10].point[5][0] = 7;        this->route[10].point[5][1] = 3;
    this->route[10].point[6][0] = 6;        this->route[10].point[6][1] = 5;
    this->route[10].point[7][0] = 7;        this->route[10].point[7][1] = 7;
    this->route[10].point[8][0] = 5;        this->route[10].point[8][1] = 6;
    this->route[10].point[9][0] = 7;        this->route[10].point[9][1] = 5;
    this->route[10].point[10][0] = 6;       this->route[10].point[10][1] = 7;
    this->route[10].point[11][0] = 4;       this->route[10].point[11][1] = 6;
    this->route[10].point[12][0] = 2;       this->route[10].point[12][1] = 7;
    this->route[10].point[13][0] = 0;       this->route[10].point[13][1] = 6;
    this->route[10].point[14][0] = 1;       this->route[10].point[14][1] = 4;
    this->route[10].point[15][0] = 0;       this->route[10].point[15][1] = 2;
    this->route[10].point[16][0] = 1;       this->route[10].point[16][1] = 0;
    this->route[10].point[17][0] = 3;       this->route[10].point[17][1] = 1;
    this->route[10].point[18][0] = 5;       this->route[10].point[18][1] = 0;
    this->route[10].point[19][0] = 7;       this->route[10].point[19][1] = 1;
    this->route[10].point[20][0] = 6;       this->route[10].point[20][1] = 3;
    this->route[10].point[21][0] = 4;       this->route[10].point[21][1] = 2;
    this->route[10].point[22][0] = 3;       this->route[10].point[22][1] = 0;
    this->route[10].point[23][0] = 1;       this->route[10].point[23][1] = 1;
    this->route[10].point[24][0] = 0;       this->route[10].point[24][1] = 3;
    this->route[10].point[25][0] = 2;       this->route[10].point[25][1] = 2;
    this->route[10].point[26][0] = 0;       this->route[10].point[26][1] = 1;
    this->route[10].point[27][0] = 2;       this->route[10].point[27][1] = 0;
    this->route[10].point[28][0] = 4;       this->route[10].point[28][1] = 1;
    this->route[10].point[29][0] = 6;       this->route[10].point[29][1] = 0;
    this->route[10].point[30][0] = 7;       this->route[10].point[30][1] = 2;
    this->route[10].point[31][0] = 5;       this->route[10].point[31][1] = 1;
    this->route[10].point[32][0] = 7;       this->route[10].point[32][1] = 0;
    this->route[10].point[33][0] = 6;       this->route[10].point[33][1] = 2;
    this->route[10].point[34][0] = 7;       this->route[10].point[34][1] = 4;
    this->route[10].point[35][0] = 6;       this->route[10].point[35][1] = 6;
    this->route[10].point[36][0] = 5;       this->route[10].point[36][1] = 4;
    this->route[10].point[37][0] = 3;       this->route[10].point[37][1] = 3;
    this->route[10].point[38][0] = 5;       this->route[10].point[38][1] = 2;
    this->route[10].point[39][0] = 6;       this->route[10].point[39][1] = 4;
    this->route[10].point[40][0] = 7;       this->route[10].point[40][1] = 6;
    this->route[10].point[41][0] = 5;       this->route[10].point[41][1] = 7;
    this->route[10].point[42][0] = 4;       this->route[10].point[42][1] = 5;
    this->route[10].point[43][0] = 5;       this->route[10].point[43][1] = 3;
    this->route[10].point[44][0] = 3;       this->route[10].point[44][1] = 2;
    this->route[10].point[45][0] = 4;       this->route[10].point[45][1] = 4;
    this->route[10].point[46][0] = 2;       this->route[10].point[46][1] = 3;
    this->route[10].point[47][0] = 3;       this->route[10].point[47][1] = 5;
    this->route[10].point[48][0] = 4;       this->route[10].point[48][1] = 7;
    this->route[10].point[49][0] = 5;       this->route[10].point[49][1] = 5;
    this->route[10].point[50][0] = 4;       this->route[10].point[50][1] = 3;
    this->route[10].point[51][0] = 2;       this->route[10].point[51][1] = 4;
    this->route[10].point[52][0] = 3;       this->route[10].point[52][1] = 6;
    this->route[10].point[53][0] = 1;       this->route[10].point[53][1] = 7;
    this->route[10].point[54][0] = 0;       this->route[10].point[54][1] = 5;
    this->route[10].point[55][0] = 2;       this->route[10].point[55][1] = 6;
    this->route[10].point[56][0] = 0;       this->route[10].point[56][1] = 7;
    this->route[10].point[57][0] = 1;       this->route[10].point[57][1] = 5;
    this->route[10].point[58][0] = 3;       this->route[10].point[58][1] = 4;
    this->route[10].point[59][0] = 1;       this->route[10].point[59][1] = 3;
    this->route[10].point[60][0] = 2;       this->route[10].point[60][1] = 5;
    this->route[10].point[61][0] = 3;       this->route[10].point[61][1] = 7;
    this->route[10].point[62][0] = 1;       this->route[10].point[62][1] = 6;
    this->route[10].point[63][0] = 0;       this->route[10].point[63][1] = 4;

    //2     27      16      25      64      55      14      57
    //17    24      1       60      15      58      63      54
    //28    3       26      47      52      61      56      13
    //23    18      45      38      59      48      53      62
    //4     29      22      51      46      43      12      49
    //19    32      39      44      37      50      9       42
    //30    5       34      21      40      7       36      11
    //33    20      31      6       35      10      41      8
    //stepOfHouse = 64

    //this->route[11].point[64][2] = {
    this->route[11].point[0][0] = 1;        this->route[11].point[0][1] = 3;
    this->route[11].point[1][0] = 0;        this->route[11].point[1][1] = 1;
    this->route[11].point[2][0] = 2;        this->route[11].point[2][1] = 0;
    this->route[11].point[3][0] = 4;        this->route[11].point[3][1] = 1;
    this->route[11].point[4][0] = 6;        this->route[11].point[4][1] = 0;
    this->route[11].point[5][0] = 7;        this->route[11].point[5][1] = 2;
    this->route[11].point[6][0] = 6;        this->route[11].point[6][1] = 4;
    this->route[11].point[7][0] = 7;        this->route[11].point[7][1] = 6;
    this->route[11].point[8][0] = 5;        this->route[11].point[8][1] = 7;
    this->route[11].point[9][0] = 6;        this->route[11].point[9][1] = 5;
    this->route[11].point[10][0] = 7;       this->route[11].point[10][1] = 7;
    this->route[11].point[11][0] = 5;       this->route[11].point[11][1] = 6;
    this->route[11].point[12][0] = 7;       this->route[11].point[12][1] = 5;
    this->route[11].point[13][0] = 6;       this->route[11].point[13][1] = 7;
    this->route[11].point[14][0] = 4;       this->route[11].point[14][1] = 6;
    this->route[11].point[15][0] = 2;       this->route[11].point[15][1] = 7;
    this->route[11].point[16][0] = 0;       this->route[11].point[16][1] = 6;
    this->route[11].point[17][0] = 2;       this->route[11].point[17][1] = 5;
    this->route[11].point[18][0] = 3;       this->route[11].point[18][1] = 7;
    this->route[11].point[19][0] = 1;       this->route[11].point[19][1] = 6;
    this->route[11].point[20][0] = 0;       this->route[11].point[20][1] = 4;
    this->route[11].point[21][0] = 1;       this->route[11].point[21][1] = 2;
    this->route[11].point[22][0] = 0;       this->route[11].point[22][1] = 0;
    this->route[11].point[23][0] = 2;       this->route[11].point[23][1] = 1;
    this->route[11].point[24][0] = 4;       this->route[11].point[24][1] = 0;
    this->route[11].point[25][0] = 6;       this->route[11].point[25][1] = 1;
    this->route[11].point[26][0] = 7;       this->route[11].point[26][1] = 3;
    this->route[11].point[27][0] = 5;       this->route[11].point[27][1] = 2;
    this->route[11].point[28][0] = 7;       this->route[11].point[28][1] = 1;
    this->route[11].point[29][0] = 5;       this->route[11].point[29][1] = 0;
    this->route[11].point[30][0] = 3;       this->route[11].point[30][1] = 1;
    this->route[11].point[31][0] = 1;       this->route[11].point[31][1] = 0;
    this->route[11].point[32][0] = 0;       this->route[11].point[32][1] = 2;
    this->route[11].point[33][0] = 1;       this->route[11].point[33][1] = 4;
    this->route[11].point[34][0] = 3;       this->route[11].point[34][1] = 3;
    this->route[11].point[35][0] = 5;       this->route[11].point[35][1] = 4;
    this->route[11].point[36][0] = 6;       this->route[11].point[36][1] = 6;
    this->route[11].point[37][0] = 7;       this->route[11].point[37][1] = 4;
    this->route[11].point[38][0] = 6;       this->route[11].point[38][1] = 2;
    this->route[11].point[39][0] = 7;       this->route[11].point[39][1] = 0;
    this->route[11].point[40][0] = 5;       this->route[11].point[40][1] = 1;
    this->route[11].point[41][0] = 6;       this->route[11].point[41][1] = 3;
    this->route[11].point[42][0] = 4;       this->route[11].point[42][1] = 4;
    this->route[11].point[43][0] = 3;       this->route[11].point[43][1] = 2;
    this->route[11].point[44][0] = 5;       this->route[11].point[44][1] = 3;
    this->route[11].point[45][0] = 4;       this->route[11].point[45][1] = 5;
    this->route[11].point[46][0] = 2;       this->route[11].point[46][1] = 6;
    this->route[11].point[47][0] = 0;       this->route[11].point[47][1] = 7;
    this->route[11].point[48][0] = 1;       this->route[11].point[48][1] = 5;
    this->route[11].point[49][0] = 3;       this->route[11].point[49][1] = 6;
    this->route[11].point[50][0] = 1;       this->route[11].point[50][1] = 7;
    this->route[11].point[51][0] = 0;       this->route[11].point[51][1] = 5;
    this->route[11].point[52][0] = 2;       this->route[11].point[52][1] = 4;
    this->route[11].point[53][0] = 0;       this->route[11].point[53][1] = 3;
    this->route[11].point[54][0] = 1;       this->route[11].point[54][1] = 1;
    this->route[11].point[55][0] = 3;       this->route[11].point[55][1] = 0;
    this->route[11].point[56][0] = 4;       this->route[11].point[56][1] = 2;
    this->route[11].point[57][0] = 2;       this->route[11].point[57][1] = 3;
    this->route[11].point[58][0] = 3;       this->route[11].point[58][1] = 5;
    this->route[11].point[59][0] = 4;       this->route[11].point[59][1] = 7;
    this->route[11].point[60][0] = 5;       this->route[11].point[60][1] = 5;
    this->route[11].point[61][0] = 4;       this->route[11].point[61][1] = 3;
    this->route[11].point[62][0] = 2;       this->route[11].point[62][1] = 2;
    this->route[11].point[63][0] = 3;       this->route[11].point[63][1] = 4;

    //23    2       33      54      21      52      17      48
    //32    55      22      1       34      49      20      51
    //3     24      63      58      53      18      47      16
    //56    31      44      35      64      59      50      19
    //25    4       57      62      43      46      15      60
    //30    41      28      45      36      61      12      9
    //5     26      39      42      7       10      37      14
    //40    29      6       27      38      13      8       11
    //stepOfHouse = 64

    //this->route[12].point[64][2] = {
    this->route[12].point[0][0] = 1;        this->route[12].point[0][1] = 4;
    this->route[12].point[1][0] = 0;        this->route[12].point[1][1] = 6;
    this->route[12].point[2][0] = 2;        this->route[12].point[2][1] = 7;
    this->route[12].point[3][0] = 4;        this->route[12].point[3][1] = 6;
    this->route[12].point[4][0] = 6;        this->route[12].point[4][1] = 7;
    this->route[12].point[5][0] = 7;        this->route[12].point[5][1] = 5;
    this->route[12].point[6][0] = 6;        this->route[12].point[6][1] = 3;
    this->route[12].point[7][0] = 7;        this->route[12].point[7][1] = 1;
    this->route[12].point[8][0] = 5;        this->route[12].point[8][1] = 0;
    this->route[12].point[9][0] = 6;        this->route[12].point[9][1] = 2;
    this->route[12].point[10][0] = 7;       this->route[12].point[10][1] = 0;
    this->route[12].point[11][0] = 5;       this->route[12].point[11][1] = 1;
    this->route[12].point[12][0] = 7;       this->route[12].point[12][1] = 2;
    this->route[12].point[13][0] = 6;       this->route[12].point[13][1] = 0;
    this->route[12].point[14][0] = 4;       this->route[12].point[14][1] = 1;
    this->route[12].point[15][0] = 2;       this->route[12].point[15][1] = 0;
    this->route[12].point[16][0] = 0;       this->route[12].point[16][1] = 1;
    this->route[12].point[17][0] = 2;       this->route[12].point[17][1] = 2;
    this->route[12].point[18][0] = 3;       this->route[12].point[18][1] = 0;
    this->route[12].point[19][0] = 1;       this->route[12].point[19][1] = 1;
    this->route[12].point[20][0] = 0;       this->route[12].point[20][1] = 3;
    this->route[12].point[21][0] = 1;       this->route[12].point[21][1] = 5;
    this->route[12].point[22][0] = 0;       this->route[12].point[22][1] = 7;
    this->route[12].point[23][0] = 2;       this->route[12].point[23][1] = 6;
    this->route[12].point[24][0] = 4;       this->route[12].point[24][1] = 7;
    this->route[12].point[25][0] = 6;       this->route[12].point[25][1] = 6;
    this->route[12].point[26][0] = 7;       this->route[12].point[26][1] = 4;
    this->route[12].point[27][0] = 5;       this->route[12].point[27][1] = 5;
    this->route[12].point[28][0] = 7;       this->route[12].point[28][1] = 6;
    this->route[12].point[29][0] = 5;       this->route[12].point[29][1] = 7;
    this->route[12].point[30][0] = 3;       this->route[12].point[30][1] = 6;
    this->route[12].point[31][0] = 1;       this->route[12].point[31][1] = 7;
    this->route[12].point[32][0] = 0;       this->route[12].point[32][1] = 5;
    this->route[12].point[33][0] = 1;       this->route[12].point[33][1] = 3;
    this->route[12].point[34][0] = 3;       this->route[12].point[34][1] = 4;
    this->route[12].point[35][0] = 5;       this->route[12].point[35][1] = 3;
    this->route[12].point[36][0] = 6;       this->route[12].point[36][1] = 5;
    this->route[12].point[37][0] = 7;       this->route[12].point[37][1] = 7;
    this->route[12].point[38][0] = 5;       this->route[12].point[38][1] = 6;
    this->route[12].point[39][0] = 6;       this->route[12].point[39][1] = 4;
    this->route[12].point[40][0] = 4;       this->route[12].point[40][1] = 5;
    this->route[12].point[41][0] = 3;       this->route[12].point[41][1] = 7;
    this->route[12].point[42][0] = 2;       this->route[12].point[42][1] = 5;
    this->route[12].point[43][0] = 4;       this->route[12].point[43][1] = 4;
    this->route[12].point[44][0] = 3;       this->route[12].point[44][1] = 2;
    this->route[12].point[45][0] = 4;       this->route[12].point[45][1] = 0;
    this->route[12].point[46][0] = 6;       this->route[12].point[46][1] = 1;
    this->route[12].point[47][0] = 7;       this->route[12].point[47][1] = 3;
    this->route[12].point[48][0] = 5;       this->route[12].point[48][1] = 2;
    this->route[12].point[49][0] = 3;       this->route[12].point[49][1] = 3;
    this->route[12].point[50][0] = 5;       this->route[12].point[50][1] = 4;
    this->route[12].point[51][0] = 4;       this->route[12].point[51][1] = 2;
    this->route[12].point[52][0] = 2;       this->route[12].point[52][1] = 1;
    this->route[12].point[53][0] = 0;       this->route[12].point[53][1] = 0;
    this->route[12].point[54][0] = 1;       this->route[12].point[54][1] = 2;
    this->route[12].point[55][0] = 2;       this->route[12].point[55][1] = 4;
    this->route[12].point[56][0] = 4;       this->route[12].point[56][1] = 3;
    this->route[12].point[57][0] = 3;       this->route[12].point[57][1] = 5;
    this->route[12].point[58][0] = 1;       this->route[12].point[58][1] = 6;
    this->route[12].point[59][0] = 0;       this->route[12].point[59][1] = 4;
    this->route[12].point[60][0] = 2;       this->route[12].point[60][1] = 3;
    this->route[12].point[61][0] = 3;       this->route[12].point[61][1] = 1;
    this->route[12].point[62][0] = 1;       this->route[12].point[62][1] = 0;
    this->route[12].point[63][0] = 0;       this->route[12].point[63][1] = 2;

    //54    17      64      21      60      33      2       23
    //63    20      55      34      1       22      59      32
    //16    53      18      61      56      43      24      3
    //19    62      45      50      35      58      31      42
    //46    15      52      57      44      41      4       25
    //9     12      49      36      51      28      39      30
    //14    47      10      7       40      37      26      5
    //11    8       13      48      27      6       29      38
    //stepOfHouse = 64

    //this->route[13].point[64][2] = {
    this->route[13].point[0][0] = 1;        this->route[13].point[0][1] = 5;
    this->route[13].point[1][0] = 0;        this->route[13].point[1][1] = 7;
    this->route[13].point[2][0] = 2;        this->route[13].point[2][1] = 6;
    this->route[13].point[3][0] = 4;        this->route[13].point[3][1] = 7;
    this->route[13].point[4][0] = 6;        this->route[13].point[4][1] = 6;
    this->route[13].point[5][0] = 7;        this->route[13].point[5][1] = 4;
    this->route[13].point[6][0] = 6;        this->route[13].point[6][1] = 2;
    this->route[13].point[7][0] = 7;        this->route[13].point[7][1] = 0;
    this->route[13].point[8][0] = 5;        this->route[13].point[8][1] = 1;
    this->route[13].point[9][0] = 7;        this->route[13].point[9][1] = 2;
    this->route[13].point[10][0] = 6;       this->route[13].point[10][1] = 0;
    this->route[13].point[11][0] = 4;       this->route[13].point[11][1] = 1;
    this->route[13].point[12][0] = 2;       this->route[13].point[12][1] = 0;
    this->route[13].point[13][0] = 0;       this->route[13].point[13][1] = 1;
    this->route[13].point[14][0] = 1;       this->route[13].point[14][1] = 3;
    this->route[13].point[15][0] = 0;       this->route[13].point[15][1] = 5;
    this->route[13].point[16][0] = 1;       this->route[13].point[16][1] = 7;
    this->route[13].point[17][0] = 3;       this->route[13].point[17][1] = 6;
    this->route[13].point[18][0] = 5;       this->route[13].point[18][1] = 7;
    this->route[13].point[19][0] = 7;       this->route[13].point[19][1] = 6;
    this->route[13].point[20][0] = 6;       this->route[13].point[20][1] = 4;
    this->route[13].point[21][0] = 4;       this->route[13].point[21][1] = 5;
    this->route[13].point[22][0] = 3;       this->route[13].point[22][1] = 7;
    this->route[13].point[23][0] = 1;       this->route[13].point[23][1] = 6;
    this->route[13].point[24][0] = 0;       this->route[13].point[24][1] = 4;
    this->route[13].point[25][0] = 2;       this->route[13].point[25][1] = 5;
    this->route[13].point[26][0] = 0;       this->route[13].point[26][1] = 6;
    this->route[13].point[27][0] = 2;       this->route[13].point[27][1] = 7;
    this->route[13].point[28][0] = 4;       this->route[13].point[28][1] = 6;
    this->route[13].point[29][0] = 6;       this->route[13].point[29][1] = 7;
    this->route[13].point[30][0] = 7;       this->route[13].point[30][1] = 5;
    this->route[13].point[31][0] = 5;       this->route[13].point[31][1] = 6;
    this->route[13].point[32][0] = 7;       this->route[13].point[32][1] = 7;
    this->route[13].point[33][0] = 6;       this->route[13].point[33][1] = 5;
    this->route[13].point[34][0] = 7;       this->route[13].point[34][1] = 3;
    this->route[13].point[35][0] = 6;       this->route[13].point[35][1] = 1;
    this->route[13].point[36][0] = 5;       this->route[13].point[36][1] = 3;
    this->route[13].point[37][0] = 3;       this->route[13].point[37][1] = 4;
    this->route[13].point[38][0] = 5;       this->route[13].point[38][1] = 5;
    this->route[13].point[39][0] = 6;       this->route[13].point[39][1] = 3;
    this->route[13].point[40][0] = 7;       this->route[13].point[40][1] = 1;
    this->route[13].point[41][0] = 5;       this->route[13].point[41][1] = 0;
    this->route[13].point[42][0] = 4;       this->route[13].point[42][1] = 2;
    this->route[13].point[43][0] = 5;       this->route[13].point[43][1] = 4;
    this->route[13].point[44][0] = 3;       this->route[13].point[44][1] = 5;
    this->route[13].point[45][0] = 4;       this->route[13].point[45][1] = 3;
    this->route[13].point[46][0] = 2;       this->route[13].point[46][1] = 4;
    this->route[13].point[47][0] = 3;       this->route[13].point[47][1] = 2;
    this->route[13].point[48][0] = 4;       this->route[13].point[48][1] = 4;
    this->route[13].point[49][0] = 5;       this->route[13].point[49][1] = 2;
    this->route[13].point[50][0] = 4;       this->route[13].point[50][1] = 0;
    this->route[13].point[51][0] = 2;       this->route[13].point[51][1] = 1;
    this->route[13].point[52][0] = 0;       this->route[13].point[52][1] = 0;
    this->route[13].point[53][0] = 1;       this->route[13].point[53][1] = 2;
    this->route[13].point[54][0] = 3;       this->route[13].point[54][1] = 3;
    this->route[13].point[55][0] = 1;       this->route[13].point[55][1] = 4;
    this->route[13].point[56][0] = 0;       this->route[13].point[56][1] = 2;
    this->route[13].point[57][0] = 2;       this->route[13].point[57][1] = 3;
    this->route[13].point[58][0] = 3;       this->route[13].point[58][1] = 1;
    this->route[13].point[59][0] = 1;       this->route[13].point[59][1] = 0;
    this->route[13].point[60][0] = 2;       this->route[13].point[60][1] = 2;
    this->route[13].point[61][0] = 3;       this->route[13].point[61][1] = 0;
    this->route[13].point[62][0] = 1;       this->route[13].point[62][1] = 1;
    this->route[13].point[63][0] = 0;       this->route[13].point[63][1] = 3;

    //53    14      57      64      25      16      27      2
    //60    63      54      15      56      1       24      17
    //13    52      61      58      47      26      3       28
    //62    59      48      55      38      45      18      23
    //51    12      43      46      49      22      29      4
    //42    9       50      37      44      39      32      19
    //11    36      7       40      21      34      5       30
    //8     41      10      35      6       31      20      33
    //stepOfHouse = 64

    //this->route[14].point[64][2] = {
    this->route[14].point[0][0] = 1;        this->route[14].point[0][1] = 6;
    this->route[14].point[1][0] = 3;        this->route[14].point[1][1] = 7;
    this->route[14].point[2][0] = 5;        this->route[14].point[2][1] = 6;
    this->route[14].point[3][0] = 7;        this->route[14].point[3][1] = 7;
    this->route[14].point[4][0] = 6;        this->route[14].point[4][1] = 5;
    this->route[14].point[5][0] = 7;        this->route[14].point[5][1] = 3;
    this->route[14].point[6][0] = 6;        this->route[14].point[6][1] = 1;
    this->route[14].point[7][0] = 4;        this->route[14].point[7][1] = 0;
    this->route[14].point[8][0] = 2;        this->route[14].point[8][1] = 1;
    this->route[14].point[9][0] = 0;        this->route[14].point[9][1] = 0;
    this->route[14].point[10][0] = 1;       this->route[14].point[10][1] = 2;
    this->route[14].point[11][0] = 0;       this->route[14].point[11][1] = 4;
    this->route[14].point[12][0] = 2;       this->route[14].point[12][1] = 5;
    this->route[14].point[13][0] = 1;       this->route[14].point[13][1] = 7;
    this->route[14].point[14][0] = 0;       this->route[14].point[14][1] = 5;
    this->route[14].point[15][0] = 1;       this->route[14].point[15][1] = 3;
    this->route[14].point[16][0] = 0;       this->route[14].point[16][1] = 1;
    this->route[14].point[17][0] = 2;       this->route[14].point[17][1] = 0;
    this->route[14].point[18][0] = 4;       this->route[14].point[18][1] = 1;
    this->route[14].point[19][0] = 6;       this->route[14].point[19][1] = 0;
    this->route[14].point[20][0] = 7;       this->route[14].point[20][1] = 2;
    this->route[14].point[21][0] = 6;       this->route[14].point[21][1] = 4;
    this->route[14].point[22][0] = 7;       this->route[14].point[22][1] = 6;
    this->route[14].point[23][0] = 5;       this->route[14].point[23][1] = 7;
    this->route[14].point[24][0] = 3;       this->route[14].point[24][1] = 6;
    this->route[14].point[25][0] = 4;       this->route[14].point[25][1] = 4;
    this->route[14].point[26][0] = 5;       this->route[14].point[26][1] = 2;
    this->route[14].point[27][0] = 7;       this->route[14].point[27][1] = 1;
    this->route[14].point[28][0] = 5;       this->route[14].point[28][1] = 0;
    this->route[14].point[29][0] = 3;       this->route[14].point[29][1] = 1;
    this->route[14].point[30][0] = 1;       this->route[14].point[30][1] = 0;
    this->route[14].point[31][0] = 0;       this->route[14].point[31][1] = 2;
    this->route[14].point[32][0] = 2;       this->route[14].point[32][1] = 3;
    this->route[14].point[33][0] = 1;       this->route[14].point[33][1] = 1;
    this->route[14].point[34][0] = 3;       this->route[14].point[34][1] = 2;
    this->route[14].point[35][0] = 5;       this->route[14].point[35][1] = 3;
    this->route[14].point[36][0] = 7;       this->route[14].point[36][1] = 4;
    this->route[14].point[37][0] = 6;       this->route[14].point[37][1] = 6;
    this->route[14].point[38][0] = 4;       this->route[14].point[38][1] = 7;
    this->route[14].point[39][0] = 5;       this->route[14].point[39][1] = 5;
    this->route[14].point[40][0] = 6;       this->route[14].point[40][1] = 7;
    this->route[14].point[41][0] = 7;       this->route[14].point[41][1] = 5;
    this->route[14].point[42][0] = 6;       this->route[14].point[42][1] = 3;
    this->route[14].point[43][0] = 5;       this->route[14].point[43][1] = 1;
    this->route[14].point[44][0] = 7;       this->route[14].point[44][1] = 0;
    this->route[14].point[45][0] = 6;       this->route[14].point[45][1] = 2;
    this->route[14].point[46][0] = 4;       this->route[14].point[46][1] = 3;
    this->route[14].point[47][0] = 3;       this->route[14].point[47][1] = 5;
    this->route[14].point[48][0] = 5;       this->route[14].point[48][1] = 4;
    this->route[14].point[49][0] = 4;       this->route[14].point[49][1] = 6;
    this->route[14].point[50][0] = 2;       this->route[14].point[50][1] = 7;
    this->route[14].point[51][0] = 0;       this->route[14].point[51][1] = 6;
    this->route[14].point[52][0] = 1;       this->route[14].point[52][1] = 4;
    this->route[14].point[53][0] = 3;       this->route[14].point[53][1] = 3;
    this->route[14].point[54][0] = 4;       this->route[14].point[54][1] = 5;
    this->route[14].point[55][0] = 2;       this->route[14].point[55][1] = 6;
    this->route[14].point[56][0] = 0;       this->route[14].point[56][1] = 7;
    this->route[14].point[57][0] = 1;       this->route[14].point[57][1] = 5;
    this->route[14].point[58][0] = 3;       this->route[14].point[58][1] = 4;
    this->route[14].point[59][0] = 4;       this->route[14].point[59][1] = 2;
    this->route[14].point[60][0] = 3;       this->route[14].point[60][1] = 0;
    this->route[14].point[61][0] = 2;       this->route[14].point[61][1] = 2;
    this->route[14].point[62][0] = 0;       this->route[14].point[62][1] = 3;
    this->route[14].point[63][0] = 2;       this->route[14].point[63][1] = 4;

    //10    17      32      63      12      15      52      57
    //31    34      11      16      53      58      1       14
    //18    9       62      33      64      13      56      51
    //61    30      35      54      59      48      25      2
    //8     19      60      47      26      55      50      39
    //29    44      27      36      49      40      3       24
    //20    7       46      43      22      5       38      41
    //45    28      21      6       37      42      23      4
    //stepOfHouse = 64

    //this->route[15].point[64][2] = {
    this->route[15].point[0][0] = 1;        this->route[15].point[0][1] = 7;
    this->route[15].point[1][0] = 0;        this->route[15].point[1][1] = 5;
    this->route[15].point[2][0] = 2;        this->route[15].point[2][1] = 6;
    this->route[15].point[3][0] = 0;        this->route[15].point[3][1] = 7;
    this->route[15].point[4][0] = 1;        this->route[15].point[4][1] = 5;
    this->route[15].point[5][0] = 2;        this->route[15].point[5][1] = 7;
    this->route[15].point[6][0] = 0;        this->route[15].point[6][1] = 6;
    this->route[15].point[7][0] = 1;        this->route[15].point[7][1] = 4;
    this->route[15].point[8][0] = 0;        this->route[15].point[8][1] = 2;
    this->route[15].point[9][0] = 1;        this->route[15].point[9][1] = 0;
    this->route[15].point[10][0] = 3;       this->route[15].point[10][1] = 1;
    this->route[15].point[11][0] = 5;       this->route[15].point[11][1] = 0;
    this->route[15].point[12][0] = 7;       this->route[15].point[12][1] = 1;
    this->route[15].point[13][0] = 6;       this->route[15].point[13][1] = 3;
    this->route[15].point[14][0] = 7;       this->route[15].point[14][1] = 5;
    this->route[15].point[15][0] = 6;       this->route[15].point[15][1] = 7;
    this->route[15].point[16][0] = 4;       this->route[15].point[16][1] = 6;
    this->route[15].point[17][0] = 6;       this->route[15].point[17][1] = 5;
    this->route[15].point[18][0] = 7;       this->route[15].point[18][1] = 7;
    this->route[15].point[19][0] = 5;       this->route[15].point[19][1] = 6;
    this->route[15].point[20][0] = 3;       this->route[15].point[20][1] = 7;
    this->route[15].point[21][0] = 1;       this->route[15].point[21][1] = 6;
    this->route[15].point[22][0] = 0;       this->route[15].point[22][1] = 4;
    this->route[15].point[23][0] = 2;       this->route[15].point[23][1] = 5;
    this->route[15].point[24][0] = 4;       this->route[15].point[24][1] = 4;
    this->route[15].point[25][0] = 5;       this->route[15].point[25][1] = 2;
    this->route[15].point[26][0] = 7;       this->route[15].point[26][1] = 3;
    this->route[15].point[27][0] = 6;       this->route[15].point[27][1] = 1;
    this->route[15].point[28][0] = 4;       this->route[15].point[28][1] = 0;
    this->route[15].point[29][0] = 2;       this->route[15].point[29][1] = 1;
    this->route[15].point[30][0] = 0;       this->route[15].point[30][1] = 0;
    this->route[15].point[31][0] = 1;       this->route[15].point[31][1] = 2;
    this->route[15].point[32][0] = 3;       this->route[15].point[32][1] = 3;
    this->route[15].point[33][0] = 5;       this->route[15].point[33][1] = 4;
    this->route[15].point[34][0] = 6;       this->route[15].point[34][1] = 6;
    this->route[15].point[35][0] = 4;       this->route[15].point[35][1] = 7;
    this->route[15].point[36][0] = 3;       this->route[15].point[36][1] = 5;
    this->route[15].point[37][0] = 2;       this->route[15].point[37][1] = 3;
    this->route[15].point[38][0] = 4;       this->route[15].point[38][1] = 2;
    this->route[15].point[39][0] = 3;       this->route[15].point[39][1] = 0;
    this->route[15].point[40][0] = 1;       this->route[15].point[40][1] = 1;
    this->route[15].point[41][0] = 0;       this->route[15].point[41][1] = 3;
    this->route[15].point[42][0] = 2;       this->route[15].point[42][1] = 4;
    this->route[15].point[43][0] = 4;       this->route[15].point[43][1] = 5;
    this->route[15].point[44][0] = 5;       this->route[15].point[44][1] = 7;
    this->route[15].point[45][0] = 7;       this->route[15].point[45][1] = 6;
    this->route[15].point[46][0] = 6;       this->route[15].point[46][1] = 4;
    this->route[15].point[47][0] = 7;       this->route[15].point[47][1] = 2;
    this->route[15].point[48][0] = 6;       this->route[15].point[48][1] = 0;
    this->route[15].point[49][0] = 4;       this->route[15].point[49][1] = 1;
    this->route[15].point[50][0] = 2;       this->route[15].point[50][1] = 0;
    this->route[15].point[51][0] = 0;       this->route[15].point[51][1] = 1;
    this->route[15].point[52][0] = 2;       this->route[15].point[52][1] = 2;
    this->route[15].point[53][0] = 4;       this->route[15].point[53][1] = 3;
    this->route[15].point[54][0] = 6;       this->route[15].point[54][1] = 2;
    this->route[15].point[55][0] = 7;       this->route[15].point[55][1] = 0;
    this->route[15].point[56][0] = 5;       this->route[15].point[56][1] = 1;
    this->route[15].point[57][0] = 3;       this->route[15].point[57][1] = 2;
    this->route[15].point[58][0] = 1;       this->route[15].point[58][1] = 3;
    this->route[15].point[59][0] = 3;       this->route[15].point[59][1] = 4;
    this->route[15].point[60][0] = 5;       this->route[15].point[60][1] = 3;
    this->route[15].point[61][0] = 7;       this->route[15].point[61][1] = 4;
    this->route[15].point[62][0] = 5;       this->route[15].point[62][1] = 5;
    this->route[15].point[63][0] = 3;       this->route[15].point[63][1] = 6;

    //31    52      9       42      23      2       7       4
    //10    41      32      59      8       5       22      1
    //51    30      53      38      43      24      3       6
    //40    11      58      33      60      37      64      21
    //29    50      39      54      25      44      17      36
    //12    57      26      61      34      63      20      45
    //49    28      55      14      47      18      35      16
    //56    13      48      27      62      15      46      19
    //stepOfHouse = 64

    //this->route[16].point[64][2] = {
    this->route[16].point[0][0] = 2;        this->route[16].point[0][1] = 0;
    this->route[16].point[1][0] = 0;        this->route[16].point[1][1] = 1;
    this->route[16].point[2][0] = 1;        this->route[16].point[2][1] = 3;
    this->route[16].point[3][0] = 0;        this->route[16].point[3][1] = 5;
    this->route[16].point[4][0] = 1;        this->route[16].point[4][1] = 7;
    this->route[16].point[5][0] = 3;        this->route[16].point[5][1] = 6;
    this->route[16].point[6][0] = 5;        this->route[16].point[6][1] = 7;
    this->route[16].point[7][0] = 7;        this->route[16].point[7][1] = 6;
    this->route[16].point[8][0] = 6;        this->route[16].point[8][1] = 4;
    this->route[16].point[9][0] = 7;        this->route[16].point[9][1] = 2;
    this->route[16].point[10][0] = 6;       this->route[16].point[10][1] = 0;
    this->route[16].point[11][0] = 4;       this->route[16].point[11][1] = 1;
    this->route[16].point[12][0] = 6;       this->route[16].point[12][1] = 2;
    this->route[16].point[13][0] = 7;       this->route[16].point[13][1] = 0;
    this->route[16].point[14][0] = 5;       this->route[16].point[14][1] = 1;
    this->route[16].point[15][0] = 3;       this->route[16].point[15][1] = 0;
    this->route[16].point[16][0] = 1;       this->route[16].point[16][1] = 1;
    this->route[16].point[17][0] = 0;       this->route[16].point[17][1] = 3;
    this->route[16].point[18][0] = 2;       this->route[16].point[18][1] = 2;
    this->route[16].point[19][0] = 1;       this->route[16].point[19][1] = 0;
    this->route[16].point[20][0] = 0;       this->route[16].point[20][1] = 2;
    this->route[16].point[21][0] = 2;       this->route[16].point[21][1] = 1;
    this->route[16].point[22][0] = 0;       this->route[16].point[22][1] = 0;
    this->route[16].point[23][0] = 1;       this->route[16].point[23][1] = 2;
    this->route[16].point[24][0] = 0;       this->route[16].point[24][1] = 4;
    this->route[16].point[25][0] = 1;       this->route[16].point[25][1] = 6;
    this->route[16].point[26][0] = 3;       this->route[16].point[26][1] = 7;
    this->route[16].point[27][0] = 5;       this->route[16].point[27][1] = 6;
    this->route[16].point[28][0] = 7;       this->route[16].point[28][1] = 7;
    this->route[16].point[29][0] = 6;       this->route[16].point[29][1] = 5;
    this->route[16].point[30][0] = 7;       this->route[16].point[30][1] = 3;
    this->route[16].point[31][0] = 6;       this->route[16].point[31][1] = 1;
    this->route[16].point[32][0] = 4;       this->route[16].point[32][1] = 0;
    this->route[16].point[33][0] = 5;       this->route[16].point[33][1] = 2;
    this->route[16].point[34][0] = 7;       this->route[16].point[34][1] = 1;
    this->route[16].point[35][0] = 5;       this->route[16].point[35][1] = 0;
    this->route[16].point[36][0] = 3;       this->route[16].point[36][1] = 1;
    this->route[16].point[37][0] = 4;       this->route[16].point[37][1] = 3;
    this->route[16].point[38][0] = 2;       this->route[16].point[38][1] = 4;
    this->route[16].point[39][0] = 4;       this->route[16].point[39][1] = 5;
    this->route[16].point[40][0] = 6;       this->route[16].point[40][1] = 6;
    this->route[16].point[41][0] = 7;       this->route[16].point[41][1] = 4;
    this->route[16].point[42][0] = 5;       this->route[16].point[42][1] = 3;
    this->route[16].point[43][0] = 3;       this->route[16].point[43][1] = 4;
    this->route[16].point[44][0] = 5;       this->route[16].point[44][1] = 5;
    this->route[16].point[45][0] = 6;       this->route[16].point[45][1] = 3;
    this->route[16].point[46][0] = 7;       this->route[16].point[46][1] = 5;
    this->route[16].point[47][0] = 6;       this->route[16].point[47][1] = 7;
    this->route[16].point[48][0] = 4;       this->route[16].point[48][1] = 6;
    this->route[16].point[49][0] = 5;       this->route[16].point[49][1] = 4;
    this->route[16].point[50][0] = 4;       this->route[16].point[50][1] = 2;
    this->route[16].point[51][0] = 2;       this->route[16].point[51][1] = 3;
    this->route[16].point[52][0] = 3;       this->route[16].point[52][1] = 5;
    this->route[16].point[53][0] = 4;       this->route[16].point[53][1] = 7;
    this->route[16].point[54][0] = 2;       this->route[16].point[54][1] = 6;
    this->route[16].point[55][0] = 0;       this->route[16].point[55][1] = 7;
    this->route[16].point[56][0] = 1;       this->route[16].point[56][1] = 5;
    this->route[16].point[57][0] = 2;       this->route[16].point[57][1] = 7;
    this->route[16].point[58][0] = 0;       this->route[16].point[58][1] = 6;
    this->route[16].point[59][0] = 1;       this->route[16].point[59][1] = 4;
    this->route[16].point[60][0] = 3;       this->route[16].point[60][1] = 3;
    this->route[16].point[61][0] = 2;       this->route[16].point[61][1] = 5;
    this->route[16].point[62][0] = 4;       this->route[16].point[62][1] = 4;
    this->route[16].point[63][0] = 3;       this->route[16].point[63][1] = 2;

    //23    2       21      18      25      4       59      56
    //20    17      24      3       60      57      26      5
    //1     22      19      52      39      62      55      58
    //16    37      64      61      44      53      6       27
    //33    12      51      38      63      40      49      54
    //36    15      34      43      50      45      28      7
    //11    32      13      46      9       30      41      48
    //14    35      10      31      42      47      8       29
    //stepOfHouse = 64

    //this->route[17].point[64][2] = {
    this->route[17].point[0][0] = 2;        this->route[17].point[0][1] = 1;
    this->route[17].point[1][0] = 0;        this->route[17].point[1][1] = 0;
    this->route[17].point[2][0] = 1;        this->route[17].point[2][1] = 2;
    this->route[17].point[3][0] = 2;        this->route[17].point[3][1] = 0;
    this->route[17].point[4][0] = 0;        this->route[17].point[4][1] = 1;
    this->route[17].point[5][0] = 1;        this->route[17].point[5][1] = 3;
    this->route[17].point[6][0] = 0;        this->route[17].point[6][1] = 5;
    this->route[17].point[7][0] = 1;        this->route[17].point[7][1] = 7;
    this->route[17].point[8][0] = 3;        this->route[17].point[8][1] = 6;
    this->route[17].point[9][0] = 5;        this->route[17].point[9][1] = 7;
    this->route[17].point[10][0] = 7;       this->route[17].point[10][1] = 6;
    this->route[17].point[11][0] = 6;       this->route[17].point[11][1] = 4;
    this->route[17].point[12][0] = 7;       this->route[17].point[12][1] = 2;
    this->route[17].point[13][0] = 6;       this->route[17].point[13][1] = 0;
    this->route[17].point[14][0] = 4;       this->route[17].point[14][1] = 1;
    this->route[17].point[15][0] = 6;       this->route[17].point[15][1] = 2;
    this->route[17].point[16][0] = 7;       this->route[17].point[16][1] = 0;
    this->route[17].point[17][0] = 5;       this->route[17].point[17][1] = 1;
    this->route[17].point[18][0] = 3;       this->route[17].point[18][1] = 0;
    this->route[17].point[19][0] = 1;       this->route[17].point[19][1] = 1;
    this->route[17].point[20][0] = 0;       this->route[17].point[20][1] = 3;
    this->route[17].point[21][0] = 2;       this->route[17].point[21][1] = 4;
    this->route[17].point[22][0] = 3;       this->route[17].point[22][1] = 2;
    this->route[17].point[23][0] = 4;       this->route[17].point[23][1] = 0;
    this->route[17].point[24][0] = 6;       this->route[17].point[24][1] = 1;
    this->route[17].point[25][0] = 7;       this->route[17].point[25][1] = 3;
    this->route[17].point[26][0] = 6;       this->route[17].point[26][1] = 5;
    this->route[17].point[27][0] = 7;       this->route[17].point[27][1] = 7;
    this->route[17].point[28][0] = 5;       this->route[17].point[28][1] = 6;
    this->route[17].point[29][0] = 7;       this->route[17].point[29][1] = 5;
    this->route[17].point[30][0] = 6;       this->route[17].point[30][1] = 7;
    this->route[17].point[31][0] = 4;       this->route[17].point[31][1] = 6;
    this->route[17].point[32][0] = 2;       this->route[17].point[32][1] = 7;
    this->route[17].point[33][0] = 0;       this->route[17].point[33][1] = 6;
    this->route[17].point[34][0] = 2;       this->route[17].point[34][1] = 5;
    this->route[17].point[35][0] = 3;       this->route[17].point[35][1] = 7;
    this->route[17].point[36][0] = 1;       this->route[17].point[36][1] = 6;
    this->route[17].point[37][0] = 0;       this->route[17].point[37][1] = 4;
    this->route[17].point[38][0] = 2;       this->route[17].point[38][1] = 3;
    this->route[17].point[39][0] = 4;       this->route[17].point[39][1] = 4;
    this->route[17].point[40][0] = 6;       this->route[17].point[40][1] = 3;
    this->route[17].point[41][0] = 7;       this->route[17].point[41][1] = 1;
    this->route[17].point[42][0] = 5;       this->route[17].point[42][1] = 2;
    this->route[17].point[43][0] = 3;       this->route[17].point[43][1] = 3;
    this->route[17].point[44][0] = 5;       this->route[17].point[44][1] = 4;
    this->route[17].point[45][0] = 4;       this->route[17].point[45][1] = 2;
    this->route[17].point[46][0] = 5;       this->route[17].point[46][1] = 0;
    this->route[17].point[47][0] = 3;       this->route[17].point[47][1] = 1;
    this->route[17].point[48][0] = 1;       this->route[17].point[48][1] = 0;
    this->route[17].point[49][0] = 2;       this->route[17].point[49][1] = 2;
    this->route[17].point[50][0] = 3;       this->route[17].point[50][1] = 4;
    this->route[17].point[51][0] = 1;       this->route[17].point[51][1] = 5;
    this->route[17].point[52][0] = 0;       this->route[17].point[52][1] = 7;
    this->route[17].point[53][0] = 2;       this->route[17].point[53][1] = 6;
    this->route[17].point[54][0] = 4;       this->route[17].point[54][1] = 5;
    this->route[17].point[55][0] = 5;       this->route[17].point[55][1] = 3;
    this->route[17].point[56][0] = 7;       this->route[17].point[56][1] = 4;
    this->route[17].point[57][0] = 6;       this->route[17].point[57][1] = 6;
    this->route[17].point[58][0] = 4;       this->route[17].point[58][1] = 7;
    this->route[17].point[59][0] = 5;       this->route[17].point[59][1] = 5;
    this->route[17].point[60][0] = 4;       this->route[17].point[60][1] = 3;
    this->route[17].point[61][0] = 3;       this->route[17].point[61][1] = 5;
    this->route[17].point[62][0] = 1;       this->route[17].point[62][1] = 4;
    this->route[17].point[63][0] = 0;       this->route[17].point[63][1] = 2;

    //2     5       64      21      38      7       34      53
    //49    20      3       6       63      52      37      8
    //4     1       50      39      22      35      54      33
    //19    48      23      44      51      62      9       36
    //24    15      46      61      40      55      32      59
    //47    18      43      56      45      60      29      10
    //14    25      16      41      12      27      58      31
    //17    42      13      26      57      30      11      28
    //stepOfHouse = 64

    //this->route[18].point[64][2] = {
    this->route[18].point[0][0] = 2;        this->route[18].point[0][1] = 2;
    this->route[18].point[1][0] = 1;        this->route[18].point[1][1] = 0;
    this->route[18].point[2][0] = 0;        this->route[18].point[2][1] = 2;
    this->route[18].point[3][0] = 1;        this->route[18].point[3][1] = 4;
    this->route[18].point[4][0] = 0;        this->route[18].point[4][1] = 6;
    this->route[18].point[5][0] = 2;        this->route[18].point[5][1] = 7;
    this->route[18].point[6][0] = 4;        this->route[18].point[6][1] = 6;
    this->route[18].point[7][0] = 6;        this->route[18].point[7][1] = 7;
    this->route[18].point[8][0] = 7;        this->route[18].point[8][1] = 5;
    this->route[18].point[9][0] = 6;        this->route[18].point[9][1] = 3;
    this->route[18].point[10][0] = 7;       this->route[18].point[10][1] = 1;
    this->route[18].point[11][0] = 5;       this->route[18].point[11][1] = 0;
    this->route[18].point[12][0] = 3;       this->route[18].point[12][1] = 1;
    this->route[18].point[13][0] = 1;       this->route[18].point[13][1] = 2;
    this->route[18].point[14][0] = 0;       this->route[18].point[14][1] = 0;
    this->route[18].point[15][0] = 2;       this->route[18].point[15][1] = 1;
    this->route[18].point[16][0] = 4;       this->route[18].point[16][1] = 0;
    this->route[18].point[17][0] = 6;       this->route[18].point[17][1] = 1;
    this->route[18].point[18][0] = 7;       this->route[18].point[18][1] = 3;
    this->route[18].point[19][0] = 6;       this->route[18].point[19][1] = 5;
    this->route[18].point[20][0] = 7;       this->route[18].point[20][1] = 7;
    this->route[18].point[21][0] = 5;       this->route[18].point[21][1] = 6;
    this->route[18].point[22][0] = 3;       this->route[18].point[22][1] = 7;
    this->route[18].point[23][0] = 1;       this->route[18].point[23][1] = 6;
    this->route[18].point[24][0] = 0;       this->route[18].point[24][1] = 4;
    this->route[18].point[25][0] = 2;       this->route[18].point[25][1] = 5;
    this->route[18].point[26][0] = 1;       this->route[18].point[26][1] = 7;
    this->route[18].point[27][0] = 0;       this->route[18].point[27][1] = 5;
    this->route[18].point[28][0] = 1;       this->route[18].point[28][1] = 3;
    this->route[18].point[29][0] = 0;       this->route[18].point[29][1] = 1;
    this->route[18].point[30][0] = 2;       this->route[18].point[30][1] = 0;
    this->route[18].point[31][0] = 4;       this->route[18].point[31][1] = 1;
    this->route[18].point[32][0] = 6;       this->route[18].point[32][1] = 0;
    this->route[18].point[33][0] = 7;       this->route[18].point[33][1] = 2;
    this->route[18].point[34][0] = 6;       this->route[18].point[34][1] = 4;
    this->route[18].point[35][0] = 7;       this->route[18].point[35][1] = 6;
    this->route[18].point[36][0] = 5;       this->route[18].point[36][1] = 7;
    this->route[18].point[37][0] = 3;       this->route[18].point[37][1] = 6;
    this->route[18].point[38][0] = 4;       this->route[18].point[38][1] = 4;
    this->route[18].point[39][0] = 5;       this->route[18].point[39][1] = 2;
    this->route[18].point[40][0] = 3;       this->route[18].point[40][1] = 3;
    this->route[18].point[41][0] = 5;       this->route[18].point[41][1] = 4;
    this->route[18].point[42][0] = 6;       this->route[18].point[42][1] = 6;
    this->route[18].point[43][0] = 7;       this->route[18].point[43][1] = 4;
    this->route[18].point[44][0] = 6;       this->route[18].point[44][1] = 2;
    this->route[18].point[45][0] = 7;       this->route[18].point[45][1] = 0;
    this->route[18].point[46][0] = 5;       this->route[18].point[46][1] = 1;
    this->route[18].point[47][0] = 3;       this->route[18].point[47][1] = 0;
    this->route[18].point[48][0] = 4;       this->route[18].point[48][1] = 2;
    this->route[18].point[49][0] = 2;       this->route[18].point[49][1] = 3;
    this->route[18].point[50][0] = 1;       this->route[18].point[50][1] = 5;
    this->route[18].point[51][0] = 0;       this->route[18].point[51][1] = 7;
    this->route[18].point[52][0] = 2;       this->route[18].point[52][1] = 6;
    this->route[18].point[53][0] = 4;       this->route[18].point[53][1] = 7;
    this->route[18].point[54][0] = 3;       this->route[18].point[54][1] = 5;
    this->route[18].point[55][0] = 4;       this->route[18].point[55][1] = 3;
    this->route[18].point[56][0] = 5;       this->route[18].point[56][1] = 5;
    this->route[18].point[57][0] = 3;       this->route[18].point[57][1] = 4;
    this->route[18].point[58][0] = 5;       this->route[18].point[58][1] = 3;
    this->route[18].point[59][0] = 4;       this->route[18].point[59][1] = 5;
    this->route[18].point[60][0] = 2;       this->route[18].point[60][1] = 4;
    this->route[18].point[61][0] = 3;       this->route[18].point[61][1] = 2;
    this->route[18].point[62][0] = 1;       this->route[18].point[62][1] = 1;
    this->route[18].point[63][0] = 0;       this->route[18].point[63][1] = 3;

    //15    30      3       64      25      28      5       52
    //2     63      14      29      4       51      24      27
    //31    16      1       50      61      26      53      6
    //48    13      62      41      58      55      38      23
    //17    32      49      56      39      60      7       54
    //12    47      40      59      42      57      22      37
    //33    18      45      10      35      20      43      8
    //46    11      34      19      44      9       36      21
    //stepOfHouse = 64

    //this->route[19].point[64][2] = {
    this->route[19].point[0][0] = 2;        this->route[19].point[0][1] = 3;
    this->route[19].point[1][0] = 1;        this->route[19].point[1][1] = 1;
    this->route[19].point[2][0] = 3;        this->route[19].point[2][1] = 0;
    this->route[19].point[3][0] = 5;        this->route[19].point[3][1] = 1;
    this->route[19].point[4][0] = 7;        this->route[19].point[4][1] = 0;
    this->route[19].point[5][0] = 6;        this->route[19].point[5][1] = 2;
    this->route[19].point[6][0] = 7;        this->route[19].point[6][1] = 4;
    this->route[19].point[7][0] = 6;        this->route[19].point[7][1] = 6;
    this->route[19].point[8][0] = 4;        this->route[19].point[8][1] = 7;
    this->route[19].point[9][0] = 2;        this->route[19].point[9][1] = 6;
    this->route[19].point[10][0] = 0;       this->route[19].point[10][1] = 7;
    this->route[19].point[11][0] = 1;       this->route[19].point[11][1] = 5;
    this->route[19].point[12][0] = 0;       this->route[19].point[12][1] = 3;
    this->route[19].point[13][0] = 2;       this->route[19].point[13][1] = 2;
    this->route[19].point[14][0] = 1;       this->route[19].point[14][1] = 0;
    this->route[19].point[15][0] = 0;       this->route[19].point[15][1] = 2;
    this->route[19].point[16][0] = 1;       this->route[19].point[16][1] = 4;
    this->route[19].point[17][0] = 0;       this->route[19].point[17][1] = 6;
    this->route[19].point[18][0] = 2;       this->route[19].point[18][1] = 7;
    this->route[19].point[19][0] = 3;       this->route[19].point[19][1] = 5;
    this->route[19].point[20][0] = 1;       this->route[19].point[20][1] = 6;
    this->route[19].point[21][0] = 0;       this->route[19].point[21][1] = 4;
    this->route[19].point[22][0] = 1;       this->route[19].point[22][1] = 2;
    this->route[19].point[23][0] = 0;       this->route[19].point[23][1] = 0;
    this->route[19].point[24][0] = 2;       this->route[19].point[24][1] = 1;
    this->route[19].point[25][0] = 4;       this->route[19].point[25][1] = 0;
    this->route[19].point[26][0] = 6;       this->route[19].point[26][1] = 1;
    this->route[19].point[27][0] = 7;       this->route[19].point[27][1] = 3;
    this->route[19].point[28][0] = 5;       this->route[19].point[28][1] = 4;
    this->route[19].point[29][0] = 7;       this->route[19].point[29][1] = 5;
    this->route[19].point[30][0] = 6;       this->route[19].point[30][1] = 7;
    this->route[19].point[31][0] = 4;       this->route[19].point[31][1] = 6;
    this->route[19].point[32][0] = 6;       this->route[19].point[32][1] = 5;
    this->route[19].point[33][0] = 7;       this->route[19].point[33][1] = 7;
    this->route[19].point[34][0] = 5;       this->route[19].point[34][1] = 6;
    this->route[19].point[35][0] = 3;       this->route[19].point[35][1] = 7;
    this->route[19].point[36][0] = 2;       this->route[19].point[36][1] = 5;
    this->route[19].point[37][0] = 1;       this->route[19].point[37][1] = 7;
    this->route[19].point[38][0] = 0;       this->route[19].point[38][1] = 5;
    this->route[19].point[39][0] = 1;       this->route[19].point[39][1] = 3;
    this->route[19].point[40][0] = 0;       this->route[19].point[40][1] = 1;
    this->route[19].point[41][0] = 2;       this->route[19].point[41][1] = 0;
    this->route[19].point[42][0] = 4;       this->route[19].point[42][1] = 1;
    this->route[19].point[43][0] = 6;       this->route[19].point[43][1] = 0;
    this->route[19].point[44][0] = 7;       this->route[19].point[44][1] = 2;
    this->route[19].point[45][0] = 5;       this->route[19].point[45][1] = 3;
    this->route[19].point[46][0] = 3;       this->route[19].point[46][1] = 4;
    this->route[19].point[47][0] = 4;       this->route[19].point[47][1] = 2;
    this->route[19].point[48][0] = 5;       this->route[19].point[48][1] = 0;
    this->route[19].point[49][0] = 7;       this->route[19].point[49][1] = 1;
    this->route[19].point[50][0] = 6;       this->route[19].point[50][1] = 3;
    this->route[19].point[51][0] = 5;       this->route[19].point[51][1] = 5;
    this->route[19].point[52][0] = 7;       this->route[19].point[52][1] = 6;
    this->route[19].point[53][0] = 5;       this->route[19].point[53][1] = 7;
    this->route[19].point[54][0] = 3;       this->route[19].point[54][1] = 6;
    this->route[19].point[55][0] = 4;       this->route[19].point[55][1] = 4;
    this->route[19].point[56][0] = 3;       this->route[19].point[56][1] = 2;
    this->route[19].point[57][0] = 2;       this->route[19].point[57][1] = 4;
    this->route[19].point[58][0] = 4;       this->route[19].point[58][1] = 5;
    this->route[19].point[59][0] = 3;       this->route[19].point[59][1] = 3;
    this->route[19].point[60][0] = 5;       this->route[19].point[60][1] = 2;
    this->route[19].point[61][0] = 6;       this->route[19].point[61][1] = 4;
    this->route[19].point[62][0] = 4;       this->route[19].point[62][1] = 3;
    this->route[19].point[63][0] = 3;       this->route[19].point[63][1] = 1;

    //24    41      16      13      22      39      18      11
    //15    2       23      40      17      12      21      38
    //42    25      14      1       58      37      10      19
    //3     64      57      60      47      20      55      36
    //26    43      48      63      56      59      32      9
    //49    4       61      46      29      52      35      54
    //44    27      6       51      62      33      8       31
    //5     50      45      28      7       30      53      34
    //stepOfHouse = 64

    //this->route[20].point[64][2] = {
    this->route[20].point[0][0] = 2;        this->route[20].point[0][1] = 4;
    this->route[20].point[1][0] = 1;        this->route[20].point[1][1] = 6;
    this->route[20].point[2][0] = 3;        this->route[20].point[2][1] = 7;
    this->route[20].point[3][0] = 5;        this->route[20].point[3][1] = 6;
    this->route[20].point[4][0] = 7;        this->route[20].point[4][1] = 7;
    this->route[20].point[5][0] = 6;        this->route[20].point[5][1] = 5;
    this->route[20].point[6][0] = 7;        this->route[20].point[6][1] = 3;
    this->route[20].point[7][0] = 6;        this->route[20].point[7][1] = 1;
    this->route[20].point[8][0] = 4;        this->route[20].point[8][1] = 0;
    this->route[20].point[9][0] = 2;        this->route[20].point[9][1] = 1;
    this->route[20].point[10][0] = 0;       this->route[20].point[10][1] = 0;
    this->route[20].point[11][0] = 1;       this->route[20].point[11][1] = 2;
    this->route[20].point[12][0] = 0;       this->route[20].point[12][1] = 4;
    this->route[20].point[13][0] = 2;       this->route[20].point[13][1] = 5;
    this->route[20].point[14][0] = 1;       this->route[20].point[14][1] = 7;
    this->route[20].point[15][0] = 0;       this->route[20].point[15][1] = 5;
    this->route[20].point[16][0] = 1;       this->route[20].point[16][1] = 3;
    this->route[20].point[17][0] = 0;       this->route[20].point[17][1] = 1;
    this->route[20].point[18][0] = 2;       this->route[20].point[18][1] = 0;
    this->route[20].point[19][0] = 3;       this->route[20].point[19][1] = 2;
    this->route[20].point[20][0] = 1;       this->route[20].point[20][1] = 1;
    this->route[20].point[21][0] = 0;       this->route[20].point[21][1] = 3;
    this->route[20].point[22][0] = 1;       this->route[20].point[22][1] = 5;
    this->route[20].point[23][0] = 0;       this->route[20].point[23][1] = 7;
    this->route[20].point[24][0] = 2;       this->route[20].point[24][1] = 6;
    this->route[20].point[25][0] = 4;       this->route[20].point[25][1] = 7;
    this->route[20].point[26][0] = 6;       this->route[20].point[26][1] = 6;
    this->route[20].point[27][0] = 7;       this->route[20].point[27][1] = 4;
    this->route[20].point[28][0] = 5;       this->route[20].point[28][1] = 3;
    this->route[20].point[29][0] = 7;       this->route[20].point[29][1] = 2;
    this->route[20].point[30][0] = 6;       this->route[20].point[30][1] = 0;
    this->route[20].point[31][0] = 4;       this->route[20].point[31][1] = 1;
    this->route[20].point[32][0] = 6;       this->route[20].point[32][1] = 2;
    this->route[20].point[33][0] = 7;       this->route[20].point[33][1] = 0;
    this->route[20].point[34][0] = 5;       this->route[20].point[34][1] = 1;
    this->route[20].point[35][0] = 3;       this->route[20].point[35][1] = 0;
    this->route[20].point[36][0] = 2;       this->route[20].point[36][1] = 2;
    this->route[20].point[37][0] = 1;       this->route[20].point[37][1] = 0;
    this->route[20].point[38][0] = 0;       this->route[20].point[38][1] = 2;
    this->route[20].point[39][0] = 1;       this->route[20].point[39][1] = 4;
    this->route[20].point[40][0] = 0;       this->route[20].point[40][1] = 6;
    this->route[20].point[41][0] = 2;       this->route[20].point[41][1] = 7;
    this->route[20].point[42][0] = 4;       this->route[20].point[42][1] = 6;
    this->route[20].point[43][0] = 6;       this->route[20].point[43][1] = 7;
    this->route[20].point[44][0] = 7;       this->route[20].point[44][1] = 5;
    this->route[20].point[45][0] = 5;       this->route[20].point[45][1] = 4;
    this->route[20].point[46][0] = 3;       this->route[20].point[46][1] = 5;
    this->route[20].point[47][0] = 4;       this->route[20].point[47][1] = 3;
    this->route[20].point[48][0] = 6;       this->route[20].point[48][1] = 4;
    this->route[20].point[49][0] = 7;       this->route[20].point[49][1] = 6;
    this->route[20].point[50][0] = 5;       this->route[20].point[50][1] = 7;
    this->route[20].point[51][0] = 4;       this->route[20].point[51][1] = 5;
    this->route[20].point[52][0] = 3;       this->route[20].point[52][1] = 3;
    this->route[20].point[53][0] = 5;       this->route[20].point[53][1] = 2;
    this->route[20].point[54][0] = 7;       this->route[20].point[54][1] = 1;
    this->route[20].point[55][0] = 5;       this->route[20].point[55][1] = 0;
    this->route[20].point[56][0] = 3;       this->route[20].point[56][1] = 1;
    this->route[20].point[57][0] = 2;       this->route[20].point[57][1] = 3;
    this->route[20].point[58][0] = 4;       this->route[20].point[58][1] = 4;
    this->route[20].point[59][0] = 6;       this->route[20].point[59][1] = 3;
    this->route[20].point[60][0] = 4;       this->route[20].point[60][1] = 2;
    this->route[20].point[61][0] = 3;       this->route[20].point[61][1] = 4;
    this->route[20].point[62][0] = 5;       this->route[20].point[62][1] = 5;
    this->route[20].point[63][0] = 3;       this->route[20].point[63][1] = 6;

    //11    18      39      22      13      16      41      24
    //38    21      12      17      40      23      2       15
    //19    10      37      58      1       14      25      42
    //36    57      20      53      62      47      64      3
    //9     32      61      48      59      52      43      26
    //56    35      54      29      46      63      4       51
    //31    8       33      60      49      6       27      44
    //34    55      30      7       28      45      50      5
    //stepOfHouse = 64

    //this->route[21].point[64][2] = {
    this->route[21].point[0][0] = 2;        this->route[21].point[0][1] = 5;
    this->route[21].point[1][0] = 1;        this->route[21].point[1][1] = 7;
    this->route[21].point[2][0] = 0;        this->route[21].point[2][1] = 5;
    this->route[21].point[3][0] = 1;        this->route[21].point[3][1] = 3;
    this->route[21].point[4][0] = 0;        this->route[21].point[4][1] = 1;
    this->route[21].point[5][0] = 2;        this->route[21].point[5][1] = 0;
    this->route[21].point[6][0] = 4;        this->route[21].point[6][1] = 1;
    this->route[21].point[7][0] = 6;        this->route[21].point[7][1] = 0;
    this->route[21].point[8][0] = 7;        this->route[21].point[8][1] = 2;
    this->route[21].point[9][0] = 6;        this->route[21].point[9][1] = 4;
    this->route[21].point[10][0] = 7;       this->route[21].point[10][1] = 6;
    this->route[21].point[11][0] = 5;       this->route[21].point[11][1] = 7;
    this->route[21].point[12][0] = 3;       this->route[21].point[12][1] = 6;
    this->route[21].point[13][0] = 1;       this->route[21].point[13][1] = 5;
    this->route[21].point[14][0] = 0;       this->route[21].point[14][1] = 7;
    this->route[21].point[15][0] = 2;       this->route[21].point[15][1] = 6;
    this->route[21].point[16][0] = 4;       this->route[21].point[16][1] = 7;
    this->route[21].point[17][0] = 6;       this->route[21].point[17][1] = 6;
    this->route[21].point[18][0] = 7;       this->route[21].point[18][1] = 4;
    this->route[21].point[19][0] = 6;       this->route[21].point[19][1] = 2;
    this->route[21].point[20][0] = 7;       this->route[21].point[20][1] = 0;
    this->route[21].point[21][0] = 5;       this->route[21].point[21][1] = 1;
    this->route[21].point[22][0] = 3;       this->route[21].point[22][1] = 0;
    this->route[21].point[23][0] = 1;       this->route[21].point[23][1] = 1;
    this->route[21].point[24][0] = 0;       this->route[21].point[24][1] = 3;
    this->route[21].point[25][0] = 2;       this->route[21].point[25][1] = 2;
    this->route[21].point[26][0] = 1;       this->route[21].point[26][1] = 0;
    this->route[21].point[27][0] = 0;       this->route[21].point[27][1] = 2;
    this->route[21].point[28][0] = 1;       this->route[21].point[28][1] = 4;
    this->route[21].point[29][0] = 0;       this->route[21].point[29][1] = 6;
    this->route[21].point[30][0] = 2;       this->route[21].point[30][1] = 7;
    this->route[21].point[31][0] = 4;       this->route[21].point[31][1] = 6;
    this->route[21].point[32][0] = 6;       this->route[21].point[32][1] = 7;
    this->route[21].point[33][0] = 7;       this->route[21].point[33][1] = 5;
    this->route[21].point[34][0] = 6;       this->route[21].point[34][1] = 3;
    this->route[21].point[35][0] = 7;       this->route[21].point[35][1] = 1;
    this->route[21].point[36][0] = 5;       this->route[21].point[36][1] = 0;
    this->route[21].point[37][0] = 3;       this->route[21].point[37][1] = 1;
    this->route[21].point[38][0] = 4;       this->route[21].point[38][1] = 3;
    this->route[21].point[39][0] = 5;       this->route[21].point[39][1] = 5;
    this->route[21].point[40][0] = 3;       this->route[21].point[40][1] = 4;
    this->route[21].point[41][0] = 5;       this->route[21].point[41][1] = 3;
    this->route[21].point[42][0] = 6;       this->route[21].point[42][1] = 5;
    this->route[21].point[43][0] = 7;       this->route[21].point[43][1] = 7;
    this->route[21].point[44][0] = 5;       this->route[21].point[44][1] = 6;
    this->route[21].point[45][0] = 3;       this->route[21].point[45][1] = 7;
    this->route[21].point[46][0] = 4;       this->route[21].point[46][1] = 5;
    this->route[21].point[47][0] = 2;       this->route[21].point[47][1] = 4;
    this->route[21].point[48][0] = 3;       this->route[21].point[48][1] = 2;
    this->route[21].point[49][0] = 4;       this->route[21].point[49][1] = 4;
    this->route[21].point[50][0] = 5;       this->route[21].point[50][1] = 2;
    this->route[21].point[51][0] = 7;       this->route[21].point[51][1] = 3;
    this->route[21].point[52][0] = 6;       this->route[21].point[52][1] = 1;
    this->route[21].point[53][0] = 4;       this->route[21].point[53][1] = 0;
    this->route[21].point[54][0] = 2;       this->route[21].point[54][1] = 1;
    this->route[21].point[55][0] = 0;       this->route[21].point[55][1] = 0;
    this->route[21].point[56][0] = 1;       this->route[21].point[56][1] = 2;
    this->route[21].point[57][0] = 3;       this->route[21].point[57][1] = 3;
    this->route[21].point[58][0] = 5;       this->route[21].point[58][1] = 4;
    this->route[21].point[59][0] = 4;       this->route[21].point[59][1] = 2;
    this->route[21].point[60][0] = 2;       this->route[21].point[60][1] = 3;
    this->route[21].point[61][0] = 3;       this->route[21].point[61][1] = 5;
    this->route[21].point[62][0] = 1;       this->route[21].point[62][1] = 6;
    this->route[21].point[63][0] = 0;       this->route[21].point[63][1] = 4;

    //56    5       28      25      64      3       30      15
    //27    24      57      4       29      14      63      2
    //6     55      26      61      48      1       16      31
    //23    38      49      58      41      62      13      46
    //54    7       60      39      50      47      32      17
    //37    22      51      42      59      40      45      12
    //8     53      20      35      10      43      18      33
    //21    36      9       52      19      34      11      44
    //stepOfHouse = 64

    //this->route[22].point[64][2] = {
    this->route[22].point[0][0] = 2;        this->route[22].point[0][1] = 6;
    this->route[22].point[1][0] = 0;        this->route[22].point[1][1] = 7;
    this->route[22].point[2][0] = 1;        this->route[22].point[2][1] = 5;
    this->route[22].point[3][0] = 2;        this->route[22].point[3][1] = 7;
    this->route[22].point[4][0] = 0;        this->route[22].point[4][1] = 6;
    this->route[22].point[5][0] = 1;        this->route[22].point[5][1] = 4;
    this->route[22].point[6][0] = 0;        this->route[22].point[6][1] = 2;
    this->route[22].point[7][0] = 1;        this->route[22].point[7][1] = 0;
    this->route[22].point[8][0] = 3;        this->route[22].point[8][1] = 1;
    this->route[22].point[9][0] = 5;        this->route[22].point[9][1] = 0;
    this->route[22].point[10][0] = 7;       this->route[22].point[10][1] = 1;
    this->route[22].point[11][0] = 6;       this->route[22].point[11][1] = 3;
    this->route[22].point[12][0] = 7;       this->route[22].point[12][1] = 5;
    this->route[22].point[13][0] = 6;       this->route[22].point[13][1] = 7;
    this->route[22].point[14][0] = 4;       this->route[22].point[14][1] = 6;
    this->route[22].point[15][0] = 6;       this->route[22].point[15][1] = 5;
    this->route[22].point[16][0] = 7;       this->route[22].point[16][1] = 7;
    this->route[22].point[17][0] = 5;       this->route[22].point[17][1] = 6;
    this->route[22].point[18][0] = 3;       this->route[22].point[18][1] = 7;
    this->route[22].point[19][0] = 1;       this->route[22].point[19][1] = 6;
    this->route[22].point[20][0] = 0;       this->route[22].point[20][1] = 4;
    this->route[22].point[21][0] = 2;       this->route[22].point[21][1] = 5;
    this->route[22].point[22][0] = 1;       this->route[22].point[22][1] = 7;
    this->route[22].point[23][0] = 0;       this->route[22].point[23][1] = 5;
    this->route[22].point[24][0] = 1;       this->route[22].point[24][1] = 3;
    this->route[22].point[25][0] = 0;       this->route[22].point[25][1] = 1;
    this->route[22].point[26][0] = 2;       this->route[22].point[26][1] = 0;
    this->route[22].point[27][0] = 1;       this->route[22].point[27][1] = 2;
    this->route[22].point[28][0] = 0;       this->route[22].point[28][1] = 0;
    this->route[22].point[29][0] = 2;       this->route[22].point[29][1] = 1;
    this->route[22].point[30][0] = 4;       this->route[22].point[30][1] = 0;
    this->route[22].point[31][0] = 6;       this->route[22].point[31][1] = 1;
    this->route[22].point[32][0] = 7;       this->route[22].point[32][1] = 3;
    this->route[22].point[33][0] = 5;       this->route[22].point[33][1] = 2;
    this->route[22].point[34][0] = 6;       this->route[22].point[34][1] = 0;
    this->route[22].point[35][0] = 7;       this->route[22].point[35][1] = 2;
    this->route[22].point[36][0] = 6;       this->route[22].point[36][1] = 4;
    this->route[22].point[37][0] = 7;       this->route[22].point[37][1] = 6;
    this->route[22].point[38][0] = 5;       this->route[22].point[38][1] = 7;
    this->route[22].point[39][0] = 3;       this->route[22].point[39][1] = 6;
    this->route[22].point[40][0] = 4;       this->route[22].point[40][1] = 4;
    this->route[22].point[41][0] = 2;       this->route[22].point[41][1] = 3;
    this->route[22].point[42][0] = 4;       this->route[22].point[42][1] = 2;
    this->route[22].point[43][0] = 3;       this->route[22].point[43][1] = 4;
    this->route[22].point[44][0] = 5;       this->route[22].point[44][1] = 5;
    this->route[22].point[45][0] = 7;       this->route[22].point[45][1] = 4;
    this->route[22].point[46][0] = 6;       this->route[22].point[46][1] = 6;
    this->route[22].point[47][0] = 5;       this->route[22].point[47][1] = 4;
    this->route[22].point[48][0] = 6;       this->route[22].point[48][1] = 2;
    this->route[22].point[49][0] = 7;       this->route[22].point[49][1] = 0;
    this->route[22].point[50][0] = 5;       this->route[22].point[50][1] = 1;
    this->route[22].point[51][0] = 3;       this->route[22].point[51][1] = 0;
    this->route[22].point[52][0] = 1;       this->route[22].point[52][1] = 1;
    this->route[22].point[53][0] = 3;       this->route[22].point[53][1] = 2;
    this->route[22].point[54][0] = 5;       this->route[22].point[54][1] = 3;
    this->route[22].point[55][0] = 4;       this->route[22].point[55][1] = 5;
    this->route[22].point[56][0] = 3;       this->route[22].point[56][1] = 3;
    this->route[22].point[57][0] = 4;       this->route[22].point[57][1] = 1;
    this->route[22].point[58][0] = 2;       this->route[22].point[58][1] = 2;
    this->route[22].point[59][0] = 0;       this->route[22].point[59][1] = 3;
    this->route[22].point[60][0] = 2;       this->route[22].point[60][1] = 4;
    this->route[22].point[61][0] = 4;       this->route[22].point[61][1] = 3;
    this->route[22].point[62][0] = 3;       this->route[22].point[62][1] = 5;
    this->route[22].point[63][0] = 4;       this->route[22].point[63][1] = 7;

    //29    26      7       60      21      24      5       2
    //8     53      28      25      6       3       20      23
    //27    30      59      42      61      22      1       4
    //52    9       54      57      44      63      40      19
    //31    58      43      62      41      56      15      64
    //10    51      34      55      48      45      18      39
    //35    32      49      12      37      16      47      14
    //50    11      36      33      46      13      38      17
    //stepOfHouse = 64

    //this->route[23].point[64][2] = {
    this->route[23].point[0][0] = 2;        this->route[23].point[0][1] = 7;
    this->route[23].point[1][0] = 0;        this->route[23].point[1][1] = 6;
    this->route[23].point[2][0] = 1;        this->route[23].point[2][1] = 4;
    this->route[23].point[3][0] = 0;        this->route[23].point[3][1] = 2;
    this->route[23].point[4][0] = 1;        this->route[23].point[4][1] = 0;
    this->route[23].point[5][0] = 3;        this->route[23].point[5][1] = 1;
    this->route[23].point[6][0] = 5;        this->route[23].point[6][1] = 0;
    this->route[23].point[7][0] = 7;        this->route[23].point[7][1] = 1;
    this->route[23].point[8][0] = 6;        this->route[23].point[8][1] = 3;
    this->route[23].point[9][0] = 7;        this->route[23].point[9][1] = 5;
    this->route[23].point[10][0] = 6;       this->route[23].point[10][1] = 7;
    this->route[23].point[11][0] = 4;       this->route[23].point[11][1] = 6;
    this->route[23].point[12][0] = 6;       this->route[23].point[12][1] = 5;
    this->route[23].point[13][0] = 7;       this->route[23].point[13][1] = 7;
    this->route[23].point[14][0] = 5;       this->route[23].point[14][1] = 6;
    this->route[23].point[15][0] = 3;       this->route[23].point[15][1] = 7;
    this->route[23].point[16][0] = 1;       this->route[23].point[16][1] = 6;
    this->route[23].point[17][0] = 0;       this->route[23].point[17][1] = 4;
    this->route[23].point[18][0] = 2;       this->route[23].point[18][1] = 5;
    this->route[23].point[19][0] = 1;       this->route[23].point[19][1] = 7;
    this->route[23].point[20][0] = 0;       this->route[23].point[20][1] = 5;
    this->route[23].point[21][0] = 2;       this->route[23].point[21][1] = 6;
    this->route[23].point[22][0] = 0;       this->route[23].point[22][1] = 7;
    this->route[23].point[23][0] = 1;       this->route[23].point[23][1] = 5;
    this->route[23].point[24][0] = 0;       this->route[23].point[24][1] = 3;
    this->route[23].point[25][0] = 1;       this->route[23].point[25][1] = 1;
    this->route[23].point[26][0] = 3;       this->route[23].point[26][1] = 0;
    this->route[23].point[27][0] = 5;       this->route[23].point[27][1] = 1;
    this->route[23].point[28][0] = 7;       this->route[23].point[28][1] = 0;
    this->route[23].point[29][0] = 6;       this->route[23].point[29][1] = 2;
    this->route[23].point[30][0] = 7;       this->route[23].point[30][1] = 4;
    this->route[23].point[31][0] = 6;       this->route[23].point[31][1] = 6;
    this->route[23].point[32][0] = 4;       this->route[23].point[32][1] = 7;
    this->route[23].point[33][0] = 5;       this->route[23].point[33][1] = 5;
    this->route[23].point[34][0] = 7;       this->route[23].point[34][1] = 6;
    this->route[23].point[35][0] = 5;       this->route[23].point[35][1] = 7;
    this->route[23].point[36][0] = 3;       this->route[23].point[36][1] = 6;
    this->route[23].point[37][0] = 4;       this->route[23].point[37][1] = 4;
    this->route[23].point[38][0] = 2;       this->route[23].point[38][1] = 3;
    this->route[23].point[39][0] = 4;       this->route[23].point[39][1] = 2;
    this->route[23].point[40][0] = 6;       this->route[23].point[40][1] = 1;
    this->route[23].point[41][0] = 5;       this->route[23].point[41][1] = 3;
    this->route[23].point[42][0] = 7;       this->route[23].point[42][1] = 2;
    this->route[23].point[43][0] = 6;       this->route[23].point[43][1] = 0;
    this->route[23].point[44][0] = 4;       this->route[23].point[44][1] = 1;
    this->route[23].point[45][0] = 2;       this->route[23].point[45][1] = 2;
    this->route[23].point[46][0] = 3;       this->route[23].point[46][1] = 4;
    this->route[23].point[47][0] = 1;       this->route[23].point[47][1] = 3;
    this->route[23].point[48][0] = 0;       this->route[23].point[48][1] = 1;
    this->route[23].point[49][0] = 2;       this->route[23].point[49][1] = 0;
    this->route[23].point[50][0] = 3;       this->route[23].point[50][1] = 2;
    this->route[23].point[51][0] = 4;       this->route[23].point[51][1] = 0;
    this->route[23].point[52][0] = 2;       this->route[23].point[52][1] = 1;
    this->route[23].point[53][0] = 0;       this->route[23].point[53][1] = 0;
    this->route[23].point[54][0] = 1;       this->route[23].point[54][1] = 2;
    this->route[23].point[55][0] = 3;       this->route[23].point[55][1] = 3;
    this->route[23].point[56][0] = 5;       this->route[23].point[56][1] = 4;
    this->route[23].point[57][0] = 7;       this->route[23].point[57][1] = 3;
    this->route[23].point[58][0] = 5;       this->route[23].point[58][1] = 2;
    this->route[23].point[59][0] = 6;       this->route[23].point[59][1] = 4;
    this->route[23].point[60][0] = 4;       this->route[23].point[60][1] = 5;
    this->route[23].point[61][0] = 2;       this->route[23].point[61][1] = 4;
    this->route[23].point[62][0] = 4;       this->route[23].point[62][1] = 3;
    this->route[23].point[63][0] = 3;       this->route[23].point[63][1] = 5;

    //54    49      4       25      18      21      2       23
    //5     26      55      48      3       24      17      20
    //50    53      46      39      62      19      22      1
    //27    6       51      56      47      64      37      16
    //52    45      40      63      38      61      12      33
    //7     28      59      42      57      34      15      36
    //44    41      30      9       60      13      32      11
    //29    8       43      58      31      10      35      14
    //stepOfHouse = 64

    //this->route[24].point[64][2] = {
    this->route[24].point[0][0] = 3;        this->route[24].point[0][1] = 0;
    this->route[24].point[1][0] = 1;        this->route[24].point[1][1] = 1;
    this->route[24].point[2][0] = 0;        this->route[24].point[2][1] = 3;
    this->route[24].point[3][0] = 1;        this->route[24].point[3][1] = 5;
    this->route[24].point[4][0] = 0;        this->route[24].point[4][1] = 7;
    this->route[24].point[5][0] = 2;        this->route[24].point[5][1] = 6;
    this->route[24].point[6][0] = 4;        this->route[24].point[6][1] = 7;
    this->route[24].point[7][0] = 6;        this->route[24].point[7][1] = 6;
    this->route[24].point[8][0] = 7;        this->route[24].point[8][1] = 4;
    this->route[24].point[9][0] = 6;        this->route[24].point[9][1] = 2;
    this->route[24].point[10][0] = 7;       this->route[24].point[10][1] = 0;
    this->route[24].point[11][0] = 5;       this->route[24].point[11][1] = 1;
    this->route[24].point[12][0] = 7;       this->route[24].point[12][1] = 2;
    this->route[24].point[13][0] = 6;       this->route[24].point[13][1] = 0;
    this->route[24].point[14][0] = 4;       this->route[24].point[14][1] = 1;
    this->route[24].point[15][0] = 2;       this->route[24].point[15][1] = 0;
    this->route[24].point[16][0] = 0;       this->route[24].point[16][1] = 1;
    this->route[24].point[17][0] = 2;       this->route[24].point[17][1] = 2;
    this->route[24].point[18][0] = 1;       this->route[24].point[18][1] = 0;
    this->route[24].point[19][0] = 0;       this->route[24].point[19][1] = 2;
    this->route[24].point[20][0] = 1;       this->route[24].point[20][1] = 4;
    this->route[24].point[21][0] = 0;       this->route[24].point[21][1] = 6;
    this->route[24].point[22][0] = 2;       this->route[24].point[22][1] = 7;
    this->route[24].point[23][0] = 4;       this->route[24].point[23][1] = 6;
    this->route[24].point[24][0] = 6;       this->route[24].point[24][1] = 7;
    this->route[24].point[25][0] = 7;       this->route[24].point[25][1] = 5;
    this->route[24].point[26][0] = 6;       this->route[24].point[26][1] = 3;
    this->route[24].point[27][0] = 7;       this->route[24].point[27][1] = 1;
    this->route[24].point[28][0] = 5;       this->route[24].point[28][1] = 0;
    this->route[24].point[29][0] = 3;       this->route[24].point[29][1] = 1;
    this->route[24].point[30][0] = 4;       this->route[24].point[30][1] = 3;
    this->route[24].point[31][0] = 5;       this->route[24].point[31][1] = 5;
    this->route[24].point[32][0] = 7;       this->route[24].point[32][1] = 6;
    this->route[24].point[33][0] = 6;       this->route[24].point[33][1] = 4;
    this->route[24].point[34][0] = 5;       this->route[24].point[34][1] = 6;
    this->route[24].point[35][0] = 7;       this->route[24].point[35][1] = 7;
    this->route[24].point[36][0] = 6;       this->route[24].point[36][1] = 5;
    this->route[24].point[37][0] = 5;       this->route[24].point[37][1] = 7;
    this->route[24].point[38][0] = 3;       this->route[24].point[38][1] = 6;
    this->route[24].point[39][0] = 1;       this->route[24].point[39][1] = 7;
    this->route[24].point[40][0] = 2;       this->route[24].point[40][1] = 5;
    this->route[24].point[41][0] = 3;       this->route[24].point[41][1] = 3;
    this->route[24].point[42][0] = 2;       this->route[24].point[42][1] = 1;
    this->route[24].point[43][0] = 0;       this->route[24].point[43][1] = 0;
    this->route[24].point[44][0] = 1;       this->route[24].point[44][1] = 2;
    this->route[24].point[45][0] = 0;       this->route[24].point[45][1] = 4;
    this->route[24].point[46][0] = 2;       this->route[24].point[46][1] = 3;
    this->route[24].point[47][0] = 4;       this->route[24].point[47][1] = 4;
    this->route[24].point[48][0] = 5;       this->route[24].point[48][1] = 2;
    this->route[24].point[49][0] = 7;       this->route[24].point[49][1] = 3;
    this->route[24].point[50][0] = 5;       this->route[24].point[50][1] = 4;
    this->route[24].point[51][0] = 3;       this->route[24].point[51][1] = 5;
    this->route[24].point[52][0] = 1;       this->route[24].point[52][1] = 6;
    this->route[24].point[53][0] = 3;       this->route[24].point[53][1] = 7;
    this->route[24].point[54][0] = 4;       this->route[24].point[54][1] = 5;
    this->route[24].point[55][0] = 2;       this->route[24].point[55][1] = 4;
    this->route[24].point[56][0] = 0;       this->route[24].point[56][1] = 5;
    this->route[24].point[57][0] = 1;       this->route[24].point[57][1] = 3;
    this->route[24].point[58][0] = 3;       this->route[24].point[58][1] = 4;
    this->route[24].point[59][0] = 5;       this->route[24].point[59][1] = 3;
    this->route[24].point[60][0] = 3;       this->route[24].point[60][1] = 2;
    this->route[24].point[61][0] = 4;       this->route[24].point[61][1] = 0;
    this->route[24].point[62][0] = 6;       this->route[24].point[62][1] = 1;
    this->route[24].point[63][0] = 4;       this->route[24].point[63][1] = 2;

    //44    17      20      3       46      57      22      5
    //19    2       45      58      21      4       53      40
    //16    43      18      47      56      41      6       23
    //1     30      61      42      59      52      39      54
    //62    15      64      31      48      55      24      7
    //29    12      49      60      51      32      35      38
    //14    63      10      27      34      37      8       25
    //11    28      13      50      9       26      33      36
    //stepOfHouse = 64

    //this->route[25].point[64][2] = {
    this->route[25].point[0][0] = 3;        this->route[25].point[0][1] = 1;
    this->route[25].point[1][0] = 1;        this->route[25].point[1][1] = 0;
    this->route[25].point[2][0] = 0;        this->route[25].point[2][1] = 2;
    this->route[25].point[3][0] = 2;        this->route[25].point[3][1] = 1;
    this->route[25].point[4][0] = 0;        this->route[25].point[4][1] = 0;
    this->route[25].point[5][0] = 1;        this->route[25].point[5][1] = 2;
    this->route[25].point[6][0] = 2;        this->route[25].point[6][1] = 0;
    this->route[25].point[7][0] = 0;        this->route[25].point[7][1] = 1;
    this->route[25].point[8][0] = 1;        this->route[25].point[8][1] = 3;
    this->route[25].point[9][0] = 0;        this->route[25].point[9][1] = 5;
    this->route[25].point[10][0] = 1;       this->route[25].point[10][1] = 7;
    this->route[25].point[11][0] = 3;       this->route[25].point[11][1] = 6;
    this->route[25].point[12][0] = 5;       this->route[25].point[12][1] = 7;
    this->route[25].point[13][0] = 7;       this->route[25].point[13][1] = 6;
    this->route[25].point[14][0] = 6;       this->route[25].point[14][1] = 4;
    this->route[25].point[15][0] = 7;       this->route[25].point[15][1] = 2;
    this->route[25].point[16][0] = 6;       this->route[25].point[16][1] = 0;
    this->route[25].point[17][0] = 4;       this->route[25].point[17][1] = 1;
    this->route[25].point[18][0] = 6;       this->route[25].point[18][1] = 2;
    this->route[25].point[19][0] = 7;       this->route[25].point[19][1] = 0;
    this->route[25].point[20][0] = 5;       this->route[25].point[20][1] = 1;
    this->route[25].point[21][0] = 3;       this->route[25].point[21][1] = 0;
    this->route[25].point[22][0] = 1;       this->route[25].point[22][1] = 1;
    this->route[25].point[23][0] = 0;       this->route[25].point[23][1] = 3;
    this->route[25].point[24][0] = 2;       this->route[25].point[24][1] = 2;
    this->route[25].point[25][0] = 4;       this->route[25].point[25][1] = 3;
    this->route[25].point[26][0] = 2;       this->route[25].point[26][1] = 4;
    this->route[25].point[27][0] = 3;       this->route[25].point[27][1] = 2;
    this->route[25].point[28][0] = 4;       this->route[25].point[28][1] = 0;
    this->route[25].point[29][0] = 6;       this->route[25].point[29][1] = 1;
    this->route[25].point[30][0] = 7;       this->route[25].point[30][1] = 3;
    this->route[25].point[31][0] = 5;       this->route[25].point[31][1] = 2;
    this->route[25].point[32][0] = 7;       this->route[25].point[32][1] = 1;
    this->route[25].point[33][0] = 5;       this->route[25].point[33][1] = 0;
    this->route[25].point[34][0] = 4;       this->route[25].point[34][1] = 2;
    this->route[25].point[35][0] = 6;       this->route[25].point[35][1] = 3;
    this->route[25].point[36][0] = 7;       this->route[25].point[36][1] = 5;
    this->route[25].point[37][0] = 6;       this->route[25].point[37][1] = 7;
    this->route[25].point[38][0] = 5;       this->route[25].point[38][1] = 5;
    this->route[25].point[39][0] = 7;       this->route[25].point[39][1] = 4;
    this->route[25].point[40][0] = 6;       this->route[25].point[40][1] = 6;
    this->route[25].point[41][0] = 4;       this->route[25].point[41][1] = 7;
    this->route[25].point[42][0] = 2;       this->route[25].point[42][1] = 6;
    this->route[25].point[43][0] = 0;       this->route[25].point[43][1] = 7;
    this->route[25].point[44][0] = 1;       this->route[25].point[44][1] = 5;
    this->route[25].point[45][0] = 3;       this->route[25].point[45][1] = 4;
    this->route[25].point[46][0] = 5;       this->route[25].point[46][1] = 3;
    this->route[25].point[47][0] = 4;       this->route[25].point[47][1] = 5;
    this->route[25].point[48][0] = 3;       this->route[25].point[48][1] = 7;
    this->route[25].point[49][0] = 5;       this->route[25].point[49][1] = 6;
    this->route[25].point[50][0] = 7;       this->route[25].point[50][1] = 7;
    this->route[25].point[51][0] = 6;       this->route[25].point[51][1] = 5;
    this->route[25].point[52][0] = 4;       this->route[25].point[52][1] = 6;
    this->route[25].point[53][0] = 5;       this->route[25].point[53][1] = 4;
    this->route[25].point[54][0] = 3;       this->route[25].point[54][1] = 3;
    this->route[25].point[55][0] = 1;       this->route[25].point[55][1] = 4;
    this->route[25].point[56][0] = 0;       this->route[25].point[56][1] = 6;
    this->route[25].point[57][0] = 2;       this->route[25].point[57][1] = 7;
    this->route[25].point[58][0] = 3;       this->route[25].point[58][1] = 5;
    this->route[25].point[59][0] = 1;       this->route[25].point[59][1] = 6;
    this->route[25].point[60][0] = 0;       this->route[25].point[60][1] = 4;
    this->route[25].point[61][0] = 2;       this->route[25].point[61][1] = 5;
    this->route[25].point[62][0] = 4;       this->route[25].point[62][1] = 4;
    this->route[25].point[63][0] = 2;       this->route[25].point[63][1] = 3;

    //5     8       3       24      61      10      57      44
    //2     23      6       9       56      45      60      11
    //7     4       25      64      27      62      43      58
    //22    1       28      55      46      59      12      49
    //29    18      35      26      63      48      53      42
    //34    21      32      47      54      39      50      13
    //17    30      19      36      15      52      41      38
    //20    33      16      31      40      37      14      51
    //stepOfHouse = 64

    //this->route[26].point[64][2] = {
    this->route[26].point[0][0] = 3;        this->route[26].point[0][1] = 2;
    this->route[26].point[1][0] = 4;        this->route[26].point[1][1] = 0;
    this->route[26].point[2][0] = 6;        this->route[26].point[2][1] = 1;
    this->route[26].point[3][0] = 7;        this->route[26].point[3][1] = 3;
    this->route[26].point[4][0] = 6;        this->route[26].point[4][1] = 5;
    this->route[26].point[5][0] = 7;        this->route[26].point[5][1] = 7;
    this->route[26].point[6][0] = 5;        this->route[26].point[6][1] = 6;
    this->route[26].point[7][0] = 7;        this->route[26].point[7][1] = 5;
    this->route[26].point[8][0] = 6;        this->route[26].point[8][1] = 7;
    this->route[26].point[9][0] = 4;        this->route[26].point[9][1] = 6;
    this->route[26].point[10][0] = 2;       this->route[26].point[10][1] = 7;
    this->route[26].point[11][0] = 0;       this->route[26].point[11][1] = 6;
    this->route[26].point[12][0] = 1;       this->route[26].point[12][1] = 4;
    this->route[26].point[13][0] = 0;       this->route[26].point[13][1] = 2;
    this->route[26].point[14][0] = 1;       this->route[26].point[14][1] = 0;
    this->route[26].point[15][0] = 3;       this->route[26].point[15][1] = 1;
    this->route[26].point[16][0] = 5;       this->route[26].point[16][1] = 0;
    this->route[26].point[17][0] = 7;       this->route[26].point[17][1] = 1;
    this->route[26].point[18][0] = 6;       this->route[26].point[18][1] = 3;
    this->route[26].point[19][0] = 5;       this->route[26].point[19][1] = 1;
    this->route[26].point[20][0] = 7;       this->route[26].point[20][1] = 0;
    this->route[26].point[21][0] = 6;       this->route[26].point[21][1] = 2;
    this->route[26].point[22][0] = 7;       this->route[26].point[22][1] = 4;
    this->route[26].point[23][0] = 6;       this->route[26].point[23][1] = 6;
    this->route[26].point[24][0] = 5;       this->route[26].point[24][1] = 4;
    this->route[26].point[25][0] = 4;       this->route[26].point[25][1] = 2;
    this->route[26].point[26][0] = 3;       this->route[26].point[26][1] = 0;
    this->route[26].point[27][0] = 1;       this->route[26].point[27][1] = 1;
    this->route[26].point[28][0] = 0;       this->route[26].point[28][1] = 3;
    this->route[26].point[29][0] = 2;       this->route[26].point[29][1] = 2;
    this->route[26].point[30][0] = 0;       this->route[26].point[30][1] = 1;
    this->route[26].point[31][0] = 2;       this->route[26].point[31][1] = 0;
    this->route[26].point[32][0] = 4;       this->route[26].point[32][1] = 1;
    this->route[26].point[33][0] = 6;       this->route[26].point[33][1] = 0;
    this->route[26].point[34][0] = 7;       this->route[26].point[34][1] = 2;
    this->route[26].point[35][0] = 5;       this->route[26].point[35][1] = 3;
    this->route[26].point[36][0] = 3;       this->route[26].point[36][1] = 4;
    this->route[26].point[37][0] = 1;       this->route[26].point[37][1] = 5;
    this->route[26].point[38][0] = 0;       this->route[26].point[38][1] = 7;
    this->route[26].point[39][0] = 2;       this->route[26].point[39][1] = 6;
    this->route[26].point[40][0] = 4;       this->route[26].point[40][1] = 7;
    this->route[26].point[41][0] = 5;       this->route[26].point[41][1] = 5;
    this->route[26].point[42][0] = 7;       this->route[26].point[42][1] = 6;
    this->route[26].point[43][0] = 5;       this->route[26].point[43][1] = 7;
    this->route[26].point[44][0] = 3;       this->route[26].point[44][1] = 6;
    this->route[26].point[45][0] = 1;       this->route[26].point[45][1] = 7;
    this->route[26].point[46][0] = 0;       this->route[26].point[46][1] = 5;
    this->route[26].point[47][0] = 1;       this->route[26].point[47][1] = 3;
    this->route[26].point[48][0] = 2;       this->route[26].point[48][1] = 1;
    this->route[26].point[49][0] = 0;       this->route[26].point[49][1] = 0;
    this->route[26].point[50][0] = 1;       this->route[26].point[50][1] = 2;
    this->route[26].point[51][0] = 3;       this->route[26].point[51][1] = 3;
    this->route[26].point[52][0] = 5;       this->route[26].point[52][1] = 2;
    this->route[26].point[53][0] = 6;       this->route[26].point[53][1] = 4;
    this->route[26].point[54][0] = 4;       this->route[26].point[54][1] = 5;
    this->route[26].point[55][0] = 3;       this->route[26].point[55][1] = 7;
    this->route[26].point[56][0] = 2;       this->route[26].point[56][1] = 5;
    this->route[26].point[57][0] = 4;       this->route[26].point[57][1] = 4;
    this->route[26].point[58][0] = 2;       this->route[26].point[58][1] = 3;
    this->route[26].point[59][0] = 0;       this->route[26].point[59][1] = 4;
    this->route[26].point[60][0] = 1;       this->route[26].point[60][1] = 6;
    this->route[26].point[61][0] = 3;       this->route[26].point[61][1] = 5;
    this->route[26].point[62][0] = 4;       this->route[26].point[62][1] = 3;
    this->route[26].point[63][0] = 2;       this->route[26].point[63][1] = 4;

    //50    31      14      29      60      47      12      39
    //15    28      51      48      13      38      61      46
    //32    49      30      59      64      57      40      11
    //27    16      1       52      37      62      45      56
    //2     33      26      63      58      55      10      41
    //17    20      53      36      25      42      7       44
    //34    3       22      19      54      5       24      9
    //21    18      35      4       23      8       43      6
    //stepOfHouse = 64

    //this->route[27].point[64][2] = {
    this->route[27].point[0][0] = 3;        this->route[27].point[0][1] = 3;
    this->route[27].point[1][0] = 4;        this->route[27].point[1][1] = 1;
    this->route[27].point[2][0] = 6;        this->route[27].point[2][1] = 0;
    this->route[27].point[3][0] = 7;        this->route[27].point[3][1] = 2;
    this->route[27].point[4][0] = 6;        this->route[27].point[4][1] = 4;
    this->route[27].point[5][0] = 7;        this->route[27].point[5][1] = 6;
    this->route[27].point[6][0] = 5;        this->route[27].point[6][1] = 7;
    this->route[27].point[7][0] = 6;        this->route[27].point[7][1] = 5;
    this->route[27].point[8][0] = 7;        this->route[27].point[8][1] = 7;
    this->route[27].point[9][0] = 5;        this->route[27].point[9][1] = 6;
    this->route[27].point[10][0] = 7;       this->route[27].point[10][1] = 5;
    this->route[27].point[11][0] = 6;       this->route[27].point[11][1] = 7;
    this->route[27].point[12][0] = 4;       this->route[27].point[12][1] = 6;
    this->route[27].point[13][0] = 2;       this->route[27].point[13][1] = 7;
    this->route[27].point[14][0] = 0;       this->route[27].point[14][1] = 6;
    this->route[27].point[15][0] = 1;       this->route[27].point[15][1] = 4;
    this->route[27].point[16][0] = 0;       this->route[27].point[16][1] = 2;
    this->route[27].point[17][0] = 1;       this->route[27].point[17][1] = 0;
    this->route[27].point[18][0] = 3;       this->route[27].point[18][1] = 1;
    this->route[27].point[19][0] = 5;       this->route[27].point[19][1] = 0;
    this->route[27].point[20][0] = 7;       this->route[27].point[20][1] = 1;
    this->route[27].point[21][0] = 5;       this->route[27].point[21][1] = 2;
    this->route[27].point[22][0] = 7;       this->route[27].point[22][1] = 3;
    this->route[27].point[23][0] = 6;       this->route[27].point[23][1] = 1;
    this->route[27].point[24][0] = 4;       this->route[27].point[24][1] = 0;
    this->route[27].point[25][0] = 2;       this->route[27].point[25][1] = 1;
    this->route[27].point[26][0] = 0;       this->route[27].point[26][1] = 0;
    this->route[27].point[27][0] = 1;       this->route[27].point[27][1] = 2;
    this->route[27].point[28][0] = 2;       this->route[27].point[28][1] = 0;
    this->route[27].point[29][0] = 0;       this->route[27].point[29][1] = 1;
    this->route[27].point[30][0] = 2;       this->route[27].point[30][1] = 2;
    this->route[27].point[31][0] = 3;       this->route[27].point[31][1] = 0;
    this->route[27].point[32][0] = 1;       this->route[27].point[32][1] = 1;
    this->route[27].point[33][0] = 0;       this->route[27].point[33][1] = 3;
    this->route[27].point[34][0] = 1;       this->route[27].point[34][1] = 5;
    this->route[27].point[35][0] = 0;       this->route[27].point[35][1] = 7;
    this->route[27].point[36][0] = 2;       this->route[27].point[36][1] = 6;
    this->route[27].point[37][0] = 4;       this->route[27].point[37][1] = 7;
    this->route[27].point[38][0] = 6;       this->route[27].point[38][1] = 6;
    this->route[27].point[39][0] = 7;       this->route[27].point[39][1] = 4;
    this->route[27].point[40][0] = 6;       this->route[27].point[40][1] = 2;
    this->route[27].point[41][0] = 7;       this->route[27].point[41][1] = 0;
    this->route[27].point[42][0] = 5;       this->route[27].point[42][1] = 1;
    this->route[27].point[43][0] = 6;       this->route[27].point[43][1] = 3;
    this->route[27].point[44][0] = 4;       this->route[27].point[44][1] = 4;
    this->route[27].point[45][0] = 3;       this->route[27].point[45][1] = 6;
    this->route[27].point[46][0] = 5;       this->route[27].point[46][1] = 5;
    this->route[27].point[47][0] = 4;       this->route[27].point[47][1] = 3;
    this->route[27].point[48][0] = 3;       this->route[27].point[48][1] = 5;
    this->route[27].point[49][0] = 5;       this->route[27].point[49][1] = 4;
    this->route[27].point[50][0] = 4;       this->route[27].point[50][1] = 2;
    this->route[27].point[51][0] = 2;       this->route[27].point[51][1] = 3;
    this->route[27].point[52][0] = 0;       this->route[27].point[52][1] = 4;
    this->route[27].point[53][0] = 1;       this->route[27].point[53][1] = 6;
    this->route[27].point[54][0] = 3;       this->route[27].point[54][1] = 7;
    this->route[27].point[55][0] = 4;       this->route[27].point[55][1] = 5;
    this->route[27].point[56][0] = 5;       this->route[27].point[56][1] = 3;
    this->route[27].point[57][0] = 3;       this->route[27].point[57][1] = 4;
    this->route[27].point[58][0] = 1;       this->route[27].point[58][1] = 3;
    this->route[27].point[59][0] = 3;       this->route[27].point[59][1] = 2;
    this->route[27].point[60][0] = 2;       this->route[27].point[60][1] = 4;
    this->route[27].point[61][0] = 0;       this->route[27].point[61][1] = 5;
    this->route[27].point[62][0] = 1;       this->route[27].point[62][1] = 7;
    this->route[27].point[63][0] = 2;       this->route[27].point[63][1] = 5;

    //27    30      17      34      53      62      15      36
    //18    33      28      59      16      35      54      63
    //29    26      31      52      61      64      37      14
    //32    19      60      1       58      49      46      55
    //25    2       51      48      45      56      13      38
    //20    43      22      57      50      47      10      7
    //3     24      41      44      5       8       39      12
    //42    21      4       23      40      11      6       9
    //stepOfHouse = 64

    //this->route[28].point[64][2] = {
    this->route[28].point[0][0] = 3;        this->route[28].point[0][1] = 4;
    this->route[28].point[1][0] = 4;        this->route[28].point[1][1] = 6;
    this->route[28].point[2][0] = 6;        this->route[28].point[2][1] = 7;
    this->route[28].point[3][0] = 7;        this->route[28].point[3][1] = 5;
    this->route[28].point[4][0] = 6;        this->route[28].point[4][1] = 3;
    this->route[28].point[5][0] = 7;        this->route[28].point[5][1] = 1;
    this->route[28].point[6][0] = 5;        this->route[28].point[6][1] = 0;
    this->route[28].point[7][0] = 6;        this->route[28].point[7][1] = 2;
    this->route[28].point[8][0] = 7;        this->route[28].point[8][1] = 0;
    this->route[28].point[9][0] = 5;        this->route[28].point[9][1] = 1;
    this->route[28].point[10][0] = 7;       this->route[28].point[10][1] = 2;
    this->route[28].point[11][0] = 6;       this->route[28].point[11][1] = 0;
    this->route[28].point[12][0] = 4;       this->route[28].point[12][1] = 1;
    this->route[28].point[13][0] = 2;       this->route[28].point[13][1] = 0;
    this->route[28].point[14][0] = 0;       this->route[28].point[14][1] = 1;
    this->route[28].point[15][0] = 1;       this->route[28].point[15][1] = 3;
    this->route[28].point[16][0] = 0;       this->route[28].point[16][1] = 5;
    this->route[28].point[17][0] = 1;       this->route[28].point[17][1] = 7;
    this->route[28].point[18][0] = 3;       this->route[28].point[18][1] = 6;
    this->route[28].point[19][0] = 5;       this->route[28].point[19][1] = 7;
    this->route[28].point[20][0] = 7;       this->route[28].point[20][1] = 6;
    this->route[28].point[21][0] = 5;       this->route[28].point[21][1] = 5;
    this->route[28].point[22][0] = 7;       this->route[28].point[22][1] = 4;
    this->route[28].point[23][0] = 6;       this->route[28].point[23][1] = 6;
    this->route[28].point[24][0] = 4;       this->route[28].point[24][1] = 7;
    this->route[28].point[25][0] = 2;       this->route[28].point[25][1] = 6;
    this->route[28].point[26][0] = 0;       this->route[28].point[26][1] = 7;
    this->route[28].point[27][0] = 1;       this->route[28].point[27][1] = 5;
    this->route[28].point[28][0] = 2;       this->route[28].point[28][1] = 7;
    this->route[28].point[29][0] = 0;       this->route[28].point[29][1] = 6;
    this->route[28].point[30][0] = 2;       this->route[28].point[30][1] = 5;
    this->route[28].point[31][0] = 3;       this->route[28].point[31][1] = 7;
    this->route[28].point[32][0] = 1;       this->route[28].point[32][1] = 6;
    this->route[28].point[33][0] = 0;       this->route[28].point[33][1] = 4;
    this->route[28].point[34][0] = 1;       this->route[28].point[34][1] = 2;
    this->route[28].point[35][0] = 0;       this->route[28].point[35][1] = 0;
    this->route[28].point[36][0] = 2;       this->route[28].point[36][1] = 1;
    this->route[28].point[37][0] = 4;       this->route[28].point[37][1] = 0;
    this->route[28].point[38][0] = 6;       this->route[28].point[38][1] = 1;
    this->route[28].point[39][0] = 7;       this->route[28].point[39][1] = 3;
    this->route[28].point[40][0] = 6;       this->route[28].point[40][1] = 5;
    this->route[28].point[41][0] = 7;       this->route[28].point[41][1] = 7;
    this->route[28].point[42][0] = 5;       this->route[28].point[42][1] = 6;
    this->route[28].point[43][0] = 6;       this->route[28].point[43][1] = 4;
    this->route[28].point[44][0] = 5;       this->route[28].point[44][1] = 2;
    this->route[28].point[45][0] = 4;       this->route[28].point[45][1] = 4;
    this->route[28].point[46][0] = 3;       this->route[28].point[46][1] = 2;
    this->route[28].point[47][0] = 5;       this->route[28].point[47][1] = 3;
    this->route[28].point[48][0] = 4;       this->route[28].point[48][1] = 5;
    this->route[28].point[49][0] = 3;       this->route[28].point[49][1] = 3;
    this->route[28].point[50][0] = 5;       this->route[28].point[50][1] = 4;
    this->route[28].point[51][0] = 4;       this->route[28].point[51][1] = 2;
    this->route[28].point[52][0] = 3;       this->route[28].point[52][1] = 0;
    this->route[28].point[53][0] = 1;       this->route[28].point[53][1] = 1;
    this->route[28].point[54][0] = 2;       this->route[28].point[54][1] = 3;
    this->route[28].point[55][0] = 3;       this->route[28].point[55][1] = 5;
    this->route[28].point[56][0] = 1;       this->route[28].point[56][1] = 4;
    this->route[28].point[57][0] = 0;       this->route[28].point[57][1] = 2;
    this->route[28].point[58][0] = 1;       this->route[28].point[58][1] = 0;
    this->route[28].point[59][0] = 3;       this->route[28].point[59][1] = 1;
    this->route[28].point[60][0] = 4;       this->route[28].point[60][1] = 3;
    this->route[28].point[61][0] = 2;       this->route[28].point[61][1] = 4;
    this->route[28].point[62][0] = 0;       this->route[28].point[62][1] = 3;
    this->route[28].point[63][0] = 2;       this->route[28].point[63][1] = 2;

    //36    15      58      63      34      17      30      27
    //59    54      35      16      57      28      33      18
    //14    37      64      55      62      31      26      29
    //53    60      47      50      1       56      19      32
    //38    13      52      61      46      49      2       25
    //7     10      45      48      51      22      43      20
    //12    39      8       5       44      41      24      3
    //9     6       11      40      23      4       21      42
    //stepOfHouse = 64

    //this->route[29].point[64][2] = {
    this->route[29].point[0][0] = 3;        this->route[29].point[0][1] = 5;
    this->route[29].point[1][0] = 4;        this->route[29].point[1][1] = 7;
    this->route[29].point[2][0] = 6;        this->route[29].point[2][1] = 6;
    this->route[29].point[3][0] = 7;        this->route[29].point[3][1] = 4;
    this->route[29].point[4][0] = 6;        this->route[29].point[4][1] = 2;
    this->route[29].point[5][0] = 7;        this->route[29].point[5][1] = 0;
    this->route[29].point[6][0] = 5;        this->route[29].point[6][1] = 1;
    this->route[29].point[7][0] = 7;        this->route[29].point[7][1] = 2;
    this->route[29].point[8][0] = 6;        this->route[29].point[8][1] = 0;
    this->route[29].point[9][0] = 4;        this->route[29].point[9][1] = 1;
    this->route[29].point[10][0] = 2;       this->route[29].point[10][1] = 0;
    this->route[29].point[11][0] = 0;       this->route[29].point[11][1] = 1;
    this->route[29].point[12][0] = 1;       this->route[29].point[12][1] = 3;
    this->route[29].point[13][0] = 0;       this->route[29].point[13][1] = 5;
    this->route[29].point[14][0] = 1;       this->route[29].point[14][1] = 7;
    this->route[29].point[15][0] = 3;       this->route[29].point[15][1] = 6;
    this->route[29].point[16][0] = 5;       this->route[29].point[16][1] = 7;
    this->route[29].point[17][0] = 7;       this->route[29].point[17][1] = 6;
    this->route[29].point[18][0] = 6;       this->route[29].point[18][1] = 4;
    this->route[29].point[19][0] = 5;       this->route[29].point[19][1] = 6;
    this->route[29].point[20][0] = 7;       this->route[29].point[20][1] = 7;
    this->route[29].point[21][0] = 6;       this->route[29].point[21][1] = 5;
    this->route[29].point[22][0] = 7;       this->route[29].point[22][1] = 3;
    this->route[29].point[23][0] = 6;       this->route[29].point[23][1] = 1;
    this->route[29].point[24][0] = 5;       this->route[29].point[24][1] = 3;
    this->route[29].point[25][0] = 4;       this->route[29].point[25][1] = 5;
    this->route[29].point[26][0] = 3;       this->route[29].point[26][1] = 7;
    this->route[29].point[27][0] = 1;       this->route[29].point[27][1] = 6;
    this->route[29].point[28][0] = 0;       this->route[29].point[28][1] = 4;
    this->route[29].point[29][0] = 2;       this->route[29].point[29][1] = 5;
    this->route[29].point[30][0] = 0;       this->route[29].point[30][1] = 6;
    this->route[29].point[31][0] = 2;       this->route[29].point[31][1] = 7;
    this->route[29].point[32][0] = 4;       this->route[29].point[32][1] = 6;
    this->route[29].point[33][0] = 6;       this->route[29].point[33][1] = 7;
    this->route[29].point[34][0] = 7;       this->route[29].point[34][1] = 5;
    this->route[29].point[35][0] = 5;       this->route[29].point[35][1] = 4;
    this->route[29].point[36][0] = 3;       this->route[29].point[36][1] = 3;
    this->route[29].point[37][0] = 1;       this->route[29].point[37][1] = 4;
    this->route[29].point[38][0] = 2;       this->route[29].point[38][1] = 2;
    this->route[29].point[39][0] = 3;       this->route[29].point[39][1] = 0;
    this->route[29].point[40][0] = 4;       this->route[29].point[40][1] = 2;
    this->route[29].point[41][0] = 6;       this->route[29].point[41][1] = 3;
    this->route[29].point[42][0] = 7;       this->route[29].point[42][1] = 1;
    this->route[29].point[43][0] = 5;       this->route[29].point[43][1] = 0;
    this->route[29].point[44][0] = 3;       this->route[29].point[44][1] = 1;
    this->route[29].point[45][0] = 1;       this->route[29].point[45][1] = 0;
    this->route[29].point[46][0] = 0;       this->route[29].point[46][1] = 2;
    this->route[29].point[47][0] = 2;       this->route[29].point[47][1] = 1;
    this->route[29].point[48][0] = 0;       this->route[29].point[48][1] = 0;
    this->route[29].point[49][0] = 1;       this->route[29].point[49][1] = 2;
    this->route[29].point[50][0] = 2;       this->route[29].point[50][1] = 4;
    this->route[29].point[51][0] = 4;       this->route[29].point[51][1] = 3;
    this->route[29].point[52][0] = 5;       this->route[29].point[52][1] = 5;
    this->route[29].point[53][0] = 3;       this->route[29].point[53][1] = 4;
    this->route[29].point[54][0] = 2;       this->route[29].point[54][1] = 6;
    this->route[29].point[55][0] = 0;       this->route[29].point[55][1] = 7;
    this->route[29].point[56][0] = 1;       this->route[29].point[56][1] = 5;
    this->route[29].point[57][0] = 0;       this->route[29].point[57][1] = 3;
    this->route[29].point[58][0] = 1;       this->route[29].point[58][1] = 1;
    this->route[29].point[59][0] = 3;       this->route[29].point[59][1] = 2;
    this->route[29].point[60][0] = 4;       this->route[29].point[60][1] = 0;
    this->route[29].point[61][0] = 5;       this->route[29].point[61][1] = 2;
    this->route[29].point[62][0] = 4;       this->route[29].point[62][1] = 4;
    this->route[29].point[63][0] = 2;       this->route[29].point[63][1] = 3;

    //49    12      47      58      29      14      31      56
    //46    59      50      13      38      57      28      15
    //11    48      39      64      51      30      55      32
    //40    45      60      37      54      1       16      27
    //61    10      41      52      63      26      33      2
    //44    7       62      25      36      53      20      17
    //9     24      5       42      19      22      3       34
    //6     43      8       23      4       35      18      21
    //stepOfHouse = 64

    //this->route[30].point[64][2] = {
    this->route[30].point[0][0] = 3;        this->route[30].point[0][1] = 6;
    this->route[30].point[1][0] = 1;        this->route[30].point[1][1] = 7;
    this->route[30].point[2][0] = 0;        this->route[30].point[2][1] = 5;
    this->route[30].point[3][0] = 2;        this->route[30].point[3][1] = 6;
    this->route[30].point[4][0] = 0;        this->route[30].point[4][1] = 7;
    this->route[30].point[5][0] = 1;        this->route[30].point[5][1] = 5;
    this->route[30].point[6][0] = 2;        this->route[30].point[6][1] = 7;
    this->route[30].point[7][0] = 0;        this->route[30].point[7][1] = 6;
    this->route[30].point[8][0] = 1;        this->route[30].point[8][1] = 4;
    this->route[30].point[9][0] = 0;        this->route[30].point[9][1] = 2;
    this->route[30].point[10][0] = 1;       this->route[30].point[10][1] = 0;
    this->route[30].point[11][0] = 3;       this->route[30].point[11][1] = 1;
    this->route[30].point[12][0] = 5;       this->route[30].point[12][1] = 0;
    this->route[30].point[13][0] = 7;       this->route[30].point[13][1] = 1;
    this->route[30].point[14][0] = 6;       this->route[30].point[14][1] = 3;
    this->route[30].point[15][0] = 7;       this->route[30].point[15][1] = 5;
    this->route[30].point[16][0] = 6;       this->route[30].point[16][1] = 7;
    this->route[30].point[17][0] = 4;       this->route[30].point[17][1] = 6;
    this->route[30].point[18][0] = 6;       this->route[30].point[18][1] = 5;
    this->route[30].point[19][0] = 7;       this->route[30].point[19][1] = 7;
    this->route[30].point[20][0] = 5;       this->route[30].point[20][1] = 6;
    this->route[30].point[21][0] = 3;       this->route[30].point[21][1] = 7;
    this->route[30].point[22][0] = 1;       this->route[30].point[22][1] = 6;
    this->route[30].point[23][0] = 0;       this->route[30].point[23][1] = 4;
    this->route[30].point[24][0] = 2;       this->route[30].point[24][1] = 5;
    this->route[30].point[25][0] = 4;       this->route[30].point[25][1] = 4;
    this->route[30].point[26][0] = 2;       this->route[30].point[26][1] = 3;
    this->route[30].point[27][0] = 3;       this->route[30].point[27][1] = 5;
    this->route[30].point[28][0] = 4;       this->route[30].point[28][1] = 7;
    this->route[30].point[29][0] = 6;       this->route[30].point[29][1] = 6;
    this->route[30].point[30][0] = 7;       this->route[30].point[30][1] = 4;
    this->route[30].point[31][0] = 5;       this->route[30].point[31][1] = 5;
    this->route[30].point[32][0] = 7;       this->route[30].point[32][1] = 6;
    this->route[30].point[33][0] = 5;       this->route[30].point[33][1] = 7;
    this->route[30].point[34][0] = 4;       this->route[30].point[34][1] = 5;
    this->route[30].point[35][0] = 6;       this->route[30].point[35][1] = 4;
    this->route[30].point[36][0] = 7;       this->route[30].point[36][1] = 2;
    this->route[30].point[37][0] = 6;       this->route[30].point[37][1] = 0;
    this->route[30].point[38][0] = 5;       this->route[30].point[38][1] = 2;
    this->route[30].point[39][0] = 7;       this->route[30].point[39][1] = 3;
    this->route[30].point[40][0] = 6;       this->route[30].point[40][1] = 1;
    this->route[30].point[41][0] = 4;       this->route[30].point[41][1] = 0;
    this->route[30].point[42][0] = 3;       this->route[30].point[42][1] = 2;
    this->route[30].point[43][0] = 5;       this->route[30].point[43][1] = 3;
    this->route[30].point[44][0] = 4;       this->route[30].point[44][1] = 1;
    this->route[30].point[45][0] = 2;       this->route[30].point[45][1] = 0;
    this->route[30].point[46][0] = 0;       this->route[30].point[46][1] = 1;
    this->route[30].point[47][0] = 1;       this->route[30].point[47][1] = 3;
    this->route[30].point[48][0] = 3;       this->route[30].point[48][1] = 4;
    this->route[30].point[49][0] = 4;       this->route[30].point[49][1] = 2;
    this->route[30].point[50][0] = 3;       this->route[30].point[50][1] = 0;
    this->route[30].point[51][0] = 1;       this->route[30].point[51][1] = 1;
    this->route[30].point[52][0] = 0;       this->route[30].point[52][1] = 3;
    this->route[30].point[53][0] = 2;       this->route[30].point[53][1] = 2;
    this->route[30].point[54][0] = 4;       this->route[30].point[54][1] = 3;
    this->route[30].point[55][0] = 5;       this->route[30].point[55][1] = 1;
    this->route[30].point[56][0] = 7;       this->route[30].point[56][1] = 0;
    this->route[30].point[57][0] = 6;       this->route[30].point[57][1] = 2;
    this->route[30].point[58][0] = 5;       this->route[30].point[58][1] = 4;
    this->route[30].point[59][0] = 3;       this->route[30].point[59][1] = 3;
    this->route[30].point[60][0] = 2;       this->route[30].point[60][1] = 1;
    this->route[30].point[61][0] = 0;       this->route[30].point[61][1] = 0;
    this->route[30].point[62][0] = 1;       this->route[30].point[62][1] = 2;
    this->route[30].point[63][0] = 2;       this->route[30].point[63][1] = 4;

    //62    47      10      53      24      3       8       5
    //11    52      63      48      9       6       23      2
    //46    61      54      27      64      25      4       7
    //51    12      43      60      49      28      1       22
    //42    45      50      55      26      35      18      29
    //13    56      39      44      59      32      21      34
    //38    41      58      15      36      19      30      17
    //57    14      37      40      31      16      33      20
    //stepOfHouse = 64

    //this->route[31].point[64][2] = {
    this->route[31].point[0][0] = 3;        this->route[31].point[0][1] = 7;
    this->route[31].point[1][0] = 1;        this->route[31].point[1][1] = 6;
    this->route[31].point[2][0] = 0;        this->route[31].point[2][1] = 4;
    this->route[31].point[3][0] = 1;        this->route[31].point[3][1] = 2;
    this->route[31].point[4][0] = 0;        this->route[31].point[4][1] = 0;
    this->route[31].point[5][0] = 2;        this->route[31].point[5][1] = 1;
    this->route[31].point[6][0] = 4;        this->route[31].point[6][1] = 0;
    this->route[31].point[7][0] = 6;        this->route[31].point[7][1] = 1;
    this->route[31].point[8][0] = 7;        this->route[31].point[8][1] = 3;
    this->route[31].point[9][0] = 6;        this->route[31].point[9][1] = 5;
    this->route[31].point[10][0] = 7;       this->route[31].point[10][1] = 7;
    this->route[31].point[11][0] = 5;       this->route[31].point[11][1] = 6;
    this->route[31].point[12][0] = 7;       this->route[31].point[12][1] = 5;
    this->route[31].point[13][0] = 6;       this->route[31].point[13][1] = 7;
    this->route[31].point[14][0] = 4;       this->route[31].point[14][1] = 6;
    this->route[31].point[15][0] = 2;       this->route[31].point[15][1] = 7;
    this->route[31].point[16][0] = 0;       this->route[31].point[16][1] = 6;
    this->route[31].point[17][0] = 2;       this->route[31].point[17][1] = 5;
    this->route[31].point[18][0] = 1;       this->route[31].point[18][1] = 7;
    this->route[31].point[19][0] = 0;       this->route[31].point[19][1] = 5;
    this->route[31].point[20][0] = 1;       this->route[31].point[20][1] = 3;
    this->route[31].point[21][0] = 0;       this->route[31].point[21][1] = 1;
    this->route[31].point[22][0] = 2;       this->route[31].point[22][1] = 0;
    this->route[31].point[23][0] = 4;       this->route[31].point[23][1] = 1;
    this->route[31].point[24][0] = 6;       this->route[31].point[24][1] = 0;
    this->route[31].point[25][0] = 7;       this->route[31].point[25][1] = 2;
    this->route[31].point[26][0] = 6;       this->route[31].point[26][1] = 4;
    this->route[31].point[27][0] = 7;       this->route[31].point[27][1] = 6;
    this->route[31].point[28][0] = 5;       this->route[31].point[28][1] = 7;
    this->route[31].point[29][0] = 3;       this->route[31].point[29][1] = 6;
    this->route[31].point[30][0] = 4;       this->route[31].point[30][1] = 4;
    this->route[31].point[31][0] = 5;       this->route[31].point[31][1] = 2;
    this->route[31].point[32][0] = 7;       this->route[31].point[32][1] = 1;
    this->route[31].point[33][0] = 6;       this->route[31].point[33][1] = 3;
    this->route[31].point[34][0] = 5;       this->route[31].point[34][1] = 5;
    this->route[31].point[35][0] = 4;       this->route[31].point[35][1] = 3;
    this->route[31].point[36][0] = 5;       this->route[31].point[36][1] = 1;
    this->route[31].point[37][0] = 7;       this->route[31].point[37][1] = 0;
    this->route[31].point[38][0] = 6;       this->route[31].point[38][1] = 2;
    this->route[31].point[39][0] = 5;       this->route[31].point[39][1] = 4;
    this->route[31].point[40][0] = 4;       this->route[31].point[40][1] = 2;
    this->route[31].point[41][0] = 5;       this->route[31].point[41][1] = 0;
    this->route[31].point[42][0] = 3;       this->route[31].point[42][1] = 1;
    this->route[31].point[43][0] = 1;       this->route[31].point[43][1] = 0;
    this->route[31].point[44][0] = 2;       this->route[31].point[44][1] = 2;
    this->route[31].point[45][0] = 3;       this->route[31].point[45][1] = 0;
    this->route[31].point[46][0] = 1;       this->route[31].point[46][1] = 1;
    this->route[31].point[47][0] = 3;       this->route[31].point[47][1] = 2;
    this->route[31].point[48][0] = 2;       this->route[31].point[48][1] = 4;
    this->route[31].point[49][0] = 0;       this->route[31].point[49][1] = 3;
    this->route[31].point[50][0] = 1;       this->route[31].point[50][1] = 5;
    this->route[31].point[51][0] = 0;       this->route[31].point[51][1] = 7;
    this->route[31].point[52][0] = 2;       this->route[31].point[52][1] = 6;
    this->route[31].point[53][0] = 3;       this->route[31].point[53][1] = 4;
    this->route[31].point[54][0] = 5;       this->route[31].point[54][1] = 3;
    this->route[31].point[55][0] = 7;       this->route[31].point[55][1] = 4;
    this->route[31].point[56][0] = 6;       this->route[31].point[56][1] = 6;
    this->route[31].point[57][0] = 4;       this->route[31].point[57][1] = 7;
    this->route[31].point[58][0] = 3;       this->route[31].point[58][1] = 5;
    this->route[31].point[59][0] = 2;       this->route[31].point[59][1] = 3;
    this->route[31].point[60][0] = 0;       this->route[31].point[60][1] = 2;
    this->route[31].point[61][0] = 1;       this->route[31].point[61][1] = 4;
    this->route[31].point[62][0] = 3;       this->route[31].point[62][1] = 3;
    this->route[31].point[63][0] = 4;       this->route[31].point[63][1] = 5;

    //5     22      61      50      3       20      17      52
    //44    47      4       21      62      51      2       19
    //23    6       45      60      49      18      53      16
    //46    43      48      63      54      59      30      1
    //7     24      41      36      31      64      15      58
    //42    37      32      55      40      35      12      29
    //25    8       39      34      27      10      57      14
    //38    33      26      9       56      13      28      11
    //stepOfHouse = 64

    //this->route[32].point[64][2] = {
    this->route[32].point[0][0] = 4;        this->route[32].point[0][1] = 0;
    this->route[32].point[1][0] = 6;        this->route[32].point[1][1] = 1;
    this->route[32].point[2][0] = 7;        this->route[32].point[2][1] = 3;
    this->route[32].point[3][0] = 6;        this->route[32].point[3][1] = 5;
    this->route[32].point[4][0] = 7;        this->route[32].point[4][1] = 7;
    this->route[32].point[5][0] = 5;        this->route[32].point[5][1] = 6;
    this->route[32].point[6][0] = 7;        this->route[32].point[6][1] = 5;
    this->route[32].point[7][0] = 6;        this->route[32].point[7][1] = 7;
    this->route[32].point[8][0] = 4;        this->route[32].point[8][1] = 6;
    this->route[32].point[9][0] = 2;        this->route[32].point[9][1] = 7;
    this->route[32].point[10][0] = 0;       this->route[32].point[10][1] = 6;
    this->route[32].point[11][0] = 1;       this->route[32].point[11][1] = 4;
    this->route[32].point[12][0] = 0;       this->route[32].point[12][1] = 2;
    this->route[32].point[13][0] = 1;       this->route[32].point[13][1] = 0;
    this->route[32].point[14][0] = 3;       this->route[32].point[14][1] = 1;
    this->route[32].point[15][0] = 5;       this->route[32].point[15][1] = 0;
    this->route[32].point[16][0] = 7;       this->route[32].point[16][1] = 1;
    this->route[32].point[17][0] = 6;       this->route[32].point[17][1] = 3;
    this->route[32].point[18][0] = 5;       this->route[32].point[18][1] = 1;
    this->route[32].point[19][0] = 7;       this->route[32].point[19][1] = 0;
    this->route[32].point[20][0] = 6;       this->route[32].point[20][1] = 2;
    this->route[32].point[21][0] = 7;       this->route[32].point[21][1] = 4;
    this->route[32].point[22][0] = 6;       this->route[32].point[22][1] = 6;
    this->route[32].point[23][0] = 5;       this->route[32].point[23][1] = 4;
    this->route[32].point[24][0] = 4;       this->route[32].point[24][1] = 2;
    this->route[32].point[25][0] = 3;       this->route[32].point[25][1] = 0;
    this->route[32].point[26][0] = 1;       this->route[32].point[26][1] = 1;
    this->route[32].point[27][0] = 0;       this->route[32].point[27][1] = 3;
    this->route[32].point[28][0] = 2;       this->route[32].point[28][1] = 2;
    this->route[32].point[29][0] = 0;       this->route[32].point[29][1] = 1;
    this->route[32].point[30][0] = 2;       this->route[32].point[30][1] = 0;
    this->route[32].point[31][0] = 4;       this->route[32].point[31][1] = 1;
    this->route[32].point[32][0] = 6;       this->route[32].point[32][1] = 0;
    this->route[32].point[33][0] = 7;       this->route[32].point[33][1] = 2;
    this->route[32].point[34][0] = 5;       this->route[32].point[34][1] = 3;
    this->route[32].point[35][0] = 3;       this->route[32].point[35][1] = 2;
    this->route[32].point[36][0] = 4;       this->route[32].point[36][1] = 4;
    this->route[32].point[37][0] = 3;       this->route[32].point[37][1] = 6;
    this->route[32].point[38][0] = 5;       this->route[32].point[38][1] = 7;
    this->route[32].point[39][0] = 7;       this->route[32].point[39][1] = 6;
    this->route[32].point[40][0] = 6;       this->route[32].point[40][1] = 4;
    this->route[32].point[41][0] = 5;       this->route[32].point[41][1] = 2;
    this->route[32].point[42][0] = 3;       this->route[32].point[42][1] = 3;
    this->route[32].point[43][0] = 4;       this->route[32].point[43][1] = 5;
    this->route[32].point[44][0] = 3;       this->route[32].point[44][1] = 7;
    this->route[32].point[45][0] = 2;       this->route[32].point[45][1] = 5;
    this->route[32].point[46][0] = 1;       this->route[32].point[46][1] = 7;
    this->route[32].point[47][0] = 0;       this->route[32].point[47][1] = 5;
    this->route[32].point[48][0] = 1;       this->route[32].point[48][1] = 3;
    this->route[32].point[49][0] = 3;       this->route[32].point[49][1] = 4;
    this->route[32].point[50][0] = 5;       this->route[32].point[50][1] = 5;
    this->route[32].point[51][0] = 4;       this->route[32].point[51][1] = 7;
    this->route[32].point[52][0] = 2;       this->route[32].point[52][1] = 6;
    this->route[32].point[53][0] = 0;       this->route[32].point[53][1] = 7;
    this->route[32].point[54][0] = 1;       this->route[32].point[54][1] = 5;
    this->route[32].point[55][0] = 2;       this->route[32].point[55][1] = 3;
    this->route[32].point[56][0] = 3;       this->route[32].point[56][1] = 5;
    this->route[32].point[57][0] = 4;       this->route[32].point[57][1] = 3;
    this->route[32].point[58][0] = 2;       this->route[32].point[58][1] = 4;
    this->route[32].point[59][0] = 1;       this->route[32].point[59][1] = 6;
    this->route[32].point[60][0] = 0;       this->route[32].point[60][1] = 4;
    this->route[32].point[61][0] = 1;       this->route[32].point[61][1] = 2;
    this->route[32].point[62][0] = 0;       this->route[32].point[62][1] = 0;
    this->route[32].point[63][0] = 2;       this->route[32].point[63][1] = 1;

    //63    30      13      28      61      48      11      54
    //14    27      62      49      12      55      60      47
    //31    64      29      56      59      46      53      10
    //26    15      36      43      50      57      38      45
    //1     32      25      58      37      44      9       52
    //16    19      42      35      24      51      6       39
    //33    2       21      18      41      4       23      8
    //20    17      34      3       22      7       40      5
    //stepOfHouse = 64

    //this->route[33].point[64][2] = {
    this->route[33].point[0][0] = 4;        this->route[33].point[0][1] = 1;
    this->route[33].point[1][0] = 6;        this->route[33].point[1][1] = 0;
    this->route[33].point[2][0] = 7;        this->route[33].point[2][1] = 2;
    this->route[33].point[3][0] = 6;        this->route[33].point[3][1] = 4;
    this->route[33].point[4][0] = 7;        this->route[33].point[4][1] = 6;
    this->route[33].point[5][0] = 5;        this->route[33].point[5][1] = 7;
    this->route[33].point[6][0] = 6;        this->route[33].point[6][1] = 5;
    this->route[33].point[7][0] = 7;        this->route[33].point[7][1] = 7;
    this->route[33].point[8][0] = 5;        this->route[33].point[8][1] = 6;
    this->route[33].point[9][0] = 7;        this->route[33].point[9][1] = 5;
    this->route[33].point[10][0] = 6;       this->route[33].point[10][1] = 7;
    this->route[33].point[11][0] = 4;       this->route[33].point[11][1] = 6;
    this->route[33].point[12][0] = 2;       this->route[33].point[12][1] = 7;
    this->route[33].point[13][0] = 0;       this->route[33].point[13][1] = 6;
    this->route[33].point[14][0] = 1;       this->route[33].point[14][1] = 4;
    this->route[33].point[15][0] = 0;       this->route[33].point[15][1] = 2;
    this->route[33].point[16][0] = 1;       this->route[33].point[16][1] = 0;
    this->route[33].point[17][0] = 3;       this->route[33].point[17][1] = 1;
    this->route[33].point[18][0] = 5;       this->route[33].point[18][1] = 0;
    this->route[33].point[19][0] = 7;       this->route[33].point[19][1] = 1;
    this->route[33].point[20][0] = 6;       this->route[33].point[20][1] = 3;
    this->route[33].point[21][0] = 5;       this->route[33].point[21][1] = 1;
    this->route[33].point[22][0] = 7;       this->route[33].point[22][1] = 0;
    this->route[33].point[23][0] = 6;       this->route[33].point[23][1] = 2;
    this->route[33].point[24][0] = 7;       this->route[33].point[24][1] = 4;
    this->route[33].point[25][0] = 6;       this->route[33].point[25][1] = 6;
    this->route[33].point[26][0] = 4;       this->route[33].point[26][1] = 7;
    this->route[33].point[27][0] = 5;       this->route[33].point[27][1] = 5;
    this->route[33].point[28][0] = 4;       this->route[33].point[28][1] = 3;
    this->route[33].point[29][0] = 3;       this->route[33].point[29][1] = 5;
    this->route[33].point[30][0] = 5;       this->route[33].point[30][1] = 4;
    this->route[33].point[31][0] = 7;       this->route[33].point[31][1] = 3;
    this->route[33].point[32][0] = 6;       this->route[33].point[32][1] = 1;
    this->route[33].point[33][0] = 5;       this->route[33].point[33][1] = 3;
    this->route[33].point[34][0] = 4;       this->route[33].point[34][1] = 5;
    this->route[33].point[35][0] = 3;       this->route[33].point[35][1] = 7;
    this->route[33].point[36][0] = 1;       this->route[33].point[36][1] = 6;
    this->route[33].point[37][0] = 0;       this->route[33].point[37][1] = 4;
    this->route[33].point[38][0] = 2;       this->route[33].point[38][1] = 5;
    this->route[33].point[39][0] = 1;       this->route[33].point[39][1] = 7;
    this->route[33].point[40][0] = 3;       this->route[33].point[40][1] = 6;
    this->route[33].point[41][0] = 4;       this->route[33].point[41][1] = 4;
    this->route[33].point[42][0] = 3;       this->route[33].point[42][1] = 2;
    this->route[33].point[43][0] = 4;       this->route[33].point[43][1] = 0;
    this->route[33].point[44][0] = 5;       this->route[33].point[44][1] = 2;
    this->route[33].point[45][0] = 3;       this->route[33].point[45][1] = 3;
    this->route[33].point[46][0] = 2;       this->route[33].point[46][1] = 1;
    this->route[33].point[47][0] = 0;       this->route[33].point[47][1] = 0;
    this->route[33].point[48][0] = 1;       this->route[33].point[48][1] = 2;
    this->route[33].point[49][0] = 2;       this->route[33].point[49][1] = 0;
    this->route[33].point[50][0] = 0;       this->route[33].point[50][1] = 1;
    this->route[33].point[51][0] = 1;       this->route[33].point[51][1] = 3;
    this->route[33].point[52][0] = 0;       this->route[33].point[52][1] = 5;
    this->route[33].point[53][0] = 2;       this->route[33].point[53][1] = 4;
    this->route[33].point[54][0] = 0;       this->route[33].point[54][1] = 3;
    this->route[33].point[55][0] = 1;       this->route[33].point[55][1] = 5;
    this->route[33].point[56][0] = 0;       this->route[33].point[56][1] = 7;
    this->route[33].point[57][0] = 2;       this->route[33].point[57][1] = 6;
    this->route[33].point[58][0] = 3;       this->route[33].point[58][1] = 4;
    this->route[33].point[59][0] = 4;       this->route[33].point[59][1] = 2;
    this->route[33].point[60][0] = 2;       this->route[33].point[60][1] = 3;
    this->route[33].point[61][0] = 1;       this->route[33].point[61][1] = 1;
    this->route[33].point[62][0] = 3;       this->route[33].point[62][1] = 0;
    this->route[33].point[63][0] = 2;       this->route[33].point[63][1] = 2;

    //48    51      16      55      38      53      14      57
    //17    62      49      52      15      56      37      40
    //50    47      64      61      54      39      58      13
    //63    18      43      46      59      30      41      36
    //44    1       60      29      42      35      12      27
    //19    22      45      34      31      28      9       6
    //2     33      24      21      4       7       26      11
    //23    20      3       32      25      10      5       8
    //stepOfHouse = 64

    //this->route[34].point[64][2] = {
    this->route[34].point[0][0] = 4;        this->route[34].point[0][1] = 2;
    this->route[34].point[1][0] = 6;        this->route[34].point[1][1] = 1;
    this->route[34].point[2][0] = 7;        this->route[34].point[2][1] = 3;
    this->route[34].point[3][0] = 6;        this->route[34].point[3][1] = 5;
    this->route[34].point[4][0] = 7;        this->route[34].point[4][1] = 7;
    this->route[34].point[5][0] = 5;        this->route[34].point[5][1] = 6;
    this->route[34].point[6][0] = 7;        this->route[34].point[6][1] = 5;
    this->route[34].point[7][0] = 6;        this->route[34].point[7][1] = 7;
    this->route[34].point[8][0] = 4;        this->route[34].point[8][1] = 6;
    this->route[34].point[9][0] = 2;        this->route[34].point[9][1] = 7;
    this->route[34].point[10][0] = 0;       this->route[34].point[10][1] = 6;
    this->route[34].point[11][0] = 1;       this->route[34].point[11][1] = 4;
    this->route[34].point[12][0] = 0;       this->route[34].point[12][1] = 2;
    this->route[34].point[13][0] = 1;       this->route[34].point[13][1] = 0;
    this->route[34].point[14][0] = 3;       this->route[34].point[14][1] = 1;
    this->route[34].point[15][0] = 5;       this->route[34].point[15][1] = 0;
    this->route[34].point[16][0] = 7;       this->route[34].point[16][1] = 1;
    this->route[34].point[17][0] = 6;       this->route[34].point[17][1] = 3;
    this->route[34].point[18][0] = 5;       this->route[34].point[18][1] = 1;
    this->route[34].point[19][0] = 7;       this->route[34].point[19][1] = 0;
    this->route[34].point[20][0] = 6;       this->route[34].point[20][1] = 2;
    this->route[34].point[21][0] = 7;       this->route[34].point[21][1] = 4;
    this->route[34].point[22][0] = 6;       this->route[34].point[22][1] = 6;
    this->route[34].point[23][0] = 5;       this->route[34].point[23][1] = 4;
    this->route[34].point[24][0] = 3;       this->route[34].point[24][1] = 5;
    this->route[34].point[25][0] = 4;       this->route[34].point[25][1] = 7;
    this->route[34].point[26][0] = 5;       this->route[34].point[26][1] = 5;
    this->route[34].point[27][0] = 7;       this->route[34].point[27][1] = 6;
    this->route[34].point[28][0] = 5;       this->route[34].point[28][1] = 7;
    this->route[34].point[29][0] = 3;       this->route[34].point[29][1] = 6;
    this->route[34].point[30][0] = 1;       this->route[34].point[30][1] = 7;
    this->route[34].point[31][0] = 0;       this->route[34].point[31][1] = 5;
    this->route[34].point[32][0] = 2;       this->route[34].point[32][1] = 6;
    this->route[34].point[33][0] = 0;       this->route[34].point[33][1] = 7;
    this->route[34].point[34][0] = 1;       this->route[34].point[34][1] = 5;
    this->route[34].point[35][0] = 3;       this->route[34].point[35][1] = 4;
    this->route[34].point[36][0] = 5;       this->route[34].point[36][1] = 3;
    this->route[34].point[37][0] = 7;       this->route[34].point[37][1] = 2;
    this->route[34].point[38][0] = 6;       this->route[34].point[38][1] = 0;
    this->route[34].point[39][0] = 4;       this->route[34].point[39][1] = 1;
    this->route[34].point[40][0] = 2;       this->route[34].point[40][1] = 0;
    this->route[34].point[41][0] = 0;       this->route[34].point[41][1] = 1;
    this->route[34].point[42][0] = 2;       this->route[34].point[42][1] = 2;
    this->route[34].point[43][0] = 3;       this->route[34].point[43][1] = 0;
    this->route[34].point[44][0] = 1;       this->route[34].point[44][1] = 1;
    this->route[34].point[45][0] = 0;       this->route[34].point[45][1] = 3;
    this->route[34].point[46][0] = 2;       this->route[34].point[46][1] = 4;
    this->route[34].point[47][0] = 4;       this->route[34].point[47][1] = 3;
    this->route[34].point[48][0] = 6;       this->route[34].point[48][1] = 4;
    this->route[34].point[49][0] = 5;       this->route[34].point[49][1] = 2;
    this->route[34].point[50][0] = 4;       this->route[34].point[50][1] = 0;
    this->route[34].point[51][0] = 3;       this->route[34].point[51][1] = 2;
    this->route[34].point[52][0] = 4;       this->route[34].point[52][1] = 4;
    this->route[34].point[53][0] = 2;       this->route[34].point[53][1] = 5;
    this->route[34].point[54][0] = 1;       this->route[34].point[54][1] = 3;
    this->route[34].point[55][0] = 2;       this->route[34].point[55][1] = 1;
    this->route[34].point[56][0] = 0;       this->route[34].point[56][1] = 0;
    this->route[34].point[57][0] = 1;       this->route[34].point[57][1] = 2;
    this->route[34].point[58][0] = 3;       this->route[34].point[58][1] = 3;
    this->route[34].point[59][0] = 4;       this->route[34].point[59][1] = 5;
    this->route[34].point[60][0] = 3;       this->route[34].point[60][1] = 7;
    this->route[34].point[61][0] = 1;       this->route[34].point[61][1] = 6;
    this->route[34].point[62][0] = 0;       this->route[34].point[62][1] = 4;
    this->route[34].point[63][0] = 2;       this->route[34].point[63][1] = 3;

    //57    42      13      46      63      32      11      34
    //14    45      58      55      12      35      62      31
    //41    56      43      64      47      54      33      10
    //44    15      52      59      36      25      30      61
    //51    40      1       48      53      60      9       26
    //16    19      50      37      24      27      6       29
    //39    2       21      18      49      4       23      8
    //20    17      38      3       22      7       28      5
    //stepOfHouse = 64

    //this->route[35].point[64][2] = {
    this->route[35].point[0][0] = 4;        this->route[35].point[0][1] = 3;
    this->route[35].point[1][0] = 6;        this->route[35].point[1][1] = 4;
    this->route[35].point[2][0] = 7;        this->route[35].point[2][1] = 6;
    this->route[35].point[3][0] = 5;        this->route[35].point[3][1] = 7;
    this->route[35].point[4][0] = 6;        this->route[35].point[4][1] = 5;
    this->route[35].point[5][0] = 7;        this->route[35].point[5][1] = 7;
    this->route[35].point[6][0] = 5;        this->route[35].point[6][1] = 6;
    this->route[35].point[7][0] = 7;        this->route[35].point[7][1] = 5;
    this->route[35].point[8][0] = 6;        this->route[35].point[8][1] = 7;
    this->route[35].point[9][0] = 4;        this->route[35].point[9][1] = 6;
    this->route[35].point[10][0] = 2;       this->route[35].point[10][1] = 7;
    this->route[35].point[11][0] = 0;       this->route[35].point[11][1] = 6;
    this->route[35].point[12][0] = 1;       this->route[35].point[12][1] = 4;
    this->route[35].point[13][0] = 0;       this->route[35].point[13][1] = 2;
    this->route[35].point[14][0] = 1;       this->route[35].point[14][1] = 0;
    this->route[35].point[15][0] = 3;       this->route[35].point[15][1] = 1;
    this->route[35].point[16][0] = 5;       this->route[35].point[16][1] = 0;
    this->route[35].point[17][0] = 7;       this->route[35].point[17][1] = 1;
    this->route[35].point[18][0] = 6;       this->route[35].point[18][1] = 3;
    this->route[35].point[19][0] = 5;       this->route[35].point[19][1] = 5;
    this->route[35].point[20][0] = 7;       this->route[35].point[20][1] = 4;
    this->route[35].point[21][0] = 6;       this->route[35].point[21][1] = 6;
    this->route[35].point[22][0] = 4;       this->route[35].point[22][1] = 7;
    this->route[35].point[23][0] = 3;       this->route[35].point[23][1] = 5;
    this->route[35].point[24][0] = 1;       this->route[35].point[24][1] = 6;
    this->route[35].point[25][0] = 3;       this->route[35].point[25][1] = 7;
    this->route[35].point[26][0] = 4;       this->route[35].point[26][1] = 5;
    this->route[35].point[27][0] = 2;       this->route[35].point[27][1] = 6;
    this->route[35].point[28][0] = 0;       this->route[35].point[28][1] = 7;
    this->route[35].point[29][0] = 1;       this->route[35].point[29][1] = 5;
    this->route[35].point[30][0] = 3;       this->route[35].point[30][1] = 6;
    this->route[35].point[31][0] = 1;       this->route[35].point[31][1] = 7;
    this->route[35].point[32][0] = 0;       this->route[35].point[32][1] = 5;
    this->route[35].point[33][0] = 2;       this->route[35].point[33][1] = 4;
    this->route[35].point[34][0] = 0;       this->route[35].point[34][1] = 3;
    this->route[35].point[35][0] = 1;       this->route[35].point[35][1] = 1;
    this->route[35].point[36][0] = 3;       this->route[35].point[36][1] = 0;
    this->route[35].point[37][0] = 4;       this->route[35].point[37][1] = 2;
    this->route[35].point[38][0] = 2;       this->route[35].point[38][1] = 3;
    this->route[35].point[39][0] = 0;       this->route[35].point[39][1] = 4;
    this->route[35].point[40][0] = 2;       this->route[35].point[40][1] = 5;
    this->route[35].point[41][0] = 4;       this->route[35].point[41][1] = 4;
    this->route[35].point[42][0] = 5;       this->route[35].point[42][1] = 2;
    this->route[35].point[43][0] = 7;       this->route[35].point[43][1] = 3;
    this->route[35].point[44][0] = 6;       this->route[35].point[44][1] = 1;
    this->route[35].point[45][0] = 4;       this->route[35].point[45][1] = 0;
    this->route[35].point[46][0] = 3;       this->route[35].point[46][1] = 2;
    this->route[35].point[47][0] = 5;       this->route[35].point[47][1] = 1;
    this->route[35].point[48][0] = 7;       this->route[35].point[48][1] = 0;
    this->route[35].point[49][0] = 6;       this->route[35].point[49][1] = 2;
    this->route[35].point[50][0] = 5;       this->route[35].point[50][1] = 4;
    this->route[35].point[51][0] = 3;       this->route[35].point[51][1] = 3;
    this->route[35].point[52][0] = 2;       this->route[35].point[52][1] = 1;
    this->route[35].point[53][0] = 0;       this->route[35].point[53][1] = 0;
    this->route[35].point[54][0] = 1;       this->route[35].point[54][1] = 2;
    this->route[35].point[55][0] = 2;       this->route[35].point[55][1] = 0;
    this->route[35].point[56][0] = 0;       this->route[35].point[56][1] = 1;
    this->route[35].point[57][0] = 1;       this->route[35].point[57][1] = 3;
    this->route[35].point[58][0] = 3;       this->route[35].point[58][1] = 4;
    this->route[35].point[59][0] = 5;       this->route[35].point[59][1] = 3;
    this->route[35].point[60][0] = 7;       this->route[35].point[60][1] = 2;
    this->route[35].point[61][0] = 6;       this->route[35].point[61][1] = 0;
    this->route[35].point[62][0] = 4;       this->route[35].point[62][1] = 1;
    this->route[35].point[63][0] = 2;       this->route[35].point[63][1] = 2;

    //54    57      14      35      40      33      12      29
    //15    36      55      58      13      30      25      32
    //56    53      64      39      34      41      28      11
    //37    16      47      52      59      24      31      26
    //46    63      38      1       42      27      10      23
    //17    48      43      60      51      20      7       4
    //62    45      50      19      2       5       22      9
    //49    18      61      44      21      8       3       6
    //stepOfHouse = 64

    //this->route[36].point[64][2] = {
    this->route[36].point[0][0] = 4;        this->route[36].point[0][1] = 4;
    this->route[36].point[1][0] = 6;        this->route[36].point[1][1] = 5;
    this->route[36].point[2][0] = 7;        this->route[36].point[2][1] = 7;
    this->route[36].point[3][0] = 5;        this->route[36].point[3][1] = 6;
    this->route[36].point[4][0] = 7;        this->route[36].point[4][1] = 5;
    this->route[36].point[5][0] = 6;        this->route[36].point[5][1] = 7;
    this->route[36].point[6][0] = 4;        this->route[36].point[6][1] = 6;
    this->route[36].point[7][0] = 2;        this->route[36].point[7][1] = 7;
    this->route[36].point[8][0] = 0;        this->route[36].point[8][1] = 6;
    this->route[36].point[9][0] = 2;        this->route[36].point[9][1] = 5;
    this->route[36].point[10][0] = 3;       this->route[36].point[10][1] = 7;
    this->route[36].point[11][0] = 1;       this->route[36].point[11][1] = 6;
    this->route[36].point[12][0] = 0;       this->route[36].point[12][1] = 4;
    this->route[36].point[13][0] = 1;       this->route[36].point[13][1] = 2;
    this->route[36].point[14][0] = 0;       this->route[36].point[14][1] = 0;
    this->route[36].point[15][0] = 2;       this->route[36].point[15][1] = 1;
    this->route[36].point[16][0] = 4;       this->route[36].point[16][1] = 0;
    this->route[36].point[17][0] = 6;       this->route[36].point[17][1] = 1;
    this->route[36].point[18][0] = 7;       this->route[36].point[18][1] = 3;
    this->route[36].point[19][0] = 5;       this->route[36].point[19][1] = 4;
    this->route[36].point[20][0] = 6;       this->route[36].point[20][1] = 6;
    this->route[36].point[21][0] = 7;       this->route[36].point[21][1] = 4;
    this->route[36].point[22][0] = 6;       this->route[36].point[22][1] = 2;
    this->route[36].point[23][0] = 7;       this->route[36].point[23][1] = 0;
    this->route[36].point[24][0] = 5;       this->route[36].point[24][1] = 1;
    this->route[36].point[25][0] = 7;       this->route[36].point[25][1] = 2;
    this->route[36].point[26][0] = 6;       this->route[36].point[26][1] = 0;
    this->route[36].point[27][0] = 5;       this->route[36].point[27][1] = 2;
    this->route[36].point[28][0] = 7;       this->route[36].point[28][1] = 1;
    this->route[36].point[29][0] = 6;       this->route[36].point[29][1] = 3;
    this->route[36].point[30][0] = 4;       this->route[36].point[30][1] = 2;
    this->route[36].point[31][0] = 5;       this->route[36].point[31][1] = 0;
    this->route[36].point[32][0] = 3;       this->route[36].point[32][1] = 1;
    this->route[36].point[33][0] = 1;       this->route[36].point[33][1] = 0;
    this->route[36].point[34][0] = 0;       this->route[36].point[34][1] = 2;
    this->route[36].point[35][0] = 2;       this->route[36].point[35][1] = 3;
    this->route[36].point[36][0] = 1;       this->route[36].point[36][1] = 5;
    this->route[36].point[37][0] = 0;       this->route[36].point[37][1] = 7;
    this->route[36].point[38][0] = 2;       this->route[36].point[38][1] = 6;
    this->route[36].point[39][0] = 4;       this->route[36].point[39][1] = 7;
    this->route[36].point[40][0] = 3;       this->route[36].point[40][1] = 5;
    this->route[36].point[41][0] = 1;       this->route[36].point[41][1] = 4;
    this->route[36].point[42][0] = 3;       this->route[36].point[42][1] = 3;
    this->route[36].point[43][0] = 4;       this->route[36].point[43][1] = 1;
    this->route[36].point[44][0] = 2;       this->route[36].point[44][1] = 0;
    this->route[36].point[45][0] = 0;       this->route[36].point[45][1] = 1;
    this->route[36].point[46][0] = 2;       this->route[36].point[46][1] = 2;
    this->route[36].point[47][0] = 3;       this->route[36].point[47][1] = 0;
    this->route[36].point[48][0] = 1;       this->route[36].point[48][1] = 1;
    this->route[36].point[49][0] = 0;       this->route[36].point[49][1] = 3;
    this->route[36].point[50][0] = 2;       this->route[36].point[50][1] = 4;
    this->route[36].point[51][0] = 4;       this->route[36].point[51][1] = 3;
    this->route[36].point[52][0] = 6;       this->route[36].point[52][1] = 4;
    this->route[36].point[53][0] = 7;       this->route[36].point[53][1] = 6;
    this->route[36].point[54][0] = 5;       this->route[36].point[54][1] = 7;
    this->route[36].point[55][0] = 4;       this->route[36].point[55][1] = 5;
    this->route[36].point[56][0] = 5;       this->route[36].point[56][1] = 3;
    this->route[36].point[57][0] = 3;       this->route[36].point[57][1] = 4;
    this->route[36].point[58][0] = 5;       this->route[36].point[58][1] = 5;
    this->route[36].point[59][0] = 3;       this->route[36].point[59][1] = 6;
    this->route[36].point[60][0] = 1;       this->route[36].point[60][1] = 7;
    this->route[36].point[61][0] = 0;       this->route[36].point[61][1] = 5;
    this->route[36].point[62][0] = 1;       this->route[36].point[62][1] = 3;
    this->route[36].point[63][0] = 3;       this->route[36].point[63][1] = 2;

    //15    46      35      50      13      62      9       38
    //34    49      14      63      42      37      12      61
    //45    16      47      36      51      10      39      8
    //48    33      64      43      58      41      60      11
    //17    44      31      52      1       56      7       40
    //32    25      28      57      20      59      4       55
    //27    18      23      30      53      2       21      6
    //24    29      26      19      22      5       54      3
    //stepOfHouse = 64

    //this->route[37].point[64][2] = {
    this->route[37].point[0][0] = 4;        this->route[37].point[0][1] = 5;
    this->route[37].point[1][0] = 6;        this->route[37].point[1][1] = 6;
    this->route[37].point[2][0] = 7;        this->route[37].point[2][1] = 4;
    this->route[37].point[3][0] = 6;        this->route[37].point[3][1] = 2;
    this->route[37].point[4][0] = 7;        this->route[37].point[4][1] = 0;
    this->route[37].point[5][0] = 5;        this->route[37].point[5][1] = 1;
    this->route[37].point[6][0] = 7;        this->route[37].point[6][1] = 2;
    this->route[37].point[7][0] = 6;        this->route[37].point[7][1] = 0;
    this->route[37].point[8][0] = 4;        this->route[37].point[8][1] = 1;
    this->route[37].point[9][0] = 2;        this->route[37].point[9][1] = 0;
    this->route[37].point[10][0] = 0;       this->route[37].point[10][1] = 1;
    this->route[37].point[11][0] = 1;       this->route[37].point[11][1] = 3;
    this->route[37].point[12][0] = 0;       this->route[37].point[12][1] = 5;
    this->route[37].point[13][0] = 1;       this->route[37].point[13][1] = 7;
    this->route[37].point[14][0] = 3;       this->route[37].point[14][1] = 6;
    this->route[37].point[15][0] = 5;       this->route[37].point[15][1] = 7;
    this->route[37].point[16][0] = 7;       this->route[37].point[16][1] = 6;
    this->route[37].point[17][0] = 6;       this->route[37].point[17][1] = 4;
    this->route[37].point[18][0] = 5;       this->route[37].point[18][1] = 6;
    this->route[37].point[19][0] = 7;       this->route[37].point[19][1] = 7;
    this->route[37].point[20][0] = 6;       this->route[37].point[20][1] = 5;
    this->route[37].point[21][0] = 7;       this->route[37].point[21][1] = 3;
    this->route[37].point[22][0] = 6;       this->route[37].point[22][1] = 1;
    this->route[37].point[23][0] = 5;       this->route[37].point[23][1] = 3;
    this->route[37].point[24][0] = 3;       this->route[37].point[24][1] = 2;
    this->route[37].point[25][0] = 4;       this->route[37].point[25][1] = 0;
    this->route[37].point[26][0] = 5;       this->route[37].point[26][1] = 2;
    this->route[37].point[27][0] = 7;       this->route[37].point[27][1] = 1;
    this->route[37].point[28][0] = 5;       this->route[37].point[28][1] = 0;
    this->route[37].point[29][0] = 3;       this->route[37].point[29][1] = 1;
    this->route[37].point[30][0] = 1;       this->route[37].point[30][1] = 0;
    this->route[37].point[31][0] = 0;       this->route[37].point[31][1] = 2;
    this->route[37].point[32][0] = 2;       this->route[37].point[32][1] = 1;
    this->route[37].point[33][0] = 0;       this->route[37].point[33][1] = 0;
    this->route[37].point[34][0] = 1;       this->route[37].point[34][1] = 2;
    this->route[37].point[35][0] = 3;       this->route[37].point[35][1] = 3;
    this->route[37].point[36][0] = 5;       this->route[37].point[36][1] = 4;
    this->route[37].point[37][0] = 7;       this->route[37].point[37][1] = 5;
    this->route[37].point[38][0] = 6;       this->route[37].point[38][1] = 7;
    this->route[37].point[39][0] = 4;       this->route[37].point[39][1] = 6;
    this->route[37].point[40][0] = 2;       this->route[37].point[40][1] = 7;
    this->route[37].point[41][0] = 0;       this->route[37].point[41][1] = 6;
    this->route[37].point[42][0] = 2;       this->route[37].point[42][1] = 5;
    this->route[37].point[43][0] = 4;       this->route[37].point[43][1] = 4;
    this->route[37].point[44][0] = 6;       this->route[37].point[44][1] = 3;
    this->route[37].point[45][0] = 5;       this->route[37].point[45][1] = 5;
    this->route[37].point[46][0] = 4;       this->route[37].point[46][1] = 7;
    this->route[37].point[47][0] = 2;       this->route[37].point[47][1] = 6;
    this->route[37].point[48][0] = 0;       this->route[37].point[48][1] = 7;
    this->route[37].point[49][0] = 1;       this->route[37].point[49][1] = 5;
    this->route[37].point[50][0] = 3;       this->route[37].point[50][1] = 4;
    this->route[37].point[51][0] = 4;       this->route[37].point[51][1] = 2;
    this->route[37].point[52][0] = 3;       this->route[37].point[52][1] = 0;
    this->route[37].point[53][0] = 2;       this->route[37].point[53][1] = 2;
    this->route[37].point[54][0] = 1;       this->route[37].point[54][1] = 4;
    this->route[37].point[55][0] = 3;       this->route[37].point[55][1] = 5;
    this->route[37].point[56][0] = 4;       this->route[37].point[56][1] = 3;
    this->route[37].point[57][0] = 2;       this->route[37].point[57][1] = 4;
    this->route[37].point[58][0] = 0;       this->route[37].point[58][1] = 3;
    this->route[37].point[59][0] = 1;       this->route[37].point[59][1] = 1;
    this->route[37].point[60][0] = 2;       this->route[37].point[60][1] = 3;
    this->route[37].point[61][0] = 0;       this->route[37].point[61][1] = 4;
    this->route[37].point[62][0] = 1;       this->route[37].point[62][1] = 6;
    this->route[37].point[63][0] = 3;       this->route[37].point[63][1] = 7;

    //34    11      32      59      62      13      42      49
    //31    60      35      12      55      50      63      14
    //10    33      54      61      58      43      48      41
    //53    30      25      36      51      56      15      64
    //26    9       52      57      44      1       40      47
    //29    6       27      24      37      46      19      16
    //8     23      4       45      18      21      2       39
    //5     28      7       22      3       38      17      20
    //stepOfHouse = 64

    //this->route[38].point[64][2] = {
    this->route[38].point[0][0] = 4;        this->route[38].point[0][1] = 6;
    this->route[38].point[1][0] = 6;        this->route[38].point[1][1] = 7;
    this->route[38].point[2][0] = 7;        this->route[38].point[2][1] = 5;
    this->route[38].point[3][0] = 6;        this->route[38].point[3][1] = 3;
    this->route[38].point[4][0] = 7;        this->route[38].point[4][1] = 1;
    this->route[38].point[5][0] = 5;        this->route[38].point[5][1] = 0;
    this->route[38].point[6][0] = 6;        this->route[38].point[6][1] = 2;
    this->route[38].point[7][0] = 7;        this->route[38].point[7][1] = 0;
    this->route[38].point[8][0] = 5;        this->route[38].point[8][1] = 1;
    this->route[38].point[9][0] = 7;        this->route[38].point[9][1] = 2;
    this->route[38].point[10][0] = 6;       this->route[38].point[10][1] = 0;
    this->route[38].point[11][0] = 4;       this->route[38].point[11][1] = 1;
    this->route[38].point[12][0] = 2;       this->route[38].point[12][1] = 0;
    this->route[38].point[13][0] = 0;       this->route[38].point[13][1] = 1;
    this->route[38].point[14][0] = 1;       this->route[38].point[14][1] = 3;
    this->route[38].point[15][0] = 0;       this->route[38].point[15][1] = 5;
    this->route[38].point[16][0] = 1;       this->route[38].point[16][1] = 7;
    this->route[38].point[17][0] = 3;       this->route[38].point[17][1] = 6;
    this->route[38].point[18][0] = 5;       this->route[38].point[18][1] = 7;
    this->route[38].point[19][0] = 7;       this->route[38].point[19][1] = 6;
    this->route[38].point[20][0] = 6;       this->route[38].point[20][1] = 4;
    this->route[38].point[21][0] = 5;       this->route[38].point[21][1] = 6;
    this->route[38].point[22][0] = 7;       this->route[38].point[22][1] = 7;
    this->route[38].point[23][0] = 6;       this->route[38].point[23][1] = 5;
    this->route[38].point[24][0] = 7;       this->route[38].point[24][1] = 3;
    this->route[38].point[25][0] = 6;       this->route[38].point[25][1] = 1;
    this->route[38].point[26][0] = 4;       this->route[38].point[26][1] = 0;
    this->route[38].point[27][0] = 5;       this->route[38].point[27][1] = 2;
    this->route[38].point[28][0] = 4;       this->route[38].point[28][1] = 4;
    this->route[38].point[29][0] = 3;       this->route[38].point[29][1] = 2;
    this->route[38].point[30][0] = 5;       this->route[38].point[30][1] = 3;
    this->route[38].point[31][0] = 7;       this->route[38].point[31][1] = 4;
    this->route[38].point[32][0] = 6;       this->route[38].point[32][1] = 6;
    this->route[38].point[33][0] = 5;       this->route[38].point[33][1] = 4;
    this->route[38].point[34][0] = 4;       this->route[38].point[34][1] = 2;
    this->route[38].point[35][0] = 3;       this->route[38].point[35][1] = 0;
    this->route[38].point[36][0] = 1;       this->route[38].point[36][1] = 1;
    this->route[38].point[37][0] = 0;       this->route[38].point[37][1] = 3;
    this->route[38].point[38][0] = 2;       this->route[38].point[38][1] = 4;
    this->route[38].point[39][0] = 4;       this->route[38].point[39][1] = 5;
    this->route[38].point[40][0] = 3;       this->route[38].point[40][1] = 7;
    this->route[38].point[41][0] = 1;       this->route[38].point[41][1] = 6;
    this->route[38].point[42][0] = 0;       this->route[38].point[42][1] = 4;
    this->route[38].point[43][0] = 2;       this->route[38].point[43][1] = 5;
    this->route[38].point[44][0] = 0;       this->route[38].point[44][1] = 6;
    this->route[38].point[45][0] = 2;       this->route[38].point[45][1] = 7;
    this->route[38].point[46][0] = 1;       this->route[38].point[46][1] = 5;
    this->route[38].point[47][0] = 0;       this->route[38].point[47][1] = 7;
    this->route[38].point[48][0] = 2;       this->route[38].point[48][1] = 6;
    this->route[38].point[49][0] = 4;       this->route[38].point[49][1] = 7;
    this->route[38].point[50][0] = 5;       this->route[38].point[50][1] = 5;
    this->route[38].point[51][0] = 4;       this->route[38].point[51][1] = 3;
    this->route[38].point[52][0] = 3;       this->route[38].point[52][1] = 5;
    this->route[38].point[53][0] = 2;       this->route[38].point[53][1] = 3;
    this->route[38].point[54][0] = 3;       this->route[38].point[54][1] = 1;
    this->route[38].point[55][0] = 1;       this->route[38].point[55][1] = 2;
    this->route[38].point[56][0] = 0;       this->route[38].point[56][1] = 0;
    this->route[38].point[57][0] = 2;       this->route[38].point[57][1] = 1;
    this->route[38].point[58][0] = 3;       this->route[38].point[58][1] = 3;
    this->route[38].point[59][0] = 1;       this->route[38].point[59][1] = 4;
    this->route[38].point[60][0] = 0;       this->route[38].point[60][1] = 2;
    this->route[38].point[61][0] = 1;       this->route[38].point[61][1] = 0;
    this->route[38].point[62][0] = 2;       this->route[38].point[62][1] = 2;
    this->route[38].point[63][0] = 3;       this->route[38].point[63][1] = 4;

    //57    14      61      38      43      16      45      48
    //62    37      56      15      60      47      42      17
    //13    58      63      54      39      44      49      46
    //36    55      30      59      64      53      18      41
    //27    12      35      52      29      40      1       50
    //6     9       28      31      34      51      22      19
    //11    26      7       4       21      24      33      2
    //8     5       10      25      32      3       20      23
    //stepOfHouse = 64

    //this->route[39].point[64][2] = {
    this->route[39].point[0][0] = 4;        this->route[39].point[0][1] = 7;
    this->route[39].point[1][0] = 6;        this->route[39].point[1][1] = 6;
    this->route[39].point[2][0] = 7;        this->route[39].point[2][1] = 4;
    this->route[39].point[3][0] = 6;        this->route[39].point[3][1] = 2;
    this->route[39].point[4][0] = 7;        this->route[39].point[4][1] = 0;
    this->route[39].point[5][0] = 5;        this->route[39].point[5][1] = 1;
    this->route[39].point[6][0] = 7;        this->route[39].point[6][1] = 2;
    this->route[39].point[7][0] = 6;        this->route[39].point[7][1] = 0;
    this->route[39].point[8][0] = 4;        this->route[39].point[8][1] = 1;
    this->route[39].point[9][0] = 2;        this->route[39].point[9][1] = 0;
    this->route[39].point[10][0] = 0;       this->route[39].point[10][1] = 1;
    this->route[39].point[11][0] = 1;       this->route[39].point[11][1] = 3;
    this->route[39].point[12][0] = 0;       this->route[39].point[12][1] = 5;
    this->route[39].point[13][0] = 1;       this->route[39].point[13][1] = 7;
    this->route[39].point[14][0] = 3;       this->route[39].point[14][1] = 6;
    this->route[39].point[15][0] = 5;       this->route[39].point[15][1] = 7;
    this->route[39].point[16][0] = 7;       this->route[39].point[16][1] = 6;
    this->route[39].point[17][0] = 6;       this->route[39].point[17][1] = 4;
    this->route[39].point[18][0] = 5;       this->route[39].point[18][1] = 6;
    this->route[39].point[19][0] = 7;       this->route[39].point[19][1] = 7;
    this->route[39].point[20][0] = 6;       this->route[39].point[20][1] = 5;
    this->route[39].point[21][0] = 7;       this->route[39].point[21][1] = 3;
    this->route[39].point[22][0] = 6;       this->route[39].point[22][1] = 1;
    this->route[39].point[23][0] = 5;       this->route[39].point[23][1] = 3;
    this->route[39].point[24][0] = 4;       this->route[39].point[24][1] = 5;
    this->route[39].point[25][0] = 3;       this->route[39].point[25][1] = 7;
    this->route[39].point[26][0] = 1;       this->route[39].point[26][1] = 6;
    this->route[39].point[27][0] = 0;       this->route[39].point[27][1] = 4;
    this->route[39].point[28][0] = 2;       this->route[39].point[28][1] = 5;
    this->route[39].point[29][0] = 0;       this->route[39].point[29][1] = 6;
    this->route[39].point[30][0] = 2;       this->route[39].point[30][1] = 7;
    this->route[39].point[31][0] = 4;       this->route[39].point[31][1] = 6;
    this->route[39].point[32][0] = 6;       this->route[39].point[32][1] = 7;
    this->route[39].point[33][0] = 7;       this->route[39].point[33][1] = 5;
    this->route[39].point[34][0] = 5;       this->route[39].point[34][1] = 4;
    this->route[39].point[35][0] = 3;       this->route[39].point[35][1] = 5;
    this->route[39].point[36][0] = 4;       this->route[39].point[36][1] = 3;
    this->route[39].point[37][0] = 3;       this->route[39].point[37][1] = 1;
    this->route[39].point[38][0] = 5;       this->route[39].point[38][1] = 0;
    this->route[39].point[39][0] = 7;       this->route[39].point[39][1] = 1;
    this->route[39].point[40][0] = 6;       this->route[39].point[40][1] = 3;
    this->route[39].point[41][0] = 5;       this->route[39].point[41][1] = 5;
    this->route[39].point[42][0] = 3;       this->route[39].point[42][1] = 4;
    this->route[39].point[43][0] = 4;       this->route[39].point[43][1] = 2;
    this->route[39].point[44][0] = 3;       this->route[39].point[44][1] = 0;
    this->route[39].point[45][0] = 2;       this->route[39].point[45][1] = 2;
    this->route[39].point[46][0] = 1;       this->route[39].point[46][1] = 0;
    this->route[39].point[47][0] = 0;       this->route[39].point[47][1] = 2;
    this->route[39].point[48][0] = 1;       this->route[39].point[48][1] = 4;
    this->route[39].point[49][0] = 3;       this->route[39].point[49][1] = 3;
    this->route[39].point[50][0] = 5;       this->route[39].point[50][1] = 2;
    this->route[39].point[51][0] = 4;       this->route[39].point[51][1] = 4;
    this->route[39].point[52][0] = 3;       this->route[39].point[52][1] = 2;
    this->route[39].point[53][0] = 4;       this->route[39].point[53][1] = 0;
    this->route[39].point[54][0] = 2;       this->route[39].point[54][1] = 1;
    this->route[39].point[55][0] = 0;       this->route[39].point[55][1] = 0;
    this->route[39].point[56][0] = 1;       this->route[39].point[56][1] = 2;
    this->route[39].point[57][0] = 2;       this->route[39].point[57][1] = 4;
    this->route[39].point[58][0] = 0;       this->route[39].point[58][1] = 3;
    this->route[39].point[59][0] = 1;       this->route[39].point[59][1] = 1;
    this->route[39].point[60][0] = 2;       this->route[39].point[60][1] = 3;
    this->route[39].point[61][0] = 1;       this->route[39].point[61][1] = 5;
    this->route[39].point[62][0] = 0;       this->route[39].point[62][1] = 7;
    this->route[39].point[63][0] = 2;       this->route[39].point[63][1] = 6;

    //56    11      48      59      28      13      30      63
    //47    60      57      12      49      62      27      14
    //10    55      46      61      58      29      64      31
    //45    38      53      50      43      36      15      26
    //54    9       44      37      52      25      32      1
    //39    6       51      24      35      42      19      16
    //8     23      4       41      18      21      2       33
    //5     40      7       22      3       34      17      20
    //stepOfHouse = 64

    //this->route[40].point[64][2] = {
    this->route[40].point[0][0] = 5;        this->route[40].point[0][1] = 0;
    this->route[40].point[1][0] = 7;        this->route[40].point[1][1] = 1;
    this->route[40].point[2][0] = 6;        this->route[40].point[2][1] = 3;
    this->route[40].point[3][0] = 7;        this->route[40].point[3][1] = 5;
    this->route[40].point[4][0] = 6;        this->route[40].point[4][1] = 7;
    this->route[40].point[5][0] = 4;        this->route[40].point[5][1] = 6;
    this->route[40].point[6][0] = 2;        this->route[40].point[6][1] = 7;
    this->route[40].point[7][0] = 0;        this->route[40].point[7][1] = 6;
    this->route[40].point[8][0] = 1;        this->route[40].point[8][1] = 4;
    this->route[40].point[9][0] = 0;        this->route[40].point[9][1] = 2;
    this->route[40].point[10][0] = 1;       this->route[40].point[10][1] = 0;
    this->route[40].point[11][0] = 3;       this->route[40].point[11][1] = 1;
    this->route[40].point[12][0] = 1;       this->route[40].point[12][1] = 2;
    this->route[40].point[13][0] = 0;       this->route[40].point[13][1] = 0;
    this->route[40].point[14][0] = 2;       this->route[40].point[14][1] = 1;
    this->route[40].point[15][0] = 4;       this->route[40].point[15][1] = 0;
    this->route[40].point[16][0] = 6;       this->route[40].point[16][1] = 1;
    this->route[40].point[17][0] = 7;       this->route[40].point[17][1] = 3;
    this->route[40].point[18][0] = 6;       this->route[40].point[18][1] = 5;
    this->route[40].point[19][0] = 7;       this->route[40].point[19][1] = 7;
    this->route[40].point[20][0] = 5;       this->route[40].point[20][1] = 6;
    this->route[40].point[21][0] = 3;       this->route[40].point[21][1] = 7;
    this->route[40].point[22][0] = 1;       this->route[40].point[22][1] = 6;
    this->route[40].point[23][0] = 0;       this->route[40].point[23][1] = 4;
    this->route[40].point[24][0] = 2;       this->route[40].point[24][1] = 5;
    this->route[40].point[25][0] = 1;       this->route[40].point[25][1] = 7;
    this->route[40].point[26][0] = 0;       this->route[40].point[26][1] = 5;
    this->route[40].point[27][0] = 1;       this->route[40].point[27][1] = 3;
    this->route[40].point[28][0] = 0;       this->route[40].point[28][1] = 1;
    this->route[40].point[29][0] = 2;       this->route[40].point[29][1] = 0;
    this->route[40].point[30][0] = 4;       this->route[40].point[30][1] = 1;
    this->route[40].point[31][0] = 6;       this->route[40].point[31][1] = 0;
    this->route[40].point[32][0] = 7;       this->route[40].point[32][1] = 2;
    this->route[40].point[33][0] = 6;       this->route[40].point[33][1] = 4;
    this->route[40].point[34][0] = 7;       this->route[40].point[34][1] = 6;
    this->route[40].point[35][0] = 5;       this->route[40].point[35][1] = 7;
    this->route[40].point[36][0] = 4;       this->route[40].point[36][1] = 5;
    this->route[40].point[37][0] = 6;       this->route[40].point[37][1] = 6;
    this->route[40].point[38][0] = 7;       this->route[40].point[38][1] = 4;
    this->route[40].point[39][0] = 5;       this->route[40].point[39][1] = 3;
    this->route[40].point[40][0] = 3;       this->route[40].point[40][1] = 4;
    this->route[40].point[41][0] = 2;       this->route[40].point[41][1] = 6;
    this->route[40].point[42][0] = 0;       this->route[40].point[42][1] = 7;
    this->route[40].point[43][0] = 1;       this->route[40].point[43][1] = 5;
    this->route[40].point[44][0] = 3;       this->route[40].point[44][1] = 6;
    this->route[40].point[45][0] = 5;       this->route[40].point[45][1] = 5;
    this->route[40].point[46][0] = 4;       this->route[40].point[46][1] = 7;
    this->route[40].point[47][0] = 3;       this->route[40].point[47][1] = 5;
    this->route[40].point[48][0] = 4;       this->route[40].point[48][1] = 3;
    this->route[40].point[49][0] = 6;       this->route[40].point[49][1] = 2;
    this->route[40].point[50][0] = 7;       this->route[40].point[50][1] = 0;
    this->route[40].point[51][0] = 5;       this->route[40].point[51][1] = 1;
    this->route[40].point[52][0] = 3;       this->route[40].point[52][1] = 2;
    this->route[40].point[53][0] = 2;       this->route[40].point[53][1] = 4;
    this->route[40].point[54][0] = 0;       this->route[40].point[54][1] = 3;
    this->route[40].point[55][0] = 2;       this->route[40].point[55][1] = 2;
    this->route[40].point[56][0] = 3;       this->route[40].point[56][1] = 0;
    this->route[40].point[57][0] = 1;       this->route[40].point[57][1] = 1;
    this->route[40].point[58][0] = 2;       this->route[40].point[58][1] = 3;
    this->route[40].point[59][0] = 4;       this->route[40].point[59][1] = 4;
    this->route[40].point[60][0] = 5;       this->route[40].point[60][1] = 2;
    this->route[40].point[61][0] = 3;       this->route[40].point[61][1] = 3;
    this->route[40].point[62][0] = 5;       this->route[40].point[62][1] = 4;
    this->route[40].point[63][0] = 4;       this->route[40].point[63][1] = 2;

    //14    29      10      55      24      27      8       43
    //11    58      13      28      9       44      23      26
    //30    15      56      59      54      25      42      7
    //57    12      53      62      41      48      45      22
    //16    31      64      49      60      37      6       47
    //1     52      61      40      63      46      21      36
    //32    17      50      3       34      19      38      5
    //51    2       33      18      39      4       35      20
    //stepOfHouse = 64

    //this->route[41].point[64][2] = {
    this->route[41].point[0][0] = 5;        this->route[41].point[0][1] = 1;
    this->route[41].point[1][0] = 7;        this->route[41].point[1][1] = 0;
    this->route[41].point[2][0] = 6;        this->route[41].point[2][1] = 2;
    this->route[41].point[3][0] = 7;        this->route[41].point[3][1] = 4;
    this->route[41].point[4][0] = 6;        this->route[41].point[4][1] = 6;
    this->route[41].point[5][0] = 4;        this->route[41].point[5][1] = 7;
    this->route[41].point[6][0] = 2;        this->route[41].point[6][1] = 6;
    this->route[41].point[7][0] = 0;        this->route[41].point[7][1] = 7;
    this->route[41].point[8][0] = 1;        this->route[41].point[8][1] = 5;
    this->route[41].point[9][0] = 2;        this->route[41].point[9][1] = 7;
    this->route[41].point[10][0] = 0;       this->route[41].point[10][1] = 6;
    this->route[41].point[11][0] = 1;       this->route[41].point[11][1] = 4;
    this->route[41].point[12][0] = 0;       this->route[41].point[12][1] = 2;
    this->route[41].point[13][0] = 1;       this->route[41].point[13][1] = 0;
    this->route[41].point[14][0] = 3;       this->route[41].point[14][1] = 1;
    this->route[41].point[15][0] = 5;       this->route[41].point[15][1] = 0;
    this->route[41].point[16][0] = 7;       this->route[41].point[16][1] = 1;
    this->route[41].point[17][0] = 6;       this->route[41].point[17][1] = 3;
    this->route[41].point[18][0] = 7;       this->route[41].point[18][1] = 5;
    this->route[41].point[19][0] = 6;       this->route[41].point[19][1] = 7;
    this->route[41].point[20][0] = 5;       this->route[41].point[20][1] = 5;
    this->route[41].point[21][0] = 7;       this->route[41].point[21][1] = 6;
    this->route[41].point[22][0] = 5;       this->route[41].point[22][1] = 7;
    this->route[41].point[23][0] = 3;       this->route[41].point[23][1] = 6;
    this->route[41].point[24][0] = 1;       this->route[41].point[24][1] = 7;
    this->route[41].point[25][0] = 0;       this->route[41].point[25][1] = 5;
    this->route[41].point[26][0] = 1;       this->route[41].point[26][1] = 3;
    this->route[41].point[27][0] = 0;       this->route[41].point[27][1] = 1;
    this->route[41].point[28][0] = 2;       this->route[41].point[28][1] = 0;
    this->route[41].point[29][0] = 4;       this->route[41].point[29][1] = 1;
    this->route[41].point[30][0] = 6;       this->route[41].point[30][1] = 0;
    this->route[41].point[31][0] = 7;       this->route[41].point[31][1] = 2;
    this->route[41].point[32][0] = 6;       this->route[41].point[32][1] = 4;
    this->route[41].point[33][0] = 4;       this->route[41].point[33][1] = 3;
    this->route[41].point[34][0] = 2;       this->route[41].point[34][1] = 2;
    this->route[41].point[35][0] = 3;       this->route[41].point[35][1] = 0;
    this->route[41].point[36][0] = 1;       this->route[41].point[36][1] = 1;
    this->route[41].point[37][0] = 0;       this->route[41].point[37][1] = 3;
    this->route[41].point[38][0] = 2;       this->route[41].point[38][1] = 4;
    this->route[41].point[39][0] = 4;       this->route[41].point[39][1] = 5;
    this->route[41].point[40][0] = 3;       this->route[41].point[40][1] = 7;
    this->route[41].point[41][0] = 1;       this->route[41].point[41][1] = 6;
    this->route[41].point[42][0] = 3;       this->route[41].point[42][1] = 5;
    this->route[41].point[43][0] = 5;       this->route[41].point[43][1] = 4;
    this->route[41].point[44][0] = 7;       this->route[41].point[44][1] = 3;
    this->route[41].point[45][0] = 6;       this->route[41].point[45][1] = 5;
    this->route[41].point[46][0] = 7;       this->route[41].point[46][1] = 7;
    this->route[41].point[47][0] = 5;       this->route[41].point[47][1] = 6;
    this->route[41].point[48][0] = 4;       this->route[41].point[48][1] = 4;
    this->route[41].point[49][0] = 2;       this->route[41].point[49][1] = 5;
    this->route[41].point[50][0] = 4;       this->route[41].point[50][1] = 6;
    this->route[41].point[51][0] = 3;       this->route[41].point[51][1] = 4;
    this->route[41].point[52][0] = 5;       this->route[41].point[52][1] = 3;
    this->route[41].point[53][0] = 6;       this->route[41].point[53][1] = 1;
    this->route[41].point[54][0] = 4;       this->route[41].point[54][1] = 2;
    this->route[41].point[55][0] = 2;       this->route[41].point[55][1] = 3;
    this->route[41].point[56][0] = 0;       this->route[41].point[56][1] = 4;
    this->route[41].point[57][0] = 1;       this->route[41].point[57][1] = 2;
    this->route[41].point[58][0] = 0;       this->route[41].point[58][1] = 0;
    this->route[41].point[59][0] = 2;       this->route[41].point[59][1] = 1;
    this->route[41].point[60][0] = 3;       this->route[41].point[60][1] = 3;
    this->route[41].point[61][0] = 5;       this->route[41].point[61][1] = 2;
    this->route[41].point[62][0] = 4;       this->route[41].point[62][1] = 0;
    this->route[41].point[63][0] = 3;       this->route[41].point[63][1] = 2;

    //59    28      13      38      57      26      11      8
    //14    37      58      27      12      9       42      25
    //29    60      35      56      39      50      7       10
    //36    15      64      61      52      43      24      41
    //63    30      55      34      49      40      51      6
    //16    1       62      53      44      21      48      23
    //31    54      3       18      33      46      5       20
    //2     17      32      45      4       19      22      47
    //stepOfHouse = 64

    //this->route[42].point[64][2] = {
    this->route[42].point[0][0] = 5;        this->route[42].point[0][1] = 2;
    this->route[42].point[1][0] = 7;        this->route[42].point[1][1] = 1;
    this->route[42].point[2][0] = 5;        this->route[42].point[2][1] = 0;
    this->route[42].point[3][0] = 3;        this->route[42].point[3][1] = 1;
    this->route[42].point[4][0] = 1;        this->route[42].point[4][1] = 0;
    this->route[42].point[5][0] = 0;        this->route[42].point[5][1] = 2;
    this->route[42].point[6][0] = 2;        this->route[42].point[6][1] = 1;
    this->route[42].point[7][0] = 0;        this->route[42].point[7][1] = 0;
    this->route[42].point[8][0] = 1;        this->route[42].point[8][1] = 2;
    this->route[42].point[9][0] = 2;        this->route[42].point[9][1] = 0;
    this->route[42].point[10][0] = 0;       this->route[42].point[10][1] = 1;
    this->route[42].point[11][0] = 1;       this->route[42].point[11][1] = 3;
    this->route[42].point[12][0] = 0;       this->route[42].point[12][1] = 5;
    this->route[42].point[13][0] = 1;       this->route[42].point[13][1] = 7;
    this->route[42].point[14][0] = 3;       this->route[42].point[14][1] = 6;
    this->route[42].point[15][0] = 5;       this->route[42].point[15][1] = 7;
    this->route[42].point[16][0] = 7;       this->route[42].point[16][1] = 6;
    this->route[42].point[17][0] = 6;       this->route[42].point[17][1] = 4;
    this->route[42].point[18][0] = 7;       this->route[42].point[18][1] = 2;
    this->route[42].point[19][0] = 6;       this->route[42].point[19][1] = 0;
    this->route[42].point[20][0] = 4;       this->route[42].point[20][1] = 1;
    this->route[42].point[21][0] = 6;       this->route[42].point[21][1] = 2;
    this->route[42].point[22][0] = 7;       this->route[42].point[22][1] = 0;
    this->route[42].point[23][0] = 5;       this->route[42].point[23][1] = 1;
    this->route[42].point[24][0] = 3;       this->route[42].point[24][1] = 0;
    this->route[42].point[25][0] = 1;       this->route[42].point[25][1] = 1;
    this->route[42].point[26][0] = 0;       this->route[42].point[26][1] = 3;
    this->route[42].point[27][0] = 2;       this->route[42].point[27][1] = 2;
    this->route[42].point[28][0] = 4;       this->route[42].point[28][1] = 3;
    this->route[42].point[29][0] = 2;       this->route[42].point[29][1] = 4;
    this->route[42].point[30][0] = 3;       this->route[42].point[30][1] = 2;
    this->route[42].point[31][0] = 4;       this->route[42].point[31][1] = 0;
    this->route[42].point[32][0] = 6;       this->route[42].point[32][1] = 1;
    this->route[42].point[33][0] = 7;       this->route[42].point[33][1] = 3;
    this->route[42].point[34][0] = 6;       this->route[42].point[34][1] = 5;
    this->route[42].point[35][0] = 7;       this->route[42].point[35][1] = 7;
    this->route[42].point[36][0] = 5;       this->route[42].point[36][1] = 6;
    this->route[42].point[37][0] = 7;       this->route[42].point[37][1] = 5;
    this->route[42].point[38][0] = 6;       this->route[42].point[38][1] = 7;
    this->route[42].point[39][0] = 5;       this->route[42].point[39][1] = 5;
    this->route[42].point[40][0] = 7;       this->route[42].point[40][1] = 4;
    this->route[42].point[41][0] = 5;       this->route[42].point[41][1] = 3;
    this->route[42].point[42][0] = 4;       this->route[42].point[42][1] = 5;
    this->route[42].point[43][0] = 6;       this->route[42].point[43][1] = 6;
    this->route[42].point[44][0] = 4;       this->route[42].point[44][1] = 7;
    this->route[42].point[45][0] = 2;       this->route[42].point[45][1] = 6;
    this->route[42].point[46][0] = 0;       this->route[42].point[46][1] = 7;
    this->route[42].point[47][0] = 1;       this->route[42].point[47][1] = 5;
    this->route[42].point[48][0] = 3;       this->route[42].point[48][1] = 4;
    this->route[42].point[49][0] = 4;       this->route[42].point[49][1] = 6;
    this->route[42].point[50][0] = 2;       this->route[42].point[50][1] = 7;
    this->route[42].point[51][0] = 0;       this->route[42].point[51][1] = 6;
    this->route[42].point[52][0] = 1;       this->route[42].point[52][1] = 4;
    this->route[42].point[53][0] = 3;       this->route[42].point[53][1] = 5;
    this->route[42].point[54][0] = 5;       this->route[42].point[54][1] = 4;
    this->route[42].point[55][0] = 4;       this->route[42].point[55][1] = 2;
    this->route[42].point[56][0] = 6;       this->route[42].point[56][1] = 3;
    this->route[42].point[57][0] = 4;       this->route[42].point[57][1] = 4;
    this->route[42].point[58][0] = 2;       this->route[42].point[58][1] = 3;
    this->route[42].point[59][0] = 0;       this->route[42].point[59][1] = 4;
    this->route[42].point[60][0] = 1;       this->route[42].point[60][1] = 6;
    this->route[42].point[61][0] = 3;       this->route[42].point[61][1] = 7;
    this->route[42].point[62][0] = 2;       this->route[42].point[62][1] = 5;
    this->route[42].point[63][0] = 3;       this->route[42].point[63][1] = 3;

    //8     11      6       27      60      13      52      47
    //5     26      9       12      53      48      61      14
    //10    7       28      59      30      63      46      51
    //25    4       31      64      49      54      15      62
    //32    21      56      29      58      43      50      45
    //3     24      1       42      55      40      37      16
    //20    33      22      57      18      35      44      39
    //23    2       19      34      41      38      17      36
    //stepOfHouse = 64

    //this->route[43].point[64][2] = {
    this->route[43].point[0][0] = 5;        this->route[43].point[0][1] = 3;
    this->route[43].point[1][0] = 7;        this->route[43].point[1][1] = 4;
    this->route[43].point[2][0] = 6;        this->route[43].point[2][1] = 6;
    this->route[43].point[3][0] = 4;        this->route[43].point[3][1] = 7;
    this->route[43].point[4][0] = 2;        this->route[43].point[4][1] = 6;
    this->route[43].point[5][0] = 0;        this->route[43].point[5][1] = 7;
    this->route[43].point[6][0] = 1;        this->route[43].point[6][1] = 5;
    this->route[43].point[7][0] = 2;        this->route[43].point[7][1] = 7;
    this->route[43].point[8][0] = 0;        this->route[43].point[8][1] = 6;
    this->route[43].point[9][0] = 1;        this->route[43].point[9][1] = 4;
    this->route[43].point[10][0] = 0;       this->route[43].point[10][1] = 2;
    this->route[43].point[11][0] = 1;       this->route[43].point[11][1] = 0;
    this->route[43].point[12][0] = 3;       this->route[43].point[12][1] = 1;
    this->route[43].point[13][0] = 5;       this->route[43].point[13][1] = 0;
    this->route[43].point[14][0] = 7;       this->route[43].point[14][1] = 1;
    this->route[43].point[15][0] = 6;       this->route[43].point[15][1] = 3;
    this->route[43].point[16][0] = 7;       this->route[43].point[16][1] = 5;
    this->route[43].point[17][0] = 6;       this->route[43].point[17][1] = 7;
    this->route[43].point[18][0] = 5;       this->route[43].point[18][1] = 5;
    this->route[43].point[19][0] = 7;       this->route[43].point[19][1] = 6;
    this->route[43].point[20][0] = 5;       this->route[43].point[20][1] = 7;
    this->route[43].point[21][0] = 3;       this->route[43].point[21][1] = 6;
    this->route[43].point[22][0] = 1;       this->route[43].point[22][1] = 7;
    this->route[43].point[23][0] = 0;       this->route[43].point[23][1] = 5;
    this->route[43].point[24][0] = 1;       this->route[43].point[24][1] = 3;
    this->route[43].point[25][0] = 0;       this->route[43].point[25][1] = 1;
    this->route[43].point[26][0] = 2;       this->route[43].point[26][1] = 0;
    this->route[43].point[27][0] = 4;       this->route[43].point[27][1] = 1;
    this->route[43].point[28][0] = 6;       this->route[43].point[28][1] = 0;
    this->route[43].point[29][0] = 7;       this->route[43].point[29][1] = 2;
    this->route[43].point[30][0] = 6;       this->route[43].point[30][1] = 4;
    this->route[43].point[31][0] = 4;       this->route[43].point[31][1] = 5;
    this->route[43].point[32][0] = 3;       this->route[43].point[32][1] = 7;
    this->route[43].point[33][0] = 5;       this->route[43].point[33][1] = 6;
    this->route[43].point[34][0] = 7;       this->route[43].point[34][1] = 7;
    this->route[43].point[35][0] = 6;       this->route[43].point[35][1] = 5;
    this->route[43].point[36][0] = 7;       this->route[43].point[36][1] = 3;
    this->route[43].point[37][0] = 6;       this->route[43].point[37][1] = 1;
    this->route[43].point[38][0] = 4;       this->route[43].point[38][1] = 0;
    this->route[43].point[39][0] = 3;       this->route[43].point[39][1] = 2;
    this->route[43].point[40][0] = 5;       this->route[43].point[40][1] = 1;
    this->route[43].point[41][0] = 7;       this->route[43].point[41][1] = 0;
    this->route[43].point[42][0] = 6;       this->route[43].point[42][1] = 2;
    this->route[43].point[43][0] = 4;       this->route[43].point[43][1] = 3;
    this->route[43].point[44][0] = 3;       this->route[43].point[44][1] = 5;
    this->route[43].point[45][0] = 1;       this->route[43].point[45][1] = 6;
    this->route[43].point[46][0] = 2;       this->route[43].point[46][1] = 4;
    this->route[43].point[47][0] = 1;       this->route[43].point[47][1] = 2;
    this->route[43].point[48][0] = 0;       this->route[43].point[48][1] = 0;
    this->route[43].point[49][0] = 2;       this->route[43].point[49][1] = 1;
    this->route[43].point[50][0] = 3;       this->route[43].point[50][1] = 3;
    this->route[43].point[51][0] = 5;       this->route[43].point[51][1] = 2;
    this->route[43].point[52][0] = 4;       this->route[43].point[52][1] = 4;
    this->route[43].point[53][0] = 2;       this->route[43].point[53][1] = 5;
    this->route[43].point[54][0] = 0;       this->route[43].point[54][1] = 4;
    this->route[43].point[55][0] = 2;       this->route[43].point[55][1] = 3;
    this->route[43].point[56][0] = 1;       this->route[43].point[56][1] = 1;
    this->route[43].point[57][0] = 0;       this->route[43].point[57][1] = 3;
    this->route[43].point[58][0] = 2;       this->route[43].point[58][1] = 2;
    this->route[43].point[59][0] = 3;       this->route[43].point[59][1] = 0;
    this->route[43].point[60][0] = 4;       this->route[43].point[60][1] = 2;
    this->route[43].point[61][0] = 5;       this->route[43].point[61][1] = 4;
    this->route[43].point[62][0] = 4;       this->route[43].point[62][1] = 6;
    this->route[43].point[63][0] = 3;       this->route[43].point[63][1] = 4;

    //49    26      11      58      55      24      9       6
    //12    57      48      25      10      7       46      23
    //27    50      59      56      47      54      5       8
    //60    13      40      51      64      45      22      33
    //39    28      61      44      53      32      63      4
    //14    41      52      1       62      19      34      21
    //29    38      43      16      31      36      3       18
    //42    15      30      37      2       17      20      35
    //stepOfHouse = 64

    //this->route[44].point[64][2] = {
    this->route[44].point[0][0] = 5;        this->route[44].point[0][1] = 4;
    this->route[44].point[1][0] = 7;        this->route[44].point[1][1] = 5;
    this->route[44].point[2][0] = 6;        this->route[44].point[2][1] = 7;
    this->route[44].point[3][0] = 4;        this->route[44].point[3][1] = 6;
    this->route[44].point[4][0] = 2;        this->route[44].point[4][1] = 7;
    this->route[44].point[5][0] = 0;        this->route[44].point[5][1] = 6;
    this->route[44].point[6][0] = 1;        this->route[44].point[6][1] = 4;
    this->route[44].point[7][0] = 0;        this->route[44].point[7][1] = 2;
    this->route[44].point[8][0] = 1;        this->route[44].point[8][1] = 0;
    this->route[44].point[9][0] = 3;        this->route[44].point[9][1] = 1;
    this->route[44].point[10][0] = 5;       this->route[44].point[10][1] = 0;
    this->route[44].point[11][0] = 7;       this->route[44].point[11][1] = 1;
    this->route[44].point[12][0] = 6;       this->route[44].point[12][1] = 3;
    this->route[44].point[13][0] = 5;       this->route[44].point[13][1] = 1;
    this->route[44].point[14][0] = 7;       this->route[44].point[14][1] = 0;
    this->route[44].point[15][0] = 6;       this->route[44].point[15][1] = 2;
    this->route[44].point[16][0] = 7;       this->route[44].point[16][1] = 4;
    this->route[44].point[17][0] = 6;       this->route[44].point[17][1] = 6;
    this->route[44].point[18][0] = 4;       this->route[44].point[18][1] = 7;
    this->route[44].point[19][0] = 5;       this->route[44].point[19][1] = 5;
    this->route[44].point[20][0] = 7;       this->route[44].point[20][1] = 6;
    this->route[44].point[21][0] = 5;       this->route[44].point[21][1] = 7;
    this->route[44].point[22][0] = 6;       this->route[44].point[22][1] = 5;
    this->route[44].point[23][0] = 7;       this->route[44].point[23][1] = 7;
    this->route[44].point[24][0] = 5;       this->route[44].point[24][1] = 6;
    this->route[44].point[25][0] = 3;       this->route[44].point[25][1] = 7;
    this->route[44].point[26][0] = 1;       this->route[44].point[26][1] = 6;
    this->route[44].point[27][0] = 3;       this->route[44].point[27][1] = 5;
    this->route[44].point[28][0] = 4;       this->route[44].point[28][1] = 3;
    this->route[44].point[29][0] = 6;       this->route[44].point[29][1] = 4;
    this->route[44].point[30][0] = 7;       this->route[44].point[30][1] = 2;
    this->route[44].point[31][0] = 6;       this->route[44].point[31][1] = 0;
    this->route[44].point[32][0] = 5;       this->route[44].point[32][1] = 2;
    this->route[44].point[33][0] = 7;       this->route[44].point[33][1] = 3;
    this->route[44].point[34][0] = 6;       this->route[44].point[34][1] = 1;
    this->route[44].point[35][0] = 4;       this->route[44].point[35][1] = 0;
    this->route[44].point[36][0] = 2;       this->route[44].point[36][1] = 1;
    this->route[44].point[37][0] = 0;       this->route[44].point[37][1] = 0;
    this->route[44].point[38][0] = 1;       this->route[44].point[38][1] = 2;
    this->route[44].point[39][0] = 0;       this->route[44].point[39][1] = 4;
    this->route[44].point[40][0] = 2;       this->route[44].point[40][1] = 5;
    this->route[44].point[41][0] = 4;       this->route[44].point[41][1] = 4;
    this->route[44].point[42][0] = 3;       this->route[44].point[42][1] = 6;
    this->route[44].point[43][0] = 1;       this->route[44].point[43][1] = 7;
    this->route[44].point[44][0] = 0;       this->route[44].point[44][1] = 5;
    this->route[44].point[45][0] = 2;       this->route[44].point[45][1] = 6;
    this->route[44].point[46][0] = 0;       this->route[44].point[46][1] = 7;
    this->route[44].point[47][0] = 1;       this->route[44].point[47][1] = 5;
    this->route[44].point[48][0] = 2;       this->route[44].point[48][1] = 3;
    this->route[44].point[49][0] = 4;       this->route[44].point[49][1] = 2;
    this->route[44].point[50][0] = 3;       this->route[44].point[50][1] = 0;
    this->route[44].point[51][0] = 1;       this->route[44].point[51][1] = 1;
    this->route[44].point[52][0] = 3;       this->route[44].point[52][1] = 2;
    this->route[44].point[53][0] = 2;       this->route[44].point[53][1] = 4;
    this->route[44].point[54][0] = 0;       this->route[44].point[54][1] = 3;
    this->route[44].point[55][0] = 2;       this->route[44].point[55][1] = 2;
    this->route[44].point[56][0] = 3;       this->route[44].point[56][1] = 4;
    this->route[44].point[57][0] = 1;       this->route[44].point[57][1] = 3;
    this->route[44].point[58][0] = 0;       this->route[44].point[58][1] = 1;
    this->route[44].point[59][0] = 2;       this->route[44].point[59][1] = 0;
    this->route[44].point[60][0] = 4;       this->route[44].point[60][1] = 1;
    this->route[44].point[61][0] = 5;       this->route[44].point[61][1] = 3;
    this->route[44].point[62][0] = 4;       this->route[44].point[62][1] = 5;
    this->route[44].point[63][0] = 3;       this->route[44].point[63][1] = 3;

    //38    59      8       55      40      45      6       47
    //9     52      39      58      7       48      27      44
    //60    37      56      49      54      41      46      5
    //51    10      53      64      57      28      43      26
    //36    61      50      29      42      63      4       19
    //11    14      33      62      1       20      25      22
    //32    35      16      13      30      23      18      3
    //15    12      31      34      17      2       21      24
    //stepOfHouse = 64

    //this->route[45].point[64][2] = {
    this->route[45].point[0][0] = 5;        this->route[45].point[0][1] = 5;
    this->route[45].point[1][0] = 7;        this->route[45].point[1][1] = 6;
    this->route[45].point[2][0] = 5;        this->route[45].point[2][1] = 7;
    this->route[45].point[3][0] = 3;        this->route[45].point[3][1] = 6;
    this->route[45].point[4][0] = 1;        this->route[45].point[4][1] = 7;
    this->route[45].point[5][0] = 0;        this->route[45].point[5][1] = 5;
    this->route[45].point[6][0] = 2;        this->route[45].point[6][1] = 6;
    this->route[45].point[7][0] = 0;        this->route[45].point[7][1] = 7;
    this->route[45].point[8][0] = 1;        this->route[45].point[8][1] = 5;
    this->route[45].point[9][0] = 2;        this->route[45].point[9][1] = 7;
    this->route[45].point[10][0] = 0;       this->route[45].point[10][1] = 6;
    this->route[45].point[11][0] = 1;       this->route[45].point[11][1] = 4;
    this->route[45].point[12][0] = 0;       this->route[45].point[12][1] = 2;
    this->route[45].point[13][0] = 1;       this->route[45].point[13][1] = 0;
    this->route[45].point[14][0] = 3;       this->route[45].point[14][1] = 1;
    this->route[45].point[15][0] = 5;       this->route[45].point[15][1] = 0;
    this->route[45].point[16][0] = 7;       this->route[45].point[16][1] = 1;
    this->route[45].point[17][0] = 6;       this->route[45].point[17][1] = 3;
    this->route[45].point[18][0] = 7;       this->route[45].point[18][1] = 5;
    this->route[45].point[19][0] = 6;       this->route[45].point[19][1] = 7;
    this->route[45].point[20][0] = 4;       this->route[45].point[20][1] = 6;
    this->route[45].point[21][0] = 6;       this->route[45].point[21][1] = 5;
    this->route[45].point[22][0] = 7;       this->route[45].point[22][1] = 7;
    this->route[45].point[23][0] = 5;       this->route[45].point[23][1] = 6;
    this->route[45].point[24][0] = 3;       this->route[45].point[24][1] = 7;
    this->route[45].point[25][0] = 1;       this->route[45].point[25][1] = 6;
    this->route[45].point[26][0] = 0;       this->route[45].point[26][1] = 4;
    this->route[45].point[27][0] = 2;       this->route[45].point[27][1] = 5;
    this->route[45].point[28][0] = 4;       this->route[45].point[28][1] = 4;
    this->route[45].point[29][0] = 2;       this->route[45].point[29][1] = 3;
    this->route[45].point[30][0] = 3;       this->route[45].point[30][1] = 5;
    this->route[45].point[31][0] = 4;       this->route[45].point[31][1] = 7;
    this->route[45].point[32][0] = 6;       this->route[45].point[32][1] = 6;
    this->route[45].point[33][0] = 7;       this->route[45].point[33][1] = 4;
    this->route[45].point[34][0] = 6;       this->route[45].point[34][1] = 2;
    this->route[45].point[35][0] = 7;       this->route[45].point[35][1] = 0;
    this->route[45].point[36][0] = 5;       this->route[45].point[36][1] = 1;
    this->route[45].point[37][0] = 7;       this->route[45].point[37][1] = 2;
    this->route[45].point[38][0] = 6;       this->route[45].point[38][1] = 0;
    this->route[45].point[39][0] = 5;       this->route[45].point[39][1] = 2;
    this->route[45].point[40][0] = 7;       this->route[45].point[40][1] = 3;
    this->route[45].point[41][0] = 5;       this->route[45].point[41][1] = 4;
    this->route[45].point[42][0] = 4;       this->route[45].point[42][1] = 2;
    this->route[45].point[43][0] = 6;       this->route[45].point[43][1] = 1;
    this->route[45].point[44][0] = 4;       this->route[45].point[44][1] = 0;
    this->route[45].point[45][0] = 2;       this->route[45].point[45][1] = 1;
    this->route[45].point[46][0] = 0;       this->route[45].point[46][1] = 0;
    this->route[45].point[47][0] = 1;       this->route[45].point[47][1] = 2;
    this->route[45].point[48][0] = 3;       this->route[45].point[48][1] = 3;
    this->route[45].point[49][0] = 4;       this->route[45].point[49][1] = 5;
    this->route[45].point[50][0] = 6;       this->route[45].point[50][1] = 4;
    this->route[45].point[51][0] = 4;       this->route[45].point[51][1] = 3;
    this->route[45].point[52][0] = 2;       this->route[45].point[52][1] = 4;
    this->route[45].point[53][0] = 0;       this->route[45].point[53][1] = 3;
    this->route[45].point[54][0] = 2;       this->route[45].point[54][1] = 2;
    this->route[45].point[55][0] = 3;       this->route[45].point[55][1] = 0;
    this->route[45].point[56][0] = 1;       this->route[45].point[56][1] = 1;
    this->route[45].point[57][0] = 3;       this->route[45].point[57][1] = 2;
    this->route[45].point[58][0] = 5;       this->route[45].point[58][1] = 3;
    this->route[45].point[59][0] = 4;       this->route[45].point[59][1] = 1;
    this->route[45].point[60][0] = 2;       this->route[45].point[60][1] = 0;
    this->route[45].point[61][0] = 0;       this->route[45].point[61][1] = 1;
    this->route[45].point[62][0] = 1;       this->route[45].point[62][1] = 3;
    this->route[45].point[63][0] = 3;       this->route[45].point[63][1] = 4;

    //47    62      13      54      27      6       11      8
    //14    57      48      63      12      9       26      5
    //61    46      55      30      53      28      7       10
    //56    15      58      49      64      31      4       25
    //45    60      43      52      29      50      21      32
    //16    37      40      59      42      1       24      3
    //39    44      35      18      51      22      33      20
    //36    17      38      41      34      19      2       23
    //stepOfHouse = 64

    //this->route[46].point[64][2] = {
    this->route[46].point[0][0] = 5;        this->route[46].point[0][1] = 6;
    this->route[46].point[1][0] = 7;        this->route[46].point[1][1] = 7;
    this->route[46].point[2][0] = 6;        this->route[46].point[2][1] = 5;
    this->route[46].point[3][0] = 7;        this->route[46].point[3][1] = 3;
    this->route[46].point[4][0] = 6;        this->route[46].point[4][1] = 1;
    this->route[46].point[5][0] = 4;        this->route[46].point[5][1] = 0;
    this->route[46].point[6][0] = 2;        this->route[46].point[6][1] = 1;
    this->route[46].point[7][0] = 0;        this->route[46].point[7][1] = 0;
    this->route[46].point[8][0] = 1;        this->route[46].point[8][1] = 2;
    this->route[46].point[9][0] = 2;        this->route[46].point[9][1] = 0;
    this->route[46].point[10][0] = 0;       this->route[46].point[10][1] = 1;
    this->route[46].point[11][0] = 1;       this->route[46].point[11][1] = 3;
    this->route[46].point[12][0] = 0;       this->route[46].point[12][1] = 5;
    this->route[46].point[13][0] = 1;       this->route[46].point[13][1] = 7;
    this->route[46].point[14][0] = 3;       this->route[46].point[14][1] = 6;
    this->route[46].point[15][0] = 5;       this->route[46].point[15][1] = 7;
    this->route[46].point[16][0] = 7;       this->route[46].point[16][1] = 6;
    this->route[46].point[17][0] = 6;       this->route[46].point[17][1] = 4;
    this->route[46].point[18][0] = 7;       this->route[46].point[18][1] = 2;
    this->route[46].point[19][0] = 6;       this->route[46].point[19][1] = 0;
    this->route[46].point[20][0] = 5;       this->route[46].point[20][1] = 2;
    this->route[46].point[21][0] = 7;       this->route[46].point[21][1] = 1;
    this->route[46].point[22][0] = 5;       this->route[46].point[22][1] = 0;
    this->route[46].point[23][0] = 3;       this->route[46].point[23][1] = 1;
    this->route[46].point[24][0] = 1;       this->route[46].point[24][1] = 0;
    this->route[46].point[25][0] = 0;       this->route[46].point[25][1] = 2;
    this->route[46].point[26][0] = 1;       this->route[46].point[26][1] = 4;
    this->route[46].point[27][0] = 0;       this->route[46].point[27][1] = 6;
    this->route[46].point[28][0] = 2;       this->route[46].point[28][1] = 7;
    this->route[46].point[29][0] = 4;       this->route[46].point[29][1] = 6;
    this->route[46].point[30][0] = 6;       this->route[46].point[30][1] = 7;
    this->route[46].point[31][0] = 7;       this->route[46].point[31][1] = 5;
    this->route[46].point[32][0] = 6;       this->route[46].point[32][1] = 3;
    this->route[46].point[33][0] = 4;       this->route[46].point[33][1] = 4;
    this->route[46].point[34][0] = 2;       this->route[46].point[34][1] = 5;
    this->route[46].point[35][0] = 3;       this->route[46].point[35][1] = 7;
    this->route[46].point[36][0] = 1;       this->route[46].point[36][1] = 6;
    this->route[46].point[37][0] = 0;       this->route[46].point[37][1] = 4;
    this->route[46].point[38][0] = 2;       this->route[46].point[38][1] = 3;
    this->route[46].point[39][0] = 4;       this->route[46].point[39][1] = 2;
    this->route[46].point[40][0] = 3;       this->route[46].point[40][1] = 0;
    this->route[46].point[41][0] = 1;       this->route[46].point[41][1] = 1;
    this->route[46].point[42][0] = 3;       this->route[46].point[42][1] = 2;
    this->route[46].point[43][0] = 5;       this->route[46].point[43][1] = 3;
    this->route[46].point[44][0] = 4;       this->route[46].point[44][1] = 5;
    this->route[46].point[45][0] = 3;       this->route[46].point[45][1] = 3;
    this->route[46].point[46][0] = 4;       this->route[46].point[46][1] = 1;
    this->route[46].point[47][0] = 2;       this->route[46].point[47][1] = 2;
    this->route[46].point[48][0] = 3;       this->route[46].point[48][1] = 4;
    this->route[46].point[49][0] = 2;       this->route[46].point[49][1] = 6;
    this->route[46].point[50][0] = 0;       this->route[46].point[50][1] = 7;
    this->route[46].point[51][0] = 1;       this->route[46].point[51][1] = 5;
    this->route[46].point[52][0] = 0;       this->route[46].point[52][1] = 3;
    this->route[46].point[53][0] = 2;       this->route[46].point[53][1] = 4;
    this->route[46].point[54][0] = 4;       this->route[46].point[54][1] = 3;
    this->route[46].point[55][0] = 5;       this->route[46].point[55][1] = 1;
    this->route[46].point[56][0] = 7;       this->route[46].point[56][1] = 0;
    this->route[46].point[57][0] = 6;       this->route[46].point[57][1] = 2;
    this->route[46].point[58][0] = 7;       this->route[46].point[58][1] = 4;
    this->route[46].point[59][0] = 5;       this->route[46].point[59][1] = 5;
    this->route[46].point[60][0] = 4;       this->route[46].point[60][1] = 7;
    this->route[46].point[61][0] = 6;       this->route[46].point[61][1] = 6;
    this->route[46].point[62][0] = 5;       this->route[46].point[62][1] = 4;
    this->route[46].point[63][0] = 3;       this->route[46].point[63][1] = 5;

    //8     11      26      53      38      13      28      51
    //25    42      9       12      27      52      37      14
    //10    7       48      39      54      35      50      29
    //41    24      43      46      49      64      15      36
    //6     47      40      55      34      45      30      61
    //23    56      21      44      63      60      1       16
    //20    5       58      33      18      3       62      31
    //57    22      19      4       59      32      17      2
    //stepOfHouse = 64

    //this->route[47].point[64][2] = {
    this->route[47].point[0][0] = 5;        this->route[47].point[0][1] = 7;
    this->route[47].point[1][0] = 7;        this->route[47].point[1][1] = 6;
    this->route[47].point[2][0] = 6;        this->route[47].point[2][1] = 4;
    this->route[47].point[3][0] = 7;        this->route[47].point[3][1] = 2;
    this->route[47].point[4][0] = 6;        this->route[47].point[4][1] = 0;
    this->route[47].point[5][0] = 4;        this->route[47].point[5][1] = 1;
    this->route[47].point[6][0] = 2;        this->route[47].point[6][1] = 0;
    this->route[47].point[7][0] = 0;        this->route[47].point[7][1] = 1;
    this->route[47].point[8][0] = 1;        this->route[47].point[8][1] = 3;
    this->route[47].point[9][0] = 0;        this->route[47].point[9][1] = 5;
    this->route[47].point[10][0] = 1;       this->route[47].point[10][1] = 7;
    this->route[47].point[11][0] = 3;       this->route[47].point[11][1] = 6;
    this->route[47].point[12][0] = 1;       this->route[47].point[12][1] = 5;
    this->route[47].point[13][0] = 0;       this->route[47].point[13][1] = 7;
    this->route[47].point[14][0] = 2;       this->route[47].point[14][1] = 6;
    this->route[47].point[15][0] = 4;       this->route[47].point[15][1] = 7;
    this->route[47].point[16][0] = 6;       this->route[47].point[16][1] = 6;
    this->route[47].point[17][0] = 7;       this->route[47].point[17][1] = 4;
    this->route[47].point[18][0] = 6;       this->route[47].point[18][1] = 2;
    this->route[47].point[19][0] = 7;       this->route[47].point[19][1] = 0;
    this->route[47].point[20][0] = 5;       this->route[47].point[20][1] = 1;
    this->route[47].point[21][0] = 3;       this->route[47].point[21][1] = 0;
    this->route[47].point[22][0] = 1;       this->route[47].point[22][1] = 1;
    this->route[47].point[23][0] = 0;       this->route[47].point[23][1] = 3;
    this->route[47].point[24][0] = 2;       this->route[47].point[24][1] = 2;
    this->route[47].point[25][0] = 1;       this->route[47].point[25][1] = 0;
    this->route[47].point[26][0] = 0;       this->route[47].point[26][1] = 2;
    this->route[47].point[27][0] = 1;       this->route[47].point[27][1] = 4;
    this->route[47].point[28][0] = 0;       this->route[47].point[28][1] = 6;
    this->route[47].point[29][0] = 2;       this->route[47].point[29][1] = 7;
    this->route[47].point[30][0] = 4;       this->route[47].point[30][1] = 6;
    this->route[47].point[31][0] = 6;       this->route[47].point[31][1] = 7;
    this->route[47].point[32][0] = 7;       this->route[47].point[32][1] = 5;
    this->route[47].point[33][0] = 6;       this->route[47].point[33][1] = 3;
    this->route[47].point[34][0] = 7;       this->route[47].point[34][1] = 1;
    this->route[47].point[35][0] = 5;       this->route[47].point[35][1] = 0;
    this->route[47].point[36][0] = 4;       this->route[47].point[36][1] = 2;
    this->route[47].point[37][0] = 3;       this->route[47].point[37][1] = 4;
    this->route[47].point[38][0] = 5;       this->route[47].point[38][1] = 5;
    this->route[47].point[39][0] = 4;       this->route[47].point[39][1] = 3;
    this->route[47].point[40][0] = 3;       this->route[47].point[40][1] = 5;
    this->route[47].point[41][0] = 5;       this->route[47].point[41][1] = 4;
    this->route[47].point[42][0] = 7;       this->route[47].point[42][1] = 3;
    this->route[47].point[43][0] = 6;       this->route[47].point[43][1] = 1;
    this->route[47].point[44][0] = 5;       this->route[47].point[44][1] = 3;
    this->route[47].point[45][0] = 6;       this->route[47].point[45][1] = 5;
    this->route[47].point[46][0] = 7;       this->route[47].point[46][1] = 7;
    this->route[47].point[47][0] = 5;       this->route[47].point[47][1] = 6;
    this->route[47].point[48][0] = 3;       this->route[47].point[48][1] = 7;
    this->route[47].point[49][0] = 2;       this->route[47].point[49][1] = 5;
    this->route[47].point[50][0] = 3;       this->route[47].point[50][1] = 3;
    this->route[47].point[51][0] = 5;       this->route[47].point[51][1] = 2;
    this->route[47].point[52][0] = 4;       this->route[47].point[52][1] = 4;
    this->route[47].point[53][0] = 3;       this->route[47].point[53][1] = 2;
    this->route[47].point[54][0] = 4;       this->route[47].point[54][1] = 0;
    this->route[47].point[55][0] = 2;       this->route[47].point[55][1] = 1;
    this->route[47].point[56][0] = 0;       this->route[47].point[56][1] = 0;
    this->route[47].point[57][0] = 1;       this->route[47].point[57][1] = 2;
    this->route[47].point[58][0] = 3;       this->route[47].point[58][1] = 1;
    this->route[47].point[59][0] = 2;       this->route[47].point[59][1] = 3;
    this->route[47].point[60][0] = 0;       this->route[47].point[60][1] = 4;
    this->route[47].point[61][0] = 1;       this->route[47].point[61][1] = 6;
    this->route[47].point[62][0] = 2;       this->route[47].point[62][1] = 4;
    this->route[47].point[63][0] = 4;       this->route[47].point[63][1] = 5;

    //57    8       27      24      61      10      29      14
    //26    23      58      9       28      13      62      11
    //7     56      25      60      63      50      15      30
    //22    59      54      51      38      41      12      49
    //55    6       37      40      53      64      31      16
    //36    21      52      45      42      39      48      1
    //5     44      19      34      3       46      17      32
    //20    35      4       43      18      33      2       47
    //stepOfHouse = 64

    //this->route[48].point[64][2] = {
    this->route[48].point[0][0] = 6;        this->route[48].point[0][1] = 0;
    this->route[48].point[1][0] = 7;        this->route[48].point[1][1] = 2;
    this->route[48].point[2][0] = 6;        this->route[48].point[2][1] = 4;
    this->route[48].point[3][0] = 7;        this->route[48].point[3][1] = 6;
    this->route[48].point[4][0] = 5;        this->route[48].point[4][1] = 7;
    this->route[48].point[5][0] = 6;        this->route[48].point[5][1] = 5;
    this->route[48].point[6][0] = 7;        this->route[48].point[6][1] = 7;
    this->route[48].point[7][0] = 5;        this->route[48].point[7][1] = 6;
    this->route[48].point[8][0] = 7;        this->route[48].point[8][1] = 5;
    this->route[48].point[9][0] = 6;        this->route[48].point[9][1] = 7;
    this->route[48].point[10][0] = 4;       this->route[48].point[10][1] = 6;
    this->route[48].point[11][0] = 2;       this->route[48].point[11][1] = 7;
    this->route[48].point[12][0] = 0;       this->route[48].point[12][1] = 6;
    this->route[48].point[13][0] = 1;       this->route[48].point[13][1] = 4;
    this->route[48].point[14][0] = 0;       this->route[48].point[14][1] = 2;
    this->route[48].point[15][0] = 1;       this->route[48].point[15][1] = 0;
    this->route[48].point[16][0] = 3;       this->route[48].point[16][1] = 1;
    this->route[48].point[17][0] = 5;       this->route[48].point[17][1] = 0;
    this->route[48].point[18][0] = 7;       this->route[48].point[18][1] = 1;
    this->route[48].point[19][0] = 6;       this->route[48].point[19][1] = 3;
    this->route[48].point[20][0] = 5;       this->route[48].point[20][1] = 1;
    this->route[48].point[21][0] = 7;       this->route[48].point[21][1] = 0;
    this->route[48].point[22][0] = 6;       this->route[48].point[22][1] = 2;
    this->route[48].point[23][0] = 7;       this->route[48].point[23][1] = 4;
    this->route[48].point[24][0] = 6;       this->route[48].point[24][1] = 6;
    this->route[48].point[25][0] = 4;       this->route[48].point[25][1] = 7;
    this->route[48].point[26][0] = 5;       this->route[48].point[26][1] = 5;
    this->route[48].point[27][0] = 4;       this->route[48].point[27][1] = 3;
    this->route[48].point[28][0] = 3;       this->route[48].point[28][1] = 5;
    this->route[48].point[29][0] = 5;       this->route[48].point[29][1] = 4;
    this->route[48].point[30][0] = 7;       this->route[48].point[30][1] = 3;
    this->route[48].point[31][0] = 6;       this->route[48].point[31][1] = 1;
    this->route[48].point[32][0] = 4;       this->route[48].point[32][1] = 0;
    this->route[48].point[33][0] = 5;       this->route[48].point[33][1] = 2;
    this->route[48].point[34][0] = 4;       this->route[48].point[34][1] = 4;
    this->route[48].point[35][0] = 3;       this->route[48].point[35][1] = 6;
    this->route[48].point[36][0] = 1;       this->route[48].point[36][1] = 7;
    this->route[48].point[37][0] = 2;       this->route[48].point[37][1] = 5;
    this->route[48].point[38][0] = 3;       this->route[48].point[38][1] = 7;
    this->route[48].point[39][0] = 1;       this->route[48].point[39][1] = 6;
    this->route[48].point[40][0] = 0;       this->route[48].point[40][1] = 4;
    this->route[48].point[41][0] = 2;       this->route[48].point[41][1] = 3;
    this->route[48].point[42][0] = 4;       this->route[48].point[42][1] = 2;
    this->route[48].point[43][0] = 3;       this->route[48].point[43][1] = 0;
    this->route[48].point[44][0] = 2;       this->route[48].point[44][1] = 2;
    this->route[48].point[45][0] = 0;       this->route[48].point[45][1] = 1;
    this->route[48].point[46][0] = 2;       this->route[48].point[46][1] = 0;
    this->route[48].point[47][0] = 3;       this->route[48].point[47][1] = 2;
    this->route[48].point[48][0] = 1;       this->route[48].point[48][1] = 1;
    this->route[48].point[49][0] = 0;       this->route[48].point[49][1] = 3;
    this->route[48].point[50][0] = 1;       this->route[48].point[50][1] = 5;
    this->route[48].point[51][0] = 0;       this->route[48].point[51][1] = 7;
    this->route[48].point[52][0] = 2;       this->route[48].point[52][1] = 6;
    this->route[48].point[53][0] = 3;       this->route[48].point[53][1] = 4;
    this->route[48].point[54][0] = 5;       this->route[48].point[54][1] = 3;
    this->route[48].point[55][0] = 4;       this->route[48].point[55][1] = 5;
    this->route[48].point[56][0] = 2;       this->route[48].point[56][1] = 4;
    this->route[48].point[57][0] = 0;       this->route[48].point[57][1] = 5;
    this->route[48].point[58][0] = 1;       this->route[48].point[58][1] = 3;
    this->route[48].point[59][0] = 2;       this->route[48].point[59][1] = 1;
    this->route[48].point[60][0] = 0;       this->route[48].point[60][1] = 0;
    this->route[48].point[61][0] = 1;       this->route[48].point[61][1] = 2;
    this->route[48].point[62][0] = 3;       this->route[48].point[62][1] = 3;
    this->route[48].point[63][0] = 4;       this->route[48].point[63][1] = 1;

    //61    46      15      50      41      58      13      52
    //16    49      62      59      14      51      40      37
    //47    60      45      42      57      38      53      12
    //44    17      48      63      54      29      36      39
    //33    64      43      28      35      56      11      26
    //18    21      34      55      30      27      8       5
    //1     32      23      20      3       6       25      10
    //22    19      2       31      24      9       4       7
    //stepOfHouse = 64

    //this->route[49].point[64][2] = {
    this->route[49].point[0][0] = 6;        this->route[49].point[0][1] = 1;
    this->route[49].point[1][0] = 7;        this->route[49].point[1][1] = 3;
    this->route[49].point[2][0] = 6;        this->route[49].point[2][1] = 5;
    this->route[49].point[3][0] = 7;        this->route[49].point[3][1] = 7;
    this->route[49].point[4][0] = 5;        this->route[49].point[4][1] = 6;
    this->route[49].point[5][0] = 7;        this->route[49].point[5][1] = 5;
    this->route[49].point[6][0] = 6;        this->route[49].point[6][1] = 7;
    this->route[49].point[7][0] = 4;        this->route[49].point[7][1] = 6;
    this->route[49].point[8][0] = 2;        this->route[49].point[8][1] = 7;
    this->route[49].point[9][0] = 0;        this->route[49].point[9][1] = 6;
    this->route[49].point[10][0] = 1;       this->route[49].point[10][1] = 4;
    this->route[49].point[11][0] = 0;       this->route[49].point[11][1] = 2;
    this->route[49].point[12][0] = 1;       this->route[49].point[12][1] = 0;
    this->route[49].point[13][0] = 3;       this->route[49].point[13][1] = 1;
    this->route[49].point[14][0] = 5;       this->route[49].point[14][1] = 0;
    this->route[49].point[15][0] = 7;       this->route[49].point[15][1] = 1;
    this->route[49].point[16][0] = 6;       this->route[49].point[16][1] = 3;
    this->route[49].point[17][0] = 5;       this->route[49].point[17][1] = 1;
    this->route[49].point[18][0] = 7;       this->route[49].point[18][1] = 0;
    this->route[49].point[19][0] = 6;       this->route[49].point[19][1] = 2;
    this->route[49].point[20][0] = 7;       this->route[49].point[20][1] = 4;
    this->route[49].point[21][0] = 6;       this->route[49].point[21][1] = 6;
    this->route[49].point[22][0] = 5;       this->route[49].point[22][1] = 4;
    this->route[49].point[23][0] = 4;       this->route[49].point[23][1] = 2;
    this->route[49].point[24][0] = 3;       this->route[49].point[24][1] = 0;
    this->route[49].point[25][0] = 1;       this->route[49].point[25][1] = 1;
    this->route[49].point[26][0] = 0;       this->route[49].point[26][1] = 3;
    this->route[49].point[27][0] = 2;       this->route[49].point[27][1] = 2;
    this->route[49].point[28][0] = 0;       this->route[49].point[28][1] = 1;
    this->route[49].point[29][0] = 2;       this->route[49].point[29][1] = 0;
    this->route[49].point[30][0] = 4;       this->route[49].point[30][1] = 1;
    this->route[49].point[31][0] = 6;       this->route[49].point[31][1] = 0;
    this->route[49].point[32][0] = 7;       this->route[49].point[32][1] = 2;
    this->route[49].point[33][0] = 5;       this->route[49].point[33][1] = 3;
    this->route[49].point[34][0] = 3;       this->route[49].point[34][1] = 4;
    this->route[49].point[35][0] = 1;       this->route[49].point[35][1] = 5;
    this->route[49].point[36][0] = 0;       this->route[49].point[36][1] = 7;
    this->route[49].point[37][0] = 2;       this->route[49].point[37][1] = 6;
    this->route[49].point[38][0] = 4;       this->route[49].point[38][1] = 7;
    this->route[49].point[39][0] = 5;       this->route[49].point[39][1] = 5;
    this->route[49].point[40][0] = 7;       this->route[49].point[40][1] = 6;
    this->route[49].point[41][0] = 5;       this->route[49].point[41][1] = 7;
    this->route[49].point[42][0] = 3;       this->route[49].point[42][1] = 6;
    this->route[49].point[43][0] = 1;       this->route[49].point[43][1] = 7;
    this->route[49].point[44][0] = 0;       this->route[49].point[44][1] = 5;
    this->route[49].point[45][0] = 1;       this->route[49].point[45][1] = 3;
    this->route[49].point[46][0] = 3;       this->route[49].point[46][1] = 2;
    this->route[49].point[47][0] = 4;       this->route[49].point[47][1] = 4;
    this->route[49].point[48][0] = 5;       this->route[49].point[48][1] = 2;
    this->route[49].point[49][0] = 6;       this->route[49].point[49][1] = 4;
    this->route[49].point[50][0] = 4;       this->route[49].point[50][1] = 3;
    this->route[49].point[51][0] = 3;       this->route[49].point[51][1] = 5;
    this->route[49].point[52][0] = 2;       this->route[49].point[52][1] = 3;
    this->route[49].point[53][0] = 0;       this->route[49].point[53][1] = 4;
    this->route[49].point[54][0] = 2;       this->route[49].point[54][1] = 5;
    this->route[49].point[55][0] = 3;       this->route[49].point[55][1] = 7;
    this->route[49].point[56][0] = 1;       this->route[49].point[56][1] = 6;
    this->route[49].point[57][0] = 2;       this->route[49].point[57][1] = 4;
    this->route[49].point[58][0] = 4;       this->route[49].point[58][1] = 5;
    this->route[49].point[59][0] = 3;       this->route[49].point[59][1] = 3;
    this->route[49].point[60][0] = 1;       this->route[49].point[60][1] = 2;
    this->route[49].point[61][0] = 0;       this->route[49].point[61][1] = 0;
    this->route[49].point[62][0] = 2;       this->route[49].point[62][1] = 1;
    this->route[49].point[63][0] = 4;       this->route[49].point[63][1] = 0;

    //62    29      12      27      54      45      10      37
    //13    26      61      46      11      36      57      44
    //30    63      28      53      58      55      38      9
    //25    14      47      60      35      52      43      56
    //64    31      24      51      48      59      8       39
    //15    18      49      34      23      40      5       42
    //32    1       20      17      50      3       22      7
    //19    16      33      2       21      6       41      4
    //stepOfHouse = 64

    //this->route[50].point[64][2] = {
    this->route[50].point[0][0] = 6;        this->route[50].point[0][1] = 2;
    this->route[50].point[1][0] = 7;        this->route[50].point[1][1] = 0;
    this->route[50].point[2][0] = 5;        this->route[50].point[2][1] = 1;
    this->route[50].point[3][0] = 7;        this->route[50].point[3][1] = 2;
    this->route[50].point[4][0] = 6;        this->route[50].point[4][1] = 0;
    this->route[50].point[5][0] = 4;        this->route[50].point[5][1] = 1;
    this->route[50].point[6][0] = 2;        this->route[50].point[6][1] = 0;
    this->route[50].point[7][0] = 0;        this->route[50].point[7][1] = 1;
    this->route[50].point[8][0] = 1;        this->route[50].point[8][1] = 3;
    this->route[50].point[9][0] = 0;        this->route[50].point[9][1] = 5;
    this->route[50].point[10][0] = 1;       this->route[50].point[10][1] = 7;
    this->route[50].point[11][0] = 3;       this->route[50].point[11][1] = 6;
    this->route[50].point[12][0] = 5;       this->route[50].point[12][1] = 7;
    this->route[50].point[13][0] = 7;       this->route[50].point[13][1] = 6;
    this->route[50].point[14][0] = 6;       this->route[50].point[14][1] = 4;
    this->route[50].point[15][0] = 5;       this->route[50].point[15][1] = 6;
    this->route[50].point[16][0] = 7;       this->route[50].point[16][1] = 7;
    this->route[50].point[17][0] = 6;       this->route[50].point[17][1] = 5;
    this->route[50].point[18][0] = 7;       this->route[50].point[18][1] = 3;
    this->route[50].point[19][0] = 6;       this->route[50].point[19][1] = 1;
    this->route[50].point[20][0] = 4;       this->route[50].point[20][1] = 0;
    this->route[50].point[21][0] = 5;       this->route[50].point[21][1] = 2;
    this->route[50].point[22][0] = 7;       this->route[50].point[22][1] = 1;
    this->route[50].point[23][0] = 5;       this->route[50].point[23][1] = 0;
    this->route[50].point[24][0] = 3;       this->route[50].point[24][1] = 1;
    this->route[50].point[25][0] = 1;       this->route[50].point[25][1] = 0;
    this->route[50].point[26][0] = 0;       this->route[50].point[26][1] = 2;
    this->route[50].point[27][0] = 2;       this->route[50].point[27][1] = 1;
    this->route[50].point[28][0] = 0;       this->route[50].point[28][1] = 0;
    this->route[50].point[29][0] = 1;       this->route[50].point[29][1] = 2;
    this->route[50].point[30][0] = 0;       this->route[50].point[30][1] = 4;
    this->route[50].point[31][0] = 1;       this->route[50].point[31][1] = 6;
    this->route[50].point[32][0] = 3;       this->route[50].point[32][1] = 7;
    this->route[50].point[33][0] = 2;       this->route[50].point[33][1] = 5;
    this->route[50].point[34][0] = 0;       this->route[50].point[34][1] = 6;
    this->route[50].point[35][0] = 2;       this->route[50].point[35][1] = 7;
    this->route[50].point[36][0] = 4;       this->route[50].point[36][1] = 6;
    this->route[50].point[37][0] = 6;       this->route[50].point[37][1] = 7;
    this->route[50].point[38][0] = 7;       this->route[50].point[38][1] = 5;
    this->route[50].point[39][0] = 6;       this->route[50].point[39][1] = 3;
    this->route[50].point[40][0] = 4;       this->route[50].point[40][1] = 4;
    this->route[50].point[41][0] = 3;       this->route[50].point[41][1] = 2;
    this->route[50].point[42][0] = 5;       this->route[50].point[42][1] = 3;
    this->route[50].point[43][0] = 7;       this->route[50].point[43][1] = 4;
    this->route[50].point[44][0] = 6;       this->route[50].point[44][1] = 6;
    this->route[50].point[45][0] = 5;       this->route[50].point[45][1] = 4;
    this->route[50].point[46][0] = 4;       this->route[50].point[46][1] = 2;
    this->route[50].point[47][0] = 3;       this->route[50].point[47][1] = 4;
    this->route[50].point[48][0] = 2;       this->route[50].point[48][1] = 6;
    this->route[50].point[49][0] = 0;       this->route[50].point[49][1] = 7;
    this->route[50].point[50][0] = 1;       this->route[50].point[50][1] = 5;
    this->route[50].point[51][0] = 2;       this->route[50].point[51][1] = 3;
    this->route[50].point[52][0] = 1;       this->route[50].point[52][1] = 1;
    this->route[50].point[53][0] = 3;       this->route[50].point[53][1] = 0;
    this->route[50].point[54][0] = 2;       this->route[50].point[54][1] = 2;
    this->route[50].point[55][0] = 0;       this->route[50].point[55][1] = 3;
    this->route[50].point[56][0] = 2;       this->route[50].point[56][1] = 4;
    this->route[50].point[57][0] = 4;       this->route[50].point[57][1] = 5;
    this->route[50].point[58][0] = 3;       this->route[50].point[58][1] = 3;
    this->route[50].point[59][0] = 1;       this->route[50].point[59][1] = 4;
    this->route[50].point[60][0] = 3;       this->route[50].point[60][1] = 5;
    this->route[50].point[61][0] = 4;       this->route[50].point[61][1] = 7;
    this->route[50].point[62][0] = 5;       this->route[50].point[62][1] = 5;
    this->route[50].point[63][0] = 4;       this->route[50].point[63][1] = 3;

    //29    8       27      56      31      10      35      50
    //26    53      30      9       60      51      32      11
    //7     28      55      52      57      34      49      36
    //54    25      42      59      48      61      12      33
    //21    6       47      64      41      58      37      62
    //24    3       22      43      46      63      16      13
    //5     20      1       40      15      18      45      38
    //2     23      4       19      44      39      14      17
    //stepOfHouse = 64

    //this->route[51].point[64][2] = {
    this->route[51].point[0][0] = 6;        this->route[51].point[0][1] = 3;
    this->route[51].point[1][0] = 7;        this->route[51].point[1][1] = 1;
    this->route[51].point[2][0] = 5;        this->route[51].point[2][1] = 0;
    this->route[51].point[3][0] = 6;        this->route[51].point[3][1] = 2;
    this->route[51].point[4][0] = 7;        this->route[51].point[4][1] = 0;
    this->route[51].point[5][0] = 5;        this->route[51].point[5][1] = 1;
    this->route[51].point[6][0] = 7;        this->route[51].point[6][1] = 2;
    this->route[51].point[7][0] = 6;        this->route[51].point[7][1] = 0;
    this->route[51].point[8][0] = 4;        this->route[51].point[8][1] = 1;
    this->route[51].point[9][0] = 2;        this->route[51].point[9][1] = 0;
    this->route[51].point[10][0] = 0;       this->route[51].point[10][1] = 1;
    this->route[51].point[11][0] = 1;       this->route[51].point[11][1] = 3;
    this->route[51].point[12][0] = 0;       this->route[51].point[12][1] = 5;
    this->route[51].point[13][0] = 1;       this->route[51].point[13][1] = 7;
    this->route[51].point[14][0] = 3;       this->route[51].point[14][1] = 6;
    this->route[51].point[15][0] = 5;       this->route[51].point[15][1] = 7;
    this->route[51].point[16][0] = 7;       this->route[51].point[16][1] = 6;
    this->route[51].point[17][0] = 6;       this->route[51].point[17][1] = 4;
    this->route[51].point[18][0] = 5;       this->route[51].point[18][1] = 6;
    this->route[51].point[19][0] = 7;       this->route[51].point[19][1] = 7;
    this->route[51].point[20][0] = 6;       this->route[51].point[20][1] = 5;
    this->route[51].point[21][0] = 7;       this->route[51].point[21][1] = 3;
    this->route[51].point[22][0] = 6;       this->route[51].point[22][1] = 1;
    this->route[51].point[23][0] = 4;       this->route[51].point[23][1] = 0;
    this->route[51].point[24][0] = 5;       this->route[51].point[24][1] = 2;
    this->route[51].point[25][0] = 4;       this->route[51].point[25][1] = 4;
    this->route[51].point[26][0] = 3;       this->route[51].point[26][1] = 2;
    this->route[51].point[27][0] = 5;       this->route[51].point[27][1] = 3;
    this->route[51].point[28][0] = 7;       this->route[51].point[28][1] = 4;
    this->route[51].point[29][0] = 6;       this->route[51].point[29][1] = 6;
    this->route[51].point[30][0] = 4;       this->route[51].point[30][1] = 7;
    this->route[51].point[31][0] = 3;       this->route[51].point[31][1] = 5;
    this->route[51].point[32][0] = 2;       this->route[51].point[32][1] = 7;
    this->route[51].point[33][0] = 0;       this->route[51].point[33][1] = 6;
    this->route[51].point[34][0] = 2;       this->route[51].point[34][1] = 5;
    this->route[51].point[35][0] = 3;       this->route[51].point[35][1] = 7;
    this->route[51].point[36][0] = 1;       this->route[51].point[36][1] = 6;
    this->route[51].point[37][0] = 0;       this->route[51].point[37][1] = 4;
    this->route[51].point[38][0] = 1;       this->route[51].point[38][1] = 2;
    this->route[51].point[39][0] = 0;       this->route[51].point[39][1] = 0;
    this->route[51].point[40][0] = 2;       this->route[51].point[40][1] = 1;
    this->route[51].point[41][0] = 4;       this->route[51].point[41][1] = 2;
    this->route[51].point[42][0] = 5;       this->route[51].point[42][1] = 4;
    this->route[51].point[43][0] = 7;       this->route[51].point[43][1] = 5;
    this->route[51].point[44][0] = 6;       this->route[51].point[44][1] = 7;
    this->route[51].point[45][0] = 4;       this->route[51].point[45][1] = 6;
    this->route[51].point[46][0] = 3;       this->route[51].point[46][1] = 4;
    this->route[51].point[47][0] = 2;       this->route[51].point[47][1] = 2;
    this->route[51].point[48][0] = 3;       this->route[51].point[48][1] = 0;
    this->route[51].point[49][0] = 1;       this->route[51].point[49][1] = 1;
    this->route[51].point[50][0] = 0;       this->route[51].point[50][1] = 3;
    this->route[51].point[51][0] = 2;       this->route[51].point[51][1] = 4;
    this->route[51].point[52][0] = 4;       this->route[51].point[52][1] = 5;
    this->route[51].point[53][0] = 3;       this->route[51].point[53][1] = 3;
    this->route[51].point[54][0] = 1;       this->route[51].point[54][1] = 4;
    this->route[51].point[55][0] = 2;       this->route[51].point[55][1] = 6;
    this->route[51].point[56][0] = 0;       this->route[51].point[56][1] = 7;
    this->route[51].point[57][0] = 1;       this->route[51].point[57][1] = 5;
    this->route[51].point[58][0] = 2;       this->route[51].point[58][1] = 3;
    this->route[51].point[59][0] = 0;       this->route[51].point[59][1] = 2;
    this->route[51].point[60][0] = 1;       this->route[51].point[60][1] = 0;
    this->route[51].point[61][0] = 3;       this->route[51].point[61][1] = 1;
    this->route[51].point[62][0] = 4;       this->route[51].point[62][1] = 3;
    this->route[51].point[63][0] = 5;       this->route[51].point[63][1] = 5;

    //40    11      60      51      38      13      34      57
    //61    50      39      12      55      58      37      14
    //10    41      48      59      52      35      56      33
    //49    62      27      54      47      32      15      36
    //24    9       42      63      26      53      46      31
    //3     6       25      28      43      64      19      16
    //8     23      4       1       18      21      30      45
    //5     2       7       22      29      44      17      20
    //stepOfHouse = 64

    //this->route[52].point[64][2] = {
    this->route[52].point[0][0] = 6;        this->route[52].point[0][1] = 4;
    this->route[52].point[1][0] = 7;        this->route[52].point[1][1] = 6;
    this->route[52].point[2][0] = 5;        this->route[52].point[2][1] = 7;
    this->route[52].point[3][0] = 6;        this->route[52].point[3][1] = 5;
    this->route[52].point[4][0] = 7;        this->route[52].point[4][1] = 7;
    this->route[52].point[5][0] = 5;        this->route[52].point[5][1] = 6;
    this->route[52].point[6][0] = 7;        this->route[52].point[6][1] = 5;
    this->route[52].point[7][0] = 6;        this->route[52].point[7][1] = 7;
    this->route[52].point[8][0] = 4;        this->route[52].point[8][1] = 6;
    this->route[52].point[9][0] = 2;        this->route[52].point[9][1] = 7;
    this->route[52].point[10][0] = 0;       this->route[52].point[10][1] = 6;
    this->route[52].point[11][0] = 1;       this->route[52].point[11][1] = 4;
    this->route[52].point[12][0] = 0;       this->route[52].point[12][1] = 2;
    this->route[52].point[13][0] = 1;       this->route[52].point[13][1] = 0;
    this->route[52].point[14][0] = 3;       this->route[52].point[14][1] = 1;
    this->route[52].point[15][0] = 5;       this->route[52].point[15][1] = 0;
    this->route[52].point[16][0] = 7;       this->route[52].point[16][1] = 1;
    this->route[52].point[17][0] = 6;       this->route[52].point[17][1] = 3;
    this->route[52].point[18][0] = 5;       this->route[52].point[18][1] = 5;
    this->route[52].point[19][0] = 7;       this->route[52].point[19][1] = 4;
    this->route[52].point[20][0] = 6;       this->route[52].point[20][1] = 6;
    this->route[52].point[21][0] = 4;       this->route[52].point[21][1] = 7;
    this->route[52].point[22][0] = 3;       this->route[52].point[22][1] = 5;
    this->route[52].point[23][0] = 1;       this->route[52].point[23][1] = 6;
    this->route[52].point[24][0] = 3;       this->route[52].point[24][1] = 7;
    this->route[52].point[25][0] = 4;       this->route[52].point[25][1] = 5;
    this->route[52].point[26][0] = 2;       this->route[52].point[26][1] = 6;
    this->route[52].point[27][0] = 0;       this->route[52].point[27][1] = 7;
    this->route[52].point[28][0] = 1;       this->route[52].point[28][1] = 5;
    this->route[52].point[29][0] = 3;       this->route[52].point[29][1] = 6;
    this->route[52].point[30][0] = 1;       this->route[52].point[30][1] = 7;
    this->route[52].point[31][0] = 0;       this->route[52].point[31][1] = 5;
    this->route[52].point[32][0] = 2;       this->route[52].point[32][1] = 4;
    this->route[52].point[33][0] = 0;       this->route[52].point[33][1] = 3;
    this->route[52].point[34][0] = 1;       this->route[52].point[34][1] = 1;
    this->route[52].point[35][0] = 3;       this->route[52].point[35][1] = 0;
    this->route[52].point[36][0] = 5;       this->route[52].point[36][1] = 1;
    this->route[52].point[37][0] = 7;       this->route[52].point[37][1] = 0;
    this->route[52].point[38][0] = 6;       this->route[52].point[38][1] = 2;
    this->route[52].point[39][0] = 4;       this->route[52].point[39][1] = 3;
    this->route[52].point[40][0] = 2;       this->route[52].point[40][1] = 2;
    this->route[52].point[41][0] = 0;       this->route[52].point[41][1] = 1;
    this->route[52].point[42][0] = 2;       this->route[52].point[42][1] = 0;
    this->route[52].point[43][0] = 4;       this->route[52].point[43][1] = 1;
    this->route[52].point[44][0] = 6;       this->route[52].point[44][1] = 0;
    this->route[52].point[45][0] = 7;       this->route[52].point[45][1] = 2;
    this->route[52].point[46][0] = 5;       this->route[52].point[46][1] = 3;
    this->route[52].point[47][0] = 3;       this->route[52].point[47][1] = 4;
    this->route[52].point[48][0] = 1;       this->route[52].point[48][1] = 3;
    this->route[52].point[49][0] = 3;       this->route[52].point[49][1] = 2;
    this->route[52].point[50][0] = 4;       this->route[52].point[50][1] = 4;
    this->route[52].point[51][0] = 2;       this->route[52].point[51][1] = 5;
    this->route[52].point[52][0] = 3;       this->route[52].point[52][1] = 3;
    this->route[52].point[53][0] = 5;       this->route[52].point[53][1] = 4;
    this->route[52].point[54][0] = 7;       this->route[52].point[54][1] = 3;
    this->route[52].point[55][0] = 6;       this->route[52].point[55][1] = 1;
    this->route[52].point[56][0] = 4;       this->route[52].point[56][1] = 2;
    this->route[52].point[57][0] = 2;       this->route[52].point[57][1] = 3;
    this->route[52].point[58][0] = 0;       this->route[52].point[58][1] = 4;
    this->route[52].point[59][0] = 1;       this->route[52].point[59][1] = 2;
    this->route[52].point[60][0] = 0;       this->route[52].point[60][1] = 0;
    this->route[52].point[61][0] = 2;       this->route[52].point[61][1] = 1;
    this->route[52].point[62][0] = 4;       this->route[52].point[62][1] = 0;
    this->route[52].point[63][0] = 5;       this->route[52].point[63][1] = 2;

    //61    42      13      34      59      32      11      28
    //14    35      60      49      12      29      24      31
    //43    62      41      58      33      52      27      10
    //36    15      50      53      48      23      30      25
    //63    44      57      40      51      26      9       22
    //16    37      64      47      54      19      6       3
    //45    56      39      18      1       4       21      8
    //38    17      46      55      20      7       2       5
    //stepOfHouse = 64

    //this->route[53].point[64][2] = {
    this->route[53].point[0][0] = 6;        this->route[53].point[0][1] = 5;
    this->route[53].point[1][0] = 7;        this->route[53].point[1][1] = 7;
    this->route[53].point[2][0] = 5;        this->route[53].point[2][1] = 6;
    this->route[53].point[3][0] = 7;        this->route[53].point[3][1] = 5;
    this->route[53].point[4][0] = 6;        this->route[53].point[4][1] = 7;
    this->route[53].point[5][0] = 4;        this->route[53].point[5][1] = 6;
    this->route[53].point[6][0] = 2;        this->route[53].point[6][1] = 7;
    this->route[53].point[7][0] = 0;        this->route[53].point[7][1] = 6;
    this->route[53].point[8][0] = 1;        this->route[53].point[8][1] = 4;
    this->route[53].point[9][0] = 0;        this->route[53].point[9][1] = 2;
    this->route[53].point[10][0] = 1;       this->route[53].point[10][1] = 0;
    this->route[53].point[11][0] = 3;       this->route[53].point[11][1] = 1;
    this->route[53].point[12][0] = 5;       this->route[53].point[12][1] = 0;
    this->route[53].point[13][0] = 7;       this->route[53].point[13][1] = 1;
    this->route[53].point[14][0] = 6;       this->route[53].point[14][1] = 3;
    this->route[53].point[15][0] = 5;       this->route[53].point[15][1] = 1;
    this->route[53].point[16][0] = 7;       this->route[53].point[16][1] = 0;
    this->route[53].point[17][0] = 6;       this->route[53].point[17][1] = 2;
    this->route[53].point[18][0] = 7;       this->route[53].point[18][1] = 4;
    this->route[53].point[19][0] = 6;       this->route[53].point[19][1] = 6;
    this->route[53].point[20][0] = 4;       this->route[53].point[20][1] = 7;
    this->route[53].point[21][0] = 5;       this->route[53].point[21][1] = 5;
    this->route[53].point[22][0] = 7;       this->route[53].point[22][1] = 6;
    this->route[53].point[23][0] = 5;       this->route[53].point[23][1] = 7;
    this->route[53].point[24][0] = 3;       this->route[53].point[24][1] = 6;
    this->route[53].point[25][0] = 1;       this->route[53].point[25][1] = 7;
    this->route[53].point[26][0] = 0;       this->route[53].point[26][1] = 5;
    this->route[53].point[27][0] = 2;       this->route[53].point[27][1] = 6;
    this->route[53].point[28][0] = 0;       this->route[53].point[28][1] = 7;
    this->route[53].point[29][0] = 1;       this->route[53].point[29][1] = 5;
    this->route[53].point[30][0] = 0;       this->route[53].point[30][1] = 3;
    this->route[53].point[31][0] = 1;       this->route[53].point[31][1] = 1;
    this->route[53].point[32][0] = 3;       this->route[53].point[32][1] = 0;
    this->route[53].point[33][0] = 2;       this->route[53].point[33][1] = 2;
    this->route[53].point[34][0] = 0;       this->route[53].point[34][1] = 1;
    this->route[53].point[35][0] = 2;       this->route[53].point[35][1] = 0;
    this->route[53].point[36][0] = 4;       this->route[53].point[36][1] = 1;
    this->route[53].point[37][0] = 6;       this->route[53].point[37][1] = 0;
    this->route[53].point[38][0] = 7;       this->route[53].point[38][1] = 2;
    this->route[53].point[39][0] = 6;       this->route[53].point[39][1] = 4;
    this->route[53].point[40][0] = 5;       this->route[53].point[40][1] = 2;
    this->route[53].point[41][0] = 7;       this->route[53].point[41][1] = 3;
    this->route[53].point[42][0] = 6;       this->route[53].point[42][1] = 1;
    this->route[53].point[43][0] = 4;       this->route[53].point[43][1] = 0;
    this->route[53].point[44][0] = 3;       this->route[53].point[44][1] = 2;
    this->route[53].point[45][0] = 5;       this->route[53].point[45][1] = 3;
    this->route[53].point[46][0] = 4;       this->route[53].point[46][1] = 5;
    this->route[53].point[47][0] = 3;       this->route[53].point[47][1] = 7;
    this->route[53].point[48][0] = 2;       this->route[53].point[48][1] = 5;
    this->route[53].point[49][0] = 3;       this->route[53].point[49][1] = 3;
    this->route[53].point[50][0] = 5;       this->route[53].point[50][1] = 4;
    this->route[53].point[51][0] = 4;       this->route[53].point[51][1] = 2;
    this->route[53].point[52][0] = 3;       this->route[53].point[52][1] = 4;
    this->route[53].point[53][0] = 1;       this->route[53].point[53][1] = 3;
    this->route[53].point[54][0] = 2;       this->route[53].point[54][1] = 1;
    this->route[53].point[55][0] = 0;       this->route[53].point[55][1] = 0;
    this->route[53].point[56][0] = 1;       this->route[53].point[56][1] = 2;
    this->route[53].point[57][0] = 2;       this->route[53].point[57][1] = 4;
    this->route[53].point[58][0] = 4;       this->route[53].point[58][1] = 3;
    this->route[53].point[59][0] = 3;       this->route[53].point[59][1] = 5;
    this->route[53].point[60][0] = 1;       this->route[53].point[60][1] = 6;
    this->route[53].point[61][0] = 0;       this->route[53].point[61][1] = 4;
    this->route[53].point[62][0] = 2;       this->route[53].point[62][1] = 3;
    this->route[53].point[63][0] = 4;       this->route[53].point[63][1] = 4;

    //56    35      10      31      62      27      8       29
    //11    32      57      54      9       30      61      26
    //36    55      34      63      58      49      28      7
    //33    12      45      50      53      60      25      48
    //44    37      52      59      64      47      6       21
    //13    16      41      46      51      22      3       24
    //38    43      18      15      40      1       20      5
    //17    14      39      42      19      4       23      2
    //stepOfHouse = 64

    //this->route[54].point[64][2] = {
    this->route[54].point[0][0] = 6;        this->route[54].point[0][1] = 6;
    this->route[54].point[1][0] = 7;        this->route[54].point[1][1] = 4;
    this->route[54].point[2][0] = 6;        this->route[54].point[2][1] = 2;
    this->route[54].point[3][0] = 7;        this->route[54].point[3][1] = 0;
    this->route[54].point[4][0] = 5;        this->route[54].point[4][1] = 1;
    this->route[54].point[5][0] = 7;        this->route[54].point[5][1] = 2;
    this->route[54].point[6][0] = 6;        this->route[54].point[6][1] = 0;
    this->route[54].point[7][0] = 4;        this->route[54].point[7][1] = 1;
    this->route[54].point[8][0] = 2;        this->route[54].point[8][1] = 0;
    this->route[54].point[9][0] = 0;        this->route[54].point[9][1] = 1;
    this->route[54].point[10][0] = 1;       this->route[54].point[10][1] = 3;
    this->route[54].point[11][0] = 0;       this->route[54].point[11][1] = 5;
    this->route[54].point[12][0] = 1;       this->route[54].point[12][1] = 7;
    this->route[54].point[13][0] = 3;       this->route[54].point[13][1] = 6;
    this->route[54].point[14][0] = 5;       this->route[54].point[14][1] = 7;
    this->route[54].point[15][0] = 7;       this->route[54].point[15][1] = 6;
    this->route[54].point[16][0] = 6;       this->route[54].point[16][1] = 4;
    this->route[54].point[17][0] = 5;       this->route[54].point[17][1] = 6;
    this->route[54].point[18][0] = 7;       this->route[54].point[18][1] = 7;
    this->route[54].point[19][0] = 6;       this->route[54].point[19][1] = 5;
    this->route[54].point[20][0] = 7;       this->route[54].point[20][1] = 3;
    this->route[54].point[21][0] = 6;       this->route[54].point[21][1] = 1;
    this->route[54].point[22][0] = 5;       this->route[54].point[22][1] = 3;
    this->route[54].point[23][0] = 4;       this->route[54].point[23][1] = 5;
    this->route[54].point[24][0] = 3;       this->route[54].point[24][1] = 7;
    this->route[54].point[25][0] = 1;       this->route[54].point[25][1] = 6;
    this->route[54].point[26][0] = 0;       this->route[54].point[26][1] = 4;
    this->route[54].point[27][0] = 2;       this->route[54].point[27][1] = 5;
    this->route[54].point[28][0] = 0;       this->route[54].point[28][1] = 6;
    this->route[54].point[29][0] = 2;       this->route[54].point[29][1] = 7;
    this->route[54].point[30][0] = 4;       this->route[54].point[30][1] = 6;
    this->route[54].point[31][0] = 6;       this->route[54].point[31][1] = 7;
    this->route[54].point[32][0] = 7;       this->route[54].point[32][1] = 5;
    this->route[54].point[33][0] = 6;       this->route[54].point[33][1] = 3;
    this->route[54].point[34][0] = 7;       this->route[54].point[34][1] = 1;
    this->route[54].point[35][0] = 5;       this->route[54].point[35][1] = 0;
    this->route[54].point[36][0] = 4;       this->route[54].point[36][1] = 2;
    this->route[54].point[37][0] = 3;       this->route[54].point[37][1] = 4;
    this->route[54].point[38][0] = 5;       this->route[54].point[38][1] = 5;
    this->route[54].point[39][0] = 4;       this->route[54].point[39][1] = 7;
    this->route[54].point[40][0] = 2;       this->route[54].point[40][1] = 6;
    this->route[54].point[41][0] = 0;       this->route[54].point[41][1] = 7;
    this->route[54].point[42][0] = 1;       this->route[54].point[42][1] = 5;
    this->route[54].point[43][0] = 0;       this->route[54].point[43][1] = 3;
    this->route[54].point[44][0] = 2;       this->route[54].point[44][1] = 4;
    this->route[54].point[45][0] = 4;       this->route[54].point[45][1] = 3;
    this->route[54].point[46][0] = 3;       this->route[54].point[46][1] = 5;
    this->route[54].point[47][0] = 2;       this->route[54].point[47][1] = 3;
    this->route[54].point[48][0] = 4;       this->route[54].point[48][1] = 4;
    this->route[54].point[49][0] = 3;       this->route[54].point[49][1] = 2;
    this->route[54].point[50][0] = 1;       this->route[54].point[50][1] = 1;
    this->route[54].point[51][0] = 3;       this->route[54].point[51][1] = 0;
    this->route[54].point[52][0] = 2;       this->route[54].point[52][1] = 2;
    this->route[54].point[53][0] = 1;       this->route[54].point[53][1] = 4;
    this->route[54].point[54][0] = 0;       this->route[54].point[54][1] = 2;
    this->route[54].point[55][0] = 1;       this->route[54].point[55][1] = 0;
    this->route[54].point[56][0] = 3;       this->route[54].point[56][1] = 1;
    this->route[54].point[57][0] = 5;       this->route[54].point[57][1] = 2;
    this->route[54].point[58][0] = 4;       this->route[54].point[58][1] = 0;
    this->route[54].point[59][0] = 2;       this->route[54].point[59][1] = 1;
    this->route[54].point[60][0] = 0;       this->route[54].point[60][1] = 0;
    this->route[54].point[61][0] = 1;       this->route[54].point[61][1] = 2;
    this->route[54].point[62][0] = 3;       this->route[54].point[62][1] = 3;
    this->route[54].point[63][0] = 5;       this->route[54].point[63][1] = 4;

    //61    10      55      44      27      12      29      42
    //56    51      62      11      54      43      26      13
    //9     60      53      48      45      28      41      30
    //52    57      50      63      38      47      14      25
    //59    8       37      46      49      24      31      40
    //36    5       58      23      64      39      18      15
    //7     22      3       34      17      20      1       32
    //4     35      6       21      2       33      16      19
    //stepOfHouse = 64

    //this->route[55].point[64][2] = {
    this->route[55].point[0][0] = 6;        this->route[55].point[0][1] = 7;
    this->route[55].point[1][0] = 7;        this->route[55].point[1][1] = 5;
    this->route[55].point[2][0] = 6;        this->route[55].point[2][1] = 3;
    this->route[55].point[3][0] = 7;        this->route[55].point[3][1] = 1;
    this->route[55].point[4][0] = 5;        this->route[55].point[4][1] = 0;
    this->route[55].point[5][0] = 6;        this->route[55].point[5][1] = 2;
    this->route[55].point[6][0] = 7;        this->route[55].point[6][1] = 0;
    this->route[55].point[7][0] = 5;        this->route[55].point[7][1] = 1;
    this->route[55].point[8][0] = 7;        this->route[55].point[8][1] = 2;
    this->route[55].point[9][0] = 6;        this->route[55].point[9][1] = 0;
    this->route[55].point[10][0] = 4;       this->route[55].point[10][1] = 1;
    this->route[55].point[11][0] = 2;       this->route[55].point[11][1] = 0;
    this->route[55].point[12][0] = 0;       this->route[55].point[12][1] = 1;
    this->route[55].point[13][0] = 1;       this->route[55].point[13][1] = 3;
    this->route[55].point[14][0] = 0;       this->route[55].point[14][1] = 5;
    this->route[55].point[15][0] = 1;       this->route[55].point[15][1] = 7;
    this->route[55].point[16][0] = 3;       this->route[55].point[16][1] = 6;
    this->route[55].point[17][0] = 5;       this->route[55].point[17][1] = 7;
    this->route[55].point[18][0] = 7;       this->route[55].point[18][1] = 6;
    this->route[55].point[19][0] = 6;       this->route[55].point[19][1] = 4;
    this->route[55].point[20][0] = 5;       this->route[55].point[20][1] = 6;
    this->route[55].point[21][0] = 7;       this->route[55].point[21][1] = 7;
    this->route[55].point[22][0] = 6;       this->route[55].point[22][1] = 5;
    this->route[55].point[23][0] = 7;       this->route[55].point[23][1] = 3;
    this->route[55].point[24][0] = 6;       this->route[55].point[24][1] = 1;
    this->route[55].point[25][0] = 4;       this->route[55].point[25][1] = 0;
    this->route[55].point[26][0] = 5;       this->route[55].point[26][1] = 2;
    this->route[55].point[27][0] = 4;       this->route[55].point[27][1] = 4;
    this->route[55].point[28][0] = 3;       this->route[55].point[28][1] = 2;
    this->route[55].point[29][0] = 5;       this->route[55].point[29][1] = 3;
    this->route[55].point[30][0] = 7;       this->route[55].point[30][1] = 4;
    this->route[55].point[31][0] = 6;       this->route[55].point[31][1] = 6;
    this->route[55].point[32][0] = 4;       this->route[55].point[32][1] = 7;
    this->route[55].point[33][0] = 3;       this->route[55].point[33][1] = 5;
    this->route[55].point[34][0] = 5;       this->route[55].point[34][1] = 4;
    this->route[55].point[35][0] = 4;       this->route[55].point[35][1] = 6;
    this->route[55].point[36][0] = 2;       this->route[55].point[36][1] = 7;
    this->route[55].point[37][0] = 0;       this->route[55].point[37][1] = 6;
    this->route[55].point[38][0] = 2;       this->route[55].point[38][1] = 5;
    this->route[55].point[39][0] = 3;       this->route[55].point[39][1] = 7;
    this->route[55].point[40][0] = 1;       this->route[55].point[40][1] = 6;
    this->route[55].point[41][0] = 0;       this->route[55].point[41][1] = 4;
    this->route[55].point[42][0] = 1;       this->route[55].point[42][1] = 2;
    this->route[55].point[43][0] = 0;       this->route[55].point[43][1] = 0;
    this->route[55].point[44][0] = 2;       this->route[55].point[44][1] = 1;
    this->route[55].point[45][0] = 4;       this->route[55].point[45][1] = 2;
    this->route[55].point[46][0] = 3;       this->route[55].point[46][1] = 4;
    this->route[55].point[47][0] = 2;       this->route[55].point[47][1] = 2;
    this->route[55].point[48][0] = 3;       this->route[55].point[48][1] = 0;
    this->route[55].point[49][0] = 1;       this->route[55].point[49][1] = 1;
    this->route[55].point[50][0] = 0;       this->route[55].point[50][1] = 3;
    this->route[55].point[51][0] = 2;       this->route[55].point[51][1] = 4;
    this->route[55].point[52][0] = 4;       this->route[55].point[52][1] = 5;
    this->route[55].point[53][0] = 3;       this->route[55].point[53][1] = 3;
    this->route[55].point[54][0] = 1;       this->route[55].point[54][1] = 4;
    this->route[55].point[55][0] = 2;       this->route[55].point[55][1] = 6;
    this->route[55].point[56][0] = 0;       this->route[55].point[56][1] = 7;
    this->route[55].point[57][0] = 1;       this->route[55].point[57][1] = 5;
    this->route[55].point[58][0] = 2;       this->route[55].point[58][1] = 3;
    this->route[55].point[59][0] = 0;       this->route[55].point[59][1] = 2;
    this->route[55].point[60][0] = 1;       this->route[55].point[60][1] = 0;
    this->route[55].point[61][0] = 3;       this->route[55].point[61][1] = 1;
    this->route[55].point[62][0] = 4;       this->route[55].point[62][1] = 3;
    this->route[55].point[63][0] = 5;       this->route[55].point[63][1] = 5;

    //44    13      60      51      42      15      38      57
    //61    50      43      14      55      58      41      16
    //12    45      48      59      52      39      56      37
    //49    62      29      54      47      34      17      40
    //26    11      46      63      28      53      36      33
    //5     8       27      30      35      64      21      18
    //10    25      6       3       20      23      32      1
    //7     4       9       24      31      2       19      22
    //stepOfHouse = 64

    //this->route[56].point[64][2] = {
    this->route[56].point[0][0] = 7;        this->route[56].point[0][1] = 0;
    this->route[56].point[1][0] = 6;        this->route[56].point[1][1] = 2;
    this->route[56].point[2][0] = 7;        this->route[56].point[2][1] = 4;
    this->route[56].point[3][0] = 6;        this->route[56].point[3][1] = 6;
    this->route[56].point[4][0] = 4;        this->route[56].point[4][1] = 7;
    this->route[56].point[5][0] = 2;        this->route[56].point[5][1] = 6;
    this->route[56].point[6][0] = 0;        this->route[56].point[6][1] = 7;
    this->route[56].point[7][0] = 1;        this->route[56].point[7][1] = 5;
    this->route[56].point[8][0] = 2;        this->route[56].point[8][1] = 7;
    this->route[56].point[9][0] = 0;        this->route[56].point[9][1] = 6;
    this->route[56].point[10][0] = 1;       this->route[56].point[10][1] = 4;
    this->route[56].point[11][0] = 0;       this->route[56].point[11][1] = 2;
    this->route[56].point[12][0] = 1;       this->route[56].point[12][1] = 0;
    this->route[56].point[13][0] = 3;       this->route[56].point[13][1] = 1;
    this->route[56].point[14][0] = 5;       this->route[56].point[14][1] = 0;
    this->route[56].point[15][0] = 7;       this->route[56].point[15][1] = 1;
    this->route[56].point[16][0] = 6;       this->route[56].point[16][1] = 3;
    this->route[56].point[17][0] = 7;       this->route[56].point[17][1] = 5;
    this->route[56].point[18][0] = 6;       this->route[56].point[18][1] = 7;
    this->route[56].point[19][0] = 5;       this->route[56].point[19][1] = 5;
    this->route[56].point[20][0] = 7;       this->route[56].point[20][1] = 6;
    this->route[56].point[21][0] = 5;       this->route[56].point[21][1] = 7;
    this->route[56].point[22][0] = 3;       this->route[56].point[22][1] = 6;
    this->route[56].point[23][0] = 1;       this->route[56].point[23][1] = 7;
    this->route[56].point[24][0] = 0;       this->route[56].point[24][1] = 5;
    this->route[56].point[25][0] = 1;       this->route[56].point[25][1] = 3;
    this->route[56].point[26][0] = 0;       this->route[56].point[26][1] = 1;
    this->route[56].point[27][0] = 2;       this->route[56].point[27][1] = 0;
    this->route[56].point[28][0] = 4;       this->route[56].point[28][1] = 1;
    this->route[56].point[29][0] = 6;       this->route[56].point[29][1] = 0;
    this->route[56].point[30][0] = 7;       this->route[56].point[30][1] = 2;
    this->route[56].point[31][0] = 6;       this->route[56].point[31][1] = 4;
    this->route[56].point[32][0] = 5;       this->route[56].point[32][1] = 6;
    this->route[56].point[33][0] = 7;       this->route[56].point[33][1] = 7;
    this->route[56].point[34][0] = 6;       this->route[56].point[34][1] = 5;
    this->route[56].point[35][0] = 7;       this->route[56].point[35][1] = 3;
    this->route[56].point[36][0] = 6;       this->route[56].point[36][1] = 1;
    this->route[56].point[37][0] = 5;       this->route[56].point[37][1] = 3;
    this->route[56].point[38][0] = 4;       this->route[56].point[38][1] = 5;
    this->route[56].point[39][0] = 3;       this->route[56].point[39][1] = 7;
    this->route[56].point[40][0] = 2;       this->route[56].point[40][1] = 5;
    this->route[56].point[41][0] = 3;       this->route[56].point[41][1] = 3;
    this->route[56].point[42][0] = 5;       this->route[56].point[42][1] = 2;
    this->route[56].point[43][0] = 4;       this->route[56].point[43][1] = 4;
    this->route[56].point[44][0] = 3;       this->route[56].point[44][1] = 2;
    this->route[56].point[45][0] = 4;       this->route[56].point[45][1] = 0;
    this->route[56].point[46][0] = 2;       this->route[56].point[46][1] = 1;
    this->route[56].point[47][0] = 0;       this->route[56].point[47][1] = 0;
    this->route[56].point[48][0] = 1;       this->route[56].point[48][1] = 2;
    this->route[56].point[49][0] = 0;       this->route[56].point[49][1] = 4;
    this->route[56].point[50][0] = 1;       this->route[56].point[50][1] = 6;
    this->route[56].point[51][0] = 2;       this->route[56].point[51][1] = 4;
    this->route[56].point[52][0] = 0;       this->route[56].point[52][1] = 3;
    this->route[56].point[53][0] = 1;       this->route[56].point[53][1] = 1;
    this->route[56].point[54][0] = 3;       this->route[56].point[54][1] = 0;
    this->route[56].point[55][0] = 4;       this->route[56].point[55][1] = 2;
    this->route[56].point[56][0] = 2;       this->route[56].point[56][1] = 3;
    this->route[56].point[57][0] = 3;       this->route[56].point[57][1] = 5;
    this->route[56].point[58][0] = 5;       this->route[56].point[58][1] = 4;
    this->route[56].point[59][0] = 4;       this->route[56].point[59][1] = 6;
    this->route[56].point[60][0] = 3;       this->route[56].point[60][1] = 4;
    this->route[56].point[61][0] = 2;       this->route[56].point[61][1] = 2;
    this->route[56].point[62][0] = 4;       this->route[56].point[62][1] = 3;
    this->route[56].point[63][0] = 5;       this->route[56].point[63][1] = 1;

    //48    27      12      53      50      25      10      7
    //13    54      49      26      11      8       51      24
    //28    47      62      57      52      41      6       9
    //55    14      45      42      61      58      23      40
    //46    29      56      63      44      39      60      5
    //15    64      43      38      59      20      33      22
    //30    37      2       17      32      35      4       19
    //1     16      31      36      3       18      21      34
    //stepOfHouse = 64

    //this->route[57].point[64][2] = {
    this->route[57].point[0][0] = 7;        this->route[57].point[0][1] = 1;
    this->route[57].point[1][0] = 5;        this->route[57].point[1][1] = 0;
    this->route[57].point[2][0] = 6;        this->route[57].point[2][1] = 2;
    this->route[57].point[3][0] = 7;        this->route[57].point[3][1] = 0;
    this->route[57].point[4][0] = 5;        this->route[57].point[4][1] = 1;
    this->route[57].point[5][0] = 7;        this->route[57].point[5][1] = 2;
    this->route[57].point[6][0] = 6;        this->route[57].point[6][1] = 0;
    this->route[57].point[7][0] = 4;        this->route[57].point[7][1] = 1;
    this->route[57].point[8][0] = 2;        this->route[57].point[8][1] = 0;
    this->route[57].point[9][0] = 0;        this->route[57].point[9][1] = 1;
    this->route[57].point[10][0] = 1;       this->route[57].point[10][1] = 3;
    this->route[57].point[11][0] = 0;       this->route[57].point[11][1] = 5;
    this->route[57].point[12][0] = 1;       this->route[57].point[12][1] = 7;
    this->route[57].point[13][0] = 3;       this->route[57].point[13][1] = 6;
    this->route[57].point[14][0] = 5;       this->route[57].point[14][1] = 7;
    this->route[57].point[15][0] = 7;       this->route[57].point[15][1] = 6;
    this->route[57].point[16][0] = 6;       this->route[57].point[16][1] = 4;
    this->route[57].point[17][0] = 5;       this->route[57].point[17][1] = 6;
    this->route[57].point[18][0] = 7;       this->route[57].point[18][1] = 7;
    this->route[57].point[19][0] = 6;       this->route[57].point[19][1] = 5;
    this->route[57].point[20][0] = 7;       this->route[57].point[20][1] = 3;
    this->route[57].point[21][0] = 6;       this->route[57].point[21][1] = 1;
    this->route[57].point[22][0] = 4;       this->route[57].point[22][1] = 0;
    this->route[57].point[23][0] = 5;       this->route[57].point[23][1] = 2;
    this->route[57].point[24][0] = 3;       this->route[57].point[24][1] = 3;
    this->route[57].point[25][0] = 2;       this->route[57].point[25][1] = 1;
    this->route[57].point[26][0] = 0;       this->route[57].point[26][1] = 0;
    this->route[57].point[27][0] = 1;       this->route[57].point[27][1] = 2;
    this->route[57].point[28][0] = 3;       this->route[57].point[28][1] = 1;
    this->route[57].point[29][0] = 1;       this->route[57].point[29][1] = 0;
    this->route[57].point[30][0] = 0;       this->route[57].point[30][1] = 2;
    this->route[57].point[31][0] = 1;       this->route[57].point[31][1] = 4;
    this->route[57].point[32][0] = 0;       this->route[57].point[32][1] = 6;
    this->route[57].point[33][0] = 2;       this->route[57].point[33][1] = 7;
    this->route[57].point[34][0] = 4;       this->route[57].point[34][1] = 6;
    this->route[57].point[35][0] = 5;       this->route[57].point[35][1] = 4;
    this->route[57].point[36][0] = 7;       this->route[57].point[36][1] = 5;
    this->route[57].point[37][0] = 6;       this->route[57].point[37][1] = 7;
    this->route[57].point[38][0] = 5;       this->route[57].point[38][1] = 5;
    this->route[57].point[39][0] = 7;       this->route[57].point[39][1] = 4;
    this->route[57].point[40][0] = 6;       this->route[57].point[40][1] = 6;
    this->route[57].point[41][0] = 4;       this->route[57].point[41][1] = 7;
    this->route[57].point[42][0] = 3;       this->route[57].point[42][1] = 5;
    this->route[57].point[43][0] = 2;       this->route[57].point[43][1] = 3;
    this->route[57].point[44][0] = 4;       this->route[57].point[44][1] = 4;
    this->route[57].point[45][0] = 3;       this->route[57].point[45][1] = 2;
    this->route[57].point[46][0] = 5;       this->route[57].point[46][1] = 3;
    this->route[57].point[47][0] = 4;       this->route[57].point[47][1] = 5;
    this->route[57].point[48][0] = 3;       this->route[57].point[48][1] = 7;
    this->route[57].point[49][0] = 2;       this->route[57].point[49][1] = 5;
    this->route[57].point[50][0] = 0;       this->route[57].point[50][1] = 4;
    this->route[57].point[51][0] = 1;       this->route[57].point[51][1] = 6;
    this->route[57].point[52][0] = 2;       this->route[57].point[52][1] = 4;
    this->route[57].point[53][0] = 4;       this->route[57].point[53][1] = 3;
    this->route[57].point[54][0] = 2;       this->route[57].point[54][1] = 2;
    this->route[57].point[55][0] = 3;       this->route[57].point[55][1] = 0;
    this->route[57].point[56][0] = 1;       this->route[57].point[56][1] = 1;
    this->route[57].point[57][0] = 0;       this->route[57].point[57][1] = 3;
    this->route[57].point[58][0] = 1;       this->route[57].point[58][1] = 5;
    this->route[57].point[59][0] = 0;       this->route[57].point[59][1] = 7;
    this->route[57].point[60][0] = 2;       this->route[57].point[60][1] = 6;
    this->route[57].point[61][0] = 3;       this->route[57].point[61][1] = 4;
    this->route[57].point[62][0] = 4;       this->route[57].point[62][1] = 2;
    this->route[57].point[63][0] = 6;       this->route[57].point[63][1] = 3;

    //27    10      31      58      51      12      33      60
    //30    57      28      11      32      59      52      13
    //9     26      55      44      53      50      61      34
    //56    29      46      25      62      43      14      49
    //23    8       63      54      45      48      35      42
    //2     5       24      47      36      39      18      15
    //7     22      3       64      17      20      41      38
    //4     1       6       21      40      37      16      19
    //stepOfHouse = 64

    //this->route[58].point[64][2] = {
    this->route[58].point[0][0] = 7;        this->route[58].point[0][1] = 2;
    this->route[58].point[1][0] = 6;        this->route[58].point[1][1] = 0;
    this->route[58].point[2][0] = 4;        this->route[58].point[2][1] = 1;
    this->route[58].point[3][0] = 2;        this->route[58].point[3][1] = 0;
    this->route[58].point[4][0] = 0;        this->route[58].point[4][1] = 1;
    this->route[58].point[5][0] = 1;        this->route[58].point[5][1] = 3;
    this->route[58].point[6][0] = 0;        this->route[58].point[6][1] = 5;
    this->route[58].point[7][0] = 1;        this->route[58].point[7][1] = 7;
    this->route[58].point[8][0] = 3;        this->route[58].point[8][1] = 6;
    this->route[58].point[9][0] = 5;        this->route[58].point[9][1] = 7;
    this->route[58].point[10][0] = 7;       this->route[58].point[10][1] = 6;
    this->route[58].point[11][0] = 6;       this->route[58].point[11][1] = 4;
    this->route[58].point[12][0] = 5;       this->route[58].point[12][1] = 6;
    this->route[58].point[13][0] = 7;       this->route[58].point[13][1] = 7;
    this->route[58].point[14][0] = 6;       this->route[58].point[14][1] = 5;
    this->route[58].point[15][0] = 7;       this->route[58].point[15][1] = 3;
    this->route[58].point[16][0] = 6;       this->route[58].point[16][1] = 1;
    this->route[58].point[17][0] = 4;       this->route[58].point[17][1] = 0;
    this->route[58].point[18][0] = 5;       this->route[58].point[18][1] = 2;
    this->route[58].point[19][0] = 7;       this->route[58].point[19][1] = 1;
    this->route[58].point[20][0] = 5;       this->route[58].point[20][1] = 0;
    this->route[58].point[21][0] = 6;       this->route[58].point[21][1] = 2;
    this->route[58].point[22][0] = 7;       this->route[58].point[22][1] = 0;
    this->route[58].point[23][0] = 5;       this->route[58].point[23][1] = 1;
    this->route[58].point[24][0] = 3;       this->route[58].point[24][1] = 0;
    this->route[58].point[25][0] = 1;       this->route[58].point[25][1] = 1;
    this->route[58].point[26][0] = 2;       this->route[58].point[26][1] = 3;
    this->route[58].point[27][0] = 4;       this->route[58].point[27][1] = 4;
    this->route[58].point[28][0] = 6;       this->route[58].point[28][1] = 3;
    this->route[58].point[29][0] = 7;       this->route[58].point[29][1] = 5;
    this->route[58].point[30][0] = 6;       this->route[58].point[30][1] = 7;
    this->route[58].point[31][0] = 5;       this->route[58].point[31][1] = 5;
    this->route[58].point[32][0] = 7;       this->route[58].point[32][1] = 4;
    this->route[58].point[33][0] = 6;       this->route[58].point[33][1] = 6;
    this->route[58].point[34][0] = 4;       this->route[58].point[34][1] = 7;
    this->route[58].point[35][0] = 3;       this->route[58].point[35][1] = 5;
    this->route[58].point[36][0] = 5;       this->route[58].point[36][1] = 4;
    this->route[58].point[37][0] = 4;       this->route[58].point[37][1] = 6;
    this->route[58].point[38][0] = 2;       this->route[58].point[38][1] = 7;
    this->route[58].point[39][0] = 0;       this->route[58].point[39][1] = 6;
    this->route[58].point[40][0] = 2;       this->route[58].point[40][1] = 5;
    this->route[58].point[41][0] = 3;       this->route[58].point[41][1] = 3;
    this->route[58].point[42][0] = 4;       this->route[58].point[42][1] = 5;
    this->route[58].point[43][0] = 3;       this->route[58].point[43][1] = 7;
    this->route[58].point[44][0] = 1;       this->route[58].point[44][1] = 6;
    this->route[58].point[45][0] = 0;       this->route[58].point[45][1] = 4;
    this->route[58].point[46][0] = 1;       this->route[58].point[46][1] = 2;
    this->route[58].point[47][0] = 0;       this->route[58].point[47][1] = 0;
    this->route[58].point[48][0] = 2;       this->route[58].point[48][1] = 1;
    this->route[58].point[49][0] = 4;       this->route[58].point[49][1] = 2;
    this->route[58].point[50][0] = 3;       this->route[58].point[50][1] = 4;
    this->route[58].point[51][0] = 2;       this->route[58].point[51][1] = 2;
    this->route[58].point[52][0] = 4;       this->route[58].point[52][1] = 3;
    this->route[58].point[53][0] = 3;       this->route[58].point[53][1] = 1;
    this->route[58].point[54][0] = 1;       this->route[58].point[54][1] = 0;
    this->route[58].point[55][0] = 0;       this->route[58].point[55][1] = 2;
    this->route[58].point[56][0] = 1;       this->route[58].point[56][1] = 4;
    this->route[58].point[57][0] = 2;       this->route[58].point[57][1] = 6;
    this->route[58].point[58][0] = 0;       this->route[58].point[58][1] = 7;
    this->route[58].point[59][0] = 1;       this->route[58].point[59][1] = 5;
    this->route[58].point[60][0] = 0;       this->route[58].point[60][1] = 3;
    this->route[58].point[61][0] = 2;       this->route[58].point[61][1] = 4;
    this->route[58].point[62][0] = 3;       this->route[58].point[62][1] = 2;
    this->route[58].point[63][0] = 5;       this->route[58].point[63][1] = 3;

    //48    5       56      61      46      7       40      59
    //55    26      47      6       57      60      45      8
    //4     49      52      27      62      41      58      39
    //25    54      63      42      51      36      9       44
    //18    3       50      53      28      43      38      35
    //21    24      19      64      37      32      13      10
    //2     17      22      29      12      15      34      31
    //23    20      1       16      33      30      11      14
    //stepOfHouse = 64

    //this->route[59].point[64][2] = {
    this->route[59].point[0][0] = 7;        this->route[59].point[0][1] = 3;
    this->route[59].point[1][0] = 6;        this->route[59].point[1][1] = 1;
    this->route[59].point[2][0] = 4;        this->route[59].point[2][1] = 0;
    this->route[59].point[3][0] = 2;        this->route[59].point[3][1] = 1;
    this->route[59].point[4][0] = 0;        this->route[59].point[4][1] = 0;
    this->route[59].point[5][0] = 1;        this->route[59].point[5][1] = 2;
    this->route[59].point[6][0] = 2;        this->route[59].point[6][1] = 0;
    this->route[59].point[7][0] = 0;        this->route[59].point[7][1] = 1;
    this->route[59].point[8][0] = 1;        this->route[59].point[8][1] = 3;
    this->route[59].point[9][0] = 0;        this->route[59].point[9][1] = 5;
    this->route[59].point[10][0] = 1;       this->route[59].point[10][1] = 7;
    this->route[59].point[11][0] = 3;       this->route[59].point[11][1] = 6;
    this->route[59].point[12][0] = 5;       this->route[59].point[12][1] = 7;
    this->route[59].point[13][0] = 7;       this->route[59].point[13][1] = 6;
    this->route[59].point[14][0] = 6;       this->route[59].point[14][1] = 4;
    this->route[59].point[15][0] = 7;       this->route[59].point[15][1] = 2;
    this->route[59].point[16][0] = 6;       this->route[59].point[16][1] = 0;
    this->route[59].point[17][0] = 5;       this->route[59].point[17][1] = 2;
    this->route[59].point[18][0] = 7;       this->route[59].point[18][1] = 1;
    this->route[59].point[19][0] = 5;       this->route[59].point[19][1] = 0;
    this->route[59].point[20][0] = 3;       this->route[59].point[20][1] = 1;
    this->route[59].point[21][0] = 1;       this->route[59].point[21][1] = 0;
    this->route[59].point[22][0] = 0;       this->route[59].point[22][1] = 2;
    this->route[59].point[23][0] = 1;       this->route[59].point[23][1] = 4;
    this->route[59].point[24][0] = 0;       this->route[59].point[24][1] = 6;
    this->route[59].point[25][0] = 2;       this->route[59].point[25][1] = 7;
    this->route[59].point[26][0] = 1;       this->route[59].point[26][1] = 5;
    this->route[59].point[27][0] = 0;       this->route[59].point[27][1] = 7;
    this->route[59].point[28][0] = 2;       this->route[59].point[28][1] = 6;
    this->route[59].point[29][0] = 4;       this->route[59].point[29][1] = 7;
    this->route[59].point[30][0] = 6;       this->route[59].point[30][1] = 6;
    this->route[59].point[31][0] = 7;       this->route[59].point[31][1] = 4;
    this->route[59].point[32][0] = 6;       this->route[59].point[32][1] = 2;
    this->route[59].point[33][0] = 7;       this->route[59].point[33][1] = 0;
    this->route[59].point[34][0] = 5;       this->route[59].point[34][1] = 1;
    this->route[59].point[35][0] = 3;       this->route[59].point[35][1] = 0;
    this->route[59].point[36][0] = 1;       this->route[59].point[36][1] = 1;
    this->route[59].point[37][0] = 0;       this->route[59].point[37][1] = 3;
    this->route[59].point[38][0] = 2;       this->route[59].point[38][1] = 2;
    this->route[59].point[39][0] = 4;       this->route[59].point[39][1] = 1;
    this->route[59].point[40][0] = 3;       this->route[59].point[40][1] = 3;
    this->route[59].point[41][0] = 4;       this->route[59].point[41][1] = 5;
    this->route[59].point[42][0] = 5;       this->route[59].point[42][1] = 3;
    this->route[59].point[43][0] = 3;       this->route[59].point[43][1] = 2;
    this->route[59].point[44][0] = 2;       this->route[59].point[44][1] = 4;
    this->route[59].point[45][0] = 4;       this->route[59].point[45][1] = 3;
    this->route[59].point[46][0] = 5;       this->route[59].point[46][1] = 5;
    this->route[59].point[47][0] = 6;       this->route[59].point[47][1] = 7;
    this->route[59].point[48][0] = 7;       this->route[59].point[48][1] = 5;
    this->route[59].point[49][0] = 6;       this->route[59].point[49][1] = 3;
    this->route[59].point[50][0] = 4;       this->route[59].point[50][1] = 2;
    this->route[59].point[51][0] = 3;       this->route[59].point[51][1] = 4;
    this->route[59].point[52][0] = 4;       this->route[59].point[52][1] = 6;
    this->route[59].point[53][0] = 6;       this->route[59].point[53][1] = 5;
    this->route[59].point[54][0] = 7;       this->route[59].point[54][1] = 7;
    this->route[59].point[55][0] = 5;       this->route[59].point[55][1] = 6;
    this->route[59].point[56][0] = 4;       this->route[59].point[56][1] = 4;
    this->route[59].point[57][0] = 2;       this->route[59].point[57][1] = 5;
    this->route[59].point[58][0] = 3;       this->route[59].point[58][1] = 7;
    this->route[59].point[59][0] = 1;       this->route[59].point[59][1] = 6;
    this->route[59].point[60][0] = 0;       this->route[59].point[60][1] = 4;
    this->route[59].point[61][0] = 2;       this->route[59].point[61][1] = 3;
    this->route[59].point[62][0] = 3;       this->route[59].point[62][1] = 5;
    this->route[59].point[63][0] = 5;       this->route[59].point[63][1] = 4;

    //5     8       23      38      61      10      25      28
    //22    37      6       9       24      27      60      11
    //7     4       39      62      45      58      29      26
    //36    21      44      41      52      63      12      59
    //3     40      51      46      57      42      53      30
    //20    35      18      43      64      47      56      13
    //17    2       33      50      15      54      31      48
    //34    19      16      1       32      49      14      55
    //stepOfHouse = 64

    //this->route[60].point[64][2] = {
    this->route[60].point[0][0] = 7;        this->route[60].point[0][1] = 4;
    this->route[60].point[1][0] = 6;        this->route[60].point[1][1] = 6;
    this->route[60].point[2][0] = 4;        this->route[60].point[2][1] = 7;
    this->route[60].point[3][0] = 2;        this->route[60].point[3][1] = 6;
    this->route[60].point[4][0] = 0;        this->route[60].point[4][1] = 7;
    this->route[60].point[5][0] = 1;        this->route[60].point[5][1] = 5;
    this->route[60].point[6][0] = 2;        this->route[60].point[6][1] = 7;
    this->route[60].point[7][0] = 0;        this->route[60].point[7][1] = 6;
    this->route[60].point[8][0] = 1;        this->route[60].point[8][1] = 4;
    this->route[60].point[9][0] = 0;        this->route[60].point[9][1] = 2;
    this->route[60].point[10][0] = 1;       this->route[60].point[10][1] = 0;
    this->route[60].point[11][0] = 3;       this->route[60].point[11][1] = 1;
    this->route[60].point[12][0] = 5;       this->route[60].point[12][1] = 0;
    this->route[60].point[13][0] = 7;       this->route[60].point[13][1] = 1;
    this->route[60].point[14][0] = 6;       this->route[60].point[14][1] = 3;
    this->route[60].point[15][0] = 7;       this->route[60].point[15][1] = 5;
    this->route[60].point[16][0] = 6;       this->route[60].point[16][1] = 7;
    this->route[60].point[17][0] = 5;       this->route[60].point[17][1] = 5;
    this->route[60].point[18][0] = 7;       this->route[60].point[18][1] = 6;
    this->route[60].point[19][0] = 5;       this->route[60].point[19][1] = 7;
    this->route[60].point[20][0] = 3;       this->route[60].point[20][1] = 6;
    this->route[60].point[21][0] = 1;       this->route[60].point[21][1] = 7;
    this->route[60].point[22][0] = 0;       this->route[60].point[22][1] = 5;
    this->route[60].point[23][0] = 1;       this->route[60].point[23][1] = 3;
    this->route[60].point[24][0] = 0;       this->route[60].point[24][1] = 1;
    this->route[60].point[25][0] = 2;       this->route[60].point[25][1] = 0;
    this->route[60].point[26][0] = 1;       this->route[60].point[26][1] = 2;
    this->route[60].point[27][0] = 0;       this->route[60].point[27][1] = 0;
    this->route[60].point[28][0] = 2;       this->route[60].point[28][1] = 1;
    this->route[60].point[29][0] = 4;       this->route[60].point[29][1] = 0;
    this->route[60].point[30][0] = 6;       this->route[60].point[30][1] = 1;
    this->route[60].point[31][0] = 7;       this->route[60].point[31][1] = 3;
    this->route[60].point[32][0] = 6;       this->route[60].point[32][1] = 5;
    this->route[60].point[33][0] = 7;       this->route[60].point[33][1] = 7;
    this->route[60].point[34][0] = 5;       this->route[60].point[34][1] = 6;
    this->route[60].point[35][0] = 3;       this->route[60].point[35][1] = 7;
    this->route[60].point[36][0] = 1;       this->route[60].point[36][1] = 6;
    this->route[60].point[37][0] = 0;       this->route[60].point[37][1] = 4;
    this->route[60].point[38][0] = 2;       this->route[60].point[38][1] = 5;
    this->route[60].point[39][0] = 4;       this->route[60].point[39][1] = 6;
    this->route[60].point[40][0] = 3;       this->route[60].point[40][1] = 4;
    this->route[60].point[41][0] = 4;       this->route[60].point[41][1] = 2;
    this->route[60].point[42][0] = 5;       this->route[60].point[42][1] = 4;
    this->route[60].point[43][0] = 6;       this->route[60].point[43][1] = 2;
    this->route[60].point[44][0] = 7;       this->route[60].point[44][1] = 0;
    this->route[60].point[45][0] = 5;       this->route[60].point[45][1] = 1;
    this->route[60].point[46][0] = 3;       this->route[60].point[46][1] = 0;
    this->route[60].point[47][0] = 2;       this->route[60].point[47][1] = 2;
    this->route[60].point[48][0] = 0;       this->route[60].point[48][1] = 3;
    this->route[60].point[49][0] = 1;       this->route[60].point[49][1] = 1;
    this->route[60].point[50][0] = 3;       this->route[60].point[50][1] = 2;
    this->route[60].point[51][0] = 4;       this->route[60].point[51][1] = 4;
    this->route[60].point[52][0] = 2;       this->route[60].point[52][1] = 3;
    this->route[60].point[53][0] = 3;       this->route[60].point[53][1] = 5;
    this->route[60].point[54][0] = 4;       this->route[60].point[54][1] = 3;
    this->route[60].point[55][0] = 2;       this->route[60].point[55][1] = 4;
    this->route[60].point[56][0] = 4;       this->route[60].point[56][1] = 5;
    this->route[60].point[57][0] = 6;       this->route[60].point[57][1] = 4;
    this->route[60].point[58][0] = 7;       this->route[60].point[58][1] = 2;
    this->route[60].point[59][0] = 6;       this->route[60].point[59][1] = 0;
    this->route[60].point[60][0] = 5;       this->route[60].point[60][1] = 2;
    this->route[60].point[61][0] = 3;       this->route[60].point[61][1] = 3;
    this->route[60].point[62][0] = 4;       this->route[60].point[62][1] = 1;
    this->route[60].point[63][0] = 5;       this->route[60].point[63][1] = 3;

    //28    25      10      49      38      23      8       5
    //11    50      27      24      9       6       37      22
    //26    29      48      53      56      39      4       7
    //47    12      51      62      41      54      21      36
    //30    63      42      55      52      57      40      3
    //13    46      61      64      43      18      35      20
    //60    31      44      15      58      33      2       17
    //45    14      59      32      1       16      19      34
    //stepOfHouse = 64

    //this->route[61].point[64][2] = {
    this->route[61].point[0][0] = 7;        this->route[61].point[0][1] = 5;
    this->route[61].point[1][0] = 6;        this->route[61].point[1][1] = 7;
    this->route[61].point[2][0] = 4;        this->route[61].point[2][1] = 6;
    this->route[61].point[3][0] = 2;        this->route[61].point[3][1] = 7;
    this->route[61].point[4][0] = 0;        this->route[61].point[4][1] = 6;
    this->route[61].point[5][0] = 1;        this->route[61].point[5][1] = 4;
    this->route[61].point[6][0] = 0;        this->route[61].point[6][1] = 2;
    this->route[61].point[7][0] = 1;        this->route[61].point[7][1] = 0;
    this->route[61].point[8][0] = 3;        this->route[61].point[8][1] = 1;
    this->route[61].point[9][0] = 5;        this->route[61].point[9][1] = 0;
    this->route[61].point[10][0] = 7;       this->route[61].point[10][1] = 1;
    this->route[61].point[11][0] = 6;       this->route[61].point[11][1] = 3;
    this->route[61].point[12][0] = 5;       this->route[61].point[12][1] = 1;
    this->route[61].point[13][0] = 7;       this->route[61].point[13][1] = 0;
    this->route[61].point[14][0] = 6;       this->route[61].point[14][1] = 2;
    this->route[61].point[15][0] = 7;       this->route[61].point[15][1] = 4;
    this->route[61].point[16][0] = 6;       this->route[61].point[16][1] = 6;
    this->route[61].point[17][0] = 4;       this->route[61].point[17][1] = 7;
    this->route[61].point[18][0] = 5;       this->route[61].point[18][1] = 5;
    this->route[61].point[19][0] = 7;       this->route[61].point[19][1] = 6;
    this->route[61].point[20][0] = 5;       this->route[61].point[20][1] = 7;
    this->route[61].point[21][0] = 6;       this->route[61].point[21][1] = 5;
    this->route[61].point[22][0] = 7;       this->route[61].point[22][1] = 7;
    this->route[61].point[23][0] = 5;       this->route[61].point[23][1] = 6;
    this->route[61].point[24][0] = 3;       this->route[61].point[24][1] = 7;
    this->route[61].point[25][0] = 1;       this->route[61].point[25][1] = 6;
    this->route[61].point[26][0] = 2;       this->route[61].point[26][1] = 4;
    this->route[61].point[27][0] = 4;       this->route[61].point[27][1] = 3;
    this->route[61].point[28][0] = 6;       this->route[61].point[28][1] = 4;
    this->route[61].point[29][0] = 5;       this->route[61].point[29][1] = 2;
    this->route[61].point[30][0] = 7;       this->route[61].point[30][1] = 3;
    this->route[61].point[31][0] = 6;       this->route[61].point[31][1] = 1;
    this->route[61].point[32][0] = 4;       this->route[61].point[32][1] = 0;
    this->route[61].point[33][0] = 3;       this->route[61].point[33][1] = 2;
    this->route[61].point[34][0] = 5;       this->route[61].point[34][1] = 3;
    this->route[61].point[35][0] = 7;       this->route[61].point[35][1] = 2;
    this->route[61].point[36][0] = 6;       this->route[61].point[36][1] = 0;
    this->route[61].point[37][0] = 4;       this->route[61].point[37][1] = 1;
    this->route[61].point[38][0] = 2;       this->route[61].point[38][1] = 0;
    this->route[61].point[39][0] = 0;       this->route[61].point[39][1] = 1;
    this->route[61].point[40][0] = 2;       this->route[61].point[40][1] = 2;
    this->route[61].point[41][0] = 3;       this->route[61].point[41][1] = 4;
    this->route[61].point[42][0] = 4;       this->route[61].point[42][1] = 2;
    this->route[61].point[43][0] = 3;       this->route[61].point[43][1] = 0;
    this->route[61].point[44][0] = 1;       this->route[61].point[44][1] = 1;
    this->route[61].point[45][0] = 0;       this->route[61].point[45][1] = 3;
    this->route[61].point[46][0] = 1;       this->route[61].point[46][1] = 5;
    this->route[61].point[47][0] = 0;       this->route[61].point[47][1] = 7;
    this->route[61].point[48][0] = 2;       this->route[61].point[48][1] = 6;
    this->route[61].point[49][0] = 4;       this->route[61].point[49][1] = 5;
    this->route[61].point[50][0] = 3;       this->route[61].point[50][1] = 3;
    this->route[61].point[51][0] = 2;       this->route[61].point[51][1] = 5;
    this->route[61].point[52][0] = 4;       this->route[61].point[52][1] = 4;
    this->route[61].point[53][0] = 3;       this->route[61].point[53][1] = 6;
    this->route[61].point[54][0] = 1;       this->route[61].point[54][1] = 7;
    this->route[61].point[55][0] = 0;       this->route[61].point[55][1] = 5;
    this->route[61].point[56][0] = 1;       this->route[61].point[56][1] = 3;
    this->route[61].point[57][0] = 2;       this->route[61].point[57][1] = 1;
    this->route[61].point[58][0] = 0;       this->route[61].point[58][1] = 0;
    this->route[61].point[59][0] = 1;       this->route[61].point[59][1] = 2;
    this->route[61].point[60][0] = 0;       this->route[61].point[60][1] = 4;
    this->route[61].point[61][0] = 2;       this->route[61].point[61][1] = 3;
    this->route[61].point[62][0] = 3;       this->route[61].point[62][1] = 5;
    this->route[61].point[63][0] = 5;       this->route[61].point[63][1] = 4;

    //59    40      7       46      61      56      5       48
    //8     45      60      57      6       47      26      55
    //39    58      41      62      27      52      49      4
    //44    9       34      51      42      63      54      25
    //33    38      43      28      53      50      3       18
    //10    13      30      35      64      19      24      21
    //37    32      15      12      29      22      17      2
    //14    11      36      31      16      1       20      23
    //stepOfHouse = 64

    //this->route[62].point[64][2] = {
    this->route[62].point[0][0] = 7;        this->route[62].point[0][1] = 6;
    this->route[62].point[1][0] = 5;        this->route[62].point[1][1] = 7;
    this->route[62].point[2][0] = 6;        this->route[62].point[2][1] = 5;
    this->route[62].point[3][0] = 7;        this->route[62].point[3][1] = 7;
    this->route[62].point[4][0] = 5;        this->route[62].point[4][1] = 6;
    this->route[62].point[5][0] = 7;        this->route[62].point[5][1] = 5;
    this->route[62].point[6][0] = 6;        this->route[62].point[6][1] = 7;
    this->route[62].point[7][0] = 4;        this->route[62].point[7][1] = 6;
    this->route[62].point[8][0] = 2;        this->route[62].point[8][1] = 7;
    this->route[62].point[9][0] = 0;        this->route[62].point[9][1] = 6;
    this->route[62].point[10][0] = 1;       this->route[62].point[10][1] = 4;
    this->route[62].point[11][0] = 0;       this->route[62].point[11][1] = 2;
    this->route[62].point[12][0] = 1;       this->route[62].point[12][1] = 0;
    this->route[62].point[13][0] = 3;       this->route[62].point[13][1] = 1;
    this->route[62].point[14][0] = 5;       this->route[62].point[14][1] = 0;
    this->route[62].point[15][0] = 7;       this->route[62].point[15][1] = 1;
    this->route[62].point[16][0] = 6;       this->route[62].point[16][1] = 3;
    this->route[62].point[17][0] = 5;       this->route[62].point[17][1] = 5;
    this->route[62].point[18][0] = 7;       this->route[62].point[18][1] = 4;
    this->route[62].point[19][0] = 6;       this->route[62].point[19][1] = 6;
    this->route[62].point[20][0] = 4;       this->route[62].point[20][1] = 7;
    this->route[62].point[21][0] = 3;       this->route[62].point[21][1] = 5;
    this->route[62].point[22][0] = 1;       this->route[62].point[22][1] = 6;
    this->route[62].point[23][0] = 2;       this->route[62].point[23][1] = 4;
    this->route[62].point[24][0] = 3;       this->route[62].point[24][1] = 6;
    this->route[62].point[25][0] = 1;       this->route[62].point[25][1] = 7;
    this->route[62].point[26][0] = 0;       this->route[62].point[26][1] = 5;
    this->route[62].point[27][0] = 2;       this->route[62].point[27][1] = 6;
    this->route[62].point[28][0] = 0;       this->route[62].point[28][1] = 7;
    this->route[62].point[29][0] = 1;       this->route[62].point[29][1] = 5;
    this->route[62].point[30][0] = 3;       this->route[62].point[30][1] = 4;
    this->route[62].point[31][0] = 1;       this->route[62].point[31][1] = 3;
    this->route[62].point[32][0] = 0;       this->route[62].point[32][1] = 1;
    this->route[62].point[33][0] = 2;       this->route[62].point[33][1] = 0;
    this->route[62].point[34][0] = 1;       this->route[62].point[34][1] = 2;
    this->route[62].point[35][0] = 0;       this->route[62].point[35][1] = 0;
    this->route[62].point[36][0] = 2;       this->route[62].point[36][1] = 1;
    this->route[62].point[37][0] = 4;       this->route[62].point[37][1] = 0;
    this->route[62].point[38][0] = 6;       this->route[62].point[38][1] = 1;
    this->route[62].point[39][0] = 5;       this->route[62].point[39][1] = 3;
    this->route[62].point[40][0] = 7;       this->route[62].point[40][1] = 2;
    this->route[62].point[41][0] = 6;       this->route[62].point[41][1] = 0;
    this->route[62].point[42][0] = 4;       this->route[62].point[42][1] = 1;
    this->route[62].point[43][0] = 3;       this->route[62].point[43][1] = 3;
    this->route[62].point[44][0] = 4;       this->route[62].point[44][1] = 5;
    this->route[62].point[45][0] = 3;       this->route[62].point[45][1] = 7;
    this->route[62].point[46][0] = 2;       this->route[62].point[46][1] = 5;
    this->route[62].point[47][0] = 0;       this->route[62].point[47][1] = 4;
    this->route[62].point[48][0] = 2;       this->route[62].point[48][1] = 3;
    this->route[62].point[49][0] = 4;       this->route[62].point[49][1] = 4;
    this->route[62].point[50][0] = 5;       this->route[62].point[50][1] = 2;
    this->route[62].point[51][0] = 7;       this->route[62].point[51][1] = 3;
    this->route[62].point[52][0] = 5;       this->route[62].point[52][1] = 4;
    this->route[62].point[53][0] = 4;       this->route[62].point[53][1] = 2;
    this->route[62].point[54][0] = 3;       this->route[62].point[54][1] = 0;
    this->route[62].point[55][0] = 2;       this->route[62].point[55][1] = 2;
    this->route[62].point[56][0] = 0;       this->route[62].point[56][1] = 3;
    this->route[62].point[57][0] = 1;       this->route[62].point[57][1] = 1;
    this->route[62].point[58][0] = 3;       this->route[62].point[58][1] = 2;
    this->route[62].point[59][0] = 5;       this->route[62].point[59][1] = 1;
    this->route[62].point[60][0] = 7;       this->route[62].point[60][1] = 0;
    this->route[62].point[61][0] = 6;       this->route[62].point[61][1] = 2;
    this->route[62].point[62][0] = 4;       this->route[62].point[62][1] = 3;
    this->route[62].point[63][0] = 6;       this->route[62].point[63][1] = 4;

    //36    33      12      57      48      27      10      29
    //13    58      35      32      11      30      23      26
    //34    37      56      49      24      47      28      9
    //55    14      59      44      31      22      25      46
    //38    43      54      63      50      45      8       21
    //15    60      51      40      53      18      5       2
    //42    39      62      17      64      3       20      7
    //61    16      41      52      19      6       1       4
    //stepOfHouse = 64

    //this->route[63].point[64][2] = {
    this->route[63].point[0][0] = 7;        this->route[63].point[0][1] = 7;
    this->route[63].point[1][0] = 6;        this->route[63].point[1][1] = 5;
    this->route[63].point[2][0] = 7;        this->route[63].point[2][1] = 3;
    this->route[63].point[3][0] = 6;        this->route[63].point[3][1] = 1;
    this->route[63].point[4][0] = 4;        this->route[63].point[4][1] = 0;
    this->route[63].point[5][0] = 2;        this->route[63].point[5][1] = 1;
    this->route[63].point[6][0] = 0;        this->route[63].point[6][1] = 0;
    this->route[63].point[7][0] = 1;        this->route[63].point[7][1] = 2;
    this->route[63].point[8][0] = 2;        this->route[63].point[8][1] = 0;
    this->route[63].point[9][0] = 0;        this->route[63].point[9][1] = 1;
    this->route[63].point[10][0] = 1;       this->route[63].point[10][1] = 3;
    this->route[63].point[11][0] = 0;       this->route[63].point[11][1] = 5;
    this->route[63].point[12][0] = 1;       this->route[63].point[12][1] = 7;
    this->route[63].point[13][0] = 3;       this->route[63].point[13][1] = 6;
    this->route[63].point[14][0] = 5;       this->route[63].point[14][1] = 7;
    this->route[63].point[15][0] = 7;       this->route[63].point[15][1] = 6;
    this->route[63].point[16][0] = 6;       this->route[63].point[16][1] = 4;
    this->route[63].point[17][0] = 7;       this->route[63].point[17][1] = 2;
    this->route[63].point[18][0] = 6;       this->route[63].point[18][1] = 0;
    this->route[63].point[19][0] = 5;       this->route[63].point[19][1] = 2;
    this->route[63].point[20][0] = 7;       this->route[63].point[20][1] = 1;
    this->route[63].point[21][0] = 5;       this->route[63].point[21][1] = 0;
    this->route[63].point[22][0] = 3;       this->route[63].point[22][1] = 1;
    this->route[63].point[23][0] = 1;       this->route[63].point[23][1] = 0;
    this->route[63].point[24][0] = 0;       this->route[63].point[24][1] = 2;
    this->route[63].point[25][0] = 1;       this->route[63].point[25][1] = 4;
    this->route[63].point[26][0] = 0;       this->route[63].point[26][1] = 6;
    this->route[63].point[27][0] = 2;       this->route[63].point[27][1] = 7;
    this->route[63].point[28][0] = 4;       this->route[63].point[28][1] = 6;
    this->route[63].point[29][0] = 6;       this->route[63].point[29][1] = 7;
    this->route[63].point[30][0] = 7;       this->route[63].point[30][1] = 5;
    this->route[63].point[31][0] = 6;       this->route[63].point[31][1] = 3;
    this->route[63].point[32][0] = 5;       this->route[63].point[32][1] = 5;
    this->route[63].point[33][0] = 7;       this->route[63].point[33][1] = 4;
    this->route[63].point[34][0] = 6;       this->route[63].point[34][1] = 6;
    this->route[63].point[35][0] = 5;       this->route[63].point[35][1] = 4;
    this->route[63].point[36][0] = 6;       this->route[63].point[36][1] = 2;
    this->route[63].point[37][0] = 7;       this->route[63].point[37][1] = 0;
    this->route[63].point[38][0] = 5;       this->route[63].point[38][1] = 1;
    this->route[63].point[39][0] = 4;       this->route[63].point[39][1] = 3;
    this->route[63].point[40][0] = 3;       this->route[63].point[40][1] = 5;
    this->route[63].point[41][0] = 4;       this->route[63].point[41][1] = 7;
    this->route[63].point[42][0] = 2;       this->route[63].point[42][1] = 6;
    this->route[63].point[43][0] = 0;       this->route[63].point[43][1] = 7;
    this->route[63].point[44][0] = 1;       this->route[63].point[44][1] = 5;
    this->route[63].point[45][0] = 3;       this->route[63].point[45][1] = 4;
    this->route[63].point[46][0] = 5;       this->route[63].point[46][1] = 3;
    this->route[63].point[47][0] = 4;       this->route[63].point[47][1] = 5;
    this->route[63].point[48][0] = 3;       this->route[63].point[48][1] = 7;
    this->route[63].point[49][0] = 2;       this->route[63].point[49][1] = 5;
    this->route[63].point[50][0] = 3;       this->route[63].point[50][1] = 3;
    this->route[63].point[51][0] = 4;       this->route[63].point[51][1] = 1;
    this->route[63].point[52][0] = 2;       this->route[63].point[52][1] = 2;
    this->route[63].point[53][0] = 3;       this->route[63].point[53][1] = 0;
    this->route[63].point[54][0] = 4;       this->route[63].point[54][1] = 2;
    this->route[63].point[55][0] = 2;       this->route[63].point[55][1] = 3;
    this->route[63].point[56][0] = 0;       this->route[63].point[56][1] = 4;
    this->route[63].point[57][0] = 1;       this->route[63].point[57][1] = 6;
    this->route[63].point[58][0] = 2;       this->route[63].point[58][1] = 4;
    this->route[63].point[59][0] = 0;       this->route[63].point[59][1] = 3;
    this->route[63].point[60][0] = 1;       this->route[63].point[60][1] = 1;
    this->route[63].point[61][0] = 3;       this->route[63].point[61][1] = 2;
    this->route[63].point[62][0] = 4;       this->route[63].point[62][1] = 4;
    this->route[63].point[63][0] = 5;       this->route[63].point[63][1] = 6;

    //7     10      25      60      57      12      27      44
    //24    61      8       11      26      45      58      13
    //9     6       53      56      59      50      43      28
    //54    23      62      51      46      41      14      49
    //5     52      55      40      63      48      29      42
    //22    39      20      47      36      33      64      15
    //19    4       37      32      17      2       35      30
    //38    21      18      3       34      31      16      1
    //stepOfHouse = 64

//    请按任意键继续. . .
}
Horse::Horse(){
    this->init();
}
