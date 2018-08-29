//  header block begin
// /usr/include/qt/QtCore/qstringliteral.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstringliteral.h>
#include <QtCore>
#include "callback_inherit.h"

// QStringDataPtr is pure virtual: false
// QStringDataPtr has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQStringDataPtr_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStringDataPtr_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStringDataPtr_t qt_meta_stringdata_MyQStringDataPtr = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQStringDataPtr"
  },
  "MyQStringDataPtr"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStringDataPtr[] = {
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
class Q_DECL_EXPORT MyQStringDataPtr : public QStringDataPtr {
public:
  virtual ~MyQStringDataPtr() {}
};

extern "C" Q_DECL_EXPORT
void C_ZN14QStringDataPtrD2Ev(void *this_) {
  delete (QStringDataPtr*)(this_);
}
//  main block end
