// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtGui/qguiapplication.h
// dst-file: /src/gui/qguiapplication.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qguiapplication.h>


#include <qstring.h>
#include <qscreen.h>
#include <qlist.h>
#include <qstandarditemmodel.h>
#include <qnamespace.h>
#include <qfont.h>
#include <qicon.h>
#include <qpalette.h>
#include <qwindowdefs.h>
#include <qglobal.h>
// <= header block end

// main block begin =>
void __keep_qguiapplication_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 127, column 24>
//   // proto: static bool QGuiApplication::isRightToLeft();
if (true) {
  auto f = [](QGuiApplication flythis) {
    ((QGuiApplication*)0)->isRightToLeft();
    flythis.isRightToLeft();
  };
  if (f == nullptr){}
}
// _ZN15QGuiApplication13isRightToLeftEv isRightToLeft()
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 128, column 24>
//   // proto: static bool QGuiApplication::isLeftToRight();
if (true) {
  auto f = [](QGuiApplication flythis) {
    ((QGuiApplication*)0)->isLeftToRight();
    flythis.isLeftToRight();
  };
  if (f == nullptr){}
}
// _ZN15QGuiApplication13isLeftToRightEv isLeftToRight()
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QGuiApplication_Class_Size()
{
  return sizeof(QGuiApplication);
}

// <= use block end

// ext block begin =>
//   // proto:  void QGuiApplication::~QGuiApplication();
extern "C"
void C_ZN15QGuiApplicationD2Ev(void *qthis) {
  delete (QGuiApplication*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 111, column 17>
//   // proto: static void QGuiApplication::setFont(const QFont & );
// _ZN15QGuiApplication7setFontERK5QFont setFont(const class QFont &)
extern "C"
void
C_ZN15QGuiApplication7setFontERK5QFont(const QFont* arg1) {
  QGuiApplication::setFont(*((const QFont*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 92, column 20>
//   // proto: static QString QGuiApplication::platformName();
// _ZN15QGuiApplication12platformNameEv platformName()
extern "C"
QString*
C_ZN15QGuiApplication12platformNameEv() {
  auto ret =
  QGuiApplication::platformName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 100, column 29>
//   // proto: static QList<QScreen *> QGuiApplication::screens();
// _ZN15QGuiApplication7screensEv screens()
extern "C"
QList<QScreen *>*
C_ZN15QGuiApplication7screensEv() {
  auto ret =
  QGuiApplication::screens();
  return new QList<QScreen *>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 120, column 34>
//   // proto: static Qt::KeyboardModifiers QGuiApplication::keyboardModifiers();
// _ZN15QGuiApplication17keyboardModifiersEv keyboardModifiers()
extern "C"
QFlags<Qt::KeyboardModifier>*
C_ZN15QGuiApplication17keyboardModifiersEv() {
  auto ret =
  QGuiApplication::keyboardModifiers();
  return new QFlags<Qt::KeyboardModifier>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 118, column 17>
//   // proto: static void QGuiApplication::setPalette(const QPalette & pal);
// _ZN15QGuiApplication10setPaletteERK8QPalette setPalette(const class QPalette &)
extern "C"
void
C_ZN15QGuiApplication10setPaletteERK8QPalette(const QPalette* arg1) {
  QGuiApplication::setPalette(*((const QPalette*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 134, column 26>
//   // proto: static QInputMethod * QGuiApplication::inputMethod();
// _ZN15QGuiApplication11inputMethodEv inputMethod()
extern "C"
void*
C_ZN15QGuiApplication11inputMethodEv() {
  auto ret =
  QGuiApplication::inputMethod();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 153, column 10>
//   // proto:  bool QGuiApplication::isSavingSession();
// _ZNK15QGuiApplication15isSavingSessionEv isSavingSession()
extern "C"
bool
C_ZNK15QGuiApplication15isSavingSessionEv(void *qthis) {
  auto ret =
  ((QGuiApplication*)qthis)->isSavingSession();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 170, column 10>
//   // proto:  void QGuiApplication::paletteChanged(const QPalette & pal);
// _ZN15QGuiApplication14paletteChangedERK8QPalette paletteChanged(const class QPalette &)
extern "C"
void
C_ZN15QGuiApplication14paletteChangedERK8QPalette(void *qthis,
const QPalette* arg1) {
  ((QGuiApplication*)qthis)->paletteChanged(*((const QPalette*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 110, column 18>
//   // proto: static QFont QGuiApplication::font();
// _ZN15QGuiApplication4fontEv font()
extern "C"
QFont*
C_ZN15QGuiApplication4fontEv() {
  auto ret =
  QGuiApplication::font();
  return new QFont(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 159, column 10>
//   // proto:  void QGuiApplication::screenAdded(QScreen * screen);
// _ZN15QGuiApplication11screenAddedEP7QScreen screenAdded(class QScreen *)
extern "C"
void
C_ZN15QGuiApplication11screenAddedEP7QScreen(void *qthis,
QScreen * arg1) {
  ((QGuiApplication*)qthis)->screenAdded(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 150, column 10>
//   // proto:  bool QGuiApplication::isSessionRestored();
// _ZNK15QGuiApplication17isSessionRestoredEv isSessionRestored()
extern "C"
bool
C_ZNK15QGuiApplication17isSessionRestoredEv(void *qthis) {
  auto ret =
  ((QGuiApplication*)qthis)->isSessionRestored();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 152, column 13>
//   // proto:  QString QGuiApplication::sessionKey();
// _ZNK15QGuiApplication10sessionKeyEv sessionKey()
extern "C"
QString*
C_ZNK15QGuiApplication10sessionKeyEv(void *qthis) {
  auto ret =
  ((QGuiApplication*)qthis)->sessionKey();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 122, column 29>
//   // proto: static Qt::MouseButtons QGuiApplication::mouseButtons();
// _ZN15QGuiApplication12mouseButtonsEv mouseButtons()
extern "C"
QFlags<Qt::MouseButton>*
C_ZN15QGuiApplication12mouseButtonsEv() {
  auto ret =
  QGuiApplication::mouseButtons();
  return new QFlags<Qt::MouseButton>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 143, column 33>
//   // proto: static Qt::ApplicationState QGuiApplication::applicationState();
// _ZN15QGuiApplication16applicationStateEv applicationState()
extern "C"
Qt::ApplicationState
C_ZN15QGuiApplication16applicationStateEv() {
  auto ret =
  QGuiApplication::applicationState();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 132, column 17>
//   // proto: static bool QGuiApplication::desktopSettingsAware();
// _ZN15QGuiApplication20desktopSettingsAwareEv desktopSettingsAware()
extern "C"
bool
C_ZN15QGuiApplication20desktopSettingsAwareEv() {
  auto ret =
  QGuiApplication::desktopSettingsAware();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 156, column 17>
//   // proto: static void QGuiApplication::sync();
// _ZN15QGuiApplication4syncEv sync()
extern "C"
void
C_ZN15QGuiApplication4syncEv() {
  QGuiApplication::sync();
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 140, column 17>
//   // proto: static void QGuiApplication::setQuitOnLastWindowClosed(bool quit);
// _ZN15QGuiApplication25setQuitOnLastWindowClosedEb setQuitOnLastWindowClosed(_Bool)
extern "C"
void
C_ZN15QGuiApplication25setQuitOnLastWindowClosedEb(bool arg1) {
  QGuiApplication::setQuitOnLastWindowClosed(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 99, column 21>
//   // proto: static QScreen * QGuiApplication::primaryScreen();
// _ZN15QGuiApplication13primaryScreenEv primaryScreen()
extern "C"
void*
C_ZN15QGuiApplication13primaryScreenEv() {
  auto ret =
  QGuiApplication::primaryScreen();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 165, column 10>
//   // proto:  void QGuiApplication::layoutDirectionChanged(Qt::LayoutDirection direction);
// _ZN15QGuiApplication22layoutDirectionChangedEN2Qt15LayoutDirectionE layoutDirectionChanged(Qt::LayoutDirection)
extern "C"
void
C_ZN15QGuiApplication22layoutDirectionChangedEN2Qt15LayoutDirectionE(void *qthis,
Qt::LayoutDirection* arg1) {
  ((QGuiApplication*)qthis)->layoutDirectionChanged(*((Qt::LayoutDirection*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 104, column 21>
//   // proto: static QCursor * QGuiApplication::overrideCursor();
// _ZN15QGuiApplication14overrideCursorEv overrideCursor()
extern "C"
void*
C_ZN15QGuiApplication14overrideCursorEv() {
  auto ret =
  QGuiApplication::overrideCursor();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 90, column 18>
//   // proto: static QIcon QGuiApplication::windowIcon();
// _ZN15QGuiApplication10windowIconEv windowIcon()
extern "C"
QIcon*
C_ZN15QGuiApplication10windowIconEv() {
  auto ret =
  QGuiApplication::windowIcon();
  return new QIcon(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 130, column 25>
//   // proto: static QStyleHints * QGuiApplication::styleHints();
// _ZN15QGuiApplication10styleHintsEv styleHints()
extern "C"
void*
C_ZN15QGuiApplication10styleHintsEv() {
  auto ret =
  QGuiApplication::styleHints();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 114, column 24>
//   // proto: static QClipboard * QGuiApplication::clipboard();
// _ZN15QGuiApplication9clipboardEv clipboard()
extern "C"
void*
C_ZN15QGuiApplication9clipboardEv() {
  auto ret =
  QGuiApplication::clipboard();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 117, column 21>
//   // proto: static QPalette QGuiApplication::palette();
// _ZN15QGuiApplication7paletteEv palette()
extern "C"
QPalette*
C_ZN15QGuiApplication7paletteEv() {
  auto ret =
  QGuiApplication::palette();
  return new QPalette(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 146, column 10>
//   // proto:  bool QGuiApplication::notify(QObject * , QEvent * );
// _ZN15QGuiApplication6notifyEP7QObjectP6QEvent notify(class QObject *, class QEvent *)
extern "C"
bool
C_ZN15QGuiApplication6notifyEP7QObjectP6QEvent(void *qthis,
QObject * arg1,
QEvent * arg2) {
  auto ret =
  ((QGuiApplication*)qthis)->notify(arg1,
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 86, column 24>
//   // proto: static QWindowList QGuiApplication::topLevelWindows();
// _ZN15QGuiApplication15topLevelWindowsEv topLevelWindows()
extern "C"
QList<QWindow *>*
C_ZN15QGuiApplication15topLevelWindowsEv() {
  auto ret =
  QGuiApplication::topLevelWindows();
  return new QList<QWindow *>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 127, column 24>
//   // proto: static bool QGuiApplication::isRightToLeft();
// _ZN15QGuiApplication13isRightToLeftEv isRightToLeft()
extern "C"
bool
C_ZN15QGuiApplication13isRightToLeftEv() {
  auto ret =
  QGuiApplication::isRightToLeft();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 162, column 10>
//   // proto:  void QGuiApplication::focusObjectChanged(QObject * focusObject);
// _ZN15QGuiApplication18focusObjectChangedEP7QObject focusObjectChanged(class QObject *)
extern "C"
void
C_ZN15QGuiApplication18focusObjectChangedEP7QObject(void *qthis,
QObject * arg1) {
  ((QGuiApplication*)qthis)->focusObjectChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 158, column 10>
//   // proto:  void QGuiApplication::fontDatabaseChanged();
// _ZN15QGuiApplication19fontDatabaseChangedEv fontDatabaseChanged()
extern "C"
void
C_ZN15QGuiApplication19fontDatabaseChangedEv(void *qthis) {
  ((QGuiApplication*)qthis)->fontDatabaseChanged();
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 106, column 17>
//   // proto: static void QGuiApplication::changeOverrideCursor(const QCursor & );
// _ZN15QGuiApplication20changeOverrideCursorERK7QCursor changeOverrideCursor(const class QCursor &)
extern "C"
void
C_ZN15QGuiApplication20changeOverrideCursorERK7QCursor(const QCursor* arg1) {
  QGuiApplication::changeOverrideCursor(*((const QCursor*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 85, column 24>
//   // proto: static QWindowList QGuiApplication::allWindows();
// _ZN15QGuiApplication10allWindowsEv allWindows()
extern "C"
QList<QWindow *>*
C_ZN15QGuiApplication10allWindowsEv() {
  auto ret =
  QGuiApplication::allWindows();
  return new QList<QWindow *>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 105, column 17>
//   // proto: static void QGuiApplication::setOverrideCursor(const QCursor & );
// _ZN15QGuiApplication17setOverrideCursorERK7QCursor setOverrideCursor(const class QCursor &)
extern "C"
void
C_ZN15QGuiApplication17setOverrideCursorERK7QCursor(const QCursor* arg1) {
  QGuiApplication::setOverrideCursor(*((const QCursor*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 167, column 10>
//   // proto:  void QGuiApplication::commitDataRequest(QSessionManager & sessionManager);
// _ZN15QGuiApplication17commitDataRequestER15QSessionManager commitDataRequest(class QSessionManager &)
extern "C"
void
C_ZN15QGuiApplication17commitDataRequestER15QSessionManager(void *qthis,
QSessionManager* arg1) {
  ((QGuiApplication*)qthis)->commitDataRequest(*((QSessionManager*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 89, column 17>
//   // proto: static void QGuiApplication::setWindowIcon(const QIcon & icon);
// _ZN15QGuiApplication13setWindowIconERK5QIcon setWindowIcon(const class QIcon &)
extern "C"
void
C_ZN15QGuiApplication13setWindowIconERK5QIcon(const QIcon* arg1) {
  QGuiApplication::setWindowIcon(*((const QIcon*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 151, column 13>
//   // proto:  QString QGuiApplication::sessionId();
// _ZNK15QGuiApplication9sessionIdEv sessionId()
extern "C"
QString*
C_ZNK15QGuiApplication9sessionIdEv(void *qthis) {
  auto ret =
  ((QGuiApplication*)qthis)->sessionId();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 124, column 17>
//   // proto: static void QGuiApplication::setLayoutDirection(Qt::LayoutDirection direction);
// _ZN15QGuiApplication18setLayoutDirectionEN2Qt15LayoutDirectionE setLayoutDirection(Qt::LayoutDirection)
extern "C"
void
C_ZN15QGuiApplication18setLayoutDirectionEN2Qt15LayoutDirectionE(Qt::LayoutDirection* arg1) {
  QGuiApplication::setLayoutDirection(*((Qt::LayoutDirection*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 164, column 10>
//   // proto:  void QGuiApplication::applicationStateChanged(Qt::ApplicationState state);
// _ZN15QGuiApplication23applicationStateChangedEN2Qt16ApplicationStateE applicationStateChanged(Qt::ApplicationState)
extern "C"
void
C_ZN15QGuiApplication23applicationStateChangedEN2Qt16ApplicationStateE(void *qthis,
Qt::ApplicationState* arg1) {
  ((QGuiApplication*)qthis)->applicationStateChanged(*((Qt::ApplicationState*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 163, column 10>
//   // proto:  void QGuiApplication::focusWindowChanged(QWindow * focusWindow);
// _ZN15QGuiApplication18focusWindowChangedEP7QWindow focusWindowChanged(class QWindow *)
extern "C"
void
C_ZN15QGuiApplication18focusWindowChangedEP7QWindow(void *qthis,
QWindow * arg1) {
  ((QGuiApplication*)qthis)->focusWindowChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 82, column 17>
//   // proto: static void QGuiApplication::setApplicationDisplayName(const QString & name);
// _ZN15QGuiApplication25setApplicationDisplayNameERK7QString setApplicationDisplayName(const class QString &)
extern "C"
void
C_ZN15QGuiApplication25setApplicationDisplayNameERK7QString(const QString* arg1) {
  QGuiApplication::setApplicationDisplayName(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 128, column 24>
//   // proto: static bool QGuiApplication::isLeftToRight();
// _ZN15QGuiApplication13isLeftToRightEv isLeftToRight()
extern "C"
bool
C_ZN15QGuiApplication13isLeftToRightEv() {
  auto ret =
  QGuiApplication::isLeftToRight();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 87, column 21>
//   // proto: static QWindow * QGuiApplication::topLevelAt(const QPoint & pos);
// _ZN15QGuiApplication10topLevelAtERK6QPoint topLevelAt(const class QPoint &)
extern "C"
void*
C_ZN15QGuiApplication10topLevelAtERK6QPoint(const QPoint* arg1) {
  auto ret =
  QGuiApplication::topLevelAt(*((const QPoint*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 125, column 32>
//   // proto: static Qt::LayoutDirection QGuiApplication::layoutDirection();
// _ZN15QGuiApplication15layoutDirectionEv layoutDirection()
extern "C"
Qt::LayoutDirection
C_ZN15QGuiApplication15layoutDirectionEv() {
  auto ret =
  QGuiApplication::layoutDirection();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 78, column 5>
//   // proto:  void QGuiApplication::QGuiApplication(int & argc, char ** argv, int );
extern "C"
QGuiApplication*
C_ZN15QGuiApplicationC2ERiPPci(int* arg1,
char ** arg2,
int arg3) {
  auto ret = new QGuiApplication(*((int*)arg1), arg2, arg3);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 131, column 17>
//   // proto: static void QGuiApplication::setDesktopSettingsAware(bool on);
// _ZN15QGuiApplication23setDesktopSettingsAwareEb setDesktopSettingsAware(_Bool)
extern "C"
void
C_ZN15QGuiApplication23setDesktopSettingsAwareEb(bool arg1) {
  QGuiApplication::setDesktopSettingsAware(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 94, column 21>
//   // proto: static QWindow * QGuiApplication::modalWindow();
// _ZN15QGuiApplication11modalWindowEv modalWindow()
extern "C"
void*
C_ZN15QGuiApplication11modalWindowEv() {
  auto ret =
  QGuiApplication::modalWindow();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 83, column 20>
//   // proto: static QString QGuiApplication::applicationDisplayName();
// _ZN15QGuiApplication22applicationDisplayNameEv applicationDisplayName()
extern "C"
QString*
C_ZN15QGuiApplication22applicationDisplayNameEv() {
  auto ret =
  QGuiApplication::applicationDisplayName();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 145, column 16>
//   // proto: static int QGuiApplication::exec();
// _ZN15QGuiApplication4execEv exec()
extern "C"
int
C_ZN15QGuiApplication4execEv() {
  auto ret =
  QGuiApplication::exec();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 141, column 17>
//   // proto: static bool QGuiApplication::quitOnLastWindowClosed();
// _ZN15QGuiApplication22quitOnLastWindowClosedEv quitOnLastWindowClosed()
extern "C"
bool
C_ZN15QGuiApplication22quitOnLastWindowClosedEv() {
  auto ret =
  QGuiApplication::quitOnLastWindowClosed();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 161, column 10>
//   // proto:  void QGuiApplication::lastWindowClosed();
// _ZN15QGuiApplication16lastWindowClosedEv lastWindowClosed()
extern "C"
void
C_ZN15QGuiApplication16lastWindowClosedEv(void *qthis) {
  ((QGuiApplication*)qthis)->lastWindowClosed();
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 107, column 17>
//   // proto: static void QGuiApplication::restoreOverrideCursor();
// _ZN15QGuiApplication21restoreOverrideCursorEv restoreOverrideCursor()
extern "C"
void
C_ZN15QGuiApplication21restoreOverrideCursorEv() {
  QGuiApplication::restoreOverrideCursor();
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 136, column 38>
//   // proto: static QPlatformNativeInterface * QGuiApplication::platformNativeInterface();
// _ZN15QGuiApplication23platformNativeInterfaceEv platformNativeInterface()
extern "C"
void*
C_ZN15QGuiApplication23platformNativeInterfaceEv() {
  auto ret =
  QGuiApplication::platformNativeInterface();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 67, column 5>
//   // proto:  const QMetaObject * QGuiApplication::metaObject();
// _ZNK15QGuiApplication10metaObjectEv metaObject()
extern "C"
void*
C_ZNK15QGuiApplication10metaObjectEv(void *qthis) {
  auto ret =
  ((QGuiApplication*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 97, column 21>
//   // proto: static QObject * QGuiApplication::focusObject();
// _ZN15QGuiApplication11focusObjectEv focusObject()
extern "C"
void*
C_ZN15QGuiApplication11focusObjectEv() {
  auto ret =
  QGuiApplication::focusObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 160, column 10>
//   // proto:  void QGuiApplication::screenRemoved(QScreen * screen);
// _ZN15QGuiApplication13screenRemovedEP7QScreen screenRemoved(class QScreen *)
extern "C"
void
C_ZN15QGuiApplication13screenRemovedEP7QScreen(void *qthis,
QScreen * arg1) {
  ((QGuiApplication*)qthis)->screenRemoved(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 96, column 21>
//   // proto: static QWindow * QGuiApplication::focusWindow();
// _ZN15QGuiApplication11focusWindowEv focusWindow()
extern "C"
void*
C_ZN15QGuiApplication11focusWindowEv() {
  auto ret =
  QGuiApplication::focusWindow();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 121, column 34>
//   // proto: static Qt::KeyboardModifiers QGuiApplication::queryKeyboardModifiers();
// _ZN15QGuiApplication22queryKeyboardModifiersEv queryKeyboardModifiers()
extern "C"
QFlags<Qt::KeyboardModifier>*
C_ZN15QGuiApplication22queryKeyboardModifiersEv() {
  auto ret =
  QGuiApplication::queryKeyboardModifiers();
  return new QFlags<Qt::KeyboardModifier>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 168, column 10>
//   // proto:  void QGuiApplication::saveStateRequest(QSessionManager & sessionManager);
// _ZN15QGuiApplication16saveStateRequestER15QSessionManager saveStateRequest(class QSessionManager &)
extern "C"
void
C_ZN15QGuiApplication16saveStateRequestER15QSessionManager(void *qthis,
QSessionManager* arg1) {
  ((QGuiApplication*)qthis)->saveStateRequest(*((QSessionManager*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 101, column 11>
//   // proto:  qreal QGuiApplication::devicePixelRatio();
// _ZNK15QGuiApplication16devicePixelRatioEv devicePixelRatio()
extern "C"
double
C_ZNK15QGuiApplication16devicePixelRatioEv(void *qthis) {
  auto ret =
  ((QGuiApplication*)qthis)->devicePixelRatio();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qguiapplication.h', line 138, column 29>
//   // proto: static QFunctionPointer QGuiApplication::platformFunction(const QByteArray & function);
// _ZN15QGuiApplication16platformFunctionERK10QByteArray platformFunction(const class QByteArray &)
extern "C"
void*
C_ZN15QGuiApplication16platformFunctionERK10QByteArray(const QByteArray* arg1) {
  auto ret =
  QGuiApplication::platformFunction(*((const QByteArray*)arg1));
  return (void*)ret;
}
// <= ext block end

// body block begin =>
// QGuiApplication_SlotProxy here
class QGuiApplication_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QGuiApplication_SlotProxy():QObject(){}

public slots:
  // focusObjectChanged(class QObject *)
  void slot_proxy_func__ZN15QGuiApplication18focusObjectChangedEP7QObject(QObject * arg0);
public:
  void (*slot_func__ZN15QGuiApplication18focusObjectChangedEP7QObject)(void* rsfptr, QObject * arg0) = NULL;
public slots:
  // fontDatabaseChanged()
  void slot_proxy_func__ZN15QGuiApplication19fontDatabaseChangedEv();
public:
  void (*slot_func__ZN15QGuiApplication19fontDatabaseChangedEv)(void* rsfptr) = NULL;
public slots:
  // applicationStateChanged(Qt::ApplicationState)
  void slot_proxy_func__ZN15QGuiApplication23applicationStateChangedEN2Qt16ApplicationStateE(Qt::ApplicationState arg0);
public:
  void (*slot_func__ZN15QGuiApplication23applicationStateChangedEN2Qt16ApplicationStateE)(void* rsfptr, Qt::ApplicationState arg0) = NULL;
public slots:
  // layoutDirectionChanged(Qt::LayoutDirection)
  void slot_proxy_func__ZN15QGuiApplication22layoutDirectionChangedEN2Qt15LayoutDirectionE(Qt::LayoutDirection arg0);
public:
  void (*slot_func__ZN15QGuiApplication22layoutDirectionChangedEN2Qt15LayoutDirectionE)(void* rsfptr, Qt::LayoutDirection arg0) = NULL;
public slots:
  // commitDataRequest(class QSessionManager &)
  void slot_proxy_func__ZN15QGuiApplication17commitDataRequestER15QSessionManager(QSessionManager & arg0);
public:
  void (*slot_func__ZN15QGuiApplication17commitDataRequestER15QSessionManager)(void* rsfptr, QSessionManager & arg0) = NULL;
public slots:
  // paletteChanged(const class QPalette &)
  void slot_proxy_func__ZN15QGuiApplication14paletteChangedERK8QPalette(const QPalette & arg0);
public:
  void (*slot_func__ZN15QGuiApplication14paletteChangedERK8QPalette)(void* rsfptr, const QPalette & arg0) = NULL;
public slots:
  // screenRemoved(class QScreen *)
  void slot_proxy_func__ZN15QGuiApplication13screenRemovedEP7QScreen(QScreen * arg0);
public:
  void (*slot_func__ZN15QGuiApplication13screenRemovedEP7QScreen)(void* rsfptr, QScreen * arg0) = NULL;
public slots:
  // focusWindowChanged(class QWindow *)
  void slot_proxy_func__ZN15QGuiApplication18focusWindowChangedEP7QWindow(QWindow * arg0);
public:
  void (*slot_func__ZN15QGuiApplication18focusWindowChangedEP7QWindow)(void* rsfptr, QWindow * arg0) = NULL;
public slots:
  // lastWindowClosed()
  void slot_proxy_func__ZN15QGuiApplication16lastWindowClosedEv();
public:
  void (*slot_func__ZN15QGuiApplication16lastWindowClosedEv)(void* rsfptr) = NULL;
public slots:
  // screenAdded(class QScreen *)
  void slot_proxy_func__ZN15QGuiApplication11screenAddedEP7QScreen(QScreen * arg0);
public:
  void (*slot_func__ZN15QGuiApplication11screenAddedEP7QScreen)(void* rsfptr, QScreen * arg0) = NULL;
public slots:
  // saveStateRequest(class QSessionManager &)
  void slot_proxy_func__ZN15QGuiApplication16saveStateRequestER15QSessionManager(QSessionManager & arg0);
public:
  void (*slot_func__ZN15QGuiApplication16saveStateRequestER15QSessionManager)(void* rsfptr, QSessionManager & arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/gui/qguiapplication.moc"

extern "C" {
  QGuiApplication_SlotProxy* QGuiApplication_SlotProxy_new()
  {
    return new QGuiApplication_SlotProxy();
  }
};

void QGuiApplication_SlotProxy::slot_proxy_func__ZN15QGuiApplication18focusObjectChangedEP7QObject(QObject * arg0) {
  if (this->slot_func__ZN15QGuiApplication18focusObjectChangedEP7QObject != NULL) {
    // do smth...
    this->slot_func__ZN15QGuiApplication18focusObjectChangedEP7QObject(this->rsfptr, arg0);
  }
}
extern "C"
void* QGuiApplication_SlotProxy_connect__ZN15QGuiApplication18focusObjectChangedEP7QObject(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGuiApplication_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGuiApplication18focusObjectChangedEP7QObject = (decltype(that->slot_func__ZN15QGuiApplication18focusObjectChangedEP7QObject))ffifptr;
  QObject::connect((QGuiApplication*)sender, SIGNAL(focusObjectChanged(class QObject *)), that, SLOT(slot_proxy_func__ZN15QGuiApplication18focusObjectChangedEP7QObject(QObject * arg0)));
  return that;
}
extern "C"
void QGuiApplication_SlotProxy_disconnect__ZN15QGuiApplication18focusObjectChangedEP7QObject(QGuiApplication_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGuiApplication_SlotProxy::slot_proxy_func__ZN15QGuiApplication19fontDatabaseChangedEv() {
  if (this->slot_func__ZN15QGuiApplication19fontDatabaseChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QGuiApplication19fontDatabaseChangedEv(this->rsfptr);
  }
}
extern "C"
void* QGuiApplication_SlotProxy_connect__ZN15QGuiApplication19fontDatabaseChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGuiApplication_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGuiApplication19fontDatabaseChangedEv = (decltype(that->slot_func__ZN15QGuiApplication19fontDatabaseChangedEv))ffifptr;
  QObject::connect((QGuiApplication*)sender, SIGNAL(fontDatabaseChanged()), that, SLOT(slot_proxy_func__ZN15QGuiApplication19fontDatabaseChangedEv()));
  return that;
}
extern "C"
void QGuiApplication_SlotProxy_disconnect__ZN15QGuiApplication19fontDatabaseChangedEv(QGuiApplication_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGuiApplication_SlotProxy::slot_proxy_func__ZN15QGuiApplication23applicationStateChangedEN2Qt16ApplicationStateE(Qt::ApplicationState arg0) {
  if (this->slot_func__ZN15QGuiApplication23applicationStateChangedEN2Qt16ApplicationStateE != NULL) {
    // do smth...
    this->slot_func__ZN15QGuiApplication23applicationStateChangedEN2Qt16ApplicationStateE(this->rsfptr, arg0);
  }
}
extern "C"
void* QGuiApplication_SlotProxy_connect__ZN15QGuiApplication23applicationStateChangedEN2Qt16ApplicationStateE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGuiApplication_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGuiApplication23applicationStateChangedEN2Qt16ApplicationStateE = (decltype(that->slot_func__ZN15QGuiApplication23applicationStateChangedEN2Qt16ApplicationStateE))ffifptr;
  QObject::connect((QGuiApplication*)sender, SIGNAL(applicationStateChanged(Qt::ApplicationState)), that, SLOT(slot_proxy_func__ZN15QGuiApplication23applicationStateChangedEN2Qt16ApplicationStateE(Qt::ApplicationState arg0)));
  return that;
}
extern "C"
void QGuiApplication_SlotProxy_disconnect__ZN15QGuiApplication23applicationStateChangedEN2Qt16ApplicationStateE(QGuiApplication_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGuiApplication_SlotProxy::slot_proxy_func__ZN15QGuiApplication22layoutDirectionChangedEN2Qt15LayoutDirectionE(Qt::LayoutDirection arg0) {
  if (this->slot_func__ZN15QGuiApplication22layoutDirectionChangedEN2Qt15LayoutDirectionE != NULL) {
    // do smth...
    this->slot_func__ZN15QGuiApplication22layoutDirectionChangedEN2Qt15LayoutDirectionE(this->rsfptr, arg0);
  }
}
extern "C"
void* QGuiApplication_SlotProxy_connect__ZN15QGuiApplication22layoutDirectionChangedEN2Qt15LayoutDirectionE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGuiApplication_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGuiApplication22layoutDirectionChangedEN2Qt15LayoutDirectionE = (decltype(that->slot_func__ZN15QGuiApplication22layoutDirectionChangedEN2Qt15LayoutDirectionE))ffifptr;
  QObject::connect((QGuiApplication*)sender, SIGNAL(layoutDirectionChanged(Qt::LayoutDirection)), that, SLOT(slot_proxy_func__ZN15QGuiApplication22layoutDirectionChangedEN2Qt15LayoutDirectionE(Qt::LayoutDirection arg0)));
  return that;
}
extern "C"
void QGuiApplication_SlotProxy_disconnect__ZN15QGuiApplication22layoutDirectionChangedEN2Qt15LayoutDirectionE(QGuiApplication_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGuiApplication_SlotProxy::slot_proxy_func__ZN15QGuiApplication17commitDataRequestER15QSessionManager(QSessionManager & arg0) {
  if (this->slot_func__ZN15QGuiApplication17commitDataRequestER15QSessionManager != NULL) {
    // do smth...
    this->slot_func__ZN15QGuiApplication17commitDataRequestER15QSessionManager(this->rsfptr, arg0);
  }
}
extern "C"
void* QGuiApplication_SlotProxy_connect__ZN15QGuiApplication17commitDataRequestER15QSessionManager(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGuiApplication_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGuiApplication17commitDataRequestER15QSessionManager = (decltype(that->slot_func__ZN15QGuiApplication17commitDataRequestER15QSessionManager))ffifptr;
  QObject::connect((QGuiApplication*)sender, SIGNAL(commitDataRequest(class QSessionManager &)), that, SLOT(slot_proxy_func__ZN15QGuiApplication17commitDataRequestER15QSessionManager(QSessionManager & arg0)));
  return that;
}
extern "C"
void QGuiApplication_SlotProxy_disconnect__ZN15QGuiApplication17commitDataRequestER15QSessionManager(QGuiApplication_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGuiApplication_SlotProxy::slot_proxy_func__ZN15QGuiApplication14paletteChangedERK8QPalette(const QPalette & arg0) {
  if (this->slot_func__ZN15QGuiApplication14paletteChangedERK8QPalette != NULL) {
    // do smth...
    this->slot_func__ZN15QGuiApplication14paletteChangedERK8QPalette(this->rsfptr, arg0);
  }
}
extern "C"
void* QGuiApplication_SlotProxy_connect__ZN15QGuiApplication14paletteChangedERK8QPalette(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGuiApplication_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGuiApplication14paletteChangedERK8QPalette = (decltype(that->slot_func__ZN15QGuiApplication14paletteChangedERK8QPalette))ffifptr;
  QObject::connect((QGuiApplication*)sender, SIGNAL(paletteChanged(const class QPalette &)), that, SLOT(slot_proxy_func__ZN15QGuiApplication14paletteChangedERK8QPalette(const QPalette & arg0)));
  return that;
}
extern "C"
void QGuiApplication_SlotProxy_disconnect__ZN15QGuiApplication14paletteChangedERK8QPalette(QGuiApplication_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGuiApplication_SlotProxy::slot_proxy_func__ZN15QGuiApplication13screenRemovedEP7QScreen(QScreen * arg0) {
  if (this->slot_func__ZN15QGuiApplication13screenRemovedEP7QScreen != NULL) {
    // do smth...
    this->slot_func__ZN15QGuiApplication13screenRemovedEP7QScreen(this->rsfptr, arg0);
  }
}
extern "C"
void* QGuiApplication_SlotProxy_connect__ZN15QGuiApplication13screenRemovedEP7QScreen(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGuiApplication_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGuiApplication13screenRemovedEP7QScreen = (decltype(that->slot_func__ZN15QGuiApplication13screenRemovedEP7QScreen))ffifptr;
  QObject::connect((QGuiApplication*)sender, SIGNAL(screenRemoved(class QScreen *)), that, SLOT(slot_proxy_func__ZN15QGuiApplication13screenRemovedEP7QScreen(QScreen * arg0)));
  return that;
}
extern "C"
void QGuiApplication_SlotProxy_disconnect__ZN15QGuiApplication13screenRemovedEP7QScreen(QGuiApplication_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGuiApplication_SlotProxy::slot_proxy_func__ZN15QGuiApplication18focusWindowChangedEP7QWindow(QWindow * arg0) {
  if (this->slot_func__ZN15QGuiApplication18focusWindowChangedEP7QWindow != NULL) {
    // do smth...
    this->slot_func__ZN15QGuiApplication18focusWindowChangedEP7QWindow(this->rsfptr, arg0);
  }
}
extern "C"
void* QGuiApplication_SlotProxy_connect__ZN15QGuiApplication18focusWindowChangedEP7QWindow(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGuiApplication_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGuiApplication18focusWindowChangedEP7QWindow = (decltype(that->slot_func__ZN15QGuiApplication18focusWindowChangedEP7QWindow))ffifptr;
  QObject::connect((QGuiApplication*)sender, SIGNAL(focusWindowChanged(class QWindow *)), that, SLOT(slot_proxy_func__ZN15QGuiApplication18focusWindowChangedEP7QWindow(QWindow * arg0)));
  return that;
}
extern "C"
void QGuiApplication_SlotProxy_disconnect__ZN15QGuiApplication18focusWindowChangedEP7QWindow(QGuiApplication_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGuiApplication_SlotProxy::slot_proxy_func__ZN15QGuiApplication16lastWindowClosedEv() {
  if (this->slot_func__ZN15QGuiApplication16lastWindowClosedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QGuiApplication16lastWindowClosedEv(this->rsfptr);
  }
}
extern "C"
void* QGuiApplication_SlotProxy_connect__ZN15QGuiApplication16lastWindowClosedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGuiApplication_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGuiApplication16lastWindowClosedEv = (decltype(that->slot_func__ZN15QGuiApplication16lastWindowClosedEv))ffifptr;
  QObject::connect((QGuiApplication*)sender, SIGNAL(lastWindowClosed()), that, SLOT(slot_proxy_func__ZN15QGuiApplication16lastWindowClosedEv()));
  return that;
}
extern "C"
void QGuiApplication_SlotProxy_disconnect__ZN15QGuiApplication16lastWindowClosedEv(QGuiApplication_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGuiApplication_SlotProxy::slot_proxy_func__ZN15QGuiApplication11screenAddedEP7QScreen(QScreen * arg0) {
  if (this->slot_func__ZN15QGuiApplication11screenAddedEP7QScreen != NULL) {
    // do smth...
    this->slot_func__ZN15QGuiApplication11screenAddedEP7QScreen(this->rsfptr, arg0);
  }
}
extern "C"
void* QGuiApplication_SlotProxy_connect__ZN15QGuiApplication11screenAddedEP7QScreen(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGuiApplication_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGuiApplication11screenAddedEP7QScreen = (decltype(that->slot_func__ZN15QGuiApplication11screenAddedEP7QScreen))ffifptr;
  QObject::connect((QGuiApplication*)sender, SIGNAL(screenAdded(class QScreen *)), that, SLOT(slot_proxy_func__ZN15QGuiApplication11screenAddedEP7QScreen(QScreen * arg0)));
  return that;
}
extern "C"
void QGuiApplication_SlotProxy_disconnect__ZN15QGuiApplication11screenAddedEP7QScreen(QGuiApplication_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGuiApplication_SlotProxy::slot_proxy_func__ZN15QGuiApplication16saveStateRequestER15QSessionManager(QSessionManager & arg0) {
  if (this->slot_func__ZN15QGuiApplication16saveStateRequestER15QSessionManager != NULL) {
    // do smth...
    this->slot_func__ZN15QGuiApplication16saveStateRequestER15QSessionManager(this->rsfptr, arg0);
  }
}
extern "C"
void* QGuiApplication_SlotProxy_connect__ZN15QGuiApplication16saveStateRequestER15QSessionManager(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGuiApplication_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QGuiApplication16saveStateRequestER15QSessionManager = (decltype(that->slot_func__ZN15QGuiApplication16saveStateRequestER15QSessionManager))ffifptr;
  QObject::connect((QGuiApplication*)sender, SIGNAL(saveStateRequest(class QSessionManager &)), that, SLOT(slot_proxy_func__ZN15QGuiApplication16saveStateRequestER15QSessionManager(QSessionManager & arg0)));
  return that;
}
extern "C"
void QGuiApplication_SlotProxy_disconnect__ZN15QGuiApplication16saveStateRequestER15QSessionManager(QGuiApplication_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

