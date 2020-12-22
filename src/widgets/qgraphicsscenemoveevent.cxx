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

// QGraphicsSceneMoveEvent is pure virtual: false false
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgraphicsscenemoveevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:313
// [-2] void QGraphicsSceneMoveEvent() 
// (12)qm1658177220 (32)_ZN23QGraphicsSceneMoveEventC2Ev
/*void* qm1658177220()*/{
  ;
  this_ =  new QGraphicsSceneMoveEvent();
  this_ =  new MyQGraphicsSceneMoveEvent();
}


/*void C_ZN23QGraphicsSceneMoveEventD2Ev(void *this_)*/ {
  delete (QGraphicsSceneMoveEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgraphicsscenemoveevent
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
