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

// QGraphicsSceneMouseEvent is pure virtual: false false
// QGraphicsSceneMouseEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGraphicsSceneMouseEvent_t {
  QByteArrayData data[1];
  char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsSceneMouseEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsSceneMouseEvent_t qt_meta_stringdata_MyQGraphicsSceneMouseEvent = {
   {
  QT_MOC_LITERAL(0, 0, 26), // "MyQGraphicsSceneMouseEvent"
  },
  "MyQGraphicsSceneMouseEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsSceneMouseEvent[] = {
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
class Q_DECL_EXPORT MyQGraphicsSceneMouseEvent : public QGraphicsSceneMouseEvent {
public:
  virtual ~MyQGraphicsSceneMouseEvent() {}
// void QGraphicsSceneMouseEvent(QEvent::Type)
MyQGraphicsSceneMouseEvent(QEvent::Type type_) : QGraphicsSceneMouseEvent(type_) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgraphicsscenemouseevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:85
// [-2] void QGraphicsSceneMouseEvent(QEvent::Type) 
// (12)qm3139640757 (46)_ZN24QGraphicsSceneMouseEventC2EN6QEvent4TypeE
/*void* qm3139640757(QEvent::Type type_)*/{
  QEvent::Type type_ = *(QEvent::Type*)this_;
  this_ =  new QGraphicsSceneMouseEvent(type_);
  this_ =  new MyQGraphicsSceneMouseEvent(type_);
}


/*void C_ZN24QGraphicsSceneMouseEventD2Ev(void *this_)*/ {
  delete (QGraphicsSceneMouseEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgraphicsscenemouseevent
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
