#include "mozMatchboxKeyboardInvokerImpl.h"

#include <stdio.h>

#include <X11/Xlib.h>

#include <gtk/gtk.h>
#include <gdk/gdk.h>
#include <gdk/gdkx.h>

#include "matchbox-keyboard-remote.h"
#include "im-protocol.h"

NS_IMPL_ISUPPORTS1(mozMatchboxKeyboardInvokerImpl, mozIMatchboxKeyboardInvoker)

mozMatchboxKeyboardInvokerImpl::mozMatchboxKeyboardInvokerImpl()
{
  /* member initializers and constructor code */
  gtk_init(0, 0);
}

mozMatchboxKeyboardInvokerImpl::~mozMatchboxKeyboardInvokerImpl()
{
  /* destructor code */
}

/* void show (); */
NS_IMETHODIMP mozMatchboxKeyboardInvokerImpl::Show()
{
    protocol_send_event (MBKeyboardRemoteShow);
    return NS_OK;
}

/* void hide (); */
NS_IMETHODIMP mozMatchboxKeyboardInvokerImpl::Hide()
{
    protocol_send_event (MBKeyboardRemoteHide);
    return NS_OK;
}

/* void toggle (); */
NS_IMETHODIMP mozMatchboxKeyboardInvokerImpl::Toggle()
{
    protocol_send_event (MBKeyboardRemoteToggle);
    return NS_OK;
}

