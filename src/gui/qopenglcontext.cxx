// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtGui/qopenglcontext.h
// dst-file: /src/gui/qopenglcontext.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qopenglcontext.h>

extern "C" {

int QOpenGLVersionProfile_Class_Size()
{
  return sizeof(QOpenGLVersionProfile);
}

int QOpenGLContext_Class_Size()
{
  return sizeof(QOpenGLContext);
}

int QOpenGLContextGroup_Class_Size()
{
  return sizeof(QOpenGLContextGroup);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qopenglcontext_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QOpenGLContext_SlotProxy here
class QOpenGLContext_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QOpenGLContext_SlotProxy():QObject(){}

public slots:
  // aboutToBeDestroyed()
  void slot_proxy_func__ZN14QOpenGLContext18aboutToBeDestroyedEv();
public:
  void (*slot_func__ZN14QOpenGLContext18aboutToBeDestroyedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};

extern "C" {
  QOpenGLContext_SlotProxy* QOpenGLContext_SlotProxy_new()
  {
    return new QOpenGLContext_SlotProxy();
  }
};

void QOpenGLContext_SlotProxy::slot_proxy_func__ZN14QOpenGLContext18aboutToBeDestroyedEv() {
  if (this->slot_func__ZN14QOpenGLContext18aboutToBeDestroyedEv != NULL) {
    // do smth...
    this->slot_func__ZN14QOpenGLContext18aboutToBeDestroyedEv(this->rsfptr);
  }
}
extern "C"
void* QOpenGLContext_SlotProxy_connect__ZN14QOpenGLContext18aboutToBeDestroyedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QOpenGLContext_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QOpenGLContext18aboutToBeDestroyedEv = (decltype(that->slot_func__ZN14QOpenGLContext18aboutToBeDestroyedEv))ffifptr;
  QObject::connect((QOpenGLContext*)sender, SIGNAL(aboutToBeDestroyed()), that, SLOT(slot_proxy_func__ZN14QOpenGLContext18aboutToBeDestroyedEv()));
  return that;
}
extern "C"
void QOpenGLContext_SlotProxy_disconnect__ZN14QOpenGLContext18aboutToBeDestroyedEv(QOpenGLContext_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// QOpenGLContextGroup_SlotProxy here
class QOpenGLContextGroup_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QOpenGLContextGroup_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/gui/qopenglcontext.moc"

extern "C" {
  QOpenGLContextGroup_SlotProxy* QOpenGLContextGroup_SlotProxy_new()
  {
    return new QOpenGLContextGroup_SlotProxy();
  }
};

// <= body block end

