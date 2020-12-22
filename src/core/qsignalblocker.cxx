//  header block begin

// /usr/include/qt/QtCore/qobject.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qobject.h>
#include <QtCore>
#include "callback_inherit.h"

// QSignalBlocker is pure virtual: false false
// QSignalBlocker has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSignalBlocker_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSignalBlocker_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSignalBlocker_t qt_meta_stringdata_MyQSignalBlocker = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQSignalBlocker"
  },
  "MyQSignalBlocker"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSignalBlocker[] = {
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
class Q_DECL_EXPORT MyQSignalBlocker : public QSignalBlocker {
public:
  virtual ~MyQSignalBlocker() {}
// void QSignalBlocker(QObject *)
MyQSignalBlocker(QObject * o) : QSignalBlocker(o) {}
// void QSignalBlocker(QObject &)
MyQSignalBlocker(QObject & o) : QSignalBlocker(o) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsignalblocker(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:560
// [-2] void QSignalBlocker(QObject *) 
// (11)qm897789643 (31)_ZN14QSignalBlockerC2EP7QObject
/*void* qm897789643(QObject * o)*/{
  QObject * o = *(QObject **)this_;
  this_ =  new QSignalBlocker(o);
  this_ =  new MyQSignalBlocker(o);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:561
// [-2] void QSignalBlocker(QObject &) 
// (11)qm460654157 (31)_ZN14QSignalBlockerC2ER7QObject
/*void* qm460654157(QObject & o)*/{
  QObject & o = *(QObject *)this_;
  this_ =  new QSignalBlocker(o);
  this_ =  new MyQSignalBlocker(o);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:562
// [-2] void ~QSignalBlocker() 
// (12)qm3150586581 (23)_ZN14QSignalBlockerD2Ev
/*void qm3150586581 (void *this_)*/ {
  delete (QSignalBlocker*)(this_);
}
// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:567
// [-2] void reblock() 
// (11)qm216896519 (29)_ZN14QSignalBlocker7reblockEv
//static
/*void qm216896519()*/ {
  ;
  (void) ((QSignalBlocker*)this_)->reblock();
   auto xptr = (void (QSignalBlocker::*)() ) &QSignalBlocker::reblock;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:568
// [-2] void unblock() 
// (11)qm904324504 (29)_ZN14QSignalBlocker7unblockEv
//static
/*void qm904324504()*/ {
  ;
  (void) ((QSignalBlocker*)this_)->unblock();
   auto xptr = (void (QSignalBlocker::*)() ) &QSignalBlocker::unblock;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

  return fnptrsumval;
} // end ensure_inline_symbol_qsignalblocker
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
