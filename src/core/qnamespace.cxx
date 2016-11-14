// /usr/include/qt/QtCore/qnamespace.h
#include <qnamespace.h>
#include <QtCore>

// static
// /usr/include/qt/QtCore/qnamespace.h:1814
// bool registerCallback(enum QInternal::Callback, qInternalCallback)
extern "C"
void C_ZN9QInternal16registerCallbackENS_8CallbackEPFbPPvE(QInternal::Callback a0, qInternalCallback a1) {
  /*return*/ QInternal::registerCallback(a0, a1);
}
// static
// /usr/include/qt/QtCore/qnamespace.h:1815
// bool unregisterCallback(enum QInternal::Callback, qInternalCallback)
extern "C"
void C_ZN9QInternal18unregisterCallbackENS_8CallbackEPFbPPvE(QInternal::Callback a0, qInternalCallback a1) {
  /*return*/ QInternal::unregisterCallback(a0, a1);
}
// static
// /usr/include/qt/QtCore/qnamespace.h:1816
// bool activateCallbacks(enum QInternal::Callback, void **)
extern "C"
void C_ZN9QInternal17activateCallbacksENS_8CallbackEPPv(QInternal::Callback a0, void ** a1) {
  /*return*/ QInternal::activateCallbacks(a0, a1);
}