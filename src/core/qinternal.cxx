//  header block begin
// /usr/include/qt/QtCore/qnamespace.h
#ifndef protected
#define protected public
#endif
#include <qnamespace.h>
#include <QtCore>
#include "callback_inherit.h"

// QInternal is pure virtual: false
// QInternal has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQInternal : public QInternal {
public:
  virtual ~MyQInternal() {}
};

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1829
// [1] bool registerCallback(QInternal::Callback, qInternalCallback)
extern "C" Q_DECL_EXPORT
bool C_ZN9QInternal16registerCallbackENS_8CallbackEPFbPPvE(QInternal::Callback arg0, qInternalCallback arg1) {
  return (bool)QInternal::registerCallback(arg0, arg1);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1830
// [1] bool unregisterCallback(QInternal::Callback, qInternalCallback)
extern "C" Q_DECL_EXPORT
bool C_ZN9QInternal18unregisterCallbackENS_8CallbackEPFbPPvE(QInternal::Callback arg0, qInternalCallback arg1) {
  return (bool)QInternal::unregisterCallback(arg0, arg1);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnamespace.h:1831
// [1] bool activateCallbacks(QInternal::Callback, void **)
extern "C" Q_DECL_EXPORT
bool C_ZN9QInternal17activateCallbacksENS_8CallbackEPPv(QInternal::Callback arg0, void ** arg1) {
  return (bool)QInternal::activateCallbacks(arg0, arg1);
}


extern "C" Q_DECL_EXPORT
void C_ZN9QInternalD2Ev(void *this_) {
  delete (QInternal*)(this_);
}
//  main block end
