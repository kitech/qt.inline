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

// QGraphicsSceneContextMenuEvent is pure virtual: false false
// QGraphicsSceneContextMenuEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGraphicsSceneContextMenuEvent_t {
  QByteArrayData data[1];
  char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsSceneContextMenuEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsSceneContextMenuEvent_t qt_meta_stringdata_MyQGraphicsSceneContextMenuEvent = {
   {
  QT_MOC_LITERAL(0, 0, 32), // "MyQGraphicsSceneContextMenuEvent"
  },
  "MyQGraphicsSceneContextMenuEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsSceneContextMenuEvent[] = {
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
class Q_DECL_EXPORT MyQGraphicsSceneContextMenuEvent : public QGraphicsSceneContextMenuEvent {
public:
  virtual ~MyQGraphicsSceneContextMenuEvent() {}
// void QGraphicsSceneContextMenuEvent(QEvent::Type)
MyQGraphicsSceneContextMenuEvent(QEvent::Type type_) : QGraphicsSceneContextMenuEvent(type_) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgraphicsscenecontextmenuevent(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN30QGraphicsSceneContextMenuEventD2Ev(void *this_)*/ {
  delete (QGraphicsSceneContextMenuEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgraphicsscenecontextmenuevent
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
