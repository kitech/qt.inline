//  header block begin

// /usr/include/qt/QtCore/qeventloop.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qeventloop.h>
#include <QtCore>
#include "callback_inherit.h"

// QEventLoopLocker is pure virtual: false false
// QEventLoopLocker has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQEventLoopLocker_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQEventLoopLocker_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQEventLoopLocker_t qt_meta_stringdata_MyQEventLoopLocker = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQEventLoopLocker"
  },
  "MyQEventLoopLocker"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQEventLoopLocker[] = {
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
class Q_DECL_EXPORT MyQEventLoopLocker : public QEventLoopLocker {
public:
  virtual ~MyQEventLoopLocker() {}
// void QEventLoopLocker()
MyQEventLoopLocker() : QEventLoopLocker() {}
// void QEventLoopLocker(QEventLoop *)
MyQEventLoopLocker(QEventLoop * loop) : QEventLoopLocker(loop) {}
// void QEventLoopLocker(QThread *)
MyQEventLoopLocker(QThread * thread) : QEventLoopLocker(thread) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qeventlooplocker(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:93
// [-2] void QEventLoopLocker() 
// (11)qm789533354 (25)_ZN16QEventLoopLockerC2Ev
/*void* qm789533354()*/{
  ;
  this_ =  new QEventLoopLocker();
  this_ =  new MyQEventLoopLocker();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:94
// [-2] void QEventLoopLocker(QEventLoop *) 
// (12)qm3189725393 (37)_ZN16QEventLoopLockerC2EP10QEventLoop
/*void* qm3189725393(QEventLoop * loop)*/{
  QEventLoop * loop = *(QEventLoop **)this_;
  this_ =  new QEventLoopLocker(loop);
  this_ =  new MyQEventLoopLocker(loop);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:95
// [-2] void QEventLoopLocker(QThread *) 
// (11)qm606961131 (33)_ZN16QEventLoopLockerC2EP7QThread
/*void* qm606961131(QThread * thread)*/{
  QThread * thread = *(QThread **)this_;
  this_ =  new QEventLoopLocker(thread);
  this_ =  new MyQEventLoopLocker(thread);
}


/*void C_ZN16QEventLoopLockerD2Ev(void *this_)*/ {
  delete (QEventLoopLocker*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qeventlooplocker
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
