#include "mozMatchboxKeyboardInvokerImpl.h"

#include "mozilla/ModuleUtils.h"
#include "nsIClassInfoImpl.h"


NS_GENERIC_FACTORY_CONSTRUCTOR(mozMatchboxKeyboardInvokerImpl)
NS_DEFINE_NAMED_CID(MOZMATCHBOXKEYBOARDINVOKER_CID);

static const mozilla::Module::CIDEntry kMatchboxKeyboardInvokerCIDs[] = {
    { &kMOZMATCHBOXKEYBOARDINVOKER_CID, false, NULL, mozMatchboxKeyboardInvokerImplConstructor },
    { NULL }
};

static const mozilla::Module::ContractIDEntry kMatchboxKeyboardInvokerContracts[] = {
    { MOZMATCHBOXKEYBOARDINVOKER_CONSTRACTID, &kMOZMATCHBOXKEYBOARDINVOKER_CID },
    { NULL }
};

static const mozilla::Module::CategoryEntry kMatchboxKeyboardInvokerCategories[] = {
    { NULL }
};

static const mozilla::Module kMatchboxKeyboardInvokerModule = {
    mozilla::Module::kVersion,
    kMatchboxKeyboardInvokerCIDs,
    kMatchboxKeyboardInvokerContracts,
    kMatchboxKeyboardInvokerCategories
};


// The following line implements the one-and-only "NSModule" symbol exported from this
// shared library.
NSMODULE_DEFN(mozMatchboxKeyboardInvokerModule) = &kMatchboxKeyboardInvokerModule;

// The following line implements the one-and-only "NSGetModule" symbol
// for compatibility with mozilla 1.9.2. You should only use this
// if you need a binary which is backwards-compatible and if you use
// interfaces carefully across multiple versions.
NS_IMPL_MOZILLA192_NSGETMODULE(&kMatchboxKeyboardInvokerModule)

