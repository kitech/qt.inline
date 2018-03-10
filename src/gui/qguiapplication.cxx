//  header block begin
// since 0x050000
// /usr/include/qt/QtGui/qguiapplication.h
#ifndef protected
#define protected public
#endif
#include <qguiapplication.h>
#include <QtGui>
#include "callback_inherit.h"

// QGuiApplication is pure virtual: false
// QGuiApplication has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQGuiApplication : public QGuiApplication {
public:
  virtual ~MyQGuiApplication() {}
// void QGuiApplication(int &, char **, int)
MyQGuiApplication(int & argc, char** argv, int arg2) : QGuiApplication(argc, argv, arg2) {}
// Protected virtual Visibility=Default Availability=Available
// bool event(class QEvent *)
  virtual bool event(QEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QGuiApplication::event(arg0);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:192
// [1] bool event(class QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN15QGuiApplication5eventEP6QEvent(void *this_, QEvent * arg0) {
  return (bool)((QGuiApplication*)this_)->QGuiApplication::event(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:74
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QGuiApplication10metaObjectEv(void *this_) {
  return (void*)((QGuiApplication*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:87
// [-2] void QGuiApplication(int &, char **, int)
extern "C" Q_DECL_EXPORT
void* C_ZN15QGuiApplicationC2ERiPPci(int & argc, char** argv, int arg2) {
  auto _nilp = (MyQGuiApplication*)(0);
  return  new MyQGuiApplication(*(new int(argc)), argv, arg2);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:89
// [-2] void ~QGuiApplication()
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplicationD2Ev(void *this_) {
  delete (QGuiApplication*)(this_);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:91
// [-2] void setApplicationDisplayName(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication25setApplicationDisplayNameERK7QString(QString* name) {
  QGuiApplication::setApplicationDisplayName(*name);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:92
// [8] QString applicationDisplayName()
extern "C" Q_DECL_EXPORT
void* C_ZN15QGuiApplication22applicationDisplayNameEv() {
  auto rv = QGuiApplication::applicationDisplayName();
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:94
// [-2] void setDesktopFileName(const class QString &)
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication18setDesktopFileNameERK7QString(QString* name) {
  QGuiApplication::setDesktopFileName(*name);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:95
// [8] QString desktopFileName()
extern "C" Q_DECL_EXPORT
void* C_ZN15QGuiApplication15desktopFileNameEv() {
  auto rv = QGuiApplication::desktopFileName();
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:97
// [-2] QWindowList allWindows()
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication10allWindowsEv() {
  auto rv = QGuiApplication::allWindows();
/*return rv;*/
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:98
// [-2] QWindowList topLevelWindows()
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication15topLevelWindowsEv() {
  auto rv = QGuiApplication::topLevelWindows();
/*return rv;*/
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:99
// [8] QWindow * topLevelAt(const class QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZN15QGuiApplication10topLevelAtERK6QPoint(QPoint* pos) {
  return (void*)QGuiApplication::topLevelAt(*pos);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:101
// [-2] void setWindowIcon(const class QIcon &)
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication13setWindowIconERK5QIcon(QIcon* icon) {
  QGuiApplication::setWindowIcon(*icon);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:102
// [8] QIcon windowIcon()
extern "C" Q_DECL_EXPORT
void* C_ZN15QGuiApplication10windowIconEv() {
  auto rv = QGuiApplication::windowIcon();
return new QIcon(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:104
// [8] QString platformName()
extern "C" Q_DECL_EXPORT
void* C_ZN15QGuiApplication12platformNameEv() {
  auto rv = QGuiApplication::platformName();
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:106
// [8] QWindow * modalWindow()
extern "C" Q_DECL_EXPORT
void* C_ZN15QGuiApplication11modalWindowEv() {
  return (void*)QGuiApplication::modalWindow();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:108
// [8] QWindow * focusWindow()
extern "C" Q_DECL_EXPORT
void* C_ZN15QGuiApplication11focusWindowEv() {
  return (void*)QGuiApplication::focusWindow();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:109
// [8] QObject * focusObject()
extern "C" Q_DECL_EXPORT
void* C_ZN15QGuiApplication11focusObjectEv() {
  return (void*)QGuiApplication::focusObject();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:111
// [8] QScreen * primaryScreen()
extern "C" Q_DECL_EXPORT
void* C_ZN15QGuiApplication13primaryScreenEv() {
  return (void*)QGuiApplication::primaryScreen();
}

// Public static Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtGui/qguiapplication.h:113
// [8] QScreen * screenAt(const class QPoint &)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
void* C_ZN15QGuiApplication8screenAtERK6QPoint(QPoint* point) {
  return (void*)QGuiApplication::screenAt(*point);
}
#endif // QT_VERSION >= 0x050a00

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:115
// [8] qreal devicePixelRatio()
extern "C" Q_DECL_EXPORT
qreal C_ZNK15QGuiApplication16devicePixelRatioEv(void *this_) {
  return (qreal)((QGuiApplication*)this_)->devicePixelRatio();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:118
// [8] QCursor * overrideCursor()
extern "C" Q_DECL_EXPORT
void* C_ZN15QGuiApplication14overrideCursorEv() {
  return (void*)QGuiApplication::overrideCursor();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:119
// [-2] void setOverrideCursor(const class QCursor &)
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication17setOverrideCursorERK7QCursor(QCursor* arg0) {
  QGuiApplication::setOverrideCursor(*arg0);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:120
// [-2] void changeOverrideCursor(const class QCursor &)
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication20changeOverrideCursorERK7QCursor(QCursor* arg0) {
  QGuiApplication::changeOverrideCursor(*arg0);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:121
// [-2] void restoreOverrideCursor()
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication21restoreOverrideCursorEv() {
  QGuiApplication::restoreOverrideCursor();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:124
// [16] QFont font()
extern "C" Q_DECL_EXPORT
void* C_ZN15QGuiApplication4fontEv() {
  auto rv = QGuiApplication::font();
return new QFont(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:125
// [-2] void setFont(const class QFont &)
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication7setFontERK5QFont(QFont* arg0) {
  QGuiApplication::setFont(*arg0);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:128
// [8] QClipboard * clipboard()
extern "C" Q_DECL_EXPORT
void* C_ZN15QGuiApplication9clipboardEv() {
  return (void*)QGuiApplication::clipboard();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:131
// [16] QPalette palette()
extern "C" Q_DECL_EXPORT
void* C_ZN15QGuiApplication7paletteEv() {
  auto rv = QGuiApplication::palette();
return new QPalette(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:132
// [-2] void setPalette(const class QPalette &)
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication10setPaletteERK8QPalette(QPalette* pal) {
  QGuiApplication::setPalette(*pal);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:134
// [4] Qt::KeyboardModifiers keyboardModifiers()
extern "C" Q_DECL_EXPORT
Qt::KeyboardModifiers C_ZN15QGuiApplication17keyboardModifiersEv() {
  return (Qt::KeyboardModifiers)QGuiApplication::keyboardModifiers();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:135
// [4] Qt::KeyboardModifiers queryKeyboardModifiers()
extern "C" Q_DECL_EXPORT
Qt::KeyboardModifiers C_ZN15QGuiApplication22queryKeyboardModifiersEv() {
  return (Qt::KeyboardModifiers)QGuiApplication::queryKeyboardModifiers();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:136
// [4] Qt::MouseButtons mouseButtons()
extern "C" Q_DECL_EXPORT
Qt::MouseButtons C_ZN15QGuiApplication12mouseButtonsEv() {
  return (Qt::MouseButtons)QGuiApplication::mouseButtons();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:138
// [-2] void setLayoutDirection(Qt::LayoutDirection)
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication18setLayoutDirectionEN2Qt15LayoutDirectionE(Qt::LayoutDirection direction) {
  QGuiApplication::setLayoutDirection(direction);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:139
// [4] Qt::LayoutDirection layoutDirection()
extern "C" Q_DECL_EXPORT
Qt::LayoutDirection C_ZN15QGuiApplication15layoutDirectionEv() {
  return (Qt::LayoutDirection)QGuiApplication::layoutDirection();
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:141
// [1] bool isRightToLeft()
extern "C" Q_DECL_EXPORT
bool C_ZN15QGuiApplication13isRightToLeftEv() {
  return (bool)QGuiApplication::isRightToLeft();
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:142
// [1] bool isLeftToRight()
extern "C" Q_DECL_EXPORT
bool C_ZN15QGuiApplication13isLeftToRightEv() {
  return (bool)QGuiApplication::isLeftToRight();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:144
// [8] QStyleHints * styleHints()
extern "C" Q_DECL_EXPORT
void* C_ZN15QGuiApplication10styleHintsEv() {
  return (void*)QGuiApplication::styleHints();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:145
// [-2] void setDesktopSettingsAware(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication23setDesktopSettingsAwareEb(bool on) {
  QGuiApplication::setDesktopSettingsAware(on);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:146
// [1] bool desktopSettingsAware()
extern "C" Q_DECL_EXPORT
bool C_ZN15QGuiApplication20desktopSettingsAwareEv() {
  return (bool)QGuiApplication::desktopSettingsAware();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:148
// [8] QInputMethod * inputMethod()
extern "C" Q_DECL_EXPORT
void* C_ZN15QGuiApplication11inputMethodEv() {
  return (void*)QGuiApplication::inputMethod();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:152
// [8] QFunctionPointer platformFunction(const class QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication16platformFunctionERK10QByteArray(QByteArray* function) {
  auto rv = QGuiApplication::platformFunction(*function);
/*return rv;*/
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:154
// [-2] void setQuitOnLastWindowClosed(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication25setQuitOnLastWindowClosedEb(bool quit) {
  QGuiApplication::setQuitOnLastWindowClosed(quit);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:155
// [1] bool quitOnLastWindowClosed()
extern "C" Q_DECL_EXPORT
bool C_ZN15QGuiApplication22quitOnLastWindowClosedEv() {
  return (bool)QGuiApplication::quitOnLastWindowClosed();
}

// Public static Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtGui/qguiapplication.h:157
// [4] Qt::ApplicationState applicationState()
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
Qt::ApplicationState C_ZN15QGuiApplication16applicationStateEv() {
  return (Qt::ApplicationState)QGuiApplication::applicationState();
}
#endif // QT_VERSION >= 0x050200

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:159
// [4] int exec()
extern "C" Q_DECL_EXPORT
int C_ZN15QGuiApplication4execEv() {
  return (int)QGuiApplication::exec();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:160
// [1] bool notify(class QObject *, class QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN15QGuiApplication6notifyEP7QObjectP6QEvent(void *this_, QObject * arg0, QEvent * arg1) {
  return (bool)((QGuiApplication*)this_)->notify(arg0, arg1);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:164
// [1] bool isSessionRestored()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QGuiApplication17isSessionRestoredEv(void *this_) {
  return (bool)((QGuiApplication*)this_)->isSessionRestored();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:165
// [8] QString sessionId()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QGuiApplication9sessionIdEv(void *this_) {
  auto rv = ((QGuiApplication*)this_)->sessionId();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:166
// [8] QString sessionKey()
extern "C" Q_DECL_EXPORT
void* C_ZNK15QGuiApplication10sessionKeyEv(void *this_) {
  auto rv = ((QGuiApplication*)this_)->sessionKey();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtGui/qguiapplication.h:167
// [1] bool isSavingSession()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
bool C_ZNK15QGuiApplication15isSavingSessionEv(void *this_) {
  return (bool)((QGuiApplication*)this_)->isSavingSession();
}
#endif // QT_VERSION >= 0x050000

// Public static Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtGui/qguiapplication.h:169
// [1] bool isFallbackSessionManagementEnabled()
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
bool C_ZN15QGuiApplication34isFallbackSessionManagementEnabledEv() {
  return (bool)QGuiApplication::isFallbackSessionManagementEnabled();
}
#endif // QT_VERSION >= 0x050600

// Public static Visibility=Default Availability=Available
// since 5.6
// /usr/include/qt/QtGui/qguiapplication.h:170
// [-2] void setFallbackSessionManagementEnabled(_Bool)
#if QT_VERSION >= 0x050600
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication35setFallbackSessionManagementEnabledEb(bool arg0) {
  QGuiApplication::setFallbackSessionManagementEnabled(arg0);
}
#endif // QT_VERSION >= 0x050600

// Public static Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtGui/qguiapplication.h:173
// [-2] void sync()
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication4syncEv() {
  QGuiApplication::sync();
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:175
// [-2] void fontDatabaseChanged()
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication19fontDatabaseChangedEv(void *this_) {
  ((QGuiApplication*)this_)->fontDatabaseChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:176
// [-2] void screenAdded(class QScreen *)
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication11screenAddedEP7QScreen(void *this_, QScreen * screen) {
  ((QGuiApplication*)this_)->screenAdded(screen);
}

// Public Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtGui/qguiapplication.h:177
// [-2] void screenRemoved(class QScreen *)
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication13screenRemovedEP7QScreen(void *this_, QScreen * screen) {
  ((QGuiApplication*)this_)->screenRemoved(screen);
}
#endif // QT_VERSION >= 0x050400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:178
// [-2] void primaryScreenChanged(class QScreen *)
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication20primaryScreenChangedEP7QScreen(void *this_, QScreen * screen) {
  ((QGuiApplication*)this_)->primaryScreenChanged(screen);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:179
// [-2] void lastWindowClosed()
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication16lastWindowClosedEv(void *this_) {
  ((QGuiApplication*)this_)->lastWindowClosed();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:180
// [-2] void focusObjectChanged(class QObject *)
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication18focusObjectChangedEP7QObject(void *this_, QObject * focusObject) {
  ((QGuiApplication*)this_)->focusObjectChanged(focusObject);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:181
// [-2] void focusWindowChanged(class QWindow *)
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication18focusWindowChangedEP7QWindow(void *this_, QWindow * focusWindow) {
  ((QGuiApplication*)this_)->focusWindowChanged(focusWindow);
}

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtGui/qguiapplication.h:182
// [-2] void applicationStateChanged(Qt::ApplicationState)
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication23applicationStateChangedEN2Qt16ApplicationStateE(void *this_, Qt::ApplicationState state) {
  ((QGuiApplication*)this_)->applicationStateChanged(state);
}
#endif // QT_VERSION >= 0x050200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:183
// [-2] void layoutDirectionChanged(Qt::LayoutDirection)
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication22layoutDirectionChangedEN2Qt15LayoutDirectionE(void *this_, Qt::LayoutDirection direction) {
  ((QGuiApplication*)this_)->layoutDirectionChanged(direction);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qguiapplication.h:185
// [-2] void commitDataRequest(class QSessionManager &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication17commitDataRequestER15QSessionManager(void *this_, QSessionManager* sessionManager) {
  ((QGuiApplication*)this_)->commitDataRequest(*sessionManager);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qguiapplication.h:186
// [-2] void saveStateRequest(class QSessionManager &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication16saveStateRequestER15QSessionManager(void *this_, QSessionManager* sessionManager) {
  ((QGuiApplication*)this_)->saveStateRequest(*sessionManager);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 5.4
// /usr/include/qt/QtGui/qguiapplication.h:188
// [-2] void paletteChanged(const class QPalette &)
#if QT_VERSION >= 0x050400
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication14paletteChangedERK8QPalette(void *this_, QPalette* pal) {
  ((QGuiApplication*)this_)->paletteChanged(*pal);
}
#endif // QT_VERSION >= 0x050400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qguiapplication.h:189
// [-2] void applicationDisplayNameChanged()
extern "C" Q_DECL_EXPORT
void C_ZN15QGuiApplication29applicationDisplayNameChangedEv(void *this_) {
  ((QGuiApplication*)this_)->applicationDisplayNameChanged();
}

//  main block end
