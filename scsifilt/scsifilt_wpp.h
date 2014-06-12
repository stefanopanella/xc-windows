/*
 * Copyright (c) 2009 Citrix Systems, Inc.
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef SCSIFILT_WPP_H__
#define SCSIFILT_WPP_H__

#define WPP_CONTROL_GUIDS                            \
  WPP_DEFINE_CONTROL_GUID(                           \
      ScsifiltWppGuid,                               \
      (4F9B312E, 66F3, 4b2c, 9C42, 07A19EFC46B5),    \
      WPP_DEFINE_BIT(FLAG_UPPER_EDGE)                \
      WPP_DEFINE_BIT(FLAG_LOWER_EDGE)                \
      WPP_DEFINE_BIT(FLAG_CONTROL_INTERFACE)         \
      WPP_DEFINE_BIT(FLAG_SCSI)                      \
      WPP_DEFINE_BIT(FLAG_SCHEDULER)                 \
      )

#endif /* !SCSFILT_WPP_H__ */
