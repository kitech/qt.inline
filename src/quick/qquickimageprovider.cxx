//  header block begin
// since 0x050000
// /usr/include/qt/QtQuick/qquickimageprovider.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qquickimageprovider.h>
#include <QtQuick>
#include "callback_inherit.h"

// QQuickImageProvider is pure virtual: false
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

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:92
// [-2] void QQuickImageProvider(QQmlImageProviderBase::ImageType, QQmlImageProviderBase::Flags)
extern "C" Q_DECL_EXPORT
void* C_ZN19QQuickImageProviderC2EN21QQmlImageProviderBase9ImageTypeE6QFlagsINS0_4FlagEE(QQmlImageProviderBase::ImageType type_, QFlags<QQmlImageProviderBase::Flag> flags) {
  return  new QQuickImageProvider(type_, flags);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:93
// [-2] void ~QQuickImageProvider()
extern "C" Q_DECL_EXPORT
void C_ZN19QQuickImageProviderD2Ev(void *this_) {
  delete (QQuickImageProvider*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:95
// [4] QQmlImageProviderBase::ImageType imageType()
extern "C" Q_DECL_EXPORT
QQmlImageProviderBase::ImageType C_ZNK19QQuickImageProvider9imageTypeEv(void *this_) {
  return (QQmlImageProviderBase::ImageType)((QQuickImageProvider*)this_)->imageType();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:96
// [4] QQmlImageProviderBase::Flags flags()
extern "C" Q_DECL_EXPORT
QQmlImageProviderBase::Flags* C_ZNK19QQuickImageProvider5flagsEv(void *this_) {
  auto rv = ((QQuickImageProvider*)this_)->flags();
return new QQmlImageProviderBase::Flags(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:103
// [32] QImage requestImage(const QString &, QSize *, const QSize &)
extern "C" Q_DECL_EXPORT
void* C_ZN19QQuickImageProvider12requestImageERK7QStringP5QSizeRKS3_(void *this_, QString* id, QSize * size, QSize* requestedSize) {
  auto rv = ((QQuickImageProvider*)this_)->requestImage(*id, size, *requestedSize);
return new QImage(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:104
// [32] QPixmap requestPixmap(const QString &, QSize *, const QSize &)
extern "C" Q_DECL_EXPORT
void* C_ZN19QQuickImageProvider13requestPixmapERK7QStringP5QSizeRKS3_(void *this_, QString* id, QSize * size, QSize* requestedSize) {
  auto rv = ((QQuickImageProvider*)this_)->requestPixmap(*id, size, *requestedSize);
return new QPixmap(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:105
// [8] QQuickTextureFactory * requestTexture(const QString &, QSize *, const QSize &)
extern "C" Q_DECL_EXPORT
void* C_ZN19QQuickImageProvider14requestTextureERK7QStringP5QSizeRKS3_(void *this_, QString* id, QSize * size, QSize* requestedSize) {
  return (void*)((QQuickImageProvider*)this_)->requestTexture(*id, size, *requestedSize);
}

//  main block end
