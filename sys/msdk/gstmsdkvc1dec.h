/* GStreamer Intel MSDK plugin
 * Copyright (c) 2018, Intel Corporation
 * All rights reserved.
 *
 * Author: Sreerenj Balachandran <sreerenj.balachandran@intel.com>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGDECE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef __GST_MSDKVC1DEC_H__
#define __GST_MSDKVC1DEC_H__

#include "gstmsdkdec.h"

G_BEGIN_DECLS

#define GST_TYPE_MSDKVC1DEC \
  (gst_msdkvc1dec_get_type())
#define GST_MSDKVC1DEC(obj) \
  (G_TYPE_CHECK_INSTANCE_CAST((obj),GST_TYPE_MSDKVC1DEC,GstMsdkVC1Dec))
#define GST_MSDKVC1DEC_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_CAST((klass),GST_TYPE_MSDKVC1DEC,GstMsdkVC1DecClass))
#define GST_IS_MSDKVC1DEC(obj) \
  (G_TYPE_CHECK_INSTANCE_TYPE((obj),GST_TYPE_MSDKVC1DEC))
#define GST_IS_MSDKVC1DEC_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_TYPE((klass),GST_TYPE_MSDKVC1DEC))

typedef struct _GstMsdkVC1Dec GstMsdkVC1Dec;
typedef struct _GstMsdkVC1DecClass GstMsdkVC1DecClass;

struct _GstMsdkVC1Dec
{
  GstMsdkDec base;
};

struct _GstMsdkVC1DecClass
{
  GstMsdkDecClass parent_class;
};

GType gst_msdkvc1dec_get_type (void);

G_END_DECLS

#endif /* __GST_MSDKVC1DEC_H__ */