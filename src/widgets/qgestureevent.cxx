//  header block begin

// since 0x040600
// /usr/include/qt/QtWidgets/qgesture.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgesture.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGestureEvent is pure virtual: false
// QGestureEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGestureEvent_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGestureEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGestureEvent_t qt_meta_stringdata_MyQGestureEvent = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQGestureEvent"
  },
  "MyQGestureEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGestureEvent[] = {
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
class Q_DECL_EXPORT MyQGestureEvent : public QGestureEvent {
public:
  virtual ~MyQGestureEvent() {}
// void QGestureEvent(const QList<QGesture *> &)
MyQGestureEvent(const QList<QGesture *> & gestures) : QGestureEvent(gestures) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:277
// [-2] void QGestureEvent(const QList<QGesture *> &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QGestureEventC2ERK5QListIP8QGestureE(QList<QGesture *>* gestures) {
  return  new QGestureEvent(*gestures);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:278
// [-2] void ~QGestureEvent()
extern "C" Q_DECL_EXPORT
void C_ZN13QGestureEventD2Ev(void *this_) {
  delete (QGestureEvent*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:280
// [8] QList<QGesture *> gestures()
extern "C" Q_DECL_EXPORT
QList<QGesture *>* C_ZNK13QGestureEvent8gesturesEv(void *this_) {
  auto rv = ((QGestureEvent*)this_)->gestures();
return new QList<QGesture *>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:281
// [8] QGesture * gesture(Qt::GestureType)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGestureEvent7gestureEN2Qt11GestureTypeE(void *this_, Qt::GestureType type_) {
  return (void*)((QGestureEvent*)this_)->gesture(type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:283
// [8] QList<QGesture *> activeGestures()
extern "C" Q_DECL_EXPORT
QList<QGesture *>* C_ZNK13QGestureEvent14activeGesturesEv(void *this_) {
  auto rv = ((QGestureEvent*)this_)->activeGestures();
return new QList<QGesture *>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:284
// [8] QList<QGesture *> canceledGestures()
extern "C" Q_DECL_EXPORT
QList<QGesture *>* C_ZNK13QGestureEvent16canceledGesturesEv(void *this_) {
  auto rv = ((QGestureEvent*)this_)->canceledGestures();
return new QList<QGesture *>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:291
// [-2] void setAccepted(QGesture *, bool)
extern "C" Q_DECL_EXPORT
void C_ZN13QGestureEvent11setAcceptedEP8QGestureb(void *this_, QGesture * arg0, bool arg1) {
  ((QGestureEvent*)this_)->setAccepted(arg0, arg1);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:292
// [-2] void accept(QGesture *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGestureEvent6acceptEP8QGesture(void *this_, QGesture * arg0) {
  ((QGestureEvent*)this_)->accept(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:293
// [-2] void ignore(QGesture *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGestureEvent6ignoreEP8QGesture(void *this_, QGesture * arg0) {
  ((QGestureEvent*)this_)->ignore(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:294
// [1] bool isAccepted(QGesture *)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QGestureEvent10isAcceptedEP8QGesture(void *this_, QGesture * arg0) {
  return (bool)((QGestureEvent*)this_)->isAccepted(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:296
// [-2] void setAccepted(Qt::GestureType, bool)
extern "C" Q_DECL_EXPORT
void C_ZN13QGestureEvent11setAcceptedEN2Qt11GestureTypeEb(void *this_, Qt::GestureType arg0, bool arg1) {
  ((QGestureEvent*)this_)->setAccepted(arg0, arg1);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:297
// [-2] void accept(Qt::GestureType)
extern "C" Q_DECL_EXPORT
void C_ZN13QGestureEvent6acceptEN2Qt11GestureTypeE(void *this_, Qt::GestureType arg0) {
  ((QGestureEvent*)this_)->accept(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:298
// [-2] void ignore(Qt::GestureType)
extern "C" Q_DECL_EXPORT
void C_ZN13QGestureEvent6ignoreEN2Qt11GestureTypeE(void *this_, Qt::GestureType arg0) {
  ((QGestureEvent*)this_)->ignore(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:299
// [1] bool isAccepted(Qt::GestureType)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QGestureEvent10isAcceptedEN2Qt11GestureTypeE(void *this_, Qt::GestureType arg0) {
  return (bool)((QGestureEvent*)this_)->isAccepted(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:301
// [-2] void setWidget(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN13QGestureEvent9setWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QGestureEvent*)this_)->setWidget(widget);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:302
// [8] QWidget * widget()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGestureEvent6widgetEv(void *this_) {
  return (void*)((QGestureEvent*)this_)->widget();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:305
// [16] QPointF mapToGraphicsScene(const QPointF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QGestureEvent18mapToGraphicsSceneERK7QPointF(void *this_, QPointF* gesturePoint) {
  auto rv = ((QGestureEvent*)this_)->mapToGraphicsScene(*gesturePoint);
return new QPointF(rv);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
