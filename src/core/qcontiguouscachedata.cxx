//  header block begin
// /usr/include/qt/QtCore/qcontiguouscache.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcontiguouscache.h>
#include <QtCore>
#include "callback_inherit.h"

// QContiguousCacheData is pure virtual: false
// QContiguousCacheData has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQContiguousCacheData_t {
  QByteArrayData data[1];
  char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQContiguousCacheData_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQContiguousCacheData_t qt_meta_stringdata_MyQContiguousCacheData = {
   {
  QT_MOC_LITERAL(0, 0, 22), // "MyQContiguousCacheData"
  },
  "MyQContiguousCacheData"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQContiguousCacheData[] = {
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
class Q_DECL_EXPORT MyQContiguousCacheData : public QContiguousCacheData {
public:
  virtual ~MyQContiguousCacheData() {}
};
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcontiguouscache.h:67
// [8] QContiguousCacheData * allocateData(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN20QContiguousCacheData12allocateDataEii(int size, int alignment) {
  return (void*)QContiguousCacheData::allocateData(size, alignment);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcontiguouscache.h:68
// [-2] void freeData(QContiguousCacheData *)
extern "C" Q_DECL_EXPORT
void C_ZN20QContiguousCacheData8freeDataEPS_(QContiguousCacheData * data) {
  QContiguousCacheData::freeData(data);
}


extern "C" Q_DECL_EXPORT
void C_ZN20QContiguousCacheDataD2Ev(void *this_) {
  delete (QContiguousCacheData*)(this_);
}
//  main block end
