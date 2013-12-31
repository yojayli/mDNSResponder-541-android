#ifndef _MDNSEMBEDDED_H_
#define _MDNSEMBEDDED_H_
#ifdef __cplusplus
extern "C" {
#endif
void embedded_mDNSInit();
int embedded_mDNSState();
void embedded_mDNSMainLoop();
void embedded_mDNSExit();
#ifdef __cplusplus
}
#endif
#endif //_MDNSEMBEDDED_H_
