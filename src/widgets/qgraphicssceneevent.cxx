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

// QGraphicsSceneEvent is pure virtual: false false
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgraphicssceneevent(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN19QGraphicsSceneEventD2Ev(void *this_)*/ {
  delete (QGraphicsSceneEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgraphicssceneevent
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
