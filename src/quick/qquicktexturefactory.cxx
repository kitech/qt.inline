//  header block begin
// /usr/include/qt/QtQuick/qquickimageprovider.h
#include <qquickimageprovider.h>
#include <QtQuick>
#include "callback_inherit.h"

// QQuickTextureFactory is pure virtual: true
// QQuickTextureFactory has virtual projected: false
//  header block end

//  main block begin

class MyQQuickTextureFactory : public QQuickTextureFactory {
public:
  virtual ~MyQQuickTextureFactory() {}
// void QQuickTextureFactory()
MyQQuickTextureFactory() : QQuickTextureFactory() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:60
// [-2] void QQuickTextureFactory()
extern "C"
void* C_ZN20QQuickTextureFactoryC2Ev() {
  return 0; // new QQuickTextureFactory();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:61
// [-2] void ~QQuickTextureFactory()
extern "C"
void C_ZN20QQuickTextureFactoryD2Ev(void *this_) {
  delete (QQuickTextureFactory*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:63
// [8] QSGTexture * createTexture(class QQuickWindow *)
extern "C"
void* C_ZNK20QQuickTextureFactory13createTextureEP12QQuickWindow(void *this_, QQuickWindow * window) {
  return (void*)((QQuickTextureFactory*)this_)->createTexture(window);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:64
// [8] QSize textureSize()
extern "C"
void* C_ZNK20QQuickTextureFactory11textureSizeEv(void *this_) {
  auto rv = ((QQuickTextureFactory*)this_)->textureSize();
return new QSize(rv);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:65
// [4] int textureByteCount()
extern "C"
int C_ZNK20QQuickTextureFactory16textureByteCountEv(void *this_) {
  return (int)((QQuickTextureFactory*)this_)->textureByteCount();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:66
// [32] QImage image()
extern "C"
void* C_ZNK20QQuickTextureFactory5imageEv(void *this_) {
  auto rv = ((QQuickTextureFactory*)this_)->image();
return new QImage(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:68
// [8] QQuickTextureFactory * textureFactoryForImage(const class QImage &)
extern "C"
void* C_ZN20QQuickTextureFactory22textureFactoryForImageERK6QImage(QImage* image) {
  return (void*)QQuickTextureFactory::textureFactoryForImage(*image);
}
//  main block end
