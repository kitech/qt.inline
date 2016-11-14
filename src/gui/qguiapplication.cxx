// /usr/include/qt/QtGui/qguiapplication.h
#include <qguiapplication.h>
#include <QtGui>

// virtual
// /usr/include/qt/QtGui/qguiapplication.h:73
// const QMetaObject * metaObject()
extern "C"
void C_ZNK15QGuiApplication10metaObjectEv(void *this_) {
  /*return*/ ((QGuiApplication*)this_)->metaObject();
}
// /usr/include/qt/QtGui/qguiapplication.h:86
// void QGuiApplication(int &, char **, int)
extern "C"
void* C_ZN15QGuiApplicationC1ERiPPci(int & argc, char ** argv, int a2) {
  return new QGuiApplication(argc, argv, a2);
}
// virtual
// /usr/include/qt/QtGui/qguiapplication.h:88
// void ~QGuiApplication()
extern "C"
void C_ZN15QGuiApplicationD1Ev(void *this_) {
  delete (QGuiApplication*)(this_);
}
// static
// /usr/include/qt/QtGui/qguiapplication.h:90
// void setApplicationDisplayName(const class QString &)
extern "C"
void C_ZN15QGuiApplication25setApplicationDisplayNameERK7QString(const QString & name) {
  QGuiApplication::setApplicationDisplayName(name);
}
// static
// /usr/include/qt/QtGui/qguiapplication.h:91
// QString applicationDisplayName()
extern "C"
void C_ZN15QGuiApplication22applicationDisplayNameEv() {
  /*return*/ QGuiApplication::applicationDisplayName();
}
// static
// /usr/include/qt/QtGui/qguiapplication.h:93
// void setDesktopFileName(const class QString &)
extern "C"
void C_ZN15QGuiApplication18setDesktopFileNameERK7QString(const QString & name) {
  QGuiApplication::setDesktopFileName(name);
}
// static
// /usr/include/qt/QtGui/qguiapplication.h:94
// QString desktopFileName()
extern "C"
void C_ZN15QGuiApplication15desktopFileNameEv() {
  /*return*/ QGuiApplication::desktopFileName();
}
// static
// /usr/include/qt/QtGui/qguiapplication.h:96
// QWindowList allWindows()
extern "C"
void C_ZN15QGuiApplication10allWindowsEv() {
  /*return*/ QGuiApplication::allWindows();
}
// static
// /usr/include/qt/QtGui/qguiapplication.h:97
// QWindowList topLevelWindows()
extern "C"
void C_ZN15QGuiApplication15topLevelWindowsEv() {
  /*return*/ QGuiApplication::topLevelWindows();
}
// static
// /usr/include/qt/QtGui/qguiapplication.h:98
// QWindow * topLevelAt(const class QPoint &)
extern "C"
void C_ZN15QGuiApplication10topLevelAtERK6QPoint(const QPoint & pos) {
  /*return*/ QGuiApplication::topLevelAt(pos);
}
// static
// /usr/include/qt/QtGui/qguiapplication.h:100
// void setWindowIcon(const class QIcon &)
extern "C"
void C_ZN15QGuiApplication13setWindowIconERK5QIcon(const QIcon & icon) {
  QGuiApplication::setWindowIcon(icon);
}
// static
// /usr/include/qt/QtGui/qguiapplication.h:101
// QIcon windowIcon()
extern "C"
void C_ZN15QGuiApplication10windowIconEv() {
  /*return*/ QGuiApplication::windowIcon();
}
// static
// /usr/include/qt/QtGui/qguiapplication.h:103
// QString platformName()
extern "C"
void C_ZN15QGuiApplication12platformNameEv() {
  /*return*/ QGuiApplication::platformName();
}
// static
// /usr/include/qt/QtGui/qguiapplication.h:105
// QWindow * modalWindow()
extern "C"
void C_ZN15QGuiApplication11modalWindowEv() {
  /*return*/ QGuiApplication::modalWindow();
}
// static
// /usr/include/qt/QtGui/qguiapplication.h:107
// QWindow * focusWindow()
extern "C"
void C_ZN15QGuiApplication11focusWindowEv() {
  /*return*/ QGuiApplication::focusWindow();
}
// static
// /usr/include/qt/QtGui/qguiapplication.h:108
// QObject * focusObject()
extern "C"
void C_ZN15QGuiApplication11focusObjectEv() {
  /*return*/ QGuiApplication::focusObject();
}
// static
// /usr/include/qt/QtGui/qguiapplication.h:110
// QScreen * primaryScreen()
extern "C"
void C_ZN15QGuiApplication13primaryScreenEv() {
  /*return*/ QGuiApplication::primaryScreen();
}
// static
// /usr/include/qt/QtGui/qguiapplication.h:111
// QList<QScreen *> screens()
extern "C"
void C_ZN15QGuiApplication7screensEv() {
  /*return*/ QGuiApplication::screens();
}
// /usr/include/qt/QtGui/qguiapplication.h:112
// qreal devicePixelRatio()
extern "C"
void C_ZNK15QGuiApplication16devicePixelRatioEv(void *this_) {
  /*return*/ ((QGuiApplication*)this_)->devicePixelRatio();
}
// static
// /usr/include/qt/QtGui/qguiapplication.h:115
// QCursor * overrideCursor()
extern "C"
void C_ZN15QGuiApplication14overrideCursorEv() {
  /*return*/ QGuiApplication::overrideCursor();
}
// static
// /usr/include/qt/QtGui/qguiapplication.h:116
// void setOverrideCursor(const class QCursor &)
extern "C"
void C_ZN15QGuiApplication17setOverrideCursorERK7QCursor(const QCursor & a0) {
  QGuiApplication::setOverrideCursor(a0);
}
// static
// /usr/include/qt/QtGui/qguiapplication.h:117
// void changeOverrideCursor(const class QCursor &)
extern "C"
void C_ZN15QGuiApplication20changeOverrideCursorERK7QCursor(const QCursor & a0) {
  QGuiApplication::changeOverrideCursor(a0);
}
// static
// /usr/include/qt/QtGui/qguiapplication.h:118
// void restoreOverrideCursor()
extern "C"
void C_ZN15QGuiApplication21restoreOverrideCursorEv() {
  QGuiApplication::restoreOverrideCursor();
}
// static
// /usr/include/qt/QtGui/qguiapplication.h:121
// QFont font()
extern "C"
void C_ZN15QGuiApplication4fontEv() {
  /*return*/ QGuiApplication::font();
}
// static
// /usr/include/qt/QtGui/qguiapplication.h:122
// void setFont(const class QFont &)
extern "C"
void C_ZN15QGuiApplication7setFontERK5QFont(const QFont & a0) {
  QGuiApplication::setFont(a0);
}
// static
// /usr/include/qt/QtGui/qguiapplication.h:125
// QClipboard * clipboard()
extern "C"
void C_ZN15QGuiApplication9clipboardEv() {
  /*return*/ QGuiApplication::clipboard();
}
// static
// /usr/include/qt/QtGui/qguiapplication.h:128
// QPalette palette()
extern "C"
void C_ZN15QGuiApplication7paletteEv() {
  /*return*/ QGuiApplication::palette();
}
// static
// /usr/include/qt/QtGui/qguiapplication.h:129
// void setPalette(const class QPalette &)
extern "C"
void C_ZN15QGuiApplication10setPaletteERK8QPalette(const QPalette & pal) {
  QGuiApplication::setPalette(pal);
}
// static
// /usr/include/qt/QtGui/qguiapplication.h:131
// Qt::KeyboardModifiers keyboardModifiers()
extern "C"
void C_ZN15QGuiApplication17keyboardModifiersEv() {
  /*return*/ QGuiApplication::keyboardModifiers();
}
// static
// /usr/include/qt/QtGui/qguiapplication.h:132
// Qt::KeyboardModifiers queryKeyboardModifiers()
extern "C"
void C_ZN15QGuiApplication22queryKeyboardModifiersEv() {
  /*return*/ QGuiApplication::queryKeyboardModifiers();
}
// static
// /usr/include/qt/QtGui/qguiapplication.h:133
// Qt::MouseButtons mouseButtons()
extern "C"
void C_ZN15QGuiApplication12mouseButtonsEv() {
  /*return*/ QGuiApplication::mouseButtons();
}
// static
// /usr/include/qt/QtGui/qguiapplication.h:135
// void setLayoutDirection(Qt::LayoutDirection)
extern "C"
void C_ZN15QGuiApplication18setLayoutDirectionEN2Qt15LayoutDirectionE(Qt::LayoutDirection direction) {
  QGuiApplication::setLayoutDirection(direction);
}
// static
// /usr/include/qt/QtGui/qguiapplication.h:136
// Qt::LayoutDirection layoutDirection()
extern "C"
void C_ZN15QGuiApplication15layoutDirectionEv() {
  /*return*/ QGuiApplication::layoutDirection();
}
// static inline
// /usr/include/qt/QtGui/qguiapplication.h:138
// bool isRightToLeft()
extern "C"
void C_ZN15QGuiApplication13isRightToLeftEv() {
  /*return*/ QGuiApplication::isRightToLeft();
}
// static inline
// /usr/include/qt/QtGui/qguiapplication.h:139
// bool isLeftToRight()
extern "C"
void C_ZN15QGuiApplication13isLeftToRightEv() {
  /*return*/ QGuiApplication::isLeftToRight();
}
// static
// /usr/include/qt/QtGui/qguiapplication.h:141
// QStyleHints * styleHints()
extern "C"
void C_ZN15QGuiApplication10styleHintsEv() {
  /*return*/ QGuiApplication::styleHints();
}
// static
// /usr/include/qt/QtGui/qguiapplication.h:142
// void setDesktopSettingsAware(_Bool)
extern "C"
void C_ZN15QGuiApplication23setDesktopSettingsAwareEb(bool on) {
  QGuiApplication::setDesktopSettingsAware(on);
}
// static
// /usr/include/qt/QtGui/qguiapplication.h:143
// bool desktopSettingsAware()
extern "C"
void C_ZN15QGuiApplication20desktopSettingsAwareEv() {
  /*return*/ QGuiApplication::desktopSettingsAware();
}
// static
// /usr/include/qt/QtGui/qguiapplication.h:145
// QInputMethod * inputMethod()
extern "C"
void C_ZN15QGuiApplication11inputMethodEv() {
  /*return*/ QGuiApplication::inputMethod();
}
// static
// /usr/include/qt/QtGui/qguiapplication.h:147
// QPlatformNativeInterface * platformNativeInterface()
extern "C"
void C_ZN15QGuiApplication23platformNativeInterfaceEv() {
  /*return*/ QGuiApplication::platformNativeInterface();
}
// static
// /usr/include/qt/QtGui/qguiapplication.h:149
// QFunctionPointer platformFunction(const class QByteArray &)
extern "C"
void C_ZN15QGuiApplication16platformFunctionERK10QByteArray(const QByteArray & function) {
  /*return*/ QGuiApplication::platformFunction(function);
}
// static
// /usr/include/qt/QtGui/qguiapplication.h:151
// void setQuitOnLastWindowClosed(_Bool)
extern "C"
void C_ZN15QGuiApplication25setQuitOnLastWindowClosedEb(bool quit) {
  QGuiApplication::setQuitOnLastWindowClosed(quit);
}
// static
// /usr/include/qt/QtGui/qguiapplication.h:152
// bool quitOnLastWindowClosed()
extern "C"
void C_ZN15QGuiApplication22quitOnLastWindowClosedEv() {
  /*return*/ QGuiApplication::quitOnLastWindowClosed();
}
// static
// /usr/include/qt/QtGui/qguiapplication.h:154
// Qt::ApplicationState applicationState()
extern "C"
void C_ZN15QGuiApplication16applicationStateEv() {
  /*return*/ QGuiApplication::applicationState();
}
// static
// /usr/include/qt/QtGui/qguiapplication.h:156
// int exec()
extern "C"
void C_ZN15QGuiApplication4execEv() {
  /*return*/ QGuiApplication::exec();
}
// virtual
// /usr/include/qt/QtGui/qguiapplication.h:157
// bool notify(class QObject *, class QEvent *)
extern "C"
void C_ZN15QGuiApplication6notifyEP7QObjectP6QEvent(void *this_, QObject * a0, QEvent * a1) {
  /*return*/ ((QGuiApplication*)this_)->notify(a0, a1);
}
// /usr/include/qt/QtGui/qguiapplication.h:161
// bool isSessionRestored()
extern "C"
void C_ZNK15QGuiApplication17isSessionRestoredEv(void *this_) {
  /*return*/ ((QGuiApplication*)this_)->isSessionRestored();
}
// /usr/include/qt/QtGui/qguiapplication.h:162
// QString sessionId()
extern "C"
void C_ZNK15QGuiApplication9sessionIdEv(void *this_) {
  /*return*/ ((QGuiApplication*)this_)->sessionId();
}
// /usr/include/qt/QtGui/qguiapplication.h:163
// QString sessionKey()
extern "C"
void C_ZNK15QGuiApplication10sessionKeyEv(void *this_) {
  /*return*/ ((QGuiApplication*)this_)->sessionKey();
}
// /usr/include/qt/QtGui/qguiapplication.h:164
// bool isSavingSession()
extern "C"
void C_ZNK15QGuiApplication15isSavingSessionEv(void *this_) {
  /*return*/ ((QGuiApplication*)this_)->isSavingSession();
}
// static
// /usr/include/qt/QtGui/qguiapplication.h:166
// bool isFallbackSessionManagementEnabled()
extern "C"
void C_ZN15QGuiApplication34isFallbackSessionManagementEnabledEv() {
  /*return*/ QGuiApplication::isFallbackSessionManagementEnabled();
}
// static
// /usr/include/qt/QtGui/qguiapplication.h:167
// void setFallbackSessionManagementEnabled(_Bool)
extern "C"
void C_ZN15QGuiApplication35setFallbackSessionManagementEnabledEb(bool a0) {
  QGuiApplication::setFallbackSessionManagementEnabled(a0);
}
// static
// /usr/include/qt/QtGui/qguiapplication.h:170
// void sync()
extern "C"
void C_ZN15QGuiApplication4syncEv() {
  QGuiApplication::sync();
}
// /usr/include/qt/QtGui/qguiapplication.h:172
// void fontDatabaseChanged()
extern "C"
void C_ZN15QGuiApplication19fontDatabaseChangedEv(void *this_) {
  ((QGuiApplication*)this_)->fontDatabaseChanged();
}
// /usr/include/qt/QtGui/qguiapplication.h:173
// void screenAdded(class QScreen *)
extern "C"
void C_ZN15QGuiApplication11screenAddedEP7QScreen(void *this_, QScreen * screen) {
  ((QGuiApplication*)this_)->screenAdded(screen);
}
// /usr/include/qt/QtGui/qguiapplication.h:174
// void screenRemoved(class QScreen *)
extern "C"
void C_ZN15QGuiApplication13screenRemovedEP7QScreen(void *this_, QScreen * screen) {
  ((QGuiApplication*)this_)->screenRemoved(screen);
}
// /usr/include/qt/QtGui/qguiapplication.h:175
// void primaryScreenChanged(class QScreen *)
extern "C"
void C_ZN15QGuiApplication20primaryScreenChangedEP7QScreen(void *this_, QScreen * screen) {
  ((QGuiApplication*)this_)->primaryScreenChanged(screen);
}
// /usr/include/qt/QtGui/qguiapplication.h:176
// void lastWindowClosed()
extern "C"
void C_ZN15QGuiApplication16lastWindowClosedEv(void *this_) {
  ((QGuiApplication*)this_)->lastWindowClosed();
}
// /usr/include/qt/QtGui/qguiapplication.h:177
// void focusObjectChanged(class QObject *)
extern "C"
void C_ZN15QGuiApplication18focusObjectChangedEP7QObject(void *this_, QObject * focusObject) {
  ((QGuiApplication*)this_)->focusObjectChanged(focusObject);
}
// /usr/include/qt/QtGui/qguiapplication.h:178
// void focusWindowChanged(class QWindow *)
extern "C"
void C_ZN15QGuiApplication18focusWindowChangedEP7QWindow(void *this_, QWindow * focusWindow) {
  ((QGuiApplication*)this_)->focusWindowChanged(focusWindow);
}
// /usr/include/qt/QtGui/qguiapplication.h:179
// void applicationStateChanged(Qt::ApplicationState)
extern "C"
void C_ZN15QGuiApplication23applicationStateChangedEN2Qt16ApplicationStateE(void *this_, Qt::ApplicationState state) {
  ((QGuiApplication*)this_)->applicationStateChanged(state);
}
// /usr/include/qt/QtGui/qguiapplication.h:180
// void layoutDirectionChanged(Qt::LayoutDirection)
extern "C"
void C_ZN15QGuiApplication22layoutDirectionChangedEN2Qt15LayoutDirectionE(void *this_, Qt::LayoutDirection direction) {
  ((QGuiApplication*)this_)->layoutDirectionChanged(direction);
}
// /usr/include/qt/QtGui/qguiapplication.h:182
// void commitDataRequest(class QSessionManager &)
extern "C"
void C_ZN15QGuiApplication17commitDataRequestER15QSessionManager(void *this_, QSessionManager & sessionManager) {
  ((QGuiApplication*)this_)->commitDataRequest(sessionManager);
}
// /usr/include/qt/QtGui/qguiapplication.h:183
// void saveStateRequest(class QSessionManager &)
extern "C"
void C_ZN15QGuiApplication16saveStateRequestER15QSessionManager(void *this_, QSessionManager & sessionManager) {
  ((QGuiApplication*)this_)->saveStateRequest(sessionManager);
}
// /usr/include/qt/QtGui/qguiapplication.h:185
// void paletteChanged(const class QPalette &)
extern "C"
void C_ZN15QGuiApplication14paletteChangedERK8QPalette(void *this_, const QPalette & pal) {
  ((QGuiApplication*)this_)->paletteChanged(pal);
}