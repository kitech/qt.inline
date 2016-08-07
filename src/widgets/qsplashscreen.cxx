// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtWidgets/qsplashscreen.h
// dst-file: /src/widgets/qsplashscreen.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qsplashscreen.h>


#include <qpixmap.h>
#include <qstring.h>
// <= header block end

// main block begin =>
void __keep_qsplashscreen_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QSplashScreen_Class_Size()
{
  return sizeof(QSplashScreen);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qsplashscreen.h', line 54, column 5>
//   // proto:  const QMetaObject * QSplashScreen::metaObject();
// _ZNK13QSplashScreen10metaObjectEv metaObject()
extern "C"
void*
C_ZNK13QSplashScreen10metaObjectEv(void *qthis) {
  auto ret =
  ((QSplashScreen*)qthis)->metaObject();
  return (void*)ret;
}
//   // proto:  void QSplashScreen::~QSplashScreen();
extern "C"
void C_ZN13QSplashScreenD2Ev(void *qthis) {
  delete (QSplashScreen*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsplashscreen.h', line 56, column 14>
//   // proto:  void QSplashScreen::QSplashScreen(const QPixmap & pixmap, Qt::WindowFlags f);
extern "C"
QSplashScreen*
C_ZN13QSplashScreenC2ERK7QPixmap6QFlagsIN2Qt10WindowTypeEE(const QPixmap* arg1,
Qt::WindowFlags* arg2) {
  auto ret = new QSplashScreen(*((const QPixmap*)arg1),
*((Qt::WindowFlags*)arg2));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsplashscreen.h', line 69, column 10>
//   // proto:  void QSplashScreen::clearMessage();
// _ZN13QSplashScreen12clearMessageEv clearMessage()
extern "C"
void
C_ZN13QSplashScreen12clearMessageEv(void *qthis) {
  ((QSplashScreen*)qthis)->clearMessage();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsplashscreen.h', line 61, column 19>
//   // proto:  const QPixmap QSplashScreen::pixmap();
// _ZNK13QSplashScreen6pixmapEv pixmap()
extern "C"
QPixmap*
C_ZNK13QSplashScreen6pixmapEv(void *qthis) {
  auto ret =
  ((QSplashScreen*)qthis)->pixmap();
  return new QPixmap(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsplashscreen.h', line 72, column 10>
//   // proto:  void QSplashScreen::messageChanged(const QString & message);
// _ZN13QSplashScreen14messageChangedERK7QString messageChanged(const class QString &)
extern "C"
void
C_ZN13QSplashScreen14messageChangedERK7QString(void *qthis,
const QString* arg1) {
  ((QSplashScreen*)qthis)->messageChanged(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsplashscreen.h', line 67, column 10>
//   // proto:  void QSplashScreen::showMessage(const QString & message, int alignment, const QColor & color);
// _ZN13QSplashScreen11showMessageERK7QStringiRK6QColor showMessage(const class QString &, int, const class QColor &)
extern "C"
void
C_ZN13QSplashScreen11showMessageERK7QStringiRK6QColor(void *qthis,
const QString* arg1,
int arg2,
const QColor* arg3) {
  ((QSplashScreen*)qthis)->showMessage(*((const QString*)arg1),
arg2,
*((const QColor*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsplashscreen.h', line 60, column 10>
//   // proto:  void QSplashScreen::setPixmap(const QPixmap & pixmap);
// _ZN13QSplashScreen9setPixmapERK7QPixmap setPixmap(const class QPixmap &)
extern "C"
void
C_ZN13QSplashScreen9setPixmapERK7QPixmap(void *qthis,
const QPixmap* arg1) {
  ((QSplashScreen*)qthis)->setPixmap(*((const QPixmap*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsplashscreen.h', line 64, column 13>
//   // proto:  QString QSplashScreen::message();
// _ZNK13QSplashScreen7messageEv message()
extern "C"
QString*
C_ZNK13QSplashScreen7messageEv(void *qthis) {
  auto ret =
  ((QSplashScreen*)qthis)->message();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsplashscreen.h', line 63, column 10>
//   // proto:  void QSplashScreen::repaint();
// _ZN13QSplashScreen7repaintEv repaint()
extern "C"
void
C_ZN13QSplashScreen7repaintEv(void *qthis) {
  ((QSplashScreen*)qthis)->repaint();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsplashscreen.h', line 62, column 10>
//   // proto:  void QSplashScreen::finish(QWidget * w);
// _ZN13QSplashScreen6finishEP7QWidget finish(class QWidget *)
extern "C"
void
C_ZN13QSplashScreen6finishEP7QWidget(void *qthis,
QWidget * arg1) {
  ((QSplashScreen*)qthis)->finish(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qsplashscreen.h', line 57, column 5>
//   // proto:  void QSplashScreen::QSplashScreen(QWidget * parent, const QPixmap & pixmap, Qt::WindowFlags f);
extern "C"
QSplashScreen*
C_ZN13QSplashScreenC2EP7QWidgetRK7QPixmap6QFlagsIN2Qt10WindowTypeEE(QWidget * arg1,
const QPixmap* arg2,
Qt::WindowFlags* arg3) {
  auto ret = new QSplashScreen(arg1,
*((const QPixmap*)arg2),
*((Qt::WindowFlags*)arg3));
  return ret;
}
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

