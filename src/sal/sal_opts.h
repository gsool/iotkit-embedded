/*
 * Copyright (C) 2015-2018 Alibaba Group Holding Limited
 */

#ifndef _SAL_OPTS_H_
#define _SAL_OPTS_H_

#include "infra_config.h"

#define SAL_OPT_ENABLED       1
#define SAL_OPT_DISABLED      0

/* Socket API select support. */
#ifdef AT_SINGLE_TASK_ENABLED
#define SAL_SELECT_SUPPORT            SAL_OPT_DISABLED
#else
#define SAL_SELECT_SUPPORT            SAL_OPT_ENABLED
#endif

/* UDP client support. */
#define SAL_UDP_CLIENT_ENABLED        SAL_OPT_DISABLED

/* asynchronized send mode support. */
#define SAL_PACKET_SEND_MODE_ASYNC    SAL_OPT_DISABLED

/* debug, assert, error log support */
#define SAL_USE_DEBUG                 SAL_OPT_DISABLED

/* get/set socket option, fcntl */
#define SAL_SOCK_OPTION               SAL_OPT_DISABLED

/* input mbox default size */
#define SAL_DEFAULT_INPUTMBOX_SIZE        8

/* output mbox default size. Only effective if SAL_PACKET_SEND_MODE_ASYNC enabled */
#define SAL_DEFAULT_OUTPUTMBOX_SIZE       8

#endif

