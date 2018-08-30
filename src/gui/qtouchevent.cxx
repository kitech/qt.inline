//  header block begin
// since 0x040600
// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QTouchEvent is pure virtual: false
// QTouchEvent has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQTouchEvent_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTouchEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTouchEvent_t qt_meta_stringdata_MyQTouchEvent = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQTouchEvent"
  },
  "MyQTouchEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTouchEvent[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQTouchEvent : public QTouchEvent {
public:
  virtual ~MyQTouchEvent() {}
// void QTouchEvent(QEvent::Type, QTouchDevice *, Qt::KeyboardModifiers, Qt::TouchPointStates, const QList<QTouchEvent::TouchPoint> &)
MyQTouchEvent(QEvent::Type eventType, QTouchDevice * device, QFlags<Qt::KeyboardModifier> modifiers, QFlags<Qt::TouchPointState> touchPointStates, const QList<QTouchEvent::TouchPoint> & touchPoints) : QTouchEvent(eventType, device, modifiers, touchPointStates, touchPoints) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:942
// [-2] void QTouchEvent(QEvent::Type, QTouchDevice *, Qt::KeyboardModifiers, Qt::TouchPointStates, const QList<QTouchEvent::TouchPoint> &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTouchEventC2EN6QEvent4TypeEP12QTouchDevice6QFlagsIN2Qt16KeyboardModifierEES4_INS5_15TouchPointStateEERK5QListINS_10TouchPointEE(QEvent::Type eventType, QTouchDevice * device, QFlags<Qt::KeyboardModifier> modifiers, QFlags<Qt::TouchPointState> touchPointStates, QList<QTouchEvent::TouchPoint>* touchPoints) {
  return  new QTouchEvent(eventType, device, modifiers, touchPointStates, *touchPoints);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:947
// [-2] void ~QTouchEvent()
extern "C" Q_DECL_EXPORT
void C_ZN11QTouchEventD2Ev(void *this_) {
  delete (QTouchEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:949
// [8] QWindow * window()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTouchEvent6windowEv(void *this_) {
  return (void*)((QTouchEvent*)this_)->window();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:950
// [8] QObject * target()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTouchEvent6targetEv(void *this_) {
  return (void*)((QTouchEvent*)this_)->target();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:954
// [4] Qt::TouchPointStates touchPointStates()
extern "C" Q_DECL_EXPORT
Qt::TouchPointStates C_ZNK11QTouchEvent16touchPointStatesEv(void *this_) {
  return (Qt::TouchPointStates)((QTouchEvent*)this_)->touchPointStates();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:955
// [8] const QList<QTouchEvent::TouchPoint> & touchPoints()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTouchEvent11touchPointsEv(void *this_) {
  auto& rv = ((QTouchEvent*)this_)->touchPoints();
return new QList<QTouchEvent::TouchPoint>(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:956
// [8] QTouchDevice * device()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTouchEvent6deviceEv(void *this_) {
  return (void*)((QTouchEvent*)this_)->device();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:959
// [-2] void setWindow(QWindow *)
extern "C" Q_DECL_EXPORT
void C_ZN11QTouchEvent9setWindowEP7QWindow(void *this_, QWindow * awindow) {
  ((QTouchEvent*)this_)->setWindow(awindow);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:960
// [-2] void setTarget(QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN11QTouchEvent9setTargetEP7QObject(void *this_, QObject * atarget) {
  ((QTouchEvent*)this_)->setTarget(atarget);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:961
// [-2] void setTouchPointStates(Qt::TouchPointStates)
extern "C" Q_DECL_EXPORT
void C_ZN11QTouchEvent19setTouchPointStatesE6QFlagsIN2Qt15TouchPointStateEE(void *this_, QFlags<Qt::TouchPointState> aTouchPointStates) {
  ((QTouchEvent*)this_)->setTouchPointStates(aTouchPointStates);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:962
// [-2] void setTouchPoints(const QList<QTouchEvent::TouchPoint> &)
extern "C" Q_DECL_EXPORT
void C_ZN11QTouchEvent14setTouchPointsERK5QListINS_10TouchPointEE(void *this_, QList<QTouchEvent::TouchPoint>* atouchPoints) {
  ((QTouchEvent*)this_)->setTouchPoints(*atouchPoints);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:963
// [-2] void setDevice(QTouchDevice *)
extern "C" Q_DECL_EXPORT
void C_ZN11QTouchEvent9setDeviceEP12QTouchDevice(void *this_, QTouchDevice * adevice) {
  ((QTouchEvent*)this_)->setDevice(adevice);
}

//  main block end
