#ifndef __DETECT_MPM_H__
#define __DETECT_MPM_H__

/* XXX remove once */
MpmCtx mpm_ctx[1];

uint32_t PacketPatternScan(ThreadVars *, DetectEngineThreadCtx *, Packet *);
uint32_t PacketPatternMatch(ThreadVars *, DetectEngineThreadCtx *, Packet *);

void PacketPatternCleanup(ThreadVars *, DetectEngineThreadCtx *);
void PatternMatchPrepare(MpmCtx *, int);
int PatternMatchPrepareGroup(DetectEngineCtx *, SigGroupHead *);
void DetectEngineThreadCtxInfo(ThreadVars *, DetectEngineThreadCtx *);
void PatternMatchDestroy(MpmCtx *);
void PatternMatchDestroyGroup(SigGroupHead *);

int DetectEngineThreadCtxInit(ThreadVars *, void *, void **);
int DetectEngineThreadCtxDeinit(ThreadVars *, void *);

void SigGroupHeadSetMpmMaxlen(DetectEngineCtx *, SigGroupHead *);

void DbgPrintScanSearchStats();

#endif /* __DETECT_MPM_H__ */

