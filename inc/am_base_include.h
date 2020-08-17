/*******************************************************************************
 * am_base_include.h
 *
 * Histroy:
 *  2014-6-24 [Louis] created file, to be base types for Oryx MW
 *
 * Copyright (c) 2016 Ambarella, Inc.
 *
 * This file and its contents ("Software") are protected by intellectual
 * property rights including, without limitation, U.S. and/or foreign
 * copyrights. This Software is also the confidential and proprietary
 * information of Ambarella, Inc. and its licensors. You may not use, reproduce,
 * disclose, distribute, modify, or otherwise prepare derivative works of this
 * Software or any portion thereof except pursuant to a signed license agreement
 * or nondisclosure agreement with Ambarella, Inc. or its authorized affiliates.
 * In the absence of such an agreement, you agree to promptly notify and return
 * this Software to Ambarella, Inc.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF NON-INFRINGEMENT,
 * MERCHANTABILITY, AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL AMBARELLA, INC. OR ITS AFFILIATES BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; COMPUTER FAILURE OR MALFUNCTION; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ******************************************************************************/

#ifndef AM_BASE_INCLUDE_H_
#define AM_BASE_INCLUDE_H_

/* Standard C includes */
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <stdint.h>
#include <stdarg.h>
#include <stddef.h>
#include <string.h>
#include <string>
#include <strings.h>
#include <setjmp.h>
#include <unistd.h>
#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>

#include <signal.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <fcntl.h>
#include <pthread.h>

/* Socket stream common headers. */
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/epoll.h>
#include <netdb.h>
#include <stdbool.h>
#include <sys/socket.h>
#include <sys/ioctl.h>

/* Network ioctls. */
#include <net/if.h>
#include <ifaddrs.h>
#include <linux/if_link.h>
#include <linux/tcp.h>

#define ORYX_API __attribute__((visibility("default")))

#endif /* AM_BASE_INCLUDE_H_ */
