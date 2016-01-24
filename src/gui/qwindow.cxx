// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtGui/qwindow.h
// dst-file: /src/gui/qwindow.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qwindow.h>


#include <qsize.h>
#include <qsurfaceformat.h>
#include <qglobal.h>
#include <qwindowdefs.h>
#include <qpoint.h>
#include <qmargins.h>
#include <qnamespace.h>
#include <qrect.h>
#include <qsurface.h>
#include <qregion.h>
#include <qstring.h>
#include <qcursor.h>
#include <qicon.h>
// <= header block end

// main block begin =>
void __keep_qwindow_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 189, column 16>
//   // proto:  int QWindow::minimumHeight();
if (true) {
  auto f = [](QWindow flythis) {
    ((QWindow*)0)->minimumHeight();
    flythis.minimumHeight();
  };
  if (f == nullptr){}
}
// _ZNK7QWindow13minimumHeightEv minimumHeight()
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 191, column 16>
//   // proto:  int QWindow::maximumHeight();
if (true) {
  auto f = [](QWindow flythis) {
    ((QWindow*)0)->maximumHeight();
    flythis.maximumHeight();
  };
  if (f == nullptr){}
}
// _ZNK7QWindow13maximumHeightEv maximumHeight()
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 216, column 16>
//   // proto:  int QWindow::y();
if (true) {
  auto f = [](QWindow flythis) {
    ((QWindow*)0)->y();
    flythis.y();
  };
  if (f == nullptr){}
}
// _ZNK7QWindow1yEv y()
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 213, column 16>
//   // proto:  int QWindow::width();
if (true) {
  auto f = [](QWindow flythis) {
    ((QWindow*)0)->width();
    flythis.width();
  };
  if (f == nullptr){}
}
// _ZNK7QWindow5widthEv width()
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 188, column 16>
//   // proto:  int QWindow::minimumWidth();
if (true) {
  auto f = [](QWindow flythis) {
    ((QWindow*)0)->minimumWidth();
    flythis.minimumWidth();
  };
  if (f == nullptr){}
}
// _ZNK7QWindow12minimumWidthEv minimumWidth()
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 215, column 16>
//   // proto:  int QWindow::x();
if (true) {
  auto f = [](QWindow flythis) {
    ((QWindow*)0)->x();
    flythis.x();
  };
  if (f == nullptr){}
}
// _ZNK7QWindow1xEv x()
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 214, column 16>
//   // proto:  int QWindow::height();
if (true) {
  auto f = [](QWindow flythis) {
    ((QWindow*)0)->height();
    flythis.height();
  };
  if (f == nullptr){}
}
// _ZNK7QWindow6heightEv height()
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 218, column 11>
//   // proto:  QSize QWindow::size();
if (true) {
  auto f = [](QWindow flythis) {
    ((QWindow*)0)->size();
    flythis.size();
  };
  if (f == nullptr){}
}
// _ZNK7QWindow4sizeEv size()
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 190, column 16>
//   // proto:  int QWindow::maximumWidth();
if (true) {
  auto f = [](QWindow flythis) {
    ((QWindow*)0)->maximumWidth();
    flythis.maximumWidth();
  };
  if (f == nullptr){}
}
// _ZNK7QWindow12maximumWidthEv maximumWidth()
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 219, column 19>
//   // proto:  QPoint QWindow::position();
if (true) {
  auto f = [](QWindow flythis) {
    ((QWindow*)0)->position();
    flythis.position();
  };
  if (f == nullptr){}
}
// _ZNK7QWindow8positionEv position()
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QWindow_Class_Size()
{
  return sizeof(QWindow);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 296, column 10>
//   // proto:  void QWindow::xChanged(int arg);
// _ZN7QWindow8xChangedEi xChanged(int)
extern "C"
void
C_ZN7QWindow8xChangedEi(void *qthis,
int arg1) {
  ((QWindow*)qthis)->xChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 252, column 10>
//   // proto:  void QWindow::unsetCursor();
// _ZN7QWindow11unsetCursorEv unsetCursor()
extern "C"
void
C_ZN7QWindow11unsetCursorEv(void *qthis) {
  ((QWindow*)qthis)->unsetCursor();
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 132, column 10>
//   // proto:  bool QWindow::isVisible();
// _ZNK7QWindow9isVisibleEv isVisible()
extern "C"
bool
C_ZNK7QWindow9isVisibleEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->isVisible();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 241, column 10>
//   // proto:  void QWindow::setScreen(QScreen * screen);
// _ZN7QWindow9setScreenEP7QScreen setScreen(class QScreen *)
extern "C"
void
C_ZN7QWindow9setScreenEP7QScreen(void *qthis,
QScreen * arg1) {
  ((QWindow*)qthis)->setScreen(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 194, column 11>
//   // proto:  QSize QWindow::maximumSize();
// _ZNK7QWindow11maximumSizeEv maximumSize()
extern "C"
QSize*
C_ZNK7QWindow11maximumSizeEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->maximumSize();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 176, column 10>
//   // proto:  void QWindow::setTransientParent(QWindow * parent);
// _ZN7QWindow18setTransientParentEPS_ setTransientParent(class QWindow *)
extern "C"
void
C_ZN7QWindow18setTransientParentEPS_(void *qthis,
QWindow * arg1) {
  ((QWindow*)qthis)->setTransientParent(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 151, column 20>
//   // proto:  QSurfaceFormat QWindow::format();
// _ZNK7QWindow6formatEv format()
extern "C"
QSurfaceFormat*
C_ZNK7QWindow6formatEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->format();
  return new QSurfaceFormat(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 144, column 10>
//   // proto:  bool QWindow::isTopLevel();
// _ZNK7QWindow10isTopLevelEv isTopLevel()
extern "C"
bool
C_ZNK7QWindow10isTopLevelEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->isTopLevel();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 230, column 10>
//   // proto:  void QWindow::setIcon(const QIcon & icon);
// _ZN7QWindow7setIconERK5QIcon setIcon(const class QIcon &)
extern "C"
void
C_ZN7QWindow7setIconERK5QIcon(void *qthis,
const QIcon* arg1) {
  ((QWindow*)qthis)->setIcon(*((const QIcon*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 161, column 11>
//   // proto:  qreal QWindow::opacity();
// _ZNK7QWindow7opacityEv opacity()
extern "C"
double
C_ZNK7QWindow7opacityEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->opacity();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 198, column 10>
//   // proto:  void QWindow::setMinimumSize(const QSize & size);
// _ZN7QWindow14setMinimumSizeERK5QSize setMinimumSize(const class QSize &)
extern "C"
void
C_ZN7QWindow14setMinimumSizeERK5QSize(void *qthis,
const QSize* arg1) {
  ((QWindow*)qthis)->setMinimumSize(*((const QSize*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 189, column 16>
//   // proto:  int QWindow::minimumHeight();
// _ZNK7QWindow13minimumHeightEv minimumHeight()
extern "C"
int
C_ZNK7QWindow13minimumHeightEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->minimumHeight();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 196, column 11>
//   // proto:  QSize QWindow::sizeIncrement();
// _ZNK7QWindow13sizeIncrementEv sizeIncrement()
extern "C"
QSize*
C_ZNK7QWindow13sizeIncrementEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->sizeIncrement();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 224, column 10>
//   // proto:  void QWindow::resize(const QSize & newSize);
// _ZN7QWindow6resizeERK5QSize resize(const class QSize &)
extern "C"
void
C_ZN7QWindow6resizeERK5QSize(void *qthis,
const QSize* arg1) {
  ((QWindow*)qthis)->resize(*((const QSize*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 291, column 10>
//   // proto:  void QWindow::screenChanged(QScreen * screen);
// _ZN7QWindow13screenChangedEP7QScreen screenChanged(class QScreen *)
extern "C"
void
C_ZN7QWindow13screenChangedEP7QScreen(void *qthis,
QScreen * arg1) {
  ((QWindow*)qthis)->screenChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 274, column 10>
//   // proto:  void QWindow::setTitle(const QString & );
// _ZN7QWindow8setTitleERK7QString setTitle(const class QString &)
extern "C"
void
C_ZN7QWindow8setTitleERK7QString(void *qthis,
const QString* arg1) {
  ((QWindow*)qthis)->setTitle(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 271, column 10>
//   // proto:  void QWindow::raise();
// _ZN7QWindow5raiseEv raise()
extern "C"
void
C_ZN7QWindow5raiseEv(void *qthis) {
  ((QWindow*)qthis)->raise();
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 139, column 9>
//   // proto:  WId QWindow::winId();
// _ZNK7QWindow5winIdEv winId()
extern "C"
int
C_ZNK7QWindow5winIdEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->winId();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 135, column 10>
//   // proto:  void QWindow::setVisibility(QWindow::Visibility v);
// _ZN7QWindow13setVisibilityENS_10VisibilityE setVisibility(enum QWindow::Visibility)
extern "C"
void
C_ZN7QWindow13setVisibilityENS_10VisibilityE(void *qthis,
QWindow::Visibility arg1) {
  ((QWindow*)qthis)->setVisibility(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 193, column 11>
//   // proto:  QSize QWindow::minimumSize();
// _ZNK7QWindow11minimumSizeEv minimumSize()
extern "C"
QSize*
C_ZNK7QWindow11minimumSizeEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->minimumSize();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 246, column 12>
//   // proto:  QPoint QWindow::mapToGlobal(const QPoint & pos);
// _ZNK7QWindow11mapToGlobalERK6QPoint mapToGlobal(const class QPoint &)
extern "C"
QPoint*
C_ZNK7QWindow11mapToGlobalERK6QPoint(void *qthis,
const QPoint* arg1) {
  auto ret =
  ((QWindow*)qthis)->mapToGlobal(*((const QPoint*)arg1));
  return new QPoint(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 255, column 21>
//   // proto: static QWindow * QWindow::fromWinId(WId id);
// _ZN7QWindow9fromWinIdEi fromWinId(WId)
extern "C"
void*
C_ZN7QWindow9fromWinIdEi(WId arg1) {
  auto ret =
  QWindow::fromWinId(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 207, column 14>
//   // proto:  QMargins QWindow::frameMargins();
// _ZNK7QWindow12frameMarginsEv frameMargins()
extern "C"
QMargins*
C_ZNK7QWindow12frameMarginsEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->frameMargins();
  return new QMargins(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 283, column 10>
//   // proto:  void QWindow::setMaximumWidth(int w);
// _ZN7QWindow15setMaximumWidthEi setMaximumWidth(int)
extern "C"
void
C_ZN7QWindow15setMaximumWidthEi(void *qthis,
int arg1) {
  ((QWindow*)qthis)->setMaximumWidth(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 191, column 16>
//   // proto:  int QWindow::maximumHeight();
// _ZNK7QWindow13maximumHeightEv maximumHeight()
extern "C"
int
C_ZNK7QWindow13maximumHeightEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->maximumHeight();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 312, column 10>
//   // proto:  void QWindow::focusObjectChanged(QObject * object);
// _ZN7QWindow18focusObjectChangedEP7QObject focusObjectChanged(class QObject *)
extern "C"
void
C_ZN7QWindow18focusObjectChangedEP7QObject(void *qthis,
QObject * arg1) {
  ((QWindow*)qthis)->focusObjectChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 147, column 24>
//   // proto:  Qt::WindowModality QWindow::modality();
// _ZNK7QWindow8modalityEv modality()
extern "C"
Qt::WindowModality
C_ZNK7QWindow8modalityEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->modality();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 146, column 10>
//   // proto:  bool QWindow::isModal();
// _ZNK7QWindow7isModalEv isModal()
extern "C"
bool
C_ZNK7QWindow7isModalEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->isModal();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 304, column 10>
//   // proto:  void QWindow::maximumWidthChanged(int arg);
// _ZN7QWindow19maximumWidthChangedEi maximumWidthChanged(int)
extern "C"
void
C_ZN7QWindow19maximumWidthChangedEi(void *qthis,
int arg1) {
  ((QWindow*)qthis)->maximumWidthChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 205, column 11>
//   // proto:  QRect QWindow::geometry();
// _ZNK7QWindow8geometryEv geometry()
extern "C"
QRect*
C_ZNK7QWindow8geometryEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->geometry();
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 130, column 17>
//   // proto:  QSurface::SurfaceType QWindow::surfaceType();
// _ZNK7QWindow11surfaceTypeEv surfaceType()
extern "C"
QSurface::SurfaceType
C_ZNK7QWindow11surfaceTypeEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->surfaceType();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 142, column 10>
//   // proto:  void QWindow::setParent(QWindow * parent);
// _ZN7QWindow9setParentEPS_ setParent(class QWindow *)
extern "C"
void
C_ZN7QWindow9setParentEPS_(void *qthis,
QWindow * arg1) {
  ((QWindow*)qthis)->setParent(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 208, column 11>
//   // proto:  QRect QWindow::frameGeometry();
// _ZNK7QWindow13frameGeometryEv frameGeometry()
extern "C"
QRect*
C_ZNK7QWindow13frameGeometryEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->frameGeometry();
  return new QRect(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 152, column 20>
//   // proto:  QSurfaceFormat QWindow::requestedFormat();
// _ZNK7QWindow15requestedFormatEv requestedFormat()
extern "C"
QSurfaceFormat*
C_ZNK7QWindow15requestedFormatEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->requestedFormat();
  return new QSurfaceFormat(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 279, column 10>
//   // proto:  void QWindow::setHeight(int arg);
// _ZN7QWindow9setHeightEi setHeight(int)
extern "C"
void
C_ZN7QWindow9setHeightEi(void *qthis,
int arg1) {
  ((QWindow*)qthis)->setHeight(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 258, column 24>
//   // proto:  void QWindow::requestActivate();
// _ZN7QWindow15requestActivateEv requestActivate()
extern "C"
void
C_ZN7QWindow15requestActivateEv(void *qthis) {
  ((QWindow*)qthis)->requestActivate();
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 310, column 10>
//   // proto:  void QWindow::contentOrientationChanged(Qt::ScreenOrientation orientation);
// _ZN7QWindow25contentOrientationChangedEN2Qt17ScreenOrientationE contentOrientationChanged(Qt::ScreenOrientation)
extern "C"
void
C_ZN7QWindow25contentOrientationChangedEN2Qt17ScreenOrientationE(void *qthis,
Qt::ScreenOrientation* arg1) {
  ((QWindow*)qthis)->contentOrientationChanged(*((Qt::ScreenOrientation*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 184, column 10>
//   // proto:  bool QWindow::isAncestorOf(const QWindow * child, QWindow::AncestorMode mode);
// _ZNK7QWindow12isAncestorOfEPKS_NS_12AncestorModeE isAncestorOf(const class QWindow *, enum QWindow::AncestorMode)
extern "C"
bool
C_ZNK7QWindow12isAncestorOfEPKS_NS_12AncestorModeE(void *qthis,
const QWindow * arg1,
QWindow::AncestorMode arg2) {
  auto ret =
  ((QWindow*)qthis)->isAncestorOf(arg1,
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 247, column 12>
//   // proto:  QPoint QWindow::mapFromGlobal(const QPoint & pos);
// _ZNK7QWindow13mapFromGlobalERK6QPoint mapFromGlobal(const class QPoint &)
extern "C"
QPoint*
C_ZNK7QWindow13mapFromGlobalERK6QPoint(void *qthis,
const QPoint* arg1) {
  auto ret =
  ((QWindow*)qthis)->mapFromGlobal(*((const QPoint*)arg1));
  return new QPoint(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 293, column 10>
//   // proto:  void QWindow::windowStateChanged(Qt::WindowState windowState);
// _ZN7QWindow18windowStateChangedEN2Qt11WindowStateE windowStateChanged(Qt::WindowState)
extern "C"
void
C_ZN7QWindow18windowStateChangedEN2Qt11WindowStateE(void *qthis,
Qt::WindowState* arg1) {
  ((QWindow*)qthis)->windowStateChanged(*((Qt::WindowState*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 308, column 24>
//   // proto:  void QWindow::visibilityChanged(QWindow::Visibility visibility);
// _ZN7QWindow17visibilityChangedENS_10VisibilityE visibilityChanged(class QWindow::Visibility)
extern "C"
void
C_ZN7QWindow17visibilityChangedENS_10VisibilityE(void *qthis,
QWindow::Visibility* arg1) {
  ((QWindow*)qthis)->visibilityChanged(*((QWindow::Visibility*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 294, column 24>
//   // proto:  void QWindow::windowTitleChanged(const QString & title);
// _ZN7QWindow18windowTitleChangedERK7QString windowTitleChanged(const class QString &)
extern "C"
void
C_ZN7QWindow18windowTitleChangedERK7QString(void *qthis,
const QString* arg1) {
  ((QWindow*)qthis)->windowTitleChanged(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 216, column 16>
//   // proto:  int QWindow::y();
// _ZNK7QWindow1yEv y()
extern "C"
int
C_ZNK7QWindow1yEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->y();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 213, column 16>
//   // proto:  int QWindow::width();
// _ZNK7QWindow5widthEv width()
extern "C"
int
C_ZNK7QWindow5widthEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->width();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 227, column 10>
//   // proto:  void QWindow::setFilePath(const QString & filePath);
// _ZN7QWindow11setFilePathERK7QString setFilePath(const class QString &)
extern "C"
void
C_ZN7QWindow11setFilePathERK7QString(void *qthis,
const QString* arg1) {
  ((QWindow*)qthis)->setFilePath(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 251, column 10>
//   // proto:  void QWindow::setCursor(const QCursor & );
// _ZN7QWindow9setCursorERK7QCursor setCursor(const class QCursor &)
extern "C"
void
C_ZN7QWindow9setCursorERK7QCursor(void *qthis,
const QCursor* arg1) {
  ((QWindow*)qthis)->setCursor(*((const QCursor*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 260, column 10>
//   // proto:  void QWindow::setVisible(bool visible);
// _ZN7QWindow10setVisibleEb setVisible(_Bool)
extern "C"
void
C_ZN7QWindow10setVisibleEb(void *qthis,
bool arg1) {
  ((QWindow*)qthis)->setVisible(arg1);
}
//   // proto:  void QWindow::~QWindow();
extern "C"
void C_ZN7QWindowD2Ev(void *qthis) {
  delete (QWindow*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 238, column 10>
//   // proto:  bool QWindow::setMouseGrabEnabled(bool grab);
// _ZN7QWindow19setMouseGrabEnabledEb setMouseGrabEnabled(_Bool)
extern "C"
bool
C_ZN7QWindow19setMouseGrabEnabledEb(void *qthis,
bool arg1) {
  auto ret =
  ((QWindow*)qthis)->setMouseGrabEnabled(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 156, column 20>
//   // proto:  Qt::WindowType QWindow::type();
// _ZNK7QWindow4typeEv type()
extern "C"
Qt::WindowType
C_ZNK7QWindow4typeEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->type();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 168, column 10>
//   // proto:  void QWindow::reportContentOrientationChange(Qt::ScreenOrientation orientation);
// _ZN7QWindow30reportContentOrientationChangeEN2Qt17ScreenOrientationE reportContentOrientationChange(Qt::ScreenOrientation)
extern "C"
void
C_ZN7QWindow30reportContentOrientationChangeEN2Qt17ScreenOrientationE(void *qthis,
Qt::ScreenOrientation* arg1) {
  ((QWindow*)qthis)->reportContentOrientationChange(*((Qt::ScreenOrientation*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 169, column 27>
//   // proto:  Qt::ScreenOrientation QWindow::contentOrientation();
// _ZNK7QWindow18contentOrientationEv contentOrientation()
extern "C"
Qt::ScreenOrientation
C_ZNK7QWindow18contentOrientationEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->contentOrientation();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 186, column 10>
//   // proto:  bool QWindow::isExposed();
// _ZNK7QWindow9isExposedEv isExposed()
extern "C"
bool
C_ZNK7QWindow9isExposedEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->isExposed();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 300, column 10>
//   // proto:  void QWindow::heightChanged(int arg);
// _ZN7QWindow13heightChangedEi heightChanged(int)
extern "C"
void
C_ZN7QWindow13heightChangedEi(void *qthis,
int arg1) {
  ((QWindow*)qthis)->heightChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 188, column 16>
//   // proto:  int QWindow::minimumWidth();
// _ZNK7QWindow12minimumWidthEv minimumWidth()
extern "C"
int
C_ZNK7QWindow12minimumWidthEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->minimumWidth();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 221, column 10>
//   // proto:  void QWindow::setPosition(const QPoint & pt);
// _ZN7QWindow11setPositionERK6QPoint setPosition(const class QPoint &)
extern "C"
void
C_ZN7QWindow11setPositionERK6QPoint(void *qthis,
const QPoint* arg1) {
  ((QWindow*)qthis)->setPosition(*((const QPoint*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 270, column 10>
//   // proto:  bool QWindow::close();
// _ZN7QWindow5closeEv close()
extern "C"
bool
C_ZN7QWindow5closeEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->close();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 215, column 16>
//   // proto:  int QWindow::x();
// _ZNK7QWindow1xEv x()
extern "C"
int
C_ZNK7QWindow1xEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->x();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 292, column 10>
//   // proto:  void QWindow::modalityChanged(Qt::WindowModality modality);
// _ZN7QWindow15modalityChangedEN2Qt14WindowModalityE modalityChanged(Qt::WindowModality)
extern "C"
void
C_ZN7QWindow15modalityChangedEN2Qt14WindowModalityE(void *qthis,
Qt::WindowModality* arg1) {
  ((QWindow*)qthis)->modalityChanged(*((Qt::WindowModality*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 281, column 10>
//   // proto:  void QWindow::setMinimumWidth(int w);
// _ZN7QWindow15setMinimumWidthEi setMinimumWidth(int)
extern "C"
void
C_ZN7QWindow15setMinimumWidthEi(void *qthis,
int arg1) {
  ((QWindow*)qthis)->setMinimumWidth(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 164, column 13>
//   // proto:  QRegion QWindow::mask();
// _ZNK7QWindow4maskEv mask()
extern "C"
QRegion*
C_ZNK7QWindow4maskEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->mask();
  return new QRegion(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 299, column 10>
//   // proto:  void QWindow::widthChanged(int arg);
// _ZN7QWindow12widthChangedEi widthChanged(int)
extern "C"
void
C_ZN7QWindow12widthChangedEi(void *qthis,
int arg1) {
  ((QWindow*)qthis)->widthChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 141, column 14>
//   // proto:  QWindow * QWindow::parent();
// _ZNK7QWindow6parentEv parent()
extern "C"
void*
C_ZNK7QWindow6parentEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->parent();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 148, column 10>
//   // proto:  void QWindow::setModality(Qt::WindowModality modality);
// _ZN7QWindow11setModalityEN2Qt14WindowModalityE setModality(Qt::WindowModality)
extern "C"
void
C_ZN7QWindow11setModalityEN2Qt14WindowModalityE(void *qthis,
Qt::WindowModality* arg1) {
  ((QWindow*)qthis)->setModality(*((Qt::WindowModality*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 134, column 16>
//   // proto:  QWindow::Visibility QWindow::visibility();
// _ZNK7QWindow10visibilityEv visibility()
extern "C"
QWindow::Visibility
C_ZNK7QWindow10visibilityEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->visibility();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 211, column 10>
//   // proto:  void QWindow::setFramePosition(const QPoint & point);
// _ZN7QWindow16setFramePositionERK6QPoint setFramePosition(const class QPoint &)
extern "C"
void
C_ZN7QWindow16setFramePositionERK6QPoint(void *qthis,
const QPoint* arg1) {
  ((QWindow*)qthis)->setFramePosition(*((const QPoint*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 125, column 14>
//   // proto:  void QWindow::QWindow(QScreen * screen);
extern "C"
QWindow*
C_ZN7QWindowC2EP7QScreen(QScreen * arg1) {
  auto ret = new QWindow(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 203, column 10>
//   // proto:  void QWindow::setGeometry(int posx, int posy, int w, int h);
// _ZN7QWindow11setGeometryEiiii setGeometry(int, int, int, int)
extern "C"
void
C_ZN7QWindow11setGeometryEiiii(void *qthis,
int arg1,
int arg2,
int arg3,
int arg4) {
  ((QWindow*)qthis)->setGeometry(arg1,
arg2,
arg3,
arg4);
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 237, column 10>
//   // proto:  bool QWindow::setKeyboardGrabEnabled(bool grab);
// _ZN7QWindow22setKeyboardGrabEnabledEb setKeyboardGrabEnabled(_Bool)
extern "C"
bool
C_ZN7QWindow22setKeyboardGrabEnabledEb(void *qthis,
bool arg1) {
  auto ret =
  ((QWindow*)qthis)->setKeyboardGrabEnabled(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 84, column 5>
//   // proto:  const QMetaObject * QWindow::metaObject();
// _ZNK7QWindow10metaObjectEv metaObject()
extern "C"
void*
C_ZNK7QWindow10metaObjectEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 126, column 14>
//   // proto:  void QWindow::QWindow(QWindow * parent);
extern "C"
QWindow*
C_ZN7QWindowC2EPS_(QWindow * arg1) {
  auto ret = new QWindow(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 309, column 24>
//   // proto:  void QWindow::activeChanged();
// _ZN7QWindow13activeChangedEv activeChanged()
extern "C"
void
C_ZN7QWindow13activeChangedEv(void *qthis) {
  ((QWindow*)qthis)->activeChanged();
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 278, column 10>
//   // proto:  void QWindow::setWidth(int arg);
// _ZN7QWindow8setWidthEi setWidth(int)
extern "C"
void
C_ZN7QWindow8setWidthEi(void *qthis,
int arg1) {
  ((QWindow*)qthis)->setWidth(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 277, column 10>
//   // proto:  void QWindow::setY(int arg);
// _ZN7QWindow4setYEi setY(int)
extern "C"
void
C_ZN7QWindow4setYEi(void *qthis,
int arg1) {
  ((QWindow*)qthis)->setY(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 171, column 11>
//   // proto:  qreal QWindow::devicePixelRatio();
// _ZNK7QWindow16devicePixelRatioEv devicePixelRatio()
extern "C"
double
C_ZNK7QWindow16devicePixelRatioEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->devicePixelRatio();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 200, column 10>
//   // proto:  void QWindow::setBaseSize(const QSize & size);
// _ZN7QWindow11setBaseSizeERK5QSize setBaseSize(const class QSize &)
extern "C"
void
C_ZN7QWindow11setBaseSizeERK5QSize(void *qthis,
const QSize* arg1) {
  ((QWindow*)qthis)->setBaseSize(*((const QSize*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 286, column 24>
//   // proto:  void QWindow::alert(int msec);
// _ZN7QWindow5alertEi alert(int)
extern "C"
void
C_ZN7QWindow5alertEi(void *qthis,
int arg1) {
  ((QWindow*)qthis)->alert(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 297, column 10>
//   // proto:  void QWindow::yChanged(int arg);
// _ZN7QWindow8yChangedEi yChanged(int)
extern "C"
void
C_ZN7QWindow8yChangedEi(void *qthis,
int arg1) {
  ((QWindow*)qthis)->yChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 235, column 22>
//   // proto:  QPlatformWindow * QWindow::handle();
// _ZNK7QWindow6handleEv handle()
extern "C"
void*
C_ZNK7QWindow6handleEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->handle();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 233, column 10>
//   // proto:  void QWindow::destroy();
// _ZN7QWindow7destroyEv destroy()
extern "C"
void
C_ZN7QWindow7destroyEv(void *qthis) {
  ((QWindow*)qthis)->destroy();
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 177, column 14>
//   // proto:  QWindow * QWindow::transientParent();
// _ZNK7QWindow15transientParentEv transientParent()
extern "C"
void*
C_ZNK7QWindow15transientParentEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->transientParent();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 282, column 10>
//   // proto:  void QWindow::setMinimumHeight(int h);
// _ZN7QWindow16setMinimumHeightEi setMinimumHeight(int)
extern "C"
void
C_ZN7QWindow16setMinimumHeightEi(void *qthis,
int arg1) {
  ((QWindow*)qthis)->setMinimumHeight(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 262, column 10>
//   // proto:  void QWindow::show();
// _ZN7QWindow4showEv show()
extern "C"
void
C_ZN7QWindow4showEv(void *qthis) {
  ((QWindow*)qthis)->show();
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 302, column 10>
//   // proto:  void QWindow::minimumWidthChanged(int arg);
// _ZN7QWindow19minimumWidthChangedEi minimumWidthChanged(int)
extern "C"
void
C_ZN7QWindow19minimumWidthChangedEi(void *qthis,
int arg1) {
  ((QWindow*)qthis)->minimumWidthChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 195, column 11>
//   // proto:  QSize QWindow::baseSize();
// _ZNK7QWindow8baseSizeEv baseSize()
extern "C"
QSize*
C_ZNK7QWindow8baseSizeEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->baseSize();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 158, column 13>
//   // proto:  QString QWindow::title();
// _ZNK7QWindow5titleEv title()
extern "C"
QString*
C_ZNK7QWindow5titleEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->title();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 266, column 10>
//   // proto:  void QWindow::showMaximized();
// _ZN7QWindow13showMaximizedEv showMaximized()
extern "C"
void
C_ZN7QWindow13showMaximizedEv(void *qthis) {
  ((QWindow*)qthis)->showMaximized();
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 137, column 10>
//   // proto:  void QWindow::create();
// _ZN7QWindow6createEv create()
extern "C"
void
C_ZN7QWindow6createEv(void *qthis) {
  ((QWindow*)qthis)->create();
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 225, column 10>
//   // proto:  void QWindow::resize(int w, int h);
// _ZN7QWindow6resizeEii resize(int, int)
extern "C"
void
C_ZN7QWindow6resizeEii(void *qthis,
int arg1,
int arg2) {
  ((QWindow*)qthis)->resize(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 240, column 14>
//   // proto:  QScreen * QWindow::screen();
// _ZNK7QWindow6screenEv screen()
extern "C"
void*
C_ZNK7QWindow6screenEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->screen();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 222, column 10>
//   // proto:  void QWindow::setPosition(int posx, int posy);
// _ZN7QWindow11setPositionEii setPosition(int, int)
extern "C"
void
C_ZN7QWindow11setPositionEii(void *qthis,
int arg1,
int arg2) {
  ((QWindow*)qthis)->setPosition(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 160, column 10>
//   // proto:  void QWindow::setOpacity(qreal level);
// _ZN7QWindow10setOpacityEd setOpacity(qreal)
extern "C"
void
C_ZN7QWindow10setOpacityEd(void *qthis,
qreal arg1) {
  ((QWindow*)qthis)->setOpacity(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 173, column 21>
//   // proto:  Qt::WindowState QWindow::windowState();
// _ZNK7QWindow11windowStateEv windowState()
extern "C"
Qt::WindowState
C_ZNK7QWindow11windowStateEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->windowState();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 174, column 10>
//   // proto:  void QWindow::setWindowState(Qt::WindowState state);
// _ZN7QWindow14setWindowStateEN2Qt11WindowStateE setWindowState(Qt::WindowState)
extern "C"
void
C_ZN7QWindow14setWindowStateEN2Qt11WindowStateE(void *qthis,
Qt::WindowState* arg1) {
  ((QWindow*)qthis)->setWindowState(*((Qt::WindowState*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 204, column 10>
//   // proto:  void QWindow::setGeometry(const QRect & rect);
// _ZN7QWindow11setGeometryERK5QRect setGeometry(const class QRect &)
extern "C"
void
C_ZN7QWindow11setGeometryERK5QRect(void *qthis,
const QRect* arg1) {
  ((QWindow*)qthis)->setGeometry(*((const QRect*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 201, column 10>
//   // proto:  void QWindow::setSizeIncrement(const QSize & size);
// _ZN7QWindow16setSizeIncrementERK5QSize setSizeIncrement(const class QSize &)
extern "C"
void
C_ZN7QWindow16setSizeIncrementERK5QSize(void *qthis,
const QSize* arg1) {
  ((QWindow*)qthis)->setSizeIncrement(*((const QSize*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 265, column 10>
//   // proto:  void QWindow::showMinimized();
// _ZN7QWindow13showMinimizedEv showMinimized()
extern "C"
void
C_ZN7QWindow13showMinimizedEv(void *qthis) {
  ((QWindow*)qthis)->showMinimized();
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 244, column 22>
//   // proto:  QObject * QWindow::focusObject();
// _ZNK7QWindow11focusObjectEv focusObject()
extern "C"
void*
C_ZNK7QWindow11focusObjectEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->focusObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 166, column 10>
//   // proto:  bool QWindow::isActive();
// _ZNK7QWindow8isActiveEv isActive()
extern "C"
bool
C_ZNK7QWindow8isActiveEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->isActive();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 154, column 10>
//   // proto:  void QWindow::setFlags(Qt::WindowFlags flags);
// _ZN7QWindow8setFlagsE6QFlagsIN2Qt10WindowTypeEE setFlags(Qt::WindowFlags)
extern "C"
void
C_ZN7QWindow8setFlagsE6QFlagsIN2Qt10WindowTypeEE(void *qthis,
Qt::WindowFlags* arg1) {
  ((QWindow*)qthis)->setFlags(*((Qt::WindowFlags*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 155, column 21>
//   // proto:  Qt::WindowFlags QWindow::flags();
// _ZNK7QWindow5flagsEv flags()
extern "C"
QFlags<Qt::WindowType>*
C_ZNK7QWindow5flagsEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->flags();
  return new QFlags<Qt::WindowType>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 305, column 10>
//   // proto:  void QWindow::maximumHeightChanged(int arg);
// _ZN7QWindow20maximumHeightChangedEi maximumHeightChanged(int)
extern "C"
void
C_ZN7QWindow20maximumHeightChangedEi(void *qthis,
int arg1) {
  ((QWindow*)qthis)->maximumHeightChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 243, column 35>
//   // proto:  QAccessibleInterface * QWindow::accessibleRoot();
// _ZNK7QWindow14accessibleRootEv accessibleRoot()
extern "C"
void*
C_ZNK7QWindow14accessibleRootEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->accessibleRoot();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 250, column 13>
//   // proto:  QCursor QWindow::cursor();
// _ZNK7QWindow6cursorEv cursor()
extern "C"
QCursor*
C_ZNK7QWindow6cursorEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->cursor();
  return new QCursor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 150, column 10>
//   // proto:  void QWindow::setFormat(const QSurfaceFormat & format);
// _ZN7QWindow9setFormatERK14QSurfaceFormat setFormat(const class QSurfaceFormat &)
extern "C"
void
C_ZN7QWindow9setFormatERK14QSurfaceFormat(void *qthis,
const QSurfaceFormat* arg1) {
  ((QWindow*)qthis)->setFormat(*((const QSurfaceFormat*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 267, column 10>
//   // proto:  void QWindow::showFullScreen();
// _ZN7QWindow14showFullScreenEv showFullScreen()
extern "C"
void
C_ZN7QWindow14showFullScreenEv(void *qthis) {
  ((QWindow*)qthis)->showFullScreen();
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 276, column 10>
//   // proto:  void QWindow::setX(int arg);
// _ZN7QWindow4setXEi setX(int)
extern "C"
void
C_ZN7QWindow4setXEi(void *qthis,
int arg1) {
  ((QWindow*)qthis)->setX(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 314, column 24>
//   // proto:  void QWindow::opacityChanged(qreal opacity);
// _ZN7QWindow14opacityChangedEd opacityChanged(qreal)
extern "C"
void
C_ZN7QWindow14opacityChangedEd(void *qthis,
qreal arg1) {
  ((QWindow*)qthis)->opacityChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 272, column 10>
//   // proto:  void QWindow::lower();
// _ZN7QWindow5lowerEv lower()
extern "C"
void
C_ZN7QWindow5lowerEv(void *qthis) {
  ((QWindow*)qthis)->lower();
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 288, column 24>
//   // proto:  void QWindow::requestUpdate();
// _ZN7QWindow13requestUpdateEv requestUpdate()
extern "C"
void
C_ZN7QWindow13requestUpdateEv(void *qthis) {
  ((QWindow*)qthis)->requestUpdate();
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 129, column 10>
//   // proto:  void QWindow::setSurfaceType(QSurface::SurfaceType surfaceType);
// _ZN7QWindow14setSurfaceTypeEN8QSurface11SurfaceTypeE setSurfaceType(enum QSurface::SurfaceType)
extern "C"
void
C_ZN7QWindow14setSurfaceTypeEN8QSurface11SurfaceTypeE(void *qthis,
QSurface::SurfaceType arg1) {
  ((QWindow*)qthis)->setSurfaceType(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 263, column 10>
//   // proto:  void QWindow::hide();
// _ZN7QWindow4hideEv hide()
extern "C"
void
C_ZN7QWindow4hideEv(void *qthis) {
  ((QWindow*)qthis)->hide();
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 303, column 10>
//   // proto:  void QWindow::minimumHeightChanged(int arg);
// _ZN7QWindow20minimumHeightChangedEi minimumHeightChanged(int)
extern "C"
void
C_ZN7QWindow20minimumHeightChangedEi(void *qthis,
int arg1) {
  ((QWindow*)qthis)->minimumHeightChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 163, column 10>
//   // proto:  void QWindow::setMask(const QRegion & region);
// _ZN7QWindow7setMaskERK7QRegion setMask(const class QRegion &)
extern "C"
void
C_ZN7QWindow7setMaskERK7QRegion(void *qthis,
const QRegion* arg1) {
  ((QWindow*)qthis)->setMask(*((const QRegion*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 199, column 10>
//   // proto:  void QWindow::setMaximumSize(const QSize & size);
// _ZN7QWindow14setMaximumSizeERK5QSize setMaximumSize(const class QSize &)
extern "C"
void
C_ZN7QWindow14setMaximumSizeERK5QSize(void *qthis,
const QSize* arg1) {
  ((QWindow*)qthis)->setMaximumSize(*((const QSize*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 214, column 16>
//   // proto:  int QWindow::height();
// _ZNK7QWindow6heightEv height()
extern "C"
int
C_ZNK7QWindow6heightEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->height();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 218, column 11>
//   // proto:  QSize QWindow::size();
// _ZNK7QWindow4sizeEv size()
extern "C"
QSize*
C_ZNK7QWindow4sizeEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->size();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 190, column 16>
//   // proto:  int QWindow::maximumWidth();
// _ZNK7QWindow12maximumWidthEv maximumWidth()
extern "C"
int
C_ZNK7QWindow12maximumWidthEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->maximumWidth();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 219, column 19>
//   // proto:  QPoint QWindow::position();
// _ZNK7QWindow8positionEv position()
extern "C"
QPoint*
C_ZNK7QWindow8positionEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->position();
  return new QPoint(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 284, column 10>
//   // proto:  void QWindow::setMaximumHeight(int h);
// _ZN7QWindow16setMaximumHeightEi setMaximumHeight(int)
extern "C"
void
C_ZN7QWindow16setMaximumHeightEi(void *qthis,
int arg1) {
  ((QWindow*)qthis)->setMaximumHeight(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 228, column 13>
//   // proto:  QString QWindow::filePath();
// _ZNK7QWindow8filePathEv filePath()
extern "C"
QString*
C_ZNK7QWindow8filePathEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->filePath();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 268, column 10>
//   // proto:  void QWindow::showNormal();
// _ZN7QWindow10showNormalEv showNormal()
extern "C"
void
C_ZN7QWindow10showNormalEv(void *qthis) {
  ((QWindow*)qthis)->showNormal();
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 210, column 12>
//   // proto:  QPoint QWindow::framePosition();
// _ZNK7QWindow13framePositionEv framePosition()
extern "C"
QPoint*
C_ZNK7QWindow13framePositionEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->framePosition();
  return new QPoint(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 307, column 10>
//   // proto:  void QWindow::visibleChanged(bool arg);
// _ZN7QWindow14visibleChangedEb visibleChanged(_Bool)
extern "C"
void
C_ZN7QWindow14visibleChangedEb(void *qthis,
bool arg1) {
  ((QWindow*)qthis)->visibleChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qwindow.h', line 231, column 11>
//   // proto:  QIcon QWindow::icon();
// _ZNK7QWindow4iconEv icon()
extern "C"
QIcon*
C_ZNK7QWindow4iconEv(void *qthis) {
  auto ret =
  ((QWindow*)qthis)->icon();
  return new QIcon(ret); // 5
}
// <= ext block end

// body block begin =>
// QWindow_SlotProxy here
class QWindow_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QWindow_SlotProxy():QObject(){}

public slots:
  // xChanged(int)
  void slot_proxy_func__ZN7QWindow8xChangedEi(int arg0);
public:
  void (*slot_func__ZN7QWindow8xChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // widthChanged(int)
  void slot_proxy_func__ZN7QWindow12widthChangedEi(int arg0);
public:
  void (*slot_func__ZN7QWindow12widthChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // contentOrientationChanged(Qt::ScreenOrientation)
  void slot_proxy_func__ZN7QWindow25contentOrientationChangedEN2Qt17ScreenOrientationE(Qt::ScreenOrientation arg0);
public:
  void (*slot_func__ZN7QWindow25contentOrientationChangedEN2Qt17ScreenOrientationE)(void* rsfptr, Qt::ScreenOrientation arg0) = NULL;
public slots:
  // modalityChanged(Qt::WindowModality)
  void slot_proxy_func__ZN7QWindow15modalityChangedEN2Qt14WindowModalityE(Qt::WindowModality arg0);
public:
  void (*slot_func__ZN7QWindow15modalityChangedEN2Qt14WindowModalityE)(void* rsfptr, Qt::WindowModality arg0) = NULL;
public slots:
  // windowStateChanged(Qt::WindowState)
  void slot_proxy_func__ZN7QWindow18windowStateChangedEN2Qt11WindowStateE(Qt::WindowState arg0);
public:
  void (*slot_func__ZN7QWindow18windowStateChangedEN2Qt11WindowStateE)(void* rsfptr, Qt::WindowState arg0) = NULL;
public slots:
  // visibilityChanged(class QWindow::Visibility)
  void slot_proxy_func__ZN7QWindow17visibilityChangedENS_10VisibilityE(QWindow::Visibility arg0);
public:
  void (*slot_func__ZN7QWindow17visibilityChangedENS_10VisibilityE)(void* rsfptr, QWindow::Visibility arg0) = NULL;
public slots:
  // opacityChanged(qreal)
  void slot_proxy_func__ZN7QWindow14opacityChangedEd(qreal arg0);
public:
  void (*slot_func__ZN7QWindow14opacityChangedEd)(void* rsfptr, qreal arg0) = NULL;
public slots:
  // yChanged(int)
  void slot_proxy_func__ZN7QWindow8yChangedEi(int arg0);
public:
  void (*slot_func__ZN7QWindow8yChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // minimumHeightChanged(int)
  void slot_proxy_func__ZN7QWindow20minimumHeightChangedEi(int arg0);
public:
  void (*slot_func__ZN7QWindow20minimumHeightChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // heightChanged(int)
  void slot_proxy_func__ZN7QWindow13heightChangedEi(int arg0);
public:
  void (*slot_func__ZN7QWindow13heightChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // maximumWidthChanged(int)
  void slot_proxy_func__ZN7QWindow19maximumWidthChangedEi(int arg0);
public:
  void (*slot_func__ZN7QWindow19maximumWidthChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // screenChanged(class QScreen *)
  void slot_proxy_func__ZN7QWindow13screenChangedEP7QScreen(QScreen * arg0);
public:
  void (*slot_func__ZN7QWindow13screenChangedEP7QScreen)(void* rsfptr, QScreen * arg0) = NULL;
public slots:
  // minimumWidthChanged(int)
  void slot_proxy_func__ZN7QWindow19minimumWidthChangedEi(int arg0);
public:
  void (*slot_func__ZN7QWindow19minimumWidthChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // windowTitleChanged(const class QString &)
  void slot_proxy_func__ZN7QWindow18windowTitleChangedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN7QWindow18windowTitleChangedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public slots:
  // focusObjectChanged(class QObject *)
  void slot_proxy_func__ZN7QWindow18focusObjectChangedEP7QObject(QObject * arg0);
public:
  void (*slot_func__ZN7QWindow18focusObjectChangedEP7QObject)(void* rsfptr, QObject * arg0) = NULL;
public slots:
  // visibleChanged(_Bool)
  void slot_proxy_func__ZN7QWindow14visibleChangedEb(bool arg0);
public:
  void (*slot_func__ZN7QWindow14visibleChangedEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // maximumHeightChanged(int)
  void slot_proxy_func__ZN7QWindow20maximumHeightChangedEi(int arg0);
public:
  void (*slot_func__ZN7QWindow20maximumHeightChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // activeChanged()
  void slot_proxy_func__ZN7QWindow13activeChangedEv();
public:
  void (*slot_func__ZN7QWindow13activeChangedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/gui/qwindow.moc"

extern "C" {
  QWindow_SlotProxy* QWindow_SlotProxy_new()
  {
    return new QWindow_SlotProxy();
  }
};

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow8xChangedEi(int arg0) {
  if (this->slot_func__ZN7QWindow8xChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow8xChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow8xChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWindow8xChangedEi = (decltype(that->slot_func__ZN7QWindow8xChangedEi))ffifptr;
  QObject::connect((QWindow*)sender, SIGNAL(xChanged(int)), that, SLOT(slot_proxy_func__ZN7QWindow8xChangedEi(int arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow8xChangedEi(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow12widthChangedEi(int arg0) {
  if (this->slot_func__ZN7QWindow12widthChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow12widthChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow12widthChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWindow12widthChangedEi = (decltype(that->slot_func__ZN7QWindow12widthChangedEi))ffifptr;
  QObject::connect((QWindow*)sender, SIGNAL(widthChanged(int)), that, SLOT(slot_proxy_func__ZN7QWindow12widthChangedEi(int arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow12widthChangedEi(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow25contentOrientationChangedEN2Qt17ScreenOrientationE(Qt::ScreenOrientation arg0) {
  if (this->slot_func__ZN7QWindow25contentOrientationChangedEN2Qt17ScreenOrientationE != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow25contentOrientationChangedEN2Qt17ScreenOrientationE(this->rsfptr, arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow25contentOrientationChangedEN2Qt17ScreenOrientationE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWindow25contentOrientationChangedEN2Qt17ScreenOrientationE = (decltype(that->slot_func__ZN7QWindow25contentOrientationChangedEN2Qt17ScreenOrientationE))ffifptr;
  QObject::connect((QWindow*)sender, SIGNAL(contentOrientationChanged(Qt::ScreenOrientation)), that, SLOT(slot_proxy_func__ZN7QWindow25contentOrientationChangedEN2Qt17ScreenOrientationE(Qt::ScreenOrientation arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow25contentOrientationChangedEN2Qt17ScreenOrientationE(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow15modalityChangedEN2Qt14WindowModalityE(Qt::WindowModality arg0) {
  if (this->slot_func__ZN7QWindow15modalityChangedEN2Qt14WindowModalityE != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow15modalityChangedEN2Qt14WindowModalityE(this->rsfptr, arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow15modalityChangedEN2Qt14WindowModalityE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWindow15modalityChangedEN2Qt14WindowModalityE = (decltype(that->slot_func__ZN7QWindow15modalityChangedEN2Qt14WindowModalityE))ffifptr;
  QObject::connect((QWindow*)sender, SIGNAL(modalityChanged(Qt::WindowModality)), that, SLOT(slot_proxy_func__ZN7QWindow15modalityChangedEN2Qt14WindowModalityE(Qt::WindowModality arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow15modalityChangedEN2Qt14WindowModalityE(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow18windowStateChangedEN2Qt11WindowStateE(Qt::WindowState arg0) {
  if (this->slot_func__ZN7QWindow18windowStateChangedEN2Qt11WindowStateE != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow18windowStateChangedEN2Qt11WindowStateE(this->rsfptr, arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow18windowStateChangedEN2Qt11WindowStateE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWindow18windowStateChangedEN2Qt11WindowStateE = (decltype(that->slot_func__ZN7QWindow18windowStateChangedEN2Qt11WindowStateE))ffifptr;
  QObject::connect((QWindow*)sender, SIGNAL(windowStateChanged(Qt::WindowState)), that, SLOT(slot_proxy_func__ZN7QWindow18windowStateChangedEN2Qt11WindowStateE(Qt::WindowState arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow18windowStateChangedEN2Qt11WindowStateE(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow17visibilityChangedENS_10VisibilityE(QWindow::Visibility arg0) {
  if (this->slot_func__ZN7QWindow17visibilityChangedENS_10VisibilityE != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow17visibilityChangedENS_10VisibilityE(this->rsfptr, arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow17visibilityChangedENS_10VisibilityE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWindow17visibilityChangedENS_10VisibilityE = (decltype(that->slot_func__ZN7QWindow17visibilityChangedENS_10VisibilityE))ffifptr;
  QObject::connect((QWindow*)sender, SIGNAL(visibilityChanged(class QWindow::Visibility)), that, SLOT(slot_proxy_func__ZN7QWindow17visibilityChangedENS_10VisibilityE(QWindow::Visibility arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow17visibilityChangedENS_10VisibilityE(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow14opacityChangedEd(qreal arg0) {
  if (this->slot_func__ZN7QWindow14opacityChangedEd != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow14opacityChangedEd(this->rsfptr, arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow14opacityChangedEd(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWindow14opacityChangedEd = (decltype(that->slot_func__ZN7QWindow14opacityChangedEd))ffifptr;
  QObject::connect((QWindow*)sender, SIGNAL(opacityChanged(qreal)), that, SLOT(slot_proxy_func__ZN7QWindow14opacityChangedEd(qreal arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow14opacityChangedEd(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow8yChangedEi(int arg0) {
  if (this->slot_func__ZN7QWindow8yChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow8yChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow8yChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWindow8yChangedEi = (decltype(that->slot_func__ZN7QWindow8yChangedEi))ffifptr;
  QObject::connect((QWindow*)sender, SIGNAL(yChanged(int)), that, SLOT(slot_proxy_func__ZN7QWindow8yChangedEi(int arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow8yChangedEi(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow20minimumHeightChangedEi(int arg0) {
  if (this->slot_func__ZN7QWindow20minimumHeightChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow20minimumHeightChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow20minimumHeightChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWindow20minimumHeightChangedEi = (decltype(that->slot_func__ZN7QWindow20minimumHeightChangedEi))ffifptr;
  QObject::connect((QWindow*)sender, SIGNAL(minimumHeightChanged(int)), that, SLOT(slot_proxy_func__ZN7QWindow20minimumHeightChangedEi(int arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow20minimumHeightChangedEi(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow13heightChangedEi(int arg0) {
  if (this->slot_func__ZN7QWindow13heightChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow13heightChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow13heightChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWindow13heightChangedEi = (decltype(that->slot_func__ZN7QWindow13heightChangedEi))ffifptr;
  QObject::connect((QWindow*)sender, SIGNAL(heightChanged(int)), that, SLOT(slot_proxy_func__ZN7QWindow13heightChangedEi(int arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow13heightChangedEi(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow19maximumWidthChangedEi(int arg0) {
  if (this->slot_func__ZN7QWindow19maximumWidthChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow19maximumWidthChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow19maximumWidthChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWindow19maximumWidthChangedEi = (decltype(that->slot_func__ZN7QWindow19maximumWidthChangedEi))ffifptr;
  QObject::connect((QWindow*)sender, SIGNAL(maximumWidthChanged(int)), that, SLOT(slot_proxy_func__ZN7QWindow19maximumWidthChangedEi(int arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow19maximumWidthChangedEi(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow13screenChangedEP7QScreen(QScreen * arg0) {
  if (this->slot_func__ZN7QWindow13screenChangedEP7QScreen != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow13screenChangedEP7QScreen(this->rsfptr, arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow13screenChangedEP7QScreen(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWindow13screenChangedEP7QScreen = (decltype(that->slot_func__ZN7QWindow13screenChangedEP7QScreen))ffifptr;
  QObject::connect((QWindow*)sender, SIGNAL(screenChanged(class QScreen *)), that, SLOT(slot_proxy_func__ZN7QWindow13screenChangedEP7QScreen(QScreen * arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow13screenChangedEP7QScreen(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow19minimumWidthChangedEi(int arg0) {
  if (this->slot_func__ZN7QWindow19minimumWidthChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow19minimumWidthChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow19minimumWidthChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWindow19minimumWidthChangedEi = (decltype(that->slot_func__ZN7QWindow19minimumWidthChangedEi))ffifptr;
  QObject::connect((QWindow*)sender, SIGNAL(minimumWidthChanged(int)), that, SLOT(slot_proxy_func__ZN7QWindow19minimumWidthChangedEi(int arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow19minimumWidthChangedEi(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow18windowTitleChangedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN7QWindow18windowTitleChangedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow18windowTitleChangedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow18windowTitleChangedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWindow18windowTitleChangedERK7QString = (decltype(that->slot_func__ZN7QWindow18windowTitleChangedERK7QString))ffifptr;
  QObject::connect((QWindow*)sender, SIGNAL(windowTitleChanged(const class QString &)), that, SLOT(slot_proxy_func__ZN7QWindow18windowTitleChangedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow18windowTitleChangedERK7QString(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow18focusObjectChangedEP7QObject(QObject * arg0) {
  if (this->slot_func__ZN7QWindow18focusObjectChangedEP7QObject != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow18focusObjectChangedEP7QObject(this->rsfptr, arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow18focusObjectChangedEP7QObject(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWindow18focusObjectChangedEP7QObject = (decltype(that->slot_func__ZN7QWindow18focusObjectChangedEP7QObject))ffifptr;
  QObject::connect((QWindow*)sender, SIGNAL(focusObjectChanged(class QObject *)), that, SLOT(slot_proxy_func__ZN7QWindow18focusObjectChangedEP7QObject(QObject * arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow18focusObjectChangedEP7QObject(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow14visibleChangedEb(bool arg0) {
  if (this->slot_func__ZN7QWindow14visibleChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow14visibleChangedEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow14visibleChangedEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWindow14visibleChangedEb = (decltype(that->slot_func__ZN7QWindow14visibleChangedEb))ffifptr;
  QObject::connect((QWindow*)sender, SIGNAL(visibleChanged(_Bool)), that, SLOT(slot_proxy_func__ZN7QWindow14visibleChangedEb(bool arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow14visibleChangedEb(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow20maximumHeightChangedEi(int arg0) {
  if (this->slot_func__ZN7QWindow20maximumHeightChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow20maximumHeightChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow20maximumHeightChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWindow20maximumHeightChangedEi = (decltype(that->slot_func__ZN7QWindow20maximumHeightChangedEi))ffifptr;
  QObject::connect((QWindow*)sender, SIGNAL(maximumHeightChanged(int)), that, SLOT(slot_proxy_func__ZN7QWindow20maximumHeightChangedEi(int arg0)));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow20maximumHeightChangedEi(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QWindow_SlotProxy::slot_proxy_func__ZN7QWindow13activeChangedEv() {
  if (this->slot_func__ZN7QWindow13activeChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN7QWindow13activeChangedEv(this->rsfptr);
  }
}
extern "C"
void* QWindow_SlotProxy_connect__ZN7QWindow13activeChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QWindow_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN7QWindow13activeChangedEv = (decltype(that->slot_func__ZN7QWindow13activeChangedEv))ffifptr;
  QObject::connect((QWindow*)sender, SIGNAL(activeChanged()), that, SLOT(slot_proxy_func__ZN7QWindow13activeChangedEv()));
  return that;
}
extern "C"
void QWindow_SlotProxy_disconnect__ZN7QWindow13activeChangedEv(QWindow_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

