//  header block begin

// /usr/include/qt/QtCore/qwaitcondition.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwaitcondition.h>
#include <QtCore>
#include "callback_inherit.h"

// QWaitCondition is pure virtual: false false
// QWaitCondition has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQWaitCondition_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQWaitCondition_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQWaitCondition_t qt_meta_stringdata_MyQWaitCondition = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQWaitCondition"
  },
  "MyQWaitCondition"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQWaitCondition[] = {
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
class Q_DECL_EXPORT MyQWaitCondition : public QWaitCondition {
public:
  virtual ~MyQWaitCondition() {}
// void QWaitCondition()
MyQWaitCondition() : QWaitCondition() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qwaitcondition(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qwaitcondition.h:56
// [-2] void QWaitCondition() 
// (12)qm3530368176 (23)_ZN14QWaitConditionC2Ev
/*void* qm3530368176()*/{
  ;
  this_ =  new QWaitCondition();
  this_ =  new MyQWaitCondition();
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qwaitcondition.h:70
// [-2] void notify_one() 
// (11)qm901202472 (33)_ZN14QWaitCondition10notify_oneEv
//static
/*void qm901202472()*/ {
  ;
  (void) ((QWaitCondition*)this_)->notify_one();
   auto xptr = (void (QWaitCondition::*)() ) &QWaitCondition::notify_one;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qwaitcondition.h:71
// [-2] void notify_all() 
// (11)qm794758989 (33)_ZN14QWaitCondition10notify_allEv
//static
/*void qm794758989()*/ {
  ;
  (void) ((QWaitCondition*)this_)->notify_all();
   auto xptr = (void (QWaitCondition::*)() ) &QWaitCondition::notify_all;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN14QWaitConditionD2Ev(void *this_)*/ {
  delete (QWaitCondition*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qwaitcondition
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
