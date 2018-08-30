//  header block begin
// /usr/include/qt/QtWidgets/qstylefactory.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstylefactory.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleFactory is pure virtual: false
// QStyleFactory has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQStyleFactory_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStyleFactory_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStyleFactory_t qt_meta_stringdata_MyQStyleFactory = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQStyleFactory"
  },
  "MyQStyleFactory"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStyleFactory[] = {
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
class Q_DECL_EXPORT MyQStyleFactory : public QStyleFactory {
public:
  virtual ~MyQStyleFactory() {}
};

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstylefactory.h:54
// [8] QStringList keys()
extern "C" Q_DECL_EXPORT
void* C_ZN13QStyleFactory4keysEv() {
  auto rv = QStyleFactory::keys();
return new QStringList(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstylefactory.h:55
// [8] QStyle * create(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QStyleFactory6createERK7QString(QString* arg0) {
  return (void*)QStyleFactory::create(*arg0);
}


extern "C" Q_DECL_EXPORT
void C_ZN13QStyleFactoryD2Ev(void *this_) {
  delete (QStyleFactory*)(this_);
}
//  main block end
