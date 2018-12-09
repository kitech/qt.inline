//  header block begin

// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionHeader is pure virtual: false
// QStyleOptionHeader has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStyleOptionHeader_t {
  QByteArrayData data[1];
  char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStyleOptionHeader_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStyleOptionHeader_t qt_meta_stringdata_MyQStyleOptionHeader = {
   {
  QT_MOC_LITERAL(0, 0, 20), // "MyQStyleOptionHeader"
  },
  "MyQStyleOptionHeader"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStyleOptionHeader[] = {
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
class Q_DECL_EXPORT MyQStyleOptionHeader : public QStyleOptionHeader {
public:
  virtual ~MyQStyleOptionHeader() {}
// void QStyleOptionHeader()
MyQStyleOptionHeader() : QStyleOptionHeader() {}
// void QStyleOptionHeader(const QStyleOptionHeader &)
MyQStyleOptionHeader(const QStyleOptionHeader & other) : QStyleOptionHeader(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:226
// [-2] void QStyleOptionHeader()
extern "C" Q_DECL_EXPORT
void* C_ZN18QStyleOptionHeaderC2Ev() {
  return  new QStyleOptionHeader();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:227
// [-2] void QStyleOptionHeader(const QStyleOptionHeader &)
extern "C" Q_DECL_EXPORT
void* C_ZN18QStyleOptionHeaderC2ERKS_(QStyleOptionHeader* other) {
  return  new QStyleOptionHeader(*other);
}


extern "C" Q_DECL_EXPORT
void C_ZN18QStyleOptionHeaderD2Ev(void *this_) {
  delete (QStyleOptionHeader*)(this_);
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
