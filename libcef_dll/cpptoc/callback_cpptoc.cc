// Copyright (c) 2017 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=7d4c882910cd07c9659eefe6eb579e4096cd760c$
//

#include "libcef_dll/cpptoc/callback_cpptoc.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

void CEF_CALLBACK callback_cont(struct _cef_callback_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefCallbackCppToC::Get(self)->Continue();
}

void CEF_CALLBACK callback_cancel(struct _cef_callback_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefCallbackCppToC::Get(self)->Cancel();
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefCallbackCppToC::CefCallbackCppToC() {
  GetStruct()->cont = callback_cont;
  GetStruct()->cancel = callback_cancel;
}

template <>
CefRefPtr<CefCallback>
CefCppToCRefCounted<CefCallbackCppToC, CefCallback, cef_callback_t>::
    UnwrapDerived(CefWrapperType type, cef_callback_t* s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template <>
base::AtomicRefCount CefCppToCRefCounted<CefCallbackCppToC,
                                         CefCallback,
                                         cef_callback_t>::DebugObjCt = 0;
#endif

template <>
CefWrapperType CefCppToCRefCounted<CefCallbackCppToC,
                                   CefCallback,
                                   cef_callback_t>::kWrapperType = WT_CALLBACK;
