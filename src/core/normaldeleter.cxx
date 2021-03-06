//  header block begin

// /usr/include/qt/QtCore/qsharedpointer_impl.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsharedpointer.h>
#include <QtCore>
#include "callback_inherit.h"

// NormalDeleter is pure virtual: false
// NormalDeleter has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyNormalDeleter_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyNormalDeleter_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyNormalDeleter_t qt_meta_stringdata_MyNormalDeleter = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyNormalDeleter"
  },
  "MyNormalDeleter"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyNormalDeleter[] = {
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
class Q_DECL_EXPORT MyNormalDeleter : public QtSharedPointer::NormalDeleter {
public:
  virtual ~MyNormalDeleter() {}
};


extern "C" Q_DECL_EXPORT
void C_ZN13NormalDeleterD2Ev(void *this_) {
  delete (QtSharedPointer::NormalDeleter*)(this_);
}
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
