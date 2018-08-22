//  header block begin
// since 0x050000
// /usr/include/qt/QtCore/qabstractnativeeventfilter.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstractnativeeventfilter.h>
#include <QtCore>
#include "callback_inherit.h"

// QAbstractNativeEventFilter is pure virtual: true
// QAbstractNativeEventFilter has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAbstractNativeEventFilter : public QAbstractNativeEventFilter {
public:
  virtual ~MyQAbstractNativeEventFilter() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool nativeEventFilter(const QByteArray &, void *, long *)
  virtual bool nativeEventFilter(const QByteArray & eventType, void * message, long * result)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"nativeEventFilter", &handled, 3, (uint64_t)&eventType, (uint64_t)message, (uint64_t)result, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// void QAbstractNativeEventFilter()
MyQAbstractNativeEventFilter() : QAbstractNativeEventFilter() {}
};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractnativeeventfilter.h:55
// [1] bool nativeEventFilter(const QByteArray &, void *, long *)
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractnativeeventfilter.h:52
// [-2] void QAbstractNativeEventFilter()
extern "C" Q_DECL_EXPORT
void* C_ZN26QAbstractNativeEventFilterC2Ev() {
  return 0; // new QAbstractNativeEventFilter();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractnativeeventfilter.h:53
// [-2] void ~QAbstractNativeEventFilter()
extern "C" Q_DECL_EXPORT
void C_ZN26QAbstractNativeEventFilterD2Ev(void *this_) {
  delete (QAbstractNativeEventFilter*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractnativeeventfilter.h:55
// [1] bool nativeEventFilter(const QByteArray &, void *, long *)
extern "C" Q_DECL_EXPORT
bool C_ZN26QAbstractNativeEventFilter17nativeEventFilterERK10QByteArrayPvPl(void *this_, QByteArray* eventType, void * message, long * result) {
  return (bool)((QAbstractNativeEventFilter*)this_)->nativeEventFilter(*eventType, message, result);
}

//  main block end
