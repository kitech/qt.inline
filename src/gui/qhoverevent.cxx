//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QHoverEvent is pure virtual: false
// QHoverEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQHoverEvent_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQHoverEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQHoverEvent_t qt_meta_stringdata_MyQHoverEvent = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQHoverEvent"
  },
  "MyQHoverEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQHoverEvent[] = {
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
class Q_DECL_EXPORT MyQHoverEvent : public QHoverEvent {
public:
  virtual ~MyQHoverEvent() {}
// void QHoverEvent(QEvent::Type, const QPointF &, const QPointF &, Qt::KeyboardModifiers)
MyQHoverEvent(QEvent::Type type_, const QPointF & pos, const QPointF & oldPos, QFlags<Qt::KeyboardModifier> modifiers) : QHoverEvent(type_, pos, oldPos, modifiers) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:157
// [-2] void QHoverEvent(QEvent::Type, const QPointF &, const QPointF &, Qt::KeyboardModifiers)
extern "C" Q_DECL_EXPORT
void* C_ZN11QHoverEventC2EN6QEvent4TypeERK7QPointFS4_6QFlagsIN2Qt16KeyboardModifierEE(QEvent::Type type_, QPointF* pos, QPointF* oldPos, QFlags<Qt::KeyboardModifier> modifiers) {
  return  new QHoverEvent(type_, *pos, *oldPos, modifiers);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:158
// [-2] void ~QHoverEvent()
extern "C" Q_DECL_EXPORT
void C_ZN11QHoverEventD2Ev(void *this_) {
  delete (QHoverEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:161
// [8] QPoint pos()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QHoverEvent3posEv(void *this_) {
  auto rv = ((QHoverEvent*)this_)->pos();
return new QPoint(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:162
// [8] QPoint oldPos()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QHoverEvent6oldPosEv(void *this_) {
  auto rv = ((QHoverEvent*)this_)->oldPos();
return new QPoint(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:165
// [16] const QPointF & posF()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QHoverEvent4posFEv(void *this_) {
  auto& rv = ((QHoverEvent*)this_)->posF();
return new QPointF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:166
// [16] const QPointF & oldPosF()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QHoverEvent7oldPosFEv(void *this_) {
  auto& rv = ((QHoverEvent*)this_)->oldPosF();
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
