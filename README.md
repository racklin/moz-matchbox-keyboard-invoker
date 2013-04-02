Matchbox Keyboard Invoker for XPCOM
----------------------------------------
Matchbox-keyboard is an on screen 'virtual' or 'software' keyboard. It will hopefully work well on various touchscreen devices from mobile phones to tablet PCs running X Windows.

This is XPCOM Binding for Matchbox-Keyboard , You can toggle / show / hide matchbox-keyboard from xulrunner / firefox .


Build
----------------------------------------
Required Packages cmake / xulrunner-dev / libgtk2.0-dev / libx11-dev.

1. cmake .
2. make


Install
----------------------------------------
Copy built .so and .xpt to your xulrunner application's components directory.


Usage
----------------------------------------
Show Matchbox-keyboard:

```
Components.classes["@racklin.gmail.com/mb-invoker;1"].getService(Components.interfaces.mozIMatchboxKeyboardInvoker).show();
```

Hide Matchbox-keyboard:

```
Components.classes["@racklin.gmail.com/mb-invoker;1"].getService(Components.interfaces.mozIMatchboxKeyboardInvoker).hide();
```


Toggle(Show/Hide) Matchbox-keyboard:

```
Components.classes["@racklin.gmail.com/mb-invoker;1"].getService(Components.interfaces.mozIMatchboxKeyboardInvoker).toggle();
```

License
-----------------------------
Licensed under the [MPL License](http://mozilla.org/MPL/2.0/).

