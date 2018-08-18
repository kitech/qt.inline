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

class Q_DECL_EXPORT MyQQuickItemGrabResult : public QQuickItemGrabResult {
public:
  virtual ~MyQQuickItemGrabResult() {}
// Protected virtual Visibility=Default Availability=Available
// bool event(QEvent *)
  virtual bool event(QEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
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
// [1] bool event(QEvent *)
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

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitemgrabresult.h:58
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN20QQuickItemGrabResult11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QQuickItemGrabResult*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitemgrabresult.h:58
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN20QQuickItemGrabResult11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QQuickItemGrabResult*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitemgrabresult.h:58
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN20QQuickItemGrabResult2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQuickItemGrabResult::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitemgrabresult.h:58
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN20QQuickItemGrabResult6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QQuickItemGrabResult::trUtf8(s, c, n);
return new QString(rv);
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
// [1] bool saveToFile(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN20QQuickItemGrabResult10saveToFileERK7QString(void *this_, QString* fileName) {
  return (bool)((QQuickItemGrabResult*)this_)->saveToFile(*fileName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitemgrabresult.h:70
// [1] bool saveToFile(const QString &)
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
