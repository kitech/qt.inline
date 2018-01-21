//  header block begin
// /usr/include/qt/QtWidgets/qsplashscreen.h
#include <qsplashscreen.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qsplashscreen.h:54
// const QMetaObject * metaObject()
extern "C"
void C_ZNK13QSplashScreen10metaObjectEv(void *this_) {
  /*return*/ ((QSplashScreen*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qsplashscreen.h:56
// void QSplashScreen(const class QPixmap &, Qt::WindowFlags)
extern "C"
void* C_ZN13QSplashScreenC1ERK7QPixmap6QFlagsIN2Qt10WindowTypeEE(const QPixmap & pixmap, QFlags<Qt::WindowType> f) {
  return new QSplashScreen(pixmap, f);
}
// /usr/include/qt/QtWidgets/qsplashscreen.h:57
// void QSplashScreen(class QWidget *, const class QPixmap &, Qt::WindowFlags)
extern "C"
void* C_ZN13QSplashScreenC1EP7QWidgetRK7QPixmap6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, const QPixmap & pixmap, QFlags<Qt::WindowType> f) {
  return new QSplashScreen(parent, pixmap, f);
}
// virtual
// /usr/include/qt/QtWidgets/qsplashscreen.h:58
// void ~QSplashScreen()
extern "C"
void C_ZN13QSplashScreenD1Ev(void *this_) {
  delete (QSplashScreen*)(this_);
}
// /usr/include/qt/QtWidgets/qsplashscreen.h:60
// void setPixmap(const class QPixmap &)
extern "C"
void C_ZN13QSplashScreen9setPixmapERK7QPixmap(void *this_, const QPixmap & pixmap) {
  ((QSplashScreen*)this_)->setPixmap(pixmap);
}
// /usr/include/qt/QtWidgets/qsplashscreen.h:61
// const QPixmap pixmap()
extern "C"
void C_ZNK13QSplashScreen6pixmapEv(void *this_) {
  /*return*/ ((QSplashScreen*)this_)->pixmap();
}
// /usr/include/qt/QtWidgets/qsplashscreen.h:62
// void finish(class QWidget *)
extern "C"
void C_ZN13QSplashScreen6finishEP7QWidget(void *this_, QWidget * w) {
  ((QSplashScreen*)this_)->finish(w);
}
// /usr/include/qt/QtWidgets/qsplashscreen.h:63
// void repaint()
extern "C"
void C_ZN13QSplashScreen7repaintEv(void *this_) {
  ((QSplashScreen*)this_)->repaint();
}
// /usr/include/qt/QtWidgets/qsplashscreen.h:64
// QString message()
extern "C"
void C_ZNK13QSplashScreen7messageEv(void *this_) {
  /*return*/ ((QSplashScreen*)this_)->message();
}
// /usr/include/qt/QtWidgets/qsplashscreen.h:67
// void showMessage(const class QString &, int, const class QColor &)
extern "C"
void C_ZN13QSplashScreen11showMessageERK7QStringiRK6QColor(void *this_, const QString & message, int alignment, const QColor & color) {
  ((QSplashScreen*)this_)->showMessage(message, alignment, color);
}
// /usr/include/qt/QtWidgets/qsplashscreen.h:69
// void clearMessage()
extern "C"
void C_ZN13QSplashScreen12clearMessageEv(void *this_) {
  ((QSplashScreen*)this_)->clearMessage();
}
// /usr/include/qt/QtWidgets/qsplashscreen.h:72
// void messageChanged(const class QString &)
extern "C"
void C_ZN13QSplashScreen14messageChangedERK7QString(void *this_, const QString & message) {
  ((QSplashScreen*)this_)->messageChanged(message);
}
//  main block end
