/*
 * This file contains the definitions and function declarations to
 * handle the C2S test.
 *
 * kkumar@internet2.edu
 * Oct 2011
 */

#ifndef _JS_TESTS_SRV
#define _JS_TESTS_SRV

#include "testoptions.h"

int test_c2s(int ctlsockfd, web100_agent* agent, TestOptions* testOptions,
                int conn_options, double* c2sspd, int set_buff, int window,
                int autotune, char* device, Options* options, int record_reverse,
                int count_vars, char spds[4][256], int* spd_index);

// S2C test
int test_s2c(int ctlsockfd, web100_agent* agent, TestOptions* testOptions,
		int conn_options, double* s2cspd, int set_buff, int window,
		int autotune, char* device, Options* options, char spds[4][256],
		int* spd_index, int count_vars, CwndPeaks* peaks);

// the middlebox test
int test_mid(int ctlsockfd, web100_agent* agent, TestOptions* testOptions,
		int conn_options, double* s2c2spd);

#endif
