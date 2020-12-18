//  header block begin

// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QFileOpenEvent is pure virtual: false false
// QFileOpenEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQFileOpenEvent_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQFileOpenEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQFileOpenEvent_t qt_meta_stringdata_MyQFileOpenEvent = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQFileOpenEvent"
  },
  "MyQFileOpenEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQFileOpenEvent[] = {
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
class Q_DECL_EXPORT MyQFileOpenEvent : public QFileOpenEvent {
public:
  virtual ~MyQFileOpenEvent() {}
// void QFileOpenEvent(const QString &)
MyQFileOpenEvent(const QString & file) : QFileOpenEvent(file) {}
// void QFileOpenEvent(const QUrl &)
MyQFileOpenEvent(const QUrl & url) : QFileOpenEvent(url) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qfileopenevent(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:784
// [8] QString file() const
// (12)qm1192897722 (27)_ZNK14QFileOpenEvent4fileEv
//static
/*void qm1192897722()*/ {
  ;
  (void) ((QFileOpenEvent*)this_)->file();
   auto xptr = (QString (QFileOpenEvent::*)() const ) &QFileOpenEvent::file;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:785
// [8] QUrl url() const
// (11)qm813759870 (26)_ZNK14QFileOpenEvent3urlEv
//static
/*void qm813759870()*/ {
  ;
  (void) ((QFileOpenEvent*)this_)->url();
   auto xptr = (QUrl (QFileOpenEvent::*)() const ) &QFileOpenEvent::url;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN14QFileOpenEventD2Ev(void *this_)*/ {
  delete (QFileOpenEvent*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qfileopenevent
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
