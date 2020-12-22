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

// QGraphicsSceneHelpEvent is pure virtual: false false
// QGraphicsSceneHelpEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGraphicsSceneHelpEvent_t {
  QByteArrayData data[1];
  char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsSceneHelpEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsSceneHelpEvent_t qt_meta_stringdata_MyQGraphicsSceneHelpEvent = {
   {
  QT_MOC_LITERAL(0, 0, 25), // "MyQGraphicsSceneHelpEvent"
  },
  "MyQGraphicsSceneHelpEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsSceneHelpEvent[] = {
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
class Q_DECL_EXPORT MyQGraphicsSceneHelpEvent : public QGraphicsSceneHelpEvent {
public:
  virtual ~MyQGraphicsSceneHelpEvent() {}
// void QGraphicsSceneHelpEvent(QEvent::Type)
MyQGraphicsSceneHelpEvent(QEvent::Type type_) : QGraphicsSceneHelpEvent(type_) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgraphicsscenehelpevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:234
// [-2] void QGraphicsSceneHelpEvent(QEvent::Type) 
// (12)qm1492684792 (45)_ZN23QGraphicsSceneHelpEventC2EN6QEvent4TypeE
/*void* qm1492684792(QEvent::Type type_)*/{
  QEvent::Type type_ = *(QEvent::Type*)this_;
  this_ =  new QGraphicsSceneHelpEvent(type_);
  this_ =  new MyQGraphicsSceneHelpEvent(type_);
}


/*void C_ZN23QGraphicsSceneHelpEventD2Ev(void *this_)*/ {
  delete (QGraphicsSceneHelpEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgraphicsscenehelpevent
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
