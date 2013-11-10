#ifndef __MODEL_H__
#define __MODEL_H__

int     AreDoublesEqual (MrBFlt x, MrBFlt y, MrBFlt tol);
int     ChangeNumRuns (int from, int to);
int     ChangeNumChains (int from, int to);
int     CheckModel (void);
int     DoesTreeSatisfyConstraints(Tree *t);
int     DoLink (void);
int     DoLinkParm (char *parmName, char *tkn);
int     DoLset (void);
int     DoLsetParm (char *parmName, char *tkn);
int     DoPropset (void);
int     DoPropsetParm (char *parmName, char *tkn);
int     DoPrset (void);
int     DoPrsetParm (char *parmName, char *tkn);
int     DoReport (void);
int     DoReportParm (char *parmName, char *tkn);
int     DoShowMcmcTrees (void);
int     DoShowModel (void);
int     DoShowMoves (void);
int     DoShowmovesParm (char *parmName, char *tkn);
int     DoShowParams (void);
int     DoStartvals (void);
int     DoStartvalsParm (char *parmName, char *tkn);
int     DoUnlink (void);
int     FillNormalParams (RandLong *seed, int fromChain, int toChain);
int     FillRelPartsString (Param *p, char **relPartString);
void    FillStdStateFreqs(int chfrom, int chto, RandLong *seed);
int     FillTopologySubParams (Param *param, int chn, int state, RandLong *seed);
int     FillTreeParams (RandLong *seed, int fromChain, int toChain);
int     FreeModel (void);
int     GetEmpiricalFreqs (int *relParts, int nRelParts);
int     GetNumDivisionChars (void);
int     *GetParamIntVals (Param *parm, int chain, int state);
MrBFlt  *GetParamStdStateFreqs (Param *parm, int chain, int state);
MrBFlt  *GetParamSubVals (Param *parm, int chain, int state);
MrBFlt  *GetParamVals (Param *parm, int chain, int state);
Tree    *GetTree (Param *parm, int chain, int state);
Tree    *GetTreeFromIndex (int index, int chain, int state);
int     InitializeLinks (void);
int     InitializeTreeCalibrations (Tree *t);
int     Link (void);
int     SetAARates (void);
int     SetLocalTaxa (void);
int     SetModelDefaults (void);
int     SetMoves (void);
int     SetUpAnalysis (RandLong *seed);
void    SetUpMoveTypes (void);
int     ShowModel (void);
int     Unlink (void);
int     UpdateClockRate(MrBFlt clockRate, int chain);
int     UpdateCppEvolLengths (Param *param, TreeNode *p, int chain);
int     UpdateTK02EvolLengths (Param *param, Tree *t, int chain);
int     UpdateIgrBrachLengths (Param *param, Tree *t, int chain);

#endif
