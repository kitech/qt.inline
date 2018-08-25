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

// QQuickTextureFactory is pure virtual: true
// QQuickTextureFactory has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQQuickTextureFactory : public QQuickTextureFactory {
public:
  virtual ~MyQQuickTextureFactory() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QSGTexture * createTexture(QQuickWindow *)
  virtual QSGTexture * createTexture(QQuickWindow * window) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"createTexture", &handled, 1, (uint64_t)window, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QSGTexture *)(irv);
      // Pointer Pointer QSGTexture *
    } else {
    return (QSGTexture *){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QSize textureSize()
  virtual QSize textureSize() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"textureSize", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QSize){};}
    auto prv = (QSize*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QSize
    } else {
    return (QSize){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] int textureByteCount()
  virtual int textureByteCount() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"textureByteCount", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// void QQuickTextureFactory()
MyQQuickTextureFactory() : QQuickTextureFactory() {}
};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:63
// [8] QSGTexture * createTexture(QQuickWindow *)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:64
// [8] QSize textureSize()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:65
// [4] int textureByteCount()
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:60
// [-2] void QQuickTextureFactory()
extern "C" Q_DECL_EXPORT
void* C_ZN20QQuickTextureFactoryC2Ev() {
  return  new MyQQuickTextureFactory();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:61
// [-2] void ~QQuickTextureFactory()
extern "C" Q_DECL_EXPORT
void C_ZN20QQuickTextureFactoryD2Ev(void *this_) {
  delete (QQuickTextureFactory*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:63
// [8] QSGTexture * createTexture(QQuickWindow *)
extern "C" Q_DECL_EXPORT
void* C_ZNK20QQuickTextureFactory13createTextureEP12QQuickWindow(void *this_, QQuickWindow * window) {
  return (void*)((QQuickTextureFactory*)this_)->createTexture(window);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:64
// [8] QSize textureSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QQuickTextureFactory11textureSizeEv(void *this_) {
  auto rv = ((QQuickTextureFactory*)this_)->textureSize();
return new QSize(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:65
// [4] int textureByteCount()
extern "C" Q_DECL_EXPORT
int C_ZNK20QQuickTextureFactory16textureByteCountEv(void *this_) {
  return (int)((QQuickTextureFactory*)this_)->textureByteCount();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickimageprovider.h:66
// [32] QImage image()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QQuickTextureFactory5imageEv(void *this_) {
  auto rv = ((QQuickTextureFactory*)this_)->image();
return new QImage(rv);
}

// Public static Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtQuick/qquickimageprovider.h:68
// [8] QQuickTextureFactory * textureFactoryForImage(const QImage &)
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void* C_ZN20QQuickTextureFactory22textureFactoryForImageERK6QImage(QImage* image) {
  return (void*)QQuickTextureFactory::textureFactoryForImage(*image);
}
#endif // QT_VERSION >= 0x050600

//  main block end
