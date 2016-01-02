// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtGui/qopenglcontext.h
// dst-file: /src/gui/qopenglcontext.cxx
//

// header block begin =>
#include <qopenglcontext.h>

extern "C" {

int QOpenGLVersionProfile_Class_Size()
{
  return sizeof(QOpenGLVersionProfile);
}

// ~QOpenGLVersionProfile()
void dedtor_ZN21QOpenGLVersionProfileD0Ev(QOpenGLVersionProfile* that)
{
  QOpenGLVersionProfile* rthis = (QOpenGLVersionProfile*)that;
  delete rthis;
}

// QOpenGLVersionProfile(const class QSurfaceFormat &)
QOpenGLVersionProfile* dector_ZN21QOpenGLVersionProfileC1ERK14QSurfaceFormat(const QSurfaceFormat & format)
{
  // static_assert(sizeof(QOpenGLVersionProfile) == 32, "tyszerr");
  QOpenGLVersionProfile* rthis = new QOpenGLVersionProfile(format);
  return rthis;
}

// QOpenGLVersionProfile(const class QOpenGLVersionProfile &)
QOpenGLVersionProfile* dector_ZN21QOpenGLVersionProfileC1ERKS_(const QOpenGLVersionProfile & other)
{
  // static_assert(sizeof(QOpenGLVersionProfile) == 32, "tyszerr");
  QOpenGLVersionProfile* rthis = new QOpenGLVersionProfile(other);
  return rthis;
}

// QOpenGLVersionProfile()
QOpenGLVersionProfile* dector_ZN21QOpenGLVersionProfileC1Ev()
{
  // static_assert(sizeof(QOpenGLVersionProfile) == 32, "tyszerr");
  QOpenGLVersionProfile* rthis = new QOpenGLVersionProfile();
  return rthis;
}

int QOpenGLContext_Class_Size()
{
  return sizeof(QOpenGLContext);
}

// QOpenGLContext(class QObject *)
QOpenGLContext* dector_ZN14QOpenGLContextC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QOpenGLContext) == 32, "tyszerr");
  QOpenGLContext* rthis = new QOpenGLContext(parent);
  return rthis;
}

// ~QOpenGLContext()
void dedtor_ZN14QOpenGLContextD0Ev(QOpenGLContext* that)
{
  QOpenGLContext* rthis = (QOpenGLContext*)that;
  delete rthis;
}

int QOpenGLContextGroup_Class_Size()
{
  return sizeof(QOpenGLContextGroup);
}

// ~QOpenGLContextGroup()
void dedtor_ZN19QOpenGLContextGroupD0Ev(QOpenGLContextGroup* that)
{
  QOpenGLContextGroup* rthis = (QOpenGLContextGroup*)that;
  delete rthis;
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
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

