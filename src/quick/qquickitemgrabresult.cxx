//  header block begin
// /usr/include/qt/QtQuick/qquickitemgrabresult.h
#ifndef protected
#define protected public
#endif
#include <qquickitemgrabresult.h>
#include <QtQuick>
#include "callback_inherit.h"

// QQuickItemGrabResult is pure virtual: false
// QQuickItemGrabResult has virtual projected: true
//  header block end

//  main block begin

class MyQQuickItemGrabResult : public QQuickItemGrabResult {
public:
  virtual ~MyQQuickItemGrabResult() {}
// Protected virtual Visibility=Default Availability=Available
// bool event(class QEvent *)
  virtual bool event(QEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QQuickItemGrabResult::event(arg0);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitemgrabresult.h:73
// [1] bool event(class QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN20QQuickItemGrabResult5eventEP6QEvent(void *this_, QEvent * arg0) {
  return (bool)((QQuickItemGrabResult*)this_)->QQuickItemGrabResult::event(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitemgrabresult.h:58
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QQuickItemGrabResult10metaObjectEv(void *this_) {
  return (void*)((QQuickItemGrabResult*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitemgrabresult.h:64
// [32] QImage image()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QQuickItemGrabResult5imageEv(void *this_) {
  auto rv = ((QQuickItemGrabResult*)this_)->image();
return new QImage(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitemgrabresult.h:65
// [8] QUrl url()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QQuickItemGrabResult3urlEv(void *this_) {
  auto rv = ((QQuickItemGrabResult*)this_)->url();
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitemgrabresult.h:68
// [1] bool saveToFile(const class QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN20QQuickItemGrabResult10saveToFileERK7QString(void *this_, QString* fileName) {
  return (bool)((QQuickItemGrabResult*)this_)->saveToFile(*fileName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitemgrabresult.h:70
// [1] bool saveToFile(const class QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK20QQuickItemGrabResult10saveToFileERK7QString(void *this_, QString* fileName) {
  return (bool)((QQuickItemGrabResult*)this_)->saveToFile(*fileName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitemgrabresult.h:76
// [-2] void ready()
extern "C" Q_DECL_EXPORT
void C_ZN20QQuickItemGrabResult5readyEv(void *this_) {
  ((QQuickItemGrabResult*)this_)->ready();
}


extern "C" Q_DECL_EXPORT
void C_ZN20QQuickItemGrabResultD2Ev(void *this_) {
  delete (QQuickItemGrabResult*)(this_);
}
//  main block end
