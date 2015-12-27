// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtWidgets/qsplashscreen.h
// dst-file: /src/widgets/qsplashscreen.cxx
//

// header block begin =>
#include <qsplashscreen.h>

extern "C" {

int QSplashScreen_Class_Size()
{
  return sizeof(QSplashScreen);
}

// ~QSplashScreen()
void dedtor_ZN13QSplashScreenD0Ev(QSplashScreen* that)
{
  QSplashScreen* rthis = (QSplashScreen*)that;
  delete rthis;
}

// QSplashScreen(const class QPixmap &, Qt::WindowFlags)
QSplashScreen* dector_ZN13QSplashScreenC1ERK7QPixmap6QFlagsIN2Qt10WindowTypeEE(const QPixmap & pixmap, Qt::WindowFlags f)
{
  // static_assert(sizeof(QSplashScreen) == 32, "tyszerr");
  QSplashScreen* rthis = new QSplashScreen(pixmap, f);
  return rthis;
}

// QSplashScreen(class QWidget *, const class QPixmap &, Qt::WindowFlags)
QSplashScreen* dector_ZN13QSplashScreenC1EP7QWidgetRK7QPixmap6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, const QPixmap & pixmap, Qt::WindowFlags f)
{
  // static_assert(sizeof(QSplashScreen) == 32, "tyszerr");
  QSplashScreen* rthis = new QSplashScreen(parent, pixmap, f);
  return rthis;
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
  void (*slot_func__ZN13QSplashScreen14messageChangedERK7QString)(const QString & arg0) = NULL;
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
    this->slot_func__ZN13QSplashScreen14messageChangedERK7QString(arg0);
  }
}
extern "C"
void* QSplashScreen_SlotProxy_connect__ZN13QSplashScreen14messageChangedERK7QString(QObject* sender, void* fptr){
  auto that = new QSplashScreen_SlotProxy();
  that->slot_func__ZN13QSplashScreen14messageChangedERK7QString = (decltype(that->slot_func__ZN13QSplashScreen14messageChangedERK7QString))fptr;
  QObject::connect((QSplashScreen*)sender, SIGNAL(messageChanged(const class QString &)), that, SLOT(slot_proxy_func__ZN13QSplashScreen14messageChangedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QSplashScreen_SlotProxy_disconnect__ZN13QSplashScreen14messageChangedERK7QString(QSplashScreen_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

