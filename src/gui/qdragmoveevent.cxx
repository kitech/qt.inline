//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QDragMoveEvent is pure virtual: false false
// QDragMoveEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQDragMoveEvent_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQDragMoveEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQDragMoveEvent_t qt_meta_stringdata_MyQDragMoveEvent = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQDragMoveEvent"
  },
  "MyQDragMoveEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQDragMoveEvent[] = {
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
class Q_DECL_EXPORT MyQDragMoveEvent : public QDragMoveEvent {
public:
  virtual ~MyQDragMoveEvent() {}
// void QDragMoveEvent(const QPoint &, Qt::DropActions, const QMimeData *, Qt::MouseButtons, Qt::KeyboardModifiers, QEvent::Type)
MyQDragMoveEvent(const QPoint & pos, QFlags<Qt::DropAction> actions, const QMimeData * data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, QEvent::Type type_) : QDragMoveEvent(pos, actions, data, buttons, modifiers, type_) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qdragmoveevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:688
// [16] QRect answerRect() const
// (11)qm710559280 (34)_ZNK14QDragMoveEvent10answerRectEv
//static
/*void qm710559280()*/ {
  ;
  (void) ((QDragMoveEvent*)this_)->answerRect();
   auto xptr = (QRect (QDragMoveEvent::*)() const ) &QDragMoveEvent::answerRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:690
// [-2] void accept() 
// (10)qm46107050 (28)_ZN14QDragMoveEvent6acceptEv
//static
/*void qm46107050()*/ {
  ;
  (void) ((QDragMoveEvent*)this_)->accept();
   auto xptr = (void (QDragMoveEvent::*)() ) &QDragMoveEvent::accept;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:691
// [-2] void ignore() 
// (12)qm1691794623 (28)_ZN14QDragMoveEvent6ignoreEv
//static
/*void qm1691794623()*/ {
  ;
  (void) ((QDragMoveEvent*)this_)->ignore();
   auto xptr = (void (QDragMoveEvent::*)() ) &QDragMoveEvent::ignore;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:693
// [-2] void accept(const QRect &) 
// (11)qm599932905 (35)_ZN14QDragMoveEvent6acceptERK5QRect
//static
/*void qm599932905(const QRect & r)*/ {
  const QRect & r = *(const QRect *)this_;
  (void) ((QDragMoveEvent*)this_)->accept(r);
   auto xptr = (void (QDragMoveEvent::*)(QRect const&) ) &QDragMoveEvent::accept;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:694
// [-2] void ignore(const QRect &) 
// (12)qm3372001149 (35)_ZN14QDragMoveEvent6ignoreERK5QRect
//static
/*void qm3372001149(const QRect & r)*/ {
  const QRect & r = *(const QRect *)this_;
  (void) ((QDragMoveEvent*)this_)->ignore(r);
   auto xptr = (void (QDragMoveEvent::*)(QRect const&) ) &QDragMoveEvent::ignore;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN14QDragMoveEventD2Ev(void *this_)*/ {
  delete (QDragMoveEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qdragmoveevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
