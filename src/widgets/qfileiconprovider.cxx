//  header block begin

// /usr/include/qt/QtWidgets/qfileiconprovider.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfileiconprovider.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QFileIconProvider is pure virtual: false
// QFileIconProvider has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQFileIconProvider_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQFileIconProvider_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQFileIconProvider_t qt_meta_stringdata_MyQFileIconProvider = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQFileIconProvider"
  },
  "MyQFileIconProvider"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQFileIconProvider[] = {
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
class Q_DECL_EXPORT MyQFileIconProvider : public QFileIconProvider {
public:
  virtual ~MyQFileIconProvider() {}
// void QFileIconProvider()
MyQFileIconProvider() : QFileIconProvider() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfileiconprovider.h:56
// [-2] void QFileIconProvider()
extern "C" Q_DECL_EXPORT
void* C_ZN17QFileIconProviderC2Ev() {
  return  new QFileIconProvider();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfileiconprovider.h:57
// [-2] void ~QFileIconProvider()
extern "C" Q_DECL_EXPORT
void C_ZN17QFileIconProviderD2Ev(void *this_) {
  delete (QFileIconProvider*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfileiconprovider.h:65
// [8] QIcon icon(QFileIconProvider::IconType)
extern "C" Q_DECL_EXPORT
void* C_ZNK17QFileIconProvider4iconENS_8IconTypeE(void *this_, QFileIconProvider::IconType type_) {
  auto rv = ((QFileIconProvider*)this_)->icon(type_);
return new QIcon(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfileiconprovider.h:66
// [8] QIcon icon(const QFileInfo &)
extern "C" Q_DECL_EXPORT
void* C_ZNK17QFileIconProvider4iconERK9QFileInfo(void *this_, QFileInfo* info) {
  auto rv = ((QFileIconProvider*)this_)->icon(*info);
return new QIcon(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfileiconprovider.h:67
// [8] QString type(const QFileInfo &)
extern "C" Q_DECL_EXPORT
void* C_ZNK17QFileIconProvider4typeERK9QFileInfo(void *this_, QFileInfo* info) {
  auto rv = ((QFileIconProvider*)this_)->type(*info);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfileiconprovider.h:69
// [-2] void setOptions(QFileIconProvider::Options)
extern "C" Q_DECL_EXPORT
void C_ZN17QFileIconProvider10setOptionsE6QFlagsINS_6OptionEE(void *this_, QFlags<QFileIconProvider::Option> options) {
  ((QFileIconProvider*)this_)->setOptions(options);
}

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtWidgets/qfileiconprovider.h:70
// [4] QFileIconProvider::Options options()
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
QFileIconProvider::Options* C_ZNK17QFileIconProvider7optionsEv(void *this_) {
  auto rv = ((QFileIconProvider*)this_)->options();
return new QFileIconProvider::Options(rv);
}
#endif // QT_VERSION >= 0x050200

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
