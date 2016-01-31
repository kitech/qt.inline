// auto generated, do not modify.
// created: Fri Jan 22 22:26:45 2016
// src-file: /QtQuick/qsgtextureprovider.h
// dst-file: /src/quick/qsgtextureprovider.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qsgtextureprovider.h>

extern "C" {

int QSGTextureProvider_Class_Size()
{
  return sizeof(QSGTextureProvider);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qsgtextureprovider_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtQuick/qsgtextureprovider.h', line 49, column 10>
//   // proto:  void QSGTextureProvider::textureChanged();
if (true) {
  auto f = []() {
    ((QSGTextureProvider*)0)->textureChanged();
  };
  if (f == nullptr){}
}
// _ZN18QSGTextureProvider14textureChangedEv textureChanged()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgtextureprovider.h', line 46, column 25>
//   // proto:  QSGTexture * QSGTextureProvider::texture();
if (true) {
  auto f = []() {
    ((QSGTextureProvider*)0)->texture();
  };
  if (f == nullptr){}
}
// _ZNK18QSGTextureProvider7textureEv texture()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgtextureprovider.h', line 44, column 5>
//   // proto:  const QMetaObject * QSGTextureProvider::metaObject();
if (true) {
  auto f = []() {
    ((QSGTextureProvider*)0)->metaObject();
  };
  if (f == nullptr){}
}
// _ZNK18QSGTextureProvider10metaObjectEv metaObject()
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQuick/qsgtextureprovider.h', line 49, column 10>
//   // proto:  void QSGTextureProvider::textureChanged();
extern "C"
void C_ZN18QSGTextureProvider14textureChangedEv(void *qthis) {
  ((QSGTextureProvider*)qthis)->textureChanged();
}
// _ZN18QSGTextureProvider14textureChangedEv textureChanged()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgtextureprovider.h', line 46, column 25>
//   // proto:  QSGTexture * QSGTextureProvider::texture();
extern "C"
void C_ZNK18QSGTextureProvider7textureEv(void *qthis) {
  ((QSGTextureProvider*)qthis)->texture();
}
// _ZNK18QSGTextureProvider7textureEv texture()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgtextureprovider.h', line 44, column 5>
//   // proto:  const QMetaObject * QSGTextureProvider::metaObject();
extern "C"
void C_ZNK18QSGTextureProvider10metaObjectEv(void *qthis) {
  ((QSGTextureProvider*)qthis)->metaObject();
}
// _ZNK18QSGTextureProvider10metaObjectEv metaObject()
// <= ext block end

// body block begin =>
// QSGTextureProvider_SlotProxy here
class QSGTextureProvider_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QSGTextureProvider_SlotProxy():QObject(){}

public slots:
  // textureChanged()
  void slot_proxy_func__ZN18QSGTextureProvider14textureChangedEv();
public:
  void (*slot_func__ZN18QSGTextureProvider14textureChangedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/quick/qsgtextureprovider.moc"

extern "C" {
  QSGTextureProvider_SlotProxy* QSGTextureProvider_SlotProxy_new()
  {
    return new QSGTextureProvider_SlotProxy();
  }
};

void QSGTextureProvider_SlotProxy::slot_proxy_func__ZN18QSGTextureProvider14textureChangedEv() {
  if (this->slot_func__ZN18QSGTextureProvider14textureChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN18QSGTextureProvider14textureChangedEv(this->rsfptr);
  }
}
extern "C"
void* QSGTextureProvider_SlotProxy_connect__ZN18QSGTextureProvider14textureChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QSGTextureProvider_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN18QSGTextureProvider14textureChangedEv = (decltype(that->slot_func__ZN18QSGTextureProvider14textureChangedEv))ffifptr;
  QObject::connect((QSGTextureProvider*)sender, SIGNAL(textureChanged()), that, SLOT(slot_proxy_func__ZN18QSGTextureProvider14textureChangedEv()));
  return that;
}
extern "C"
void QSGTextureProvider_SlotProxy_disconnect__ZN18QSGTextureProvider14textureChangedEv(QSGTextureProvider_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

