//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(graphicsview)
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicssceneevent.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsSceneHoverEvent is pure virtual: false false
// QGraphicsSceneHoverEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGraphicsSceneHoverEvent_t {
  QByteArrayData data[1];
  char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsSceneHoverEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsSceneHoverEvent_t qt_meta_stringdata_MyQGraphicsSceneHoverEvent = {
   {
  QT_MOC_LITERAL(0, 0, 26), // "MyQGraphicsSceneHoverEvent"
  },
  "MyQGraphicsSceneHoverEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsSceneHoverEvent[] = {
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
class Q_DECL_EXPORT MyQGraphicsSceneHoverEvent : public QGraphicsSceneHoverEvent {
public:
  virtual ~MyQGraphicsSceneHoverEvent() {}
// void QGraphicsSceneHoverEvent(QEvent::Type)
MyQGraphicsSceneHoverEvent(QEvent::Type type_) : QGraphicsSceneHoverEvent(type_) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgraphicsscenehoverevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:201
// [-2] void QGraphicsSceneHoverEvent(QEvent::Type) 
// (11)qm966715501 (46)_ZN24QGraphicsSceneHoverEventC2EN6QEvent4TypeE
/*void* qm966715501(QEvent::Type type_)*/{
  QEvent::Type type_ = *(QEvent::Type*)this_;
  this_ =  new QGraphicsSceneHoverEvent(type_);
  this_ =  new MyQGraphicsSceneHoverEvent(type_);
}


/*void C_ZN24QGraphicsSceneHoverEventD2Ev(void *this_)*/ {
  delete (QGraphicsSceneHoverEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgraphicsscenehoverevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(graphicsview)
#endif // #ifndef QT_MINIMAL
//  footer block end
