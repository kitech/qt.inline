//  header block begin

// /usr/include/qt/QtCore/qsharedpointer_impl.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsharedpointer.h>
#include <QtCore>
#include "callback_inherit.h"

// ExternalRefCountData is pure virtual: false false
// ExternalRefCountData has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyExternalRefCountData_t {
  QByteArrayData data[1];
  char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyExternalRefCountData_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyExternalRefCountData_t qt_meta_stringdata_MyExternalRefCountData = {
   {
  QT_MOC_LITERAL(0, 0, 22), // "MyExternalRefCountData"
  },
  "MyExternalRefCountData"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyExternalRefCountData[] = {
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
class Q_DECL_EXPORT MyExternalRefCountData : public QtSharedPointer::ExternalRefCountData {
public:
  virtual ~MyExternalRefCountData() {}
// void ExternalRefCountData(QtSharedPointer::ExternalRefCountData::DestroyerFn)
MyExternalRefCountData(QtSharedPointer::ExternalRefCountData::DestroyerFn d) : QtSharedPointer::ExternalRefCountData(d) {}
// void ExternalRefCountData(Qt::Initialization)
MyExternalRefCountData(Qt::Initialization arg0) : QtSharedPointer::ExternalRefCountData(arg0) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_externalrefcountdata(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedpointer_impl.h:140
// [-2] void ExternalRefCountData(QtSharedPointer::ExternalRefCountData::DestroyerFn) 
// (11)qm135352767 (53)_ZN15QtSharedPointer20ExternalRefCountDataC2EPFvPS0_E
/*void* qm135352767(QtSharedPointer::ExternalRefCountData::DestroyerFn d)*/{
  QtSharedPointer::ExternalRefCountData::DestroyerFn d = *(QtSharedPointer::ExternalRefCountData::DestroyerFn*)this_;
 this_ =  new QtSharedPointer::ExternalRefCountData(d);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedpointer_impl.h:146
// [-2] void ExternalRefCountData(Qt::Initialization) 
// (12)qm1374691160 (66)_ZN15QtSharedPointer20ExternalRefCountDataC2EN2Qt14InitializationE
/*void* qm1374691160(Qt::Initialization arg0)*/{
  Qt::Initialization arg0 = *(Qt::Initialization*)this_;
 this_ =  new QtSharedPointer::ExternalRefCountData(arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedpointer_impl.h:147
// [-2] void ~ExternalRefCountData() 
// (12)qm3495872856 (46)_ZN15QtSharedPointer20ExternalRefCountDataD2Ev
/*void qm3495872856 (void *this_)*/ {
  delete (QtSharedPointer::ExternalRefCountData*)(this_);
}
// Public static inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedpointer_impl.h:159
// [-2] void operator delete(void *) 
// (11)qm667510842 (47)_ZN15QtSharedPointer20ExternalRefCountDatadlEPv
//static
/*void qm667510842(void * ptr)*/ {
  void * ptr = *(void **)this_;
  (void) QtSharedPointer::ExternalRefCountData::operator delete(ptr);
  // auto xptr = (void (*)(void*) ) &QtSharedPointer::ExternalRefCountData::operator delete;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsharedpointer_impl.h:160
// [-2] void operator delete(void *, void *) 
// (12)qm3394435574 (50)_ZN15QtSharedPointer20ExternalRefCountDatadlEPvS1_
//static
/*void qm3394435574(void * arg0, void * arg1)*/ {
  void * arg0 = *(void **)this_; void * arg1 = *(void **)this_;
  (void) QtSharedPointer::ExternalRefCountData::operator delete(arg0, arg1);
  // auto xptr = (void (*)(void*, void*) ) &QtSharedPointer::ExternalRefCountData::operator delete;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

  return fnptrsumval;
} // end ensure_inline_symbol_externalrefcountdata
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
