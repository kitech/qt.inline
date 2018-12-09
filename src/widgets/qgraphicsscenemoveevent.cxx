//  header block begin

#ifndef QT_MINIMAL
// since 0x040400
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicssceneevent.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsSceneMoveEvent is pure virtual: false
// QGraphicsSceneMoveEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGraphicsSceneMoveEvent_t {
  QByteArrayData data[1];
  char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsSceneMoveEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsSceneMoveEvent_t qt_meta_stringdata_MyQGraphicsSceneMoveEvent = {
   {
  QT_MOC_LITERAL(0, 0, 25), // "MyQGraphicsSceneMoveEvent"
  },
  "MyQGraphicsSceneMoveEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsSceneMoveEvent[] = {
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
class Q_DECL_EXPORT MyQGraphicsSceneMoveEvent : public QGraphicsSceneMoveEvent {
public:
  virtual ~MyQGraphicsSceneMoveEvent() {}
// void QGraphicsSceneMoveEvent()
MyQGraphicsSceneMoveEvent() : QGraphicsSceneMoveEvent() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:313
// [-2] void QGraphicsSceneMoveEvent()
extern "C" Q_DECL_EXPORT
void* C_ZN23QGraphicsSceneMoveEventC2Ev() {
  return  new QGraphicsSceneMoveEvent();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:314
// [-2] void ~QGraphicsSceneMoveEvent()
extern "C" Q_DECL_EXPORT
void C_ZN23QGraphicsSceneMoveEventD2Ev(void *this_) {
  delete (QGraphicsSceneMoveEvent*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:316
// [16] QPointF oldPos()
extern "C" Q_DECL_EXPORT
void* C_ZNK23QGraphicsSceneMoveEvent6oldPosEv(void *this_) {
  auto rv = ((QGraphicsSceneMoveEvent*)this_)->oldPos();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:317
// [-2] void setOldPos(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN23QGraphicsSceneMoveEvent9setOldPosERK7QPointF(void *this_, QPointF* pos) {
  ((QGraphicsSceneMoveEvent*)this_)->setOldPos(*pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:319
// [16] QPointF newPos()
extern "C" Q_DECL_EXPORT
void* C_ZNK23QGraphicsSceneMoveEvent6newPosEv(void *this_) {
  auto rv = ((QGraphicsSceneMoveEvent*)this_)->newPos();
return new QPointF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:320
// [-2] void setNewPos(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN23QGraphicsSceneMoveEvent9setNewPosERK7QPointF(void *this_, QPointF* pos) {
  ((QGraphicsSceneMoveEvent*)this_)->setNewPos(*pos);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #ifndef QT_MINIMAL
//  footer block end
