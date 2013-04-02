#ifndef __mozMatchboxKeyboardInvokerImpl_h__
#define __mozMatchboxKeyboardInvokerImpl_h__

#include "mozIMatchboxKeyboardInvoker.h"

// 3f4fb408-55b0-459d-851c-88c424d6a2d0
#define MOZMATCHBOXKEYBOARDINVOKER_CID \
{ 0x3f4fb408, 0x55b0, 0x459d, \
  { 0x85, 0x1c, 0x88, 0xc4, 0x24, 0xd6, 0xa2, 0xd0 } }

#define MOZMATCHBOXKEYBOARDINVOKER_CONTRACTID "@racklin.gmail.com/mb-invoker;1"

class mozMatchboxKeyboardInvokerImpl : public mozIMatchboxKeyboardInvoker
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_MOZIMATCHBOXKEYBOARDINVOKER

  mozMatchboxKeyboardInvokerImpl();

private:
  ~mozMatchboxKeyboardInvokerImpl();

protected:
  /* additional members */
};


#endif /* __mozMatchboxKeyboardInvokerImpl_h__ */
