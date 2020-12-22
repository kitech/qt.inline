//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(thread)
// /usr/include/qt/QtCore/qsemaphore.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsemaphore.h>
#include <QtCore>
#include "callback_inherit.h"

// QSemaphore is pure virtual: false false
// QSemaphore has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSemaphore_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSemaphore_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSemaphore_t qt_meta_stringdata_MyQSemaphore = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQSemaphore"
  },
  "MyQSemaphore"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSemaphore[] = {
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
class Q_DECL_EXPORT MyQSemaphore : public QSemaphore {
public:
  virtual ~MyQSemaphore() {}
// void QSemaphore(int)
MyQSemaphore(int n) : QSemaphore(n) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsemaphore(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsemaphore.h:54
// [-2] void QSemaphore(int) 
// (12)qm1532420921 (19)_ZN10QSemaphoreC2Ei
/*void* qm1532420921(int n)*/{
  int n = *(int*)this_;
  this_ =  new QSemaphore(n);
  this_ =  new MyQSemaphore(n);
}


/*void C_ZN10QSemaphoreD2Ev(void *this_)*/ {
  delete (QSemaphore*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsemaphore
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(thread)
#endif // #ifndef QT_MINIMAL
//  footer block end
