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

#ifndef CEF_LIBCEF_DLL_CPPTOC_VIEWS_PANEL_DELEGATE_CPPTOC_H_
#define CEF_LIBCEF_DLL_CPPTOC_VIEWS_PANEL_DELEGATE_CPPTOC_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/views/cef_panel_delegate.h"
#include "include/capi/views/cef_panel_delegate_capi.h"
#include "libcef_dll/cpptoc/cpptoc.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed wrapper-side only.
class CefPanelDelegateCppToC
    : public CefCppToC<CefPanelDelegateCppToC, CefPanelDelegate,
        cef_panel_delegate_t> {
 public:
  CefPanelDelegateCppToC();
};

#endif  // CEF_LIBCEF_DLL_CPPTOC_VIEWS_PANEL_DELEGATE_CPPTOC_H_
