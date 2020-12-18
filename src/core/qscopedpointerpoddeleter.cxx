//  header block begin

// /usr/include/qt/QtCore/qscopedpointer.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qscopedpointer.h>
#include <QtCore>
#include "callback_inherit.h"

// QScopedPointerPodDeleter is pure virtual: false false
// QScopedPointerPodDeleter has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQScopedPointerPodDeleter_t {
  QByteArrayData data[1];
  char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQScopedPointerPodDeleter_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQScopedPointerPodDeleter_t qt_meta_stringdata_MyQScopedPointerPodDeleter = {
   {
  QT_MOC_LITERAL(0, 0, 26), // "MyQScopedPointerPodDeleter"
  },
  "MyQScopedPointerPodDeleter"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQScopedPointerPodDeleter[] = {
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
class Q_DECL_EXPORT MyQScopedPointerPodDeleter : public QScopedPointerPodDeleter {
public:
  virtual ~MyQScopedPointerPodDeleter() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qscopedpointerpoddeleter(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qscopedpointer.h:81
// [-2] void cleanup(void *) 
// (11)qm789873826 (40)_ZN24QScopedPointerPodDeleter7cleanupEPv
//static
/*void qm789873826(void * pointer)*/ {
  void * pointer = *(void **)this_;
  (void) QScopedPointerPodDeleter::cleanup(pointer);
   auto xptr = (void (*)(void*) ) &QScopedPointerPodDeleter::cleanup;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN24QScopedPointerPodDeleterD2Ev(void *this_)*/ {
  delete (QScopedPointerPodDeleter*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qscopedpointerpoddeleter
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
