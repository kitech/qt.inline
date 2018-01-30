//  header block begin
// /usr/include/qt/QtCore/qabstractnativeeventfilter.h
#include <qabstractnativeeventfilter.h>
#include <QtCore>

// QAbstractNativeEventFilter is pure virtual: true
// QAbstractNativeEventFilter has virtual projected: false
//  header block end

//  main block begin

class MyQAbstractNativeEventFilter : public QAbstractNativeEventFilter {
public:
  virtual ~MyQAbstractNativeEventFilter() {}
// void QAbstractNativeEventFilter()
MyQAbstractNativeEventFilter() : QAbstractNativeEventFilter() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractnativeeventfilter.h:52
// [-2] void QAbstractNativeEventFilter()
extern "C"
void* C_ZN26QAbstractNativeEventFilterC1Ev() {
  return 0; // new QAbstractNativeEventFilter();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractnativeeventfilter.h:53
// [-2] void ~QAbstractNativeEventFilter()
extern "C"
void C_ZN26QAbstractNativeEventFilterD2Ev(void *this_) {
  delete (QAbstractNativeEventFilter*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractnativeeventfilter.h:55
// [1] bool nativeEventFilter(const class QByteArray &, void *, long *)
extern "C"
bool C_ZN26QAbstractNativeEventFilter17nativeEventFilterERK10QByteArrayPvPl(void *this_, const QByteArray & eventType, void * message, long * result) {
  return (bool)((QAbstractNativeEventFilter*)this_)->nativeEventFilter(eventType, message, result);
}
//  main block end
