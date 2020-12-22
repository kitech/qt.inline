//  header block begin

// /usr/include/qt/QtQuick/qquickimageprovider.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qquickimageprovider.h>
#include <QtQuick>
#include "callback_inherit.h"

// QQuickImageProvider is pure virtual: false false
// QQuickImageProvider has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQQuickImageProvider_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQQuickImageProvider_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQQuickImageProvider_t qt_meta_stringdata_MyQQuickImageProvider = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQQuickImageProvider"
  },
  "MyQQuickImageProvider"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQQuickImageProvider[] = {
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
class Q_DECL_EXPORT MyQQuickImageProvider : public QQuickImageProvider {
public:
  virtual ~MyQQuickImageProvider() {}
// void QQuickImageProvider(QQmlImageProviderBase::ImageType, QQmlImageProviderBase::Flags)
MyQQuickImageProvider(QQmlImageProviderBase::ImageType type_, QFlags<QQmlImageProviderBase::Flag> flags) : QQuickImageProvider(type_, flags) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qquickimageprovider(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:99
// [-2] void QQuickImageProvider(QQmlImageProviderBase::ImageType, QQmlImageProviderBase::Flags) 
// (12)qm2034230936 (81)_ZN19QQuickImageProviderC2EN21QQmlImageProviderBase9ImageTypeE6QFlagsINS0_4FlagEE
/*void* qm2034230936(QQmlImageProviderBase::ImageType type_, QFlags<QQmlImageProviderBase::Flag> flags)*/{
  QQmlImageProviderBase::ImageType type_ = *(QQmlImageProviderBase::ImageType*)this_; QFlags<QQmlImageProviderBase::Flag> flags = *(QFlags<QQmlImageProviderBase::Flag>*)this_;
  this_ =  new QQuickImageProvider(type_, flags);
  this_ =  new MyQQuickImageProvider(type_, flags);
}


/*void C_ZN19QQuickImageProviderD2Ev(void *this_)*/ {
  delete (QQuickImageProvider*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qquickimageprovider
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
