/*******************************************************************************
 * version.h
 *
 * Histroy:
 *  2012-3-7 2012 - [ypchang] created file
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

#ifndef AM_UTILS_VERSION_H_
#define AM_UTILS_VERSION_H_

#define UTILI_LIB_MAJOR 2
#define UTILI_LIB_MINOR 0
#define UTILI_LIB_PATCH 0
#define UTILI_LIB_VERSION ((UTILI_LIB_MAJOR << 16) | \
                           (UTILI_LIB_MINOR << 8)  | \
                           UTILI_LIB_PATCH)
#define UTILI_VERSION_STR "2.0.0"

#define OSAL_LIB_MAJOR 2
#define OSAL_LIB_MINOR 0
#define OSAL_LIB_PATCH 0
#define OSAL_LIB_VERSION ((OSAL_LIB_MAJOR << 16) | \
                          (OSAL_LIB_MINOR << 8>) | \
                          OSAL_LIB_PATH)
#define OSAL_VERSION_STR "2.0.0"

#endif /* AM_UTILS_VERSION_H_ */
