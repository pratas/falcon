#ifndef COMMON_H_INCLUDED
#define COMMON_H_INCLUDED

#include "cmodel.h"
#include "defs.h"
#include "param.h"

typedef struct{
  uint64_t size;
  uint64_t bytes;
  }
INF;

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

double      BoundDouble      (double, double, double);
FILE        *Fopen           (const char *, const char *);
void        UnPackByte       (uint8_t *, uint8_t);
uint8_t     PackByte         (uint8_t *);
uint64_t    SumWriteBits     (uint8_t **, int, uint64_t, FILE *, FILE *);
void        ShiftBuffer      (uint8_t *, int, uint8_t);
void        FillLogTable     (uint32_t, uint32_t, uint32_t);
double      SearchLog        (uint32_t );
double      Power            (double, double);
uint32_t    FLog2            (uint64_t );
char        *ReplaceSubStr   (char *, char *, char *);
uint8_t     DNASymToNum      (uint8_t  );
uint8_t     NumToDNASym      (uint8_t  );
uint8_t     GetCompNum       (uint8_t  );
uint8_t     GetCompSym       (uint8_t  );
uint64_t    NDNASyminFile    (FILE *);
uint64_t    NDNASymInFastq   (FILE *);
uint64_t    NDNASymInFasta   (FILE *);
uint64_t    NBytesInFile     (FILE *);
uint64_t    FopenBytesInFile (const char *);
uint8_t     *ReverseStr      (uint8_t *, uint32_t);
char        *CloneString     (char *   );
char        *RepString       (const char *, const char *, const char *);
uint32_t    ArgsNum          (uint32_t , char *[], uint32_t, char *, uint32_t,
                              uint32_t);
ModelPar    ArgsUniqModel    (char *, uint8_t);
ModelPar    ArgsModel        (uint32_t , char *[], uint32_t, char *);
double      ArgsDouble       (double, char *[], uint32_t, char *);
uint8_t     ArgsState        (uint8_t  , char *[], uint32_t, char *);
char        *ArgsString      (char    *, char *[], uint32_t, char *);
char        *ArgsFiles       (char *[], uint32_t, char *);
void        TestReadFile     (char *);
uint8_t     CmpCheckSum      (uint32_t, uint32_t);
void        FAccessWPerm     (char    *);
inline void CalcProgress     (uint64_t , uint64_t);
void        PrintArgs        (Parameters *, Threads, char *, char *);
char        *concatenate     (char *, char *);
int32_t     StrToArgv        (char *, char ***);
char        *ArgsFilesImg    (char *[], uint32_t, char *);
char        *ArgsFile        (char *[], uint32_t, char *);
char        *ArgsFileGen     (char *[], uint32_t, char *, char *, char *);

// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

#endif
