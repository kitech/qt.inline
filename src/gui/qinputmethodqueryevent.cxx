//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QInputMethodQueryEvent is pure virtual: false false
// QInputMethodQueryEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQInputMethodQueryEvent_t {
  QByteArrayData data[1];
  char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQInputMethodQueryEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQInputMethodQueryEvent_t qt_meta_stringdata_MyQInputMethodQueryEvent = {
   {
  QT_MOC_LITERAL(0, 0, 24), // "MyQInputMethodQueryEvent"
  },
  "MyQInputMethodQueryEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQInputMethodQueryEvent[] = {
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
class Q_DECL_EXPORT MyQInputMethodQueryEvent : public QInputMethodQueryEvent {
public:
  virtual ~MyQInputMethodQueryEvent() {}
// void QInputMethodQueryEvent(Qt::InputMethodQueries)
MyQInputMethodQueryEvent(QFlags<Qt::InputMethodQuery> queries) : QInputMethodQueryEvent(queries) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qinputmethodqueryevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:623
// [-2] void QInputMethodQueryEvent(Qt::InputMethodQueries) 
// (11)qm541641888 (62)_ZN22QInputMethodQueryEventC2E6QFlagsIN2Qt16InputMethodQueryEE
/*void* qm541641888(QFlags<Qt::InputMethodQuery> queries)*/{
  QFlags<Qt::InputMethodQuery> queries = *(QFlags<Qt::InputMethodQuery>*)this_;
  this_ =  new QInputMethodQueryEvent(queries);
  this_ =  new MyQInputMethodQueryEvent(queries);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:626
// [4] Qt::InputMethodQueries queries() const
// (12)qm3221290459 (38)_ZNK22QInputMethodQueryEvent7queriesEv
//static
/*void qm3221290459()*/ {
  ;
  (void) ((QInputMethodQueryEvent*)this_)->queries();
   auto xptr = (QFlags<Qt::InputMethodQuery> (QInputMethodQueryEvent::*)() const ) &QInputMethodQueryEvent::queries;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN22QInputMethodQueryEventD2Ev(void *this_)*/ {
  delete (QInputMethodQueryEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qinputmethodqueryevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
