//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QHelpEvent is pure virtual: false
// QHelpEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQHelpEvent_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQHelpEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQHelpEvent_t qt_meta_stringdata_MyQHelpEvent = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQHelpEvent"
  },
  "MyQHelpEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQHelpEvent[] = {
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
class Q_DECL_EXPORT MyQHelpEvent : public QHelpEvent {
public:
  virtual ~MyQHelpEvent() {}
// void QHelpEvent(QEvent::Type, const QPoint &, const QPoint &)
MyQHelpEvent(QEvent::Type type_, const QPoint & pos, const QPoint & globalPos) : QHelpEvent(type_, pos, globalPos) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:680
// [-2] void QHelpEvent(QEvent::Type, const QPoint &, const QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QHelpEventC2EN6QEvent4TypeERK6QPointS4_(QEvent::Type type_, QPoint* pos, QPoint* globalPos) {
  return  new QHelpEvent(type_, *pos, *globalPos);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:681
// [-2] void ~QHelpEvent()
extern "C" Q_DECL_EXPORT
void C_ZN10QHelpEventD2Ev(void *this_) {
  delete (QHelpEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:683
// [4] int x()
extern "C" Q_DECL_EXPORT
int C_ZNK10QHelpEvent1xEv(void *this_) {
  return (int)((QHelpEvent*)this_)->x();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:684
// [4] int y()
extern "C" Q_DECL_EXPORT
int C_ZNK10QHelpEvent1yEv(void *this_) {
  return (int)((QHelpEvent*)this_)->y();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:685
// [4] int globalX()
extern "C" Q_DECL_EXPORT
int C_ZNK10QHelpEvent7globalXEv(void *this_) {
  return (int)((QHelpEvent*)this_)->globalX();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:686
// [4] int globalY()
extern "C" Q_DECL_EXPORT
int C_ZNK10QHelpEvent7globalYEv(void *this_) {
  return (int)((QHelpEvent*)this_)->globalY();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:688
// [8] const QPoint & pos()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QHelpEvent3posEv(void *this_) {
  auto& rv = ((QHelpEvent*)this_)->pos();
return new QPoint(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:689
// [8] const QPoint & globalPos()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QHelpEvent9globalPosEv(void *this_) {
  auto& rv = ((QHelpEvent*)this_)->globalPos();
return new QPoint(rv);
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
