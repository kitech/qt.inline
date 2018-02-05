//  header block begin
// /usr/include/qt/QtQuick/qquickimageprovider.h
#include <qquickimageprovider.h>
#include <QtQuick>
#include "callback_inherit.h"

// QQuickAsyncImageProvider is pure virtual: true
// QQuickAsyncImageProvider has virtual projected: false
//  header block end

//  main block begin

class MyQQuickAsyncImageProvider : public QQuickAsyncImageProvider {
public:
  virtual ~MyQQuickAsyncImageProvider() {}
// void QQuickAsyncImageProvider()
MyQQuickAsyncImageProvider() : QQuickAsyncImageProvider() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:115
// [-2] void QQuickAsyncImageProvider()
extern "C"
void* C_ZN24QQuickAsyncImageProviderC1Ev() {
  return 0; // new QQuickAsyncImageProvider();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:116
// [-2] void ~QQuickAsyncImageProvider()
extern "C"
void C_ZN24QQuickAsyncImageProviderD2Ev(void *this_) {
  delete (QQuickAsyncImageProvider*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:121
// [8] QQuickImageResponse * requestImageResponse(const class QString &, const class QSize &)
extern "C"
void* C_ZN24QQuickAsyncImageProvider20requestImageResponseERK7QStringRK5QSize(void *this_, QString* id, QSize* requestedSize) {
  return (void*)((QQuickAsyncImageProvider*)this_)->requestImageResponse(*id, *requestedSize);
}
//  main block end
