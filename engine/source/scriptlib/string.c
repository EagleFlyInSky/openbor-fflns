// String
// 2017-04-26
// Caskey, Damon V.
//
// String manipulation and concatenation.

#ifndef SCRIPT_LEVEL
#define SCRIPT_LEVEL 1

#include "common.c"

//strinfirst(char string, char search_string);
HRESULT openbor_strinfirst(ScriptVariant **varlist , ScriptVariant **pretvar, int paramCount)
{
    char *tempstr = NULL;

    if(paramCount < 2)
    {
        goto sif_error;
    }

    if(varlist[0]->vt != VT_STR || varlist[1]->vt != VT_STR)
    {
        printf("\n Error, strinfirst({string}, {search string}): Strinfirst must be passed valid {string} and {search string}. \n");
        goto sif_error;
    }

    tempstr = strstr((char *)StrCache_Get(varlist[0]->strVal), (char *)StrCache_Get(varlist[1]->strVal));

    if (tempstr != NULL)
    {
        ScriptVariant_ChangeType(*pretvar, VT_STR);
        StrCache_Copy((*pretvar)->strVal, tempstr);
    }
    else
    {
        ScriptVariant_ChangeType(*pretvar, VT_INTEGER);
        (*pretvar)->lVal = -1;
    }
    return S_OK;

sif_error:
    *pretvar = NULL;
    return E_FAIL;
}

//strinlast(char string, char search_string);
HRESULT openbor_strinlast(ScriptVariant **varlist , ScriptVariant **pretvar, int paramCount)
{
    char *tempstr = NULL;

    if(paramCount < 2)
    {
        goto sil_error;
    }

    if(varlist[0]->vt != VT_STR || varlist[1]->vt != VT_STR)
    {
        printf("\n Error, strinlast({string}, {search string}): Strinlast must be passed valid {string} and {search string}. \n");
        goto sil_error;
    }

    tempstr = strrchr((char *)StrCache_Get(varlist[0]->strVal), varlist[1]->strVal);

    if (tempstr != NULL)
    {
        ScriptVariant_ChangeType(*pretvar, VT_STR);
        StrCache_Copy((*pretvar)->strVal, tempstr);
    }
    else
    {
        ScriptVariant_ChangeType(*pretvar, VT_INTEGER);
        (*pretvar)->lVal = -1;
    }
    return S_OK;
sil_error:
    *pretvar = NULL;
    return E_FAIL;
}

//strleft(char string, int i);
HRESULT openbor_strleft(ScriptVariant **varlist , ScriptVariant **pretvar, int paramCount)
{
    if(paramCount < 2)
    {
        goto sl_error;
    }

    if(varlist[0]->vt != VT_STR || varlist[1]->vt != VT_INTEGER)
    {
        printf("\n Error, strleft({string}, {characters}): Invalid or missing parameter. Strleft must be passed valid {string} and number of {characters}.\n");
        goto sl_error;
    }
    ScriptVariant_ChangeType(*pretvar, VT_STR);
    StrCache_NCopy((*pretvar)->strVal, (char *)StrCache_Get(varlist[0]->strVal), varlist[1]->lVal);

    return S_OK;
sl_error:
    *pretvar = NULL;
    return E_FAIL;
}

//strlength(char string);
HRESULT openbor_strlength(ScriptVariant **varlist , ScriptVariant **pretvar, int paramCount)
{
    if(paramCount < 1 || varlist[0]->vt != VT_STR)
    {
        goto strlength_error;
    }

    ScriptVariant_ChangeType(*pretvar, VT_INTEGER);
    (*pretvar)->lVal = strlen((char *)StrCache_Get(varlist[0]->strVal));
    return S_OK;

strlength_error:
    printf("Error, strlength({string}): Invalid or missing parameter. Strlength must be passed a valid {string}.\n");
    *pretvar = NULL;
    return E_FAIL;
}

//strwidth(char string, int font);
HRESULT openbor_strwidth(ScriptVariant **varlist , ScriptVariant **pretvar, int paramCount)
{
    LONG ltemp;
    if(paramCount < 2 || varlist[0]->vt != VT_STR ||
            FAILED(ScriptVariant_IntegerValue(varlist[1], &ltemp)))
    {
        goto strwidth_error;
    }

    ScriptVariant_ChangeType(*pretvar, VT_INTEGER);
    (*pretvar)->lVal = font_string_width((int)ltemp, (char *)StrCache_Get(varlist[0]->strVal));
    return S_OK;

strwidth_error:
    printf("Error, strwidth({string}, {font}): Invalid or missing parameter.\n");
    *pretvar = NULL;
    return E_FAIL;
}

//strright(char string, int i);
HRESULT openbor_strright(ScriptVariant **varlist , ScriptVariant **pretvar, int paramCount)
{
    char *tempstr = NULL;

    if(paramCount < 2)
    {
        goto sr_error;
    }

    if(varlist[0]->vt != VT_STR || varlist[1]->vt != VT_INTEGER)
    {
        printf("\n Error, strright({string}, {characters}): Invalid or missing parameter. Strright must be passed valid {string} and number of {characters}.\n");
        goto sr_error;
    }

    tempstr = (char *)StrCache_Get(varlist[0]->strVal);

    if (tempstr && tempstr[0])
    {
        ScriptVariant_ChangeType(*pretvar, VT_STR);
        StrCache_Copy((*pretvar)->strVal, &tempstr[varlist[1]->lVal]);
    }
    else
    {
        ScriptVariant_ChangeType(*pretvar, VT_INTEGER);
        (*pretvar)->lVal = -1;
    }

    return S_OK;
sr_error:
    *pretvar = NULL;
    return E_FAIL;
}

#endif  SCRIPT_STRING