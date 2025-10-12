%{
#include <stdio.h>
#include <string.h>
%}

/* Definitions */
DIGIT       [0-9]
MOBILE10    ([6-9]{1}[0-9]{9})
MOBILE      ((\+91[- ]?)?{MOBILE10}|0{MOBILE10})   /* +91 98765..., 98765..., 098765... */
IDENTIFIER  [A-Za-z_][A-Za-z0-9_]*

/* Basic URL: http/https optional, www optional, domain and TLD, optional path/query */
PROT        (https?:\/\/)
WWW         (www\.)?
DOMAIN_LBL  [A-Za-z0-9]([A-Za-z0-9\-]*[A-Za-z0-9])?
DOMAIN      {DOMAIN_LBL}(\.{DOMAIN_LBL})+
TLD         \.[A-Za-z]{2,6}
PATH        (\/[A-Za-z0-9\._\-\?&=#%+]*)*

URL         ({PROT}{WWW}?{DOMAIN}{TLD}{PATH}?|{WWW}{DOMAIN}{TLD}{PATH}?)

DAY         (0[1-9]|[12][0-9]|3[01])
MONTH       (0[1-9]|1[0-2])
YEAR        ([0-9]{4})
DATE        {DAY}"/"{MONTH}"/"{YEAR}

HOUR        ([01][0-9]|2[0-3])
MINSEC      ([0-5][0-9])
TIME        {HOUR}":"{MINSEC}":"{MINSEC}

%%

{MOBILE}        { printf("Valid mobile number: %s\n", yytext); }
{URL}           { printf("Valid URL: %s\n", yytext); }
{IDENTIFIER}    { printf("Valid identifier: %s\n", yytext); }
{DATE}          { printf("Valid date (dd/mm/yyyy): %s\n", yytext); }
{TIME}          { printf("Valid time (hh:mm:ss): %s\n", yytext); }

/* ignore whitespace */
[ \t\n\r]+      { /* skip */ }

/* anything else - show as unknown token */
.               { printf("Unknown token: %s\n", yytext); }

%%

int main(int argc, char **argv){
    printf("Enter text (Ctrl+D to end):\n");
    yylex();
    return 0;
}

int yywrap(void) { return 1; }
