//  header block begin
// /usr/include/qt/QtMultimedia/qmediacontrol.h
#ifndef protected
#define protected public
#endif
#include <qmediacontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaControl is pure virtual: false
// QMediaControl has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQMediaControl : public QMediaControl {
public:
  virtual ~MyQMediaControl() {}
// void QMediaControl(QObject *)
MyQMediaControl(QObject * parent) : QMediaControl(parent) {}
// void QMediaControl(QMediaControlPrivate &, QObject *)
MyQMediaControl(QMediaControlPrivate & dd, QObject * parent) : QMediaControl(dd, parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontrol.h:56
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QMediaControl10metaObjectEv(void *this_) {
  return (void*)((QMediaControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontrol.h:56
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QMediaControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QMediaControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontrol.h:56
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN13QMediaControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QMediaControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontrol.h:56
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QMediaControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMediaControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontrol.h:56
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QMediaControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMediaControl::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediacontrol.h:59
// [-2] void ~QMediaControl()
extern "C" Q_DECL_EXPORT
void C_ZN13QMediaControlD2Ev(void *this_) {
  delete (QMediaControl*)(this_);
}
//  main block end
