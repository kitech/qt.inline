//  header block begin
// /usr/include/qt/QtCore/qshareddata.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qshareddata.h>
#include <QtCore>
#include "callback_inherit.h"

// QSharedData is pure virtual: false
// QSharedData has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQSharedData_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSharedData_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSharedData_t qt_meta_stringdata_MyQSharedData = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQSharedData"
  },
  "MyQSharedData"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSharedData[] = {
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
class Q_DECL_EXPORT MyQSharedData : public QSharedData {
public:
  virtual ~MyQSharedData() {}
// void QSharedData()
MyQSharedData() : QSharedData() {}
// void QSharedData(const QSharedData &)
MyQSharedData(const QSharedData & arg0) : QSharedData(arg0) {}
};
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qshareddata.h:60
// [-2] void QSharedData()
extern "C" Q_DECL_EXPORT
void* C_ZN11QSharedDataC2Ev() {
  return  new QSharedData();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qshareddata.h:61
// [-2] void QSharedData(const QSharedData &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QSharedDataC2ERKS_(QSharedData* arg0) {
  return  new QSharedData(*arg0);
}


extern "C" Q_DECL_EXPORT
void C_ZN11QSharedDataD2Ev(void *this_) {
  delete (QSharedData*)(this_);
}
//  main block end
