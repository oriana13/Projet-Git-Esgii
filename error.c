//
// Created by crichard23 on 23/10/2021.
//

#include "Include/error.h"

void errorLog(const char *messageError)
{
    FILE *fp;
    time_t currentTime = time(NULL);
    struct tm s_tm = *localtime(&currentTime);

    fp = fopen(__PATH_ERROR_FILE__, "a");

    if (fp)
        fprintf(fp, "[ %02d-%02d-%d %02d:%02d:%02d ] => %s\n", s_tm.tm_mday, s_tm.tm_mon + 1, s_tm.tm_year + 1900, s_tm.tm_hour, s_tm.tm_min, s_tm.tm_sec, messageError);

    fclose(fp);
}
