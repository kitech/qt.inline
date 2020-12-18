//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QDragEnterEvent is pure virtual: false false
// QDragEnterEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQDragEnterEvent_t {
  QByteArrayData data[1];
  char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQDragEnterEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQDragEnterEvent_t qt_meta_stringdata_MyQDragEnterEvent = {
   {
  QT_MOC_LITERAL(0, 0, 17), // "MyQDragEnterEvent"
  },
  "MyQDragEnterEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQDragEnterEvent[] = {
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
class Q_DECL_EXPORT MyQDragEnterEvent : public QDragEnterEvent {
public:
  virtual ~MyQDragEnterEvent() {}
// void QDragEnterEvent(const QPoint &, Qt::DropActions, const QMimeData *, Qt::MouseButtons, Qt::KeyboardModifiers)
MyQDragEnterEvent(const QPoint & pos, QFlags<Qt::DropAction> actions, const QMimeData * data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers) : QDragEnterEvent(pos, actions, data, buttons, modifiers) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qdragenterevent(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN15QDragEnterEventD2Ev(void *this_)*/ {
  delete (QDragEnterEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qdragenterevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
