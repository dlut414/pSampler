/*
* LICENCE
* copyright 2014 ~ ****
* Some rights reserved.
* Author: HUFANGYUAN
* Released under CC BY-NC
*/
#pragma once
#include <string.h>
#define DEBUG 0
#define LEGACY 0
#define NTHREAD 4
#define OMP	1
#define BD_OPT 0
#define __FILENAME__ (strrchr(__FILE__, '\\') ? strrchr(__FILE__, '\\') + 1 : __FILE__)
#define PRINT(x) std::cout << __FILENAME__ << " @Ln " << __LINE__ << ": " << #x << " = " << x << std::endl;

#define BD2		0x00000000
#define FLUID	0x00000001
#define BD1		0x00000002
#define INLET	0x00000004
#define OUTLET	0x00000008

#define V_DIRICHLET		0x00000001
#define V_NEUMANN		0x00000002
#define P_DIRICHLET		0x00000004
#define P_NEUMANN		0x00000008
#define T_DIRICHLET0	0x00000010
#define T_DIRICHLET1	0x00000020
#define T_NEUMANN		0x00000040
#define T_DIRICHLET		(T_DIRICHLET0|T_DIRICHLET1)

#define ALLONE	0xFFFFFFFF

#define ON(A, B)	(A|B)
#define OFF(A, B)	(A&(~B))
#define IS(A, B)	(A&B)
