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

// QGraphicsSceneDragDropEvent is pure virtual: false false
// QGraphicsSceneDragDropEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGraphicsSceneDragDropEvent_t {
  QByteArrayData data[1];
  char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsSceneDragDropEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsSceneDragDropEvent_t qt_meta_stringdata_MyQGraphicsSceneDragDropEvent = {
   {
  QT_MOC_LITERAL(0, 0, 29), // "MyQGraphicsSceneDragDropEvent"
  },
  "MyQGraphicsSceneDragDropEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsSceneDragDropEvent[] = {
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
class Q_DECL_EXPORT MyQGraphicsSceneDragDropEvent : public QGraphicsSceneDragDropEvent {
public:
  virtual ~MyQGraphicsSceneDragDropEvent() {}
// void QGraphicsSceneDragDropEvent(QEvent::Type)
MyQGraphicsSceneDragDropEvent(QEvent::Type type_) : QGraphicsSceneDragDropEvent(type_) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgraphicsscenedragdropevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:252
// [-2] void QGraphicsSceneDragDropEvent(QEvent::Type) 
// (12)qm1761511659 (49)_ZN27QGraphicsSceneDragDropEventC2EN6QEvent4TypeE
/*void* qm1761511659(QEvent::Type type_)*/{
  QEvent::Type type_ = *(QEvent::Type*)this_;
  this_ =  new QGraphicsSceneDragDropEvent(type_);
  this_ =  new MyQGraphicsSceneDragDropEvent(type_);
}


/*void C_ZN27QGraphicsSceneDragDropEventD2Ev(void *this_)*/ {
  delete (QGraphicsSceneDragDropEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgraphicsscenedragdropevent
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
