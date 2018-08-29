//  header block begin
// since 0x050600
// /usr/include/qt/QtQuick/qquickimageprovider.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qquickimageprovider.h>
#include <QtQuick>
#include "callback_inherit.h"

// QQuickAsyncImageProvider is pure virtual: true
// QQuickAsyncImageProvider has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQQuickAsyncImageProvider_t {
  QByteArrayData data[1];
  char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQQuickAsyncImageProvider_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQQuickAsyncImageProvider_t qt_meta_stringdata_MyQQuickAsyncImageProvider = {
   {
  QT_MOC_LITERAL(0, 0, 26), // "MyQQuickAsyncImageProvider"
  },
  "MyQQuickAsyncImageProvider"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQQuickAsyncImageProvider[] = {
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
class Q_DECL_EXPORT MyQQuickAsyncImageProvider : public QQuickAsyncImageProvider {
public:
  virtual ~MyQQuickAsyncImageProvider() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QQuickImageResponse * requestImageResponse(const QString &, const QSize &)
  virtual QQuickImageResponse * requestImageResponse(const QString & id, const QSize & requestedSize)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"requestImageResponse", &handled, 2, (uint64_t)&id, (uint64_t)&requestedSize, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QQuickImageResponse *)(irv);
      // Pointer Pointer QQuickImageResponse *
    } else {
    return (QQuickImageResponse *){};
  }
  }

// void QQuickAsyncImageProvider()
MyQQuickAsyncImageProvider() : QQuickAsyncImageProvider() {}
};
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:121
// [8] QQuickImageResponse * requestImageResponse(const QString &, const QSize &)
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:115
// [-2] void QQuickAsyncImageProvider()
extern "C" Q_DECL_EXPORT
void* C_ZN24QQuickAsyncImageProviderC2Ev() {
  return 0; // new QQuickAsyncImageProvider();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:116
// [-2] void ~QQuickAsyncImageProvider()
extern "C" Q_DECL_EXPORT
void C_ZN24QQuickAsyncImageProviderD2Ev(void *this_) {
  delete (QQuickAsyncImageProvider*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:121
// [8] QQuickImageResponse * requestImageResponse(const QString &, const QSize &)
extern "C" Q_DECL_EXPORT
void* C_ZN24QQuickAsyncImageProvider20requestImageResponseERK7QStringRK5QSize(void *this_, QString* id, QSize* requestedSize) {
  return (void*)((QQuickAsyncImageProvider*)this_)->requestImageResponse(*id, *requestedSize);
}

//  main block end
