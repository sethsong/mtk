#ifndef __META_DFO_H__
#define __META_DFO_H__

#include "MetaPub.h"
#include "meta_dfo_para.h"

typedef void (*DFO_CNF_CB)(void *buf, unsigned int size);

extern void META_Dfo_SetCallback(DFO_CNF_CB callback);

#endif 

