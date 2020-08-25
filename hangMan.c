#include "hangMan.h"

char docKyTu()
{
    char kyTuNhapVao = 0;
    kyTuNhapVao = getchar();
    kyTuNhapVao = toupper(kyTuNhapVao);

    while(getchar() != '\n');//Lan luot doc tiep cac ky tu khac cho den khi gap \n
    return kyTuNhapVao;
}
