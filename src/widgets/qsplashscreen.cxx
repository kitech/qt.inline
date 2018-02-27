//  header block begin
// /usr/include/qt/QtWidgets/qsplashscreen.h
#ifndef protected
#define protected public
#endif
#include <qsplashscreen.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QSplashScreen is pure virtual: false
// QSplashScreen has virtual projected: true
//  header block end

//  main block begin

class MyQSplashScreen : public QSplashScreen {
public:
  virtual ~MyQSplashScreen() {}
// void QSplashScreen(const class QPixmap &, Qt::WindowFlags)
MyQSplashScreen(const QPixmap & pixmap, QFlags<Qt::WindowType> f) : QSplashScreen(pixmap, f) {}
// void QSplashScreen(class QWidget *, const class QPixmap &, Qt::WindowFlags)
MyQSplashScreen(QWidget * parent, const QPixmap & pixmap, QFlags<Qt::WindowType> f) : QSplashScreen(parent, pixmap, f) {}
// Protected virtual Visibility=Default Availability=Available
// bool event(class QEvent *)
  virtual bool event(QEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QSplashScreen::event(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void drawContents(class QPainter *)
  virtual void drawContents(QPainter * painter) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"drawContents", &handled, 1, (uint64_t)painter, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSplashScreen::drawContents(painter);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void mousePressEvent(class QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"mousePressEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSplashScreen::mousePressEvent(arg0);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplashscreen.h:76
// [1] bool event(class QEvent *)
extern "C"
bool C_ZN13QSplashScreen5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QSplashScreen*)this_)->QSplashScreen::event(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplashscreen.h:77
// [-2] void drawContents(class QPainter *)
extern "C"
void C_ZN13QSplashScreen12drawContentsEP8QPainter(void *this_, QPainter * painter) {
  ((QSplashScreen*)this_)->QSplashScreen::drawContents(painter);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplashscreen.h:78
// [-2] void mousePressEvent(class QMouseEvent *)
extern "C"
void C_ZN13QSplashScreen15mousePressEventEP11QMouseEvent(void *this_, QMouseEvent * arg0) {
  ((QSplashScreen*)this_)->QSplashScreen::mousePressEvent(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplashscreen.h:55
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK13QSplashScreen10metaObjectEv(void *this_) {
  return (void*)((QSplashScreen*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplashscreen.h:57
// [-2] void QSplashScreen(const class QPixmap &, Qt::WindowFlags)
extern "C"
void* C_ZN13QSplashScreenC2ERK7QPixmap6QFlagsIN2Qt10WindowTypeEE(QPixmap* pixmap, QFlags<Qt::WindowType> f) {
  auto _nilp = (MyQSplashScreen*)(0);
  return  new MyQSplashScreen(*pixmap, f);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplashscreen.h:58
// [-2] void QSplashScreen(class QWidget *, const class QPixmap &, Qt::WindowFlags)
extern "C"
void* C_ZN13QSplashScreenC2EP7QWidgetRK7QPixmap6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, QPixmap* pixmap, QFlags<Qt::WindowType> f) {
  auto _nilp = (MyQSplashScreen*)(0);
  return  new MyQSplashScreen(parent, *pixmap, f);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplashscreen.h:59
// [-2] void ~QSplashScreen()
extern "C"
void C_ZN13QSplashScreenD2Ev(void *this_) {
  delete (QSplashScreen*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplashscreen.h:61
// [-2] void setPixmap(const class QPixmap &)
extern "C"
void C_ZN13QSplashScreen9setPixmapERK7QPixmap(void *this_, QPixmap* pixmap) {
  ((QSplashScreen*)this_)->setPixmap(*pixmap);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplashscreen.h:62
// [32] const QPixmap pixmap()
extern "C"
void* C_ZNK13QSplashScreen6pixmapEv(void *this_) {
  auto rv = ((QSplashScreen*)this_)->pixmap();
return new QPixmap(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplashscreen.h:63
// [-2] void finish(class QWidget *)
extern "C"
void C_ZN13QSplashScreen6finishEP7QWidget(void *this_, QWidget * w) {
  ((QSplashScreen*)this_)->finish(w);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplashscreen.h:64
// [-2] void repaint()
extern "C"
void C_ZN13QSplashScreen7repaintEv(void *this_) {
  ((QSplashScreen*)this_)->repaint();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplashscreen.h:65
// [8] QString message()
extern "C"
void* C_ZNK13QSplashScreen7messageEv(void *this_) {
  auto rv = ((QSplashScreen*)this_)->message();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplashscreen.h:68
// [-2] void showMessage(const class QString &, int, const class QColor &)
extern "C"
void C_ZN13QSplashScreen11showMessageERK7QStringiRK6QColor(void *this_, QString* message, int alignment, QColor* color) {
  ((QSplashScreen*)this_)->showMessage(*message, alignment, *color);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplashscreen.h:70
// [-2] void clearMessage()
extern "C"
void C_ZN13QSplashScreen12clearMessageEv(void *this_) {
  ((QSplashScreen*)this_)->clearMessage();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsplashscreen.h:73
// [-2] void messageChanged(const class QString &)
extern "C"
void C_ZN13QSplashScreen14messageChangedERK7QString(void *this_, QString* message) {
  ((QSplashScreen*)this_)->messageChanged(*message);
}

//  main block end
