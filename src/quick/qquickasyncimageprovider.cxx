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
