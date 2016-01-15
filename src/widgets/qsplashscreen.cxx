// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtWidgets/qsplashscreen.h
// dst-file: /src/widgets/qsplashscreen.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qsplashscreen.h>

extern "C" {

int QSplashScreen_Class_Size()
{
  return sizeof(QSplashScreen);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qsplashscreen_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QSplashScreen_SlotProxy here
class QSplashScreen_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QSplashScreen_SlotProxy():QObject(){}

public slots:
  // messageChanged(const class QString &)
  void slot_proxy_func__ZN13QSplashScreen14messageChangedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN13QSplashScreen14messageChangedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qsplashscreen.moc"

extern "C" {
  QSplashScreen_SlotProxy* QSplashScreen_SlotProxy_new()
  {
    return new QSplashScreen_SlotProxy();
  }
};

void QSplashScreen_SlotProxy::slot_proxy_func__ZN13QSplashScreen14messageChangedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN13QSplashScreen14messageChangedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN13QSplashScreen14messageChangedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QSplashScreen_SlotProxy_connect__ZN13QSplashScreen14messageChangedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QSplashScreen_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN13QSplashScreen14messageChangedERK7QString = (decltype(that->slot_func__ZN13QSplashScreen14messageChangedERK7QString))ffifptr;
  QObject::connect((QSplashScreen*)sender, SIGNAL(messageChanged(const class QString &)), that, SLOT(slot_proxy_func__ZN13QSplashScreen14messageChangedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QSplashScreen_SlotProxy_disconnect__ZN13QSplashScreen14messageChangedERK7QString(QSplashScreen_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

