/*
 * DO NOT EDIT.  THIS FILE IS GENERATED FROM /home/rack/workspace/mozMatchboxKeyboardInvoker/mozIMatchboxKeyboardInvoker.idl
 */

#ifndef __gen_mozIMatchboxKeyboardInvoker_h__
#define __gen_mozIMatchboxKeyboardInvoker_h__

#define __STDC_LIMIT_MACROS

#ifndef __gen_nsISupports_h__
#include "nsISupports.h"
#endif

/* For IDL files that don't want to include root IDL files. */
#ifndef NS_NO_VTABLE
#define NS_NO_VTABLE
#endif
#include "nsStringAPI.h"

/* starting interface:    mozIMatchboxKeyboardInvoker */
#define MOZIMATCHBOXKEYBOARDINVOKER_IID_STR "e8fa5e9b-47bf-4e7b-935b-3c5bd88a7c49"

#define MOZIMATCHBOXKEYBOARDINVOKER_IID \
  {0xe8fa5e9b, 0x47bf, 0x4e7b, \
    { 0x93, 0x5b, 0x3c, 0x5b, 0xd8, 0x8a, 0x7c, 0x49 }}

class NS_NO_VTABLE mozIMatchboxKeyboardInvoker : public nsISupports {
 public:

  NS_DECLARE_STATIC_IID_ACCESSOR(MOZIMATCHBOXKEYBOARDINVOKER_IID)

  enum {
    REMOTE_NONE = 0,
    REMOTE_SHOW = 1,
    REMOTE_HIDE = 2,
    REMOTE_TOGGLE = 3
  };

  /* void show (); */
  NS_IMETHOD Show(void) = 0;

  /* void hide (); */
  NS_IMETHOD Hide(void) = 0;

  /* void toggle (); */
  NS_IMETHOD Toggle(void) = 0;

};

  NS_DEFINE_STATIC_IID_ACCESSOR(mozIMatchboxKeyboardInvoker, MOZIMATCHBOXKEYBOARDINVOKER_IID)

/* Use this macro when declaring classes that implement this interface. */
#define NS_DECL_MOZIMATCHBOXKEYBOARDINVOKER \
  NS_IMETHOD Show(void); \
  NS_IMETHOD Hide(void); \
  NS_IMETHOD Toggle(void);

/* Use this macro to declare functions that forward the behavior of this interface to another object. */
#define NS_FORWARD_MOZIMATCHBOXKEYBOARDINVOKER(_to) \
  NS_IMETHOD Show(void) { return _to Show(); } \
  NS_IMETHOD Hide(void) { return _to Hide(); } \
  NS_IMETHOD Toggle(void) { return _to Toggle(); }

/* Use this macro to declare functions that forward the behavior of this interface to another object in a safe way. */
#define NS_FORWARD_SAFE_MOZIMATCHBOXKEYBOARDINVOKER(_to) \
  NS_IMETHOD Show(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Show(); } \
  NS_IMETHOD Hide(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Hide(); } \
  NS_IMETHOD Toggle(void) { return !_to ? NS_ERROR_NULL_POINTER : _to->Toggle(); }

#if 0
/* Use the code below as a template for the implementation class for this interface. */

/* Header file */
class _MYCLASS_ : public mozIMatchboxKeyboardInvoker
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_MOZIMATCHBOXKEYBOARDINVOKER

  _MYCLASS_();

private:
  ~_MYCLASS_();

protected:
  /* additional members */
};

/* Implementation file */
NS_IMPL_ISUPPORTS1(_MYCLASS_, mozIMatchboxKeyboardInvoker)

_MYCLASS_::_MYCLASS_()
{
  /* member initializers and constructor code */
}

_MYCLASS_::~_MYCLASS_()
{
  /* destructor code */
}

/* void show (); */
NS_IMETHODIMP _MYCLASS_::Show()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void hide (); */
NS_IMETHODIMP _MYCLASS_::Hide()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* void toggle (); */
NS_IMETHODIMP _MYCLASS_::Toggle()
{
    return NS_ERROR_NOT_IMPLEMENTED;
}

/* End of implementation class template. */
#endif


#endif /* __gen_mozIMatchboxKeyboardInvoker_h__ */
