// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtGui/qscreen.h
// dst-file: /src/gui/qscreen.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qscreen.h>


#include <qglobal.h>
#include <qrect.h>
#include <qpixmap.h>
#include <qsize.h>
#include <qnamespace.h>
#include <qlist.h>
#include <qstandarditemmodel.h>
#include <qtransform.h>
#include <qstring.h>
// <= header block end

// main block begin =>
void __keep_qscreen_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QScreen_Class_Size()
{
  return sizeof(QScreen);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qscreen.h', line 111, column 11>
//   // proto:  qreal QScreen::logicalDotsPerInchY();
// _ZNK7QScreen19logicalDotsPerInchYEv logicalDotsPerInchY()
extern "C"
double
C_ZNK7QScreen19logicalDotsPerInchYEv(void *qthis) {
  auto ret =
  ((QScreen*)qthis)->logicalDotsPerInchY();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qscreen.h', line 102, column 11>
//   // proto:  QRect QScreen::geometry();
// _ZNK7QScreen8geometryEv geometry()
extern "C"
QRect*
C_ZNK7QScreen8geometryEv(void *qthis) {
  auto ret =
  ((QScreen*)qthis)->geometry();
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qscreen.h', line 141, column 13>
//   // proto:  QPixmap QScreen::grabWindow(WId window, int x, int y, int w, int h);
// _ZN7QScreen10grabWindowEiiiii grabWindow(WId, int, int, int, int)
extern "C"
QPixmap*
C_ZN7QScreen10grabWindowEiiiii(void *qthis,
WId arg1,
int arg2,
int arg3,
int arg4,
int arg5) {
  auto ret =
  ((QScreen*)qthis)->grabWindow(arg1,
arg2,
arg3,
arg4,
arg5);
  return new QPixmap(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qscreen.h', line 101, column 11>
//   // proto:  QSize QScreen::size();
// _ZNK7QScreen4sizeEv size()
extern "C"
QSize*
C_ZNK7QScreen4sizeEv(void *qthis) {
  auto ret =
  ((QScreen*)qthis)->size();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qscreen.h', line 138, column 10>
//   // proto:  bool QScreen::isPortrait(Qt::ScreenOrientation orientation);
// _ZNK7QScreen10isPortraitEN2Qt17ScreenOrientationE isPortrait(Qt::ScreenOrientation)
extern "C"
bool
C_ZNK7QScreen10isPortraitEN2Qt17ScreenOrientationE(void *qthis,
Qt::ScreenOrientation* arg1) {
  auto ret =
  ((QScreen*)qthis)->isPortrait(*((Qt::ScreenOrientation*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qscreen.h', line 104, column 12>
//   // proto:  QSizeF QScreen::physicalSize();
// _ZNK7QScreen12physicalSizeEv physicalSize()
extern "C"
QSizeF*
C_ZNK7QScreen12physicalSizeEv(void *qthis) {
  auto ret =
  ((QScreen*)qthis)->physicalSize();
  return new QSizeF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qscreen.h', line 153, column 10>
//   // proto:  void QScreen::orientationChanged(Qt::ScreenOrientation orientation);
// _ZN7QScreen18orientationChangedEN2Qt17ScreenOrientationE orientationChanged(Qt::ScreenOrientation)
extern "C"
void
C_ZN7QScreen18orientationChangedEN2Qt17ScreenOrientationE(void *qthis,
Qt::ScreenOrientation* arg1) {
  ((QScreen*)qthis)->orientationChanged(*((Qt::ScreenOrientation*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qscreen.h', line 136, column 11>
//   // proto:  QRect QScreen::mapBetween(Qt::ScreenOrientation a, Qt::ScreenOrientation b, const QRect & rect);
// _ZNK7QScreen10mapBetweenEN2Qt17ScreenOrientationES1_RK5QRect mapBetween(Qt::ScreenOrientation, Qt::ScreenOrientation, const class QRect &)
extern "C"
QRect*
C_ZNK7QScreen10mapBetweenEN2Qt17ScreenOrientationES1_RK5QRect(void *qthis,
Qt::ScreenOrientation* arg1,
Qt::ScreenOrientation* arg2,
const QRect* arg3) {
  auto ret =
  ((QScreen*)qthis)->mapBetween(*((Qt::ScreenOrientation*)arg1),
*((Qt::ScreenOrientation*)arg2),
*((const QRect*)arg3));
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qscreen.h', line 152, column 10>
//   // proto:  void QScreen::primaryOrientationChanged(Qt::ScreenOrientation orientation);
// _ZN7QScreen25primaryOrientationChangedEN2Qt17ScreenOrientationE primaryOrientationChanged(Qt::ScreenOrientation)
extern "C"
void
C_ZN7QScreen25primaryOrientationChangedEN2Qt17ScreenOrientationE(void *qthis,
Qt::ScreenOrientation* arg1) {
  ((QScreen*)qthis)->primaryOrientationChanged(*((Qt::ScreenOrientation*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qscreen.h', line 95, column 22>
//   // proto:  QPlatformScreen * QScreen::handle();
// _ZNK7QScreen6handleEv handle()
extern "C"
void*
C_ZNK7QScreen6handleEv(void *qthis) {
  auto ret =
  ((QScreen*)qthis)->handle();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qscreen.h', line 128, column 27>
//   // proto:  Qt::ScreenOrientation QScreen::orientation();
// _ZNK7QScreen11orientationEv orientation()
extern "C"
Qt::ScreenOrientation
C_ZNK7QScreen11orientationEv(void *qthis) {
  auto ret =
  ((QScreen*)qthis)->orientation();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qscreen.h', line 125, column 11>
//   // proto:  QRect QScreen::availableVirtualGeometry();
// _ZNK7QScreen24availableVirtualGeometryEv availableVirtualGeometry()
extern "C"
QRect*
C_ZNK7QScreen24availableVirtualGeometryEv(void *qthis) {
  auto ret =
  ((QScreen*)qthis)->availableVirtualGeometry();
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qscreen.h', line 127, column 27>
//   // proto:  Qt::ScreenOrientation QScreen::primaryOrientation();
// _ZNK7QScreen18primaryOrientationEv primaryOrientation()
extern "C"
Qt::ScreenOrientation
C_ZNK7QScreen18primaryOrientationEv(void *qthis) {
  auto ret =
  ((QScreen*)qthis)->primaryOrientation();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qscreen.h', line 139, column 10>
//   // proto:  bool QScreen::isLandscape(Qt::ScreenOrientation orientation);
// _ZNK7QScreen11isLandscapeEN2Qt17ScreenOrientationE isLandscape(Qt::ScreenOrientation)
extern "C"
bool
C_ZNK7QScreen11isLandscapeEN2Qt17ScreenOrientationE(void *qthis,
Qt::ScreenOrientation* arg1) {
  auto ret =
  ((QScreen*)qthis)->isLandscape(*((Qt::ScreenOrientation*)arg1));
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QScreen::~QScreen();
extern "C"
void C_ZN7QScreenD2Ev(void *qthis) {
  delete (QScreen*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qscreen.h', line 121, column 11>
//   // proto:  QSize QScreen::virtualSize();
// _ZNK7QScreen11virtualSizeEv virtualSize()
extern "C"
QSize*
C_ZNK7QScreen11virtualSizeEv(void *qthis) {
  auto ret =
  ((QScreen*)qthis)->virtualSize();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qscreen.h', line 114, column 11>
//   // proto:  qreal QScreen::devicePixelRatio();
// _ZNK7QScreen16devicePixelRatioEv devicePixelRatio()
extern "C"
double
C_ZNK7QScreen16devicePixelRatioEv(void *qthis) {
  auto ret =
  ((QScreen*)qthis)->devicePixelRatio();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qscreen.h', line 119, column 22>
//   // proto:  QList<QScreen *> QScreen::virtualSiblings();
// _ZNK7QScreen15virtualSiblingsEv virtualSiblings()
extern "C"
QList<QScreen *>*
C_ZNK7QScreen15virtualSiblingsEv(void *qthis) {
  auto ret =
  ((QScreen*)qthis)->virtualSiblings();
  return new QList<QScreen *>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qscreen.h', line 134, column 9>
//   // proto:  int QScreen::angleBetween(Qt::ScreenOrientation a, Qt::ScreenOrientation b);
// _ZNK7QScreen12angleBetweenEN2Qt17ScreenOrientationES1_ angleBetween(Qt::ScreenOrientation, Qt::ScreenOrientation)
extern "C"
int
C_ZNK7QScreen12angleBetweenEN2Qt17ScreenOrientationES1_(void *qthis,
Qt::ScreenOrientation* arg1,
Qt::ScreenOrientation* arg2) {
  auto ret =
  ((QScreen*)qthis)->angleBetween(*((Qt::ScreenOrientation*)arg1),
*((Qt::ScreenOrientation*)arg2));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qscreen.h', line 135, column 16>
//   // proto:  QTransform QScreen::transformBetween(Qt::ScreenOrientation a, Qt::ScreenOrientation b, const QRect & target);
// _ZNK7QScreen16transformBetweenEN2Qt17ScreenOrientationES1_RK5QRect transformBetween(Qt::ScreenOrientation, Qt::ScreenOrientation, const class QRect &)
extern "C"
QTransform*
C_ZNK7QScreen16transformBetweenEN2Qt17ScreenOrientationES1_RK5QRect(void *qthis,
Qt::ScreenOrientation* arg1,
Qt::ScreenOrientation* arg2,
const QRect* arg3) {
  auto ret =
  ((QScreen*)qthis)->transformBetween(*((Qt::ScreenOrientation*)arg1),
*((Qt::ScreenOrientation*)arg2),
*((const QRect*)arg3));
  return new QTransform(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qscreen.h', line 129, column 27>
//   // proto:  Qt::ScreenOrientation QScreen::nativeOrientation();
// _ZNK7QScreen17nativeOrientationEv nativeOrientation()
extern "C"
Qt::ScreenOrientation
C_ZNK7QScreen17nativeOrientationEv(void *qthis) {
  auto ret =
  ((QScreen*)qthis)->nativeOrientation();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qscreen.h', line 150, column 10>
//   // proto:  void QScreen::logicalDotsPerInchChanged(qreal dpi);
// _ZN7QScreen25logicalDotsPerInchChangedEd logicalDotsPerInchChanged(qreal)
extern "C"
void
C_ZN7QScreen25logicalDotsPerInchChangedEd(void *qthis,
qreal arg1) {
  ((QScreen*)qthis)->logicalDotsPerInchChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qscreen.h', line 147, column 10>
//   // proto:  void QScreen::availableGeometryChanged(const QRect & geometry);
// _ZN7QScreen24availableGeometryChangedERK5QRect availableGeometryChanged(const class QRect &)
extern "C"
void
C_ZN7QScreen24availableGeometryChangedERK5QRect(void *qthis,
const QRect* arg1) {
  ((QScreen*)qthis)->availableGeometryChanged(*((const QRect*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qscreen.h', line 146, column 10>
//   // proto:  void QScreen::geometryChanged(const QRect & geometry);
// _ZN7QScreen15geometryChangedERK5QRect geometryChanged(const class QRect &)
extern "C"
void
C_ZN7QScreen15geometryChangedERK5QRect(void *qthis,
const QRect* arg1) {
  ((QScreen*)qthis)->geometryChanged(*((const QRect*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qscreen.h', line 122, column 11>
//   // proto:  QRect QScreen::virtualGeometry();
// _ZNK7QScreen15virtualGeometryEv virtualGeometry()
extern "C"
QRect*
C_ZNK7QScreen15virtualGeometryEv(void *qthis) {
  auto ret =
  ((QScreen*)qthis)->virtualGeometry();
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qscreen.h', line 112, column 11>
//   // proto:  qreal QScreen::logicalDotsPerInch();
// _ZNK7QScreen18logicalDotsPerInchEv logicalDotsPerInch()
extern "C"
double
C_ZNK7QScreen18logicalDotsPerInchEv(void *qthis) {
  auto ret =
  ((QScreen*)qthis)->logicalDotsPerInch();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qscreen.h', line 108, column 11>
//   // proto:  qreal QScreen::physicalDotsPerInch();
// _ZNK7QScreen19physicalDotsPerInchEv physicalDotsPerInch()
extern "C"
double
C_ZNK7QScreen19physicalDotsPerInchEv(void *qthis) {
  auto ret =
  ((QScreen*)qthis)->physicalDotsPerInch();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qscreen.h', line 149, column 10>
//   // proto:  void QScreen::physicalDotsPerInchChanged(qreal dpi);
// _ZN7QScreen26physicalDotsPerInchChangedEd physicalDotsPerInchChanged(qreal)
extern "C"
void
C_ZN7QScreen26physicalDotsPerInchChangedEd(void *qthis,
qreal arg1) {
  ((QScreen*)qthis)->physicalDotsPerInchChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qscreen.h', line 143, column 11>
//   // proto:  qreal QScreen::refreshRate();
// _ZNK7QScreen11refreshRateEv refreshRate()
extern "C"
double
C_ZNK7QScreen11refreshRateEv(void *qthis) {
  auto ret =
  ((QScreen*)qthis)->refreshRate();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qscreen.h', line 132, column 10>
//   // proto:  void QScreen::setOrientationUpdateMask(Qt::ScreenOrientations mask);
// _ZN7QScreen24setOrientationUpdateMaskE6QFlagsIN2Qt17ScreenOrientationEE setOrientationUpdateMask(Qt::ScreenOrientations)
extern "C"
void
C_ZN7QScreen24setOrientationUpdateMaskE6QFlagsIN2Qt17ScreenOrientationEE(void *qthis,
Qt::ScreenOrientations* arg1) {
  ((QScreen*)qthis)->setOrientationUpdateMask(*((Qt::ScreenOrientations*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qscreen.h', line 67, column 5>
//   // proto:  const QMetaObject * QScreen::metaObject();
// _ZNK7QScreen10metaObjectEv metaObject()
extern "C"
void*
C_ZNK7QScreen10metaObjectEv(void *qthis) {
  auto ret =
  ((QScreen*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qscreen.h', line 131, column 28>
//   // proto:  Qt::ScreenOrientations QScreen::orientationUpdateMask();
// _ZNK7QScreen21orientationUpdateMaskEv orientationUpdateMask()
extern "C"
QFlags<Qt::ScreenOrientation>*
C_ZNK7QScreen21orientationUpdateMaskEv(void *qthis) {
  auto ret =
  ((QScreen*)qthis)->orientationUpdateMask();
  return new QFlags<Qt::ScreenOrientation>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qscreen.h', line 154, column 10>
//   // proto:  void QScreen::refreshRateChanged(qreal refreshRate);
// _ZN7QScreen18refreshRateChangedEd refreshRateChanged(qreal)
extern "C"
void
C_ZN7QScreen18refreshRateChangedEd(void *qthis,
qreal arg1) {
  ((QScreen*)qthis)->refreshRateChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qscreen.h', line 116, column 11>
//   // proto:  QSize QScreen::availableSize();
// _ZNK7QScreen13availableSizeEv availableSize()
extern "C"
QSize*
C_ZNK7QScreen13availableSizeEv(void *qthis) {
  auto ret =
  ((QScreen*)qthis)->availableSize();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qscreen.h', line 97, column 13>
//   // proto:  QString QScreen::name();
// _ZNK7QScreen4nameEv name()
extern "C"
QString*
C_ZNK7QScreen4nameEv(void *qthis) {
  auto ret =
  ((QScreen*)qthis)->name();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qscreen.h', line 124, column 11>
//   // proto:  QSize QScreen::availableVirtualSize();
// _ZNK7QScreen20availableVirtualSizeEv availableVirtualSize()
extern "C"
QSize*
C_ZNK7QScreen20availableVirtualSizeEv(void *qthis) {
  auto ret =
  ((QScreen*)qthis)->availableVirtualSize();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qscreen.h', line 110, column 11>
//   // proto:  qreal QScreen::logicalDotsPerInchX();
// _ZNK7QScreen19logicalDotsPerInchXEv logicalDotsPerInchX()
extern "C"
double
C_ZNK7QScreen19logicalDotsPerInchXEv(void *qthis) {
  auto ret =
  ((QScreen*)qthis)->logicalDotsPerInchX();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qscreen.h', line 151, column 10>
//   // proto:  void QScreen::virtualGeometryChanged(const QRect & rect);
// _ZN7QScreen22virtualGeometryChangedERK5QRect virtualGeometryChanged(const class QRect &)
extern "C"
void
C_ZN7QScreen22virtualGeometryChangedERK5QRect(void *qthis,
const QRect* arg1) {
  ((QScreen*)qthis)->virtualGeometryChanged(*((const QRect*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qscreen.h', line 117, column 11>
//   // proto:  QRect QScreen::availableGeometry();
// _ZNK7QScreen17availableGeometryEv availableGeometry()
extern "C"
QRect*
C_ZNK7QScreen17availableGeometryEv(void *qthis) {
  auto ret =
  ((QScreen*)qthis)->availableGeometry();
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qscreen.h', line 106, column 11>
//   // proto:  qreal QScreen::physicalDotsPerInchX();
// _ZNK7QScreen20physicalDotsPerInchXEv physicalDotsPerInchX()
extern "C"
double
C_ZNK7QScreen20physicalDotsPerInchXEv(void *qthis) {
  auto ret =
  ((QScreen*)qthis)->physicalDotsPerInchX();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qscreen.h', line 148, column 10>
//   // proto:  void QScreen::physicalSizeChanged(const QSizeF & size);
// _ZN7QScreen19physicalSizeChangedERK6QSizeF physicalSizeChanged(const class QSizeF &)
extern "C"
void
C_ZN7QScreen19physicalSizeChangedERK6QSizeF(void *qthis,
const QSizeF* arg1) {
  ((QScreen*)qthis)->physicalSizeChanged(*((const QSizeF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qscreen.h', line 107, column 11>
//   // proto:  qreal QScreen::physicalDotsPerInchY();
// _ZNK7QScreen20physicalDotsPerInchYEv physicalDotsPerInchY()
extern "C"
double
C_ZNK7QScreen20physicalDotsPerInchYEv(void *qthis) {
  auto ret =
  ((QScreen*)qthis)->physicalDotsPerInchY();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qscreen.h', line 99, column 9>
//   // proto:  int QScreen::depth();
// _ZNK7QScreen5depthEv depth()
extern "C"
int
C_ZNK7QScreen5depthEv(void *qthis) {
  auto ret =
  ((QScreen*)qthis)->depth();
  return ret; // 0 TypeKind.INT
}
// <= ext block end

// body block begin =>
// QScreen_SlotProxy here
class QScreen_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QScreen_SlotProxy():QObject(){}

public slots:
  // primaryOrientationChanged(Qt::ScreenOrientation)
  void slot_proxy_func__ZN7QScreen25primaryOrientationChangedEN2Qt17ScreenOrientationE(Qt::ScreenOrientation arg0);
public:
  void (*slot_func__ZN7QScreen25primaryOrientationChangedEN2Qt17ScreenOrientationE)(void* rsfptr, Qt::ScreenOrientation arg0) = NULL;
public slots:
  // orientationChanged(Qt::ScreenOrientation)
  void slot_proxy_func__ZN7QScreen18orientationChangedEN2Qt17ScreenOrientationE(Qt::ScreenOrientation arg0);
public:
  void (*slot_func__ZN7QScreen18orientationChangedEN2Qt17ScreenOrientationE)(void* rsfptr, Qt::ScreenOrientation arg0) = NULL;
public slots:
  // logicalDotsPerInchChanged(qreal)
  void slot_proxy_func__ZN7QScreen25logicalDotsPerInchChangedEd(qreal arg0);
public:
  void (*slot_func__ZN7QScreen25logicalDotsPerInchChangedEd)(void* rsfptr, qreal arg0) = NULL;
public slots:
  // availableGeometryChanged(const class QRect &)
  void slot_proxy_func__ZN7QScreen24availableGeometryChangedERK5QRect(const QRect & arg0);
public:
  void (*slot_func__ZN7QScreen24availableGeometryChangedERK5QRect)(void* rsfptr, const QRect & arg0) = NULL;
public slots:
  // geometryChanged(const class QRect &)
  void slot_proxy_func__ZN7QScreen15geometryChangedERK5QRect(const QRect & arg0);
public:
  void (*slot_func__ZN7QScreen15geometryChangedERK5QRect)(void* rsfptr, const QRect & arg0) = NULL;
public slots:
  // physicalDotsPerInchChanged(qreal)
  void slot_proxy_func__ZN7QScreen26physicalDotsPerInchChangedEd(qreal arg0);
public:
  void (*slot_func__ZN7QScreen26physicalDotsPerInchChangedEd)(void* rsfptr, qreal arg0) = NULL;
public slots:
  // virtualGeometryChanged(const class QRect &)
  void slot_proxy_func__ZN7QScreen22virtualGeometryChangedERK5QRect(const QRect & arg0);
public:
  void (*slot_func__ZN7QScreen22virtualGeometryChangedERK5QRect)(void* rsfptr, const QRect & arg0) = NULL;
public slots:
  // refreshRateChanged(qreal)
  void slot_proxy_func__ZN7QScreen18refreshRateChangedEd(qreal arg0);
public:
  void (*slot_func__ZN7QScreen18refreshRateChangedEd)(void* rsfptr, qreal arg0) = NULL;
public slots:
  // physicalSizeChanged(const class QSizeF &)
  void slot_proxy_func__ZN7QScreen19physicalSizeChangedERK6QSizeF(const QSizeF & arg0);
public:
  void (*slot_func__ZN7QScreen19physicalSizeChangedERK6QSizeF)(void* rsfptr, const QSizeF & arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/gui/qscreen.moc"

extern "C" {
  QScreen_SlotProxy* QScreen_SlotProxy_new()
  {
    return new QScreen_SlotProxy();
  }
};

void QScreen_SlotProxy::slot_proxy_func__ZN7QScreen25primaryOrientationChangedEN2Qt17ScreenOrientationE(Qt::ScreenOrientation arg0) {
  if (this->slot_func__ZN7QScreen25primaryOrientationChangedEN2Qt17ScreenOrientationE != NULL) {
    // do smth...
    this->slot_func__ZN7QScreen25primaryOrientationChangedEN2Qt17ScreenOrientationE(this->rsfptr, arg0);
  }
}
extern "C"
void* QScreen_SlotProxy_connect__ZN7QScreen25primaryOrientationChangedEN2Qt17ScreenOrientationE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QScreen_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QScreen25primaryOrientationChangedEN2Qt17ScreenOrientationE = (decltype(that->slot_func__ZN7QScreen25primaryOrientationChangedEN2Qt17ScreenOrientationE))ffifptr;
  QObject::connect((QScreen*)sender, SIGNAL(primaryOrientationChanged(Qt::ScreenOrientation)), that, SLOT(slot_proxy_func__ZN7QScreen25primaryOrientationChangedEN2Qt17ScreenOrientationE(Qt::ScreenOrientation arg0)));
  return that;
}
extern "C"
void QScreen_SlotProxy_disconnect__ZN7QScreen25primaryOrientationChangedEN2Qt17ScreenOrientationE(QScreen_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QScreen_SlotProxy::slot_proxy_func__ZN7QScreen18orientationChangedEN2Qt17ScreenOrientationE(Qt::ScreenOrientation arg0) {
  if (this->slot_func__ZN7QScreen18orientationChangedEN2Qt17ScreenOrientationE != NULL) {
    // do smth...
    this->slot_func__ZN7QScreen18orientationChangedEN2Qt17ScreenOrientationE(this->rsfptr, arg0);
  }
}
extern "C"
void* QScreen_SlotProxy_connect__ZN7QScreen18orientationChangedEN2Qt17ScreenOrientationE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QScreen_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QScreen18orientationChangedEN2Qt17ScreenOrientationE = (decltype(that->slot_func__ZN7QScreen18orientationChangedEN2Qt17ScreenOrientationE))ffifptr;
  QObject::connect((QScreen*)sender, SIGNAL(orientationChanged(Qt::ScreenOrientation)), that, SLOT(slot_proxy_func__ZN7QScreen18orientationChangedEN2Qt17ScreenOrientationE(Qt::ScreenOrientation arg0)));
  return that;
}
extern "C"
void QScreen_SlotProxy_disconnect__ZN7QScreen18orientationChangedEN2Qt17ScreenOrientationE(QScreen_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QScreen_SlotProxy::slot_proxy_func__ZN7QScreen25logicalDotsPerInchChangedEd(qreal arg0) {
  if (this->slot_func__ZN7QScreen25logicalDotsPerInchChangedEd != NULL) {
    // do smth...
    this->slot_func__ZN7QScreen25logicalDotsPerInchChangedEd(this->rsfptr, arg0);
  }
}
extern "C"
void* QScreen_SlotProxy_connect__ZN7QScreen25logicalDotsPerInchChangedEd(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QScreen_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QScreen25logicalDotsPerInchChangedEd = (decltype(that->slot_func__ZN7QScreen25logicalDotsPerInchChangedEd))ffifptr;
  QObject::connect((QScreen*)sender, SIGNAL(logicalDotsPerInchChanged(qreal)), that, SLOT(slot_proxy_func__ZN7QScreen25logicalDotsPerInchChangedEd(qreal arg0)));
  return that;
}
extern "C"
void QScreen_SlotProxy_disconnect__ZN7QScreen25logicalDotsPerInchChangedEd(QScreen_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QScreen_SlotProxy::slot_proxy_func__ZN7QScreen24availableGeometryChangedERK5QRect(const QRect & arg0) {
  if (this->slot_func__ZN7QScreen24availableGeometryChangedERK5QRect != NULL) {
    // do smth...
    this->slot_func__ZN7QScreen24availableGeometryChangedERK5QRect(this->rsfptr, arg0);
  }
}
extern "C"
void* QScreen_SlotProxy_connect__ZN7QScreen24availableGeometryChangedERK5QRect(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QScreen_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QScreen24availableGeometryChangedERK5QRect = (decltype(that->slot_func__ZN7QScreen24availableGeometryChangedERK5QRect))ffifptr;
  QObject::connect((QScreen*)sender, SIGNAL(availableGeometryChanged(const class QRect &)), that, SLOT(slot_proxy_func__ZN7QScreen24availableGeometryChangedERK5QRect(const QRect & arg0)));
  return that;
}
extern "C"
void QScreen_SlotProxy_disconnect__ZN7QScreen24availableGeometryChangedERK5QRect(QScreen_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QScreen_SlotProxy::slot_proxy_func__ZN7QScreen15geometryChangedERK5QRect(const QRect & arg0) {
  if (this->slot_func__ZN7QScreen15geometryChangedERK5QRect != NULL) {
    // do smth...
    this->slot_func__ZN7QScreen15geometryChangedERK5QRect(this->rsfptr, arg0);
  }
}
extern "C"
void* QScreen_SlotProxy_connect__ZN7QScreen15geometryChangedERK5QRect(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QScreen_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QScreen15geometryChangedERK5QRect = (decltype(that->slot_func__ZN7QScreen15geometryChangedERK5QRect))ffifptr;
  QObject::connect((QScreen*)sender, SIGNAL(geometryChanged(const class QRect &)), that, SLOT(slot_proxy_func__ZN7QScreen15geometryChangedERK5QRect(const QRect & arg0)));
  return that;
}
extern "C"
void QScreen_SlotProxy_disconnect__ZN7QScreen15geometryChangedERK5QRect(QScreen_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QScreen_SlotProxy::slot_proxy_func__ZN7QScreen26physicalDotsPerInchChangedEd(qreal arg0) {
  if (this->slot_func__ZN7QScreen26physicalDotsPerInchChangedEd != NULL) {
    // do smth...
    this->slot_func__ZN7QScreen26physicalDotsPerInchChangedEd(this->rsfptr, arg0);
  }
}
extern "C"
void* QScreen_SlotProxy_connect__ZN7QScreen26physicalDotsPerInchChangedEd(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QScreen_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QScreen26physicalDotsPerInchChangedEd = (decltype(that->slot_func__ZN7QScreen26physicalDotsPerInchChangedEd))ffifptr;
  QObject::connect((QScreen*)sender, SIGNAL(physicalDotsPerInchChanged(qreal)), that, SLOT(slot_proxy_func__ZN7QScreen26physicalDotsPerInchChangedEd(qreal arg0)));
  return that;
}
extern "C"
void QScreen_SlotProxy_disconnect__ZN7QScreen26physicalDotsPerInchChangedEd(QScreen_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QScreen_SlotProxy::slot_proxy_func__ZN7QScreen22virtualGeometryChangedERK5QRect(const QRect & arg0) {
  if (this->slot_func__ZN7QScreen22virtualGeometryChangedERK5QRect != NULL) {
    // do smth...
    this->slot_func__ZN7QScreen22virtualGeometryChangedERK5QRect(this->rsfptr, arg0);
  }
}
extern "C"
void* QScreen_SlotProxy_connect__ZN7QScreen22virtualGeometryChangedERK5QRect(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QScreen_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QScreen22virtualGeometryChangedERK5QRect = (decltype(that->slot_func__ZN7QScreen22virtualGeometryChangedERK5QRect))ffifptr;
  QObject::connect((QScreen*)sender, SIGNAL(virtualGeometryChanged(const class QRect &)), that, SLOT(slot_proxy_func__ZN7QScreen22virtualGeometryChangedERK5QRect(const QRect & arg0)));
  return that;
}
extern "C"
void QScreen_SlotProxy_disconnect__ZN7QScreen22virtualGeometryChangedERK5QRect(QScreen_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QScreen_SlotProxy::slot_proxy_func__ZN7QScreen18refreshRateChangedEd(qreal arg0) {
  if (this->slot_func__ZN7QScreen18refreshRateChangedEd != NULL) {
    // do smth...
    this->slot_func__ZN7QScreen18refreshRateChangedEd(this->rsfptr, arg0);
  }
}
extern "C"
void* QScreen_SlotProxy_connect__ZN7QScreen18refreshRateChangedEd(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QScreen_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QScreen18refreshRateChangedEd = (decltype(that->slot_func__ZN7QScreen18refreshRateChangedEd))ffifptr;
  QObject::connect((QScreen*)sender, SIGNAL(refreshRateChanged(qreal)), that, SLOT(slot_proxy_func__ZN7QScreen18refreshRateChangedEd(qreal arg0)));
  return that;
}
extern "C"
void QScreen_SlotProxy_disconnect__ZN7QScreen18refreshRateChangedEd(QScreen_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QScreen_SlotProxy::slot_proxy_func__ZN7QScreen19physicalSizeChangedERK6QSizeF(const QSizeF & arg0) {
  if (this->slot_func__ZN7QScreen19physicalSizeChangedERK6QSizeF != NULL) {
    // do smth...
    this->slot_func__ZN7QScreen19physicalSizeChangedERK6QSizeF(this->rsfptr, arg0);
  }
}
extern "C"
void* QScreen_SlotProxy_connect__ZN7QScreen19physicalSizeChangedERK6QSizeF(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QScreen_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QScreen19physicalSizeChangedERK6QSizeF = (decltype(that->slot_func__ZN7QScreen19physicalSizeChangedERK6QSizeF))ffifptr;
  QObject::connect((QScreen*)sender, SIGNAL(physicalSizeChanged(const class QSizeF &)), that, SLOT(slot_proxy_func__ZN7QScreen19physicalSizeChangedERK6QSizeF(const QSizeF & arg0)));
  return that;
}
extern "C"
void QScreen_SlotProxy_disconnect__ZN7QScreen19physicalSizeChangedERK6QSizeF(QScreen_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

