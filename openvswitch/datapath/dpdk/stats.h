/*
 *   BSD LICENSE
 *
 *   Copyright(c) 2010-2014 Intel Corporation. All rights reserved.
 *   All rights reserved.
 *
 *   Redistribution and use in source and binary forms, with or without
 *   modification, are permitted provided that the following conditions
 *   are met:
 *
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in
 *       the documentation and/or other materials provided with the
 *       distribution.
 *     * Neither the name of Intel Corporation nor the names of its
 *       contributors may be used to endorse or promote products derived
 *       from this software without specific prior written permission.
 *
 *   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *   "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *   A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *   OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *   SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *   LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *   DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *   THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *   (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *   OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#ifndef __STATS_H_
#define __STATS_H_

#include "vport.h"

#define INC_BY_1  1
#define VSWITCHD 0

void stats_init(void);
void stats_fini(void);
void stats_clear(void);

void stats_vport_clear_all(void);
void stats_vport_clear(unsigned vportid);
void stats_vport_rx_increment(unsigned vportid, int inc);
void stats_vport_rx_drop_increment(unsigned vportid, int inc);
void stats_vport_tx_increment(unsigned vportid, int inc);
void stats_vport_tx_drop_increment(unsigned vportid, int inc);
void stats_vport_overrun_increment(unsigned vportid, int inc);
uint64_t stats_vport_rx_get(unsigned vportid);
uint64_t stats_vport_rx_drop_get(unsigned vportid);
uint64_t stats_vport_tx_get(unsigned vportid);
uint64_t stats_vport_tx_drop_get(unsigned vportid);
uint64_t stats_vport_overrun_get(unsigned vportid);
struct port_stats stats_vport_get(unsigned vportid);


void stats_vswitch_clear(void);
void stats_vswitch_rx_drop_increment(int inc);
uint64_t stats_vswitch_rx_drop_get(void);
void stats_vswitch_tx_drop_increment(int inc);
uint64_t stats_vswitch_tx_drop_get(void);


#endif /* __STATS_H_ */
