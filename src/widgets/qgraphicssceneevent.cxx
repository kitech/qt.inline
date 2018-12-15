//  header block begin

// since 0x040200
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicssceneevent.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsSceneEvent is pure virtual: false
// QGraphicsSceneEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGraphicsSceneEvent_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsSceneEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsSceneEvent_t qt_meta_stringdata_MyQGraphicsSceneEvent = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQGraphicsSceneEvent"
  },
  "MyQGraphicsSceneEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsSceneEvent[] = {
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
class Q_DECL_EXPORT MyQGraphicsSceneEvent : public QGraphicsSceneEvent {
public:
  virtual ~MyQGraphicsSceneEvent() {}
// void QGraphicsSceneEvent(QEvent::Type)
MyQGraphicsSceneEvent(QEvent::Type type_) : QGraphicsSceneEvent(type_) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:68
// [-2] void QGraphicsSceneEvent(QEvent::Type)
extern "C" Q_DECL_EXPORT
void* C_ZN19QGraphicsSceneEventC2EN6QEvent4TypeE(QEvent::Type type_) {
  return  new QGraphicsSceneEvent(type_);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:69
// [-2] void ~QGraphicsSceneEvent()
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsSceneEventD2Ev(void *this_) {
  delete (QGraphicsSceneEvent*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:71
// [8] QWidget * widget()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QGraphicsSceneEvent6widgetEv(void *this_) {
  return (void*)((QGraphicsSceneEvent*)this_)->widget();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:72
// [-2] void setWidget(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN19QGraphicsSceneEvent9setWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QGraphicsSceneEvent*)this_)->setWidget(widget);
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
