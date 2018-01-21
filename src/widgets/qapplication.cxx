//  header block begin
// /usr/include/qt/QtWidgets/qapplication.h
#include <qapplication.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qapplication.h:73
// const QMetaObject * metaObject()
extern "C"
void C_ZNK12QApplication10metaObjectEv(void *this_) {
  /*return*/ ((QApplication*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qapplication.h:96
// void QApplication(int &, char **, int)
extern "C"
void* C_ZN12QApplicationC1ERiPPci(int & argc, char ** argv, int arg2) {
  return new QApplication(argc, argv, arg2);
}
// virtual
// /usr/include/qt/QtWidgets/qapplication.h:98
// void ~QApplication()
extern "C"
void C_ZN12QApplicationD1Ev(void *this_) {
  delete (QApplication*)(this_);
}
// static
// /usr/include/qt/QtWidgets/qapplication.h:100
// QStyle * style()
extern "C"
void C_ZN12QApplication5styleEv() {
  /*return*/ QApplication::style();
}
// static
// /usr/include/qt/QtWidgets/qapplication.h:101
// void setStyle(class QStyle *)
extern "C"
void C_ZN12QApplication8setStyleEP6QStyle(QStyle * arg0) {
  QApplication::setStyle(arg0);
}
// static
// /usr/include/qt/QtWidgets/qapplication.h:102
// QStyle * setStyle(const class QString &)
extern "C"
void C_ZN12QApplication8setStyleERK7QString(const QString & arg0) {
  /*return*/ QApplication::setStyle(arg0);
}
// static
// /usr/include/qt/QtWidgets/qapplication.h:104
// int colorSpec()
extern "C"
void C_ZN12QApplication9colorSpecEv() {
  /*return*/ QApplication::colorSpec();
}
// static
// /usr/include/qt/QtWidgets/qapplication.h:105
// void setColorSpec(int)
extern "C"
void C_ZN12QApplication12setColorSpecEi(int arg0) {
  QApplication::setColorSpec(arg0);
}
// static
// /usr/include/qt/QtWidgets/qapplication.h:111
// QPalette palette(const class QWidget *)
extern "C"
void C_ZN12QApplication7paletteEPK7QWidget(const QWidget * arg0) {
  /*return*/ QApplication::palette(arg0);
}
// static
// /usr/include/qt/QtWidgets/qapplication.h:112
// QPalette palette(const char *)
extern "C"
void C_ZN12QApplication7paletteEPKc(const char * className) {
  /*return*/ QApplication::palette(className);
}
// static
// /usr/include/qt/QtWidgets/qapplication.h:113
// void setPalette(const class QPalette &, const char *)
extern "C"
void C_ZN12QApplication10setPaletteERK8QPalettePKc(const QPalette & arg0, const char * className) {
  QApplication::setPalette(arg0, className);
}
// static
// /usr/include/qt/QtWidgets/qapplication.h:114
// QFont font()
extern "C"
void C_ZN12QApplication4fontEv() {
  /*return*/ QApplication::font();
}
// static
// /usr/include/qt/QtWidgets/qapplication.h:115
// QFont font(const class QWidget *)
extern "C"
void C_ZN12QApplication4fontEPK7QWidget(const QWidget * arg0) {
  /*return*/ QApplication::font(arg0);
}
// static
// /usr/include/qt/QtWidgets/qapplication.h:116
// QFont font(const char *)
extern "C"
void C_ZN12QApplication4fontEPKc(const char * className) {
  /*return*/ QApplication::font(className);
}
// static
// /usr/include/qt/QtWidgets/qapplication.h:117
// void setFont(const class QFont &, const char *)
extern "C"
void C_ZN12QApplication7setFontERK5QFontPKc(const QFont & arg0, const char * className) {
  QApplication::setFont(arg0, className);
}
// static
// /usr/include/qt/QtWidgets/qapplication.h:118
// QFontMetrics fontMetrics()
extern "C"
void C_ZN12QApplication11fontMetricsEv() {
  /*return*/ QApplication::fontMetrics();
}
// static
// /usr/include/qt/QtWidgets/qapplication.h:121
// void setWindowIcon(const class QIcon &)
extern "C"
void C_ZN12QApplication13setWindowIconERK5QIcon(const QIcon & icon) {
  QApplication::setWindowIcon(icon);
}
// static
// /usr/include/qt/QtWidgets/qapplication.h:122
// QIcon windowIcon()
extern "C"
void C_ZN12QApplication10windowIconEv() {
  /*return*/ QApplication::windowIcon();
}
// static
// /usr/include/qt/QtWidgets/qapplication.h:125
// QWidgetList allWidgets()
extern "C"
void C_ZN12QApplication10allWidgetsEv() {
  /*return*/ QApplication::allWidgets();
}
// static
// /usr/include/qt/QtWidgets/qapplication.h:126
// QWidgetList topLevelWidgets()
extern "C"
void C_ZN12QApplication15topLevelWidgetsEv() {
  /*return*/ QApplication::topLevelWidgets();
}
// static
// /usr/include/qt/QtWidgets/qapplication.h:128
// QDesktopWidget * desktop()
extern "C"
void C_ZN12QApplication7desktopEv() {
  /*return*/ QApplication::desktop();
}
// static
// /usr/include/qt/QtWidgets/qapplication.h:130
// QWidget * activePopupWidget()
extern "C"
void C_ZN12QApplication17activePopupWidgetEv() {
  /*return*/ QApplication::activePopupWidget();
}
// static
// /usr/include/qt/QtWidgets/qapplication.h:131
// QWidget * activeModalWidget()
extern "C"
void C_ZN12QApplication17activeModalWidgetEv() {
  /*return*/ QApplication::activeModalWidget();
}
// static
// /usr/include/qt/QtWidgets/qapplication.h:132
// QWidget * focusWidget()
extern "C"
void C_ZN12QApplication11focusWidgetEv() {
  /*return*/ QApplication::focusWidget();
}
// static
// /usr/include/qt/QtWidgets/qapplication.h:134
// QWidget * activeWindow()
extern "C"
void C_ZN12QApplication12activeWindowEv() {
  /*return*/ QApplication::activeWindow();
}
// static
// /usr/include/qt/QtWidgets/qapplication.h:135
// void setActiveWindow(class QWidget *)
extern "C"
void C_ZN12QApplication15setActiveWindowEP7QWidget(QWidget * act) {
  QApplication::setActiveWindow(act);
}
// static
// /usr/include/qt/QtWidgets/qapplication.h:137
// QWidget * widgetAt(const class QPoint &)
extern "C"
void C_ZN12QApplication8widgetAtERK6QPoint(const QPoint & p) {
  /*return*/ QApplication::widgetAt(p);
}
// static inline
// /usr/include/qt/QtWidgets/qapplication.h:138
// QWidget * widgetAt(int, int)
extern "C"
void C_ZN12QApplication8widgetAtEii(int x, int y) {
  /*return*/ QApplication::widgetAt(x, y);
}
// static
// /usr/include/qt/QtWidgets/qapplication.h:139
// QWidget * topLevelAt(const class QPoint &)
extern "C"
void C_ZN12QApplication10topLevelAtERK6QPoint(const QPoint & p) {
  /*return*/ QApplication::topLevelAt(p);
}
// static inline
// /usr/include/qt/QtWidgets/qapplication.h:140
// QWidget * topLevelAt(int, int)
extern "C"
void C_ZN12QApplication10topLevelAtEii(int x, int y) {
  /*return*/ QApplication::topLevelAt(x, y);
}
// static
// /usr/include/qt/QtWidgets/qapplication.h:145
// void beep()
extern "C"
void C_ZN12QApplication4beepEv() {
  QApplication::beep();
}
// static
// /usr/include/qt/QtWidgets/qapplication.h:146
// void alert(class QWidget *, int)
extern "C"
void C_ZN12QApplication5alertEP7QWidgeti(QWidget * widget, int duration) {
  QApplication::alert(widget, duration);
}
// static
// /usr/include/qt/QtWidgets/qapplication.h:148
// void setCursorFlashTime(int)
extern "C"
void C_ZN12QApplication18setCursorFlashTimeEi(int arg0) {
  QApplication::setCursorFlashTime(arg0);
}
// static
// /usr/include/qt/QtWidgets/qapplication.h:149
// int cursorFlashTime()
extern "C"
void C_ZN12QApplication15cursorFlashTimeEv() {
  /*return*/ QApplication::cursorFlashTime();
}
// static
// /usr/include/qt/QtWidgets/qapplication.h:151
// void setDoubleClickInterval(int)
extern "C"
void C_ZN12QApplication22setDoubleClickIntervalEi(int arg0) {
  QApplication::setDoubleClickInterval(arg0);
}
// static
// /usr/include/qt/QtWidgets/qapplication.h:152
// int doubleClickInterval()
extern "C"
void C_ZN12QApplication19doubleClickIntervalEv() {
  /*return*/ QApplication::doubleClickInterval();
}
// static
// /usr/include/qt/QtWidgets/qapplication.h:154
// void setKeyboardInputInterval(int)
extern "C"
void C_ZN12QApplication24setKeyboardInputIntervalEi(int arg0) {
  QApplication::setKeyboardInputInterval(arg0);
}
// static
// /usr/include/qt/QtWidgets/qapplication.h:155
// int keyboardInputInterval()
extern "C"
void C_ZN12QApplication21keyboardInputIntervalEv() {
  /*return*/ QApplication::keyboardInputInterval();
}
// static
// /usr/include/qt/QtWidgets/qapplication.h:158
// void setWheelScrollLines(int)
extern "C"
void C_ZN12QApplication19setWheelScrollLinesEi(int arg0) {
  QApplication::setWheelScrollLines(arg0);
}
// static
// /usr/include/qt/QtWidgets/qapplication.h:159
// int wheelScrollLines()
extern "C"
void C_ZN12QApplication16wheelScrollLinesEv() {
  /*return*/ QApplication::wheelScrollLines();
}
// static
// /usr/include/qt/QtWidgets/qapplication.h:161
// void setGlobalStrut(const class QSize &)
extern "C"
void C_ZN12QApplication14setGlobalStrutERK5QSize(const QSize & arg0) {
  QApplication::setGlobalStrut(arg0);
}
// static
// /usr/include/qt/QtWidgets/qapplication.h:162
// QSize globalStrut()
extern "C"
void C_ZN12QApplication11globalStrutEv() {
  /*return*/ QApplication::globalStrut();
}
// static
// /usr/include/qt/QtWidgets/qapplication.h:164
// void setStartDragTime(int)
extern "C"
void C_ZN12QApplication16setStartDragTimeEi(int ms) {
  QApplication::setStartDragTime(ms);
}
// static
// /usr/include/qt/QtWidgets/qapplication.h:165
// int startDragTime()
extern "C"
void C_ZN12QApplication13startDragTimeEv() {
  /*return*/ QApplication::startDragTime();
}
// static
// /usr/include/qt/QtWidgets/qapplication.h:166
// void setStartDragDistance(int)
extern "C"
void C_ZN12QApplication20setStartDragDistanceEi(int l) {
  QApplication::setStartDragDistance(l);
}
// static
// /usr/include/qt/QtWidgets/qapplication.h:167
// int startDragDistance()
extern "C"
void C_ZN12QApplication17startDragDistanceEv() {
  /*return*/ QApplication::startDragDistance();
}
// static
// /usr/include/qt/QtWidgets/qapplication.h:169
// bool isEffectEnabled(Qt::UIEffect)
extern "C"
void C_ZN12QApplication15isEffectEnabledEN2Qt8UIEffectE(Qt::UIEffect arg0) {
  /*return*/ QApplication::isEffectEnabled(arg0);
}
// static
// /usr/include/qt/QtWidgets/qapplication.h:170
// void setEffectEnabled(Qt::UIEffect, _Bool)
extern "C"
void C_ZN12QApplication16setEffectEnabledEN2Qt8UIEffectEb(Qt::UIEffect arg0, bool enable) {
  QApplication::setEffectEnabled(arg0, enable);
}
// static
// /usr/include/qt/QtWidgets/qapplication.h:179
// int exec()
extern "C"
void C_ZN12QApplication4execEv() {
  /*return*/ QApplication::exec();
}
// virtual
// /usr/include/qt/QtWidgets/qapplication.h:180
// bool notify(class QObject *, class QEvent *)
extern "C"
void C_ZN12QApplication6notifyEP7QObjectP6QEvent(void *this_, QObject * arg0, QEvent * arg1) {
  /*return*/ ((QApplication*)this_)->notify(arg0, arg1);
}
// /usr/include/qt/QtWidgets/qapplication.h:190
// void focusChanged(class QWidget *, class QWidget *)
extern "C"
void C_ZN12QApplication12focusChangedEP7QWidgetS1_(void *this_, QWidget * old, QWidget * now) {
  ((QApplication*)this_)->focusChanged(old, now);
}
// /usr/include/qt/QtWidgets/qapplication.h:193
// QString styleSheet()
extern "C"
void C_ZNK12QApplication10styleSheetEv(void *this_) {
  /*return*/ ((QApplication*)this_)->styleSheet();
}
// /usr/include/qt/QtWidgets/qapplication.h:196
// void setStyleSheet(const class QString &)
extern "C"
void C_ZN12QApplication13setStyleSheetERK7QString(void *this_, const QString & sheet) {
  ((QApplication*)this_)->setStyleSheet(sheet);
}
// /usr/include/qt/QtWidgets/qapplication.h:202
// void setAutoSipEnabled(const _Bool)
extern "C"
void C_ZN12QApplication17setAutoSipEnabledEb(void *this_, const bool enabled) {
  ((QApplication*)this_)->setAutoSipEnabled(enabled);
}
// /usr/include/qt/QtWidgets/qapplication.h:203
// bool autoSipEnabled()
extern "C"
void C_ZNK12QApplication14autoSipEnabledEv(void *this_) {
  /*return*/ ((QApplication*)this_)->autoSipEnabled();
}
// static
// /usr/include/qt/QtWidgets/qapplication.h:204
// void closeAllWindows()
extern "C"
void C_ZN12QApplication15closeAllWindowsEv() {
  QApplication::closeAllWindows();
}
// static
// /usr/include/qt/QtWidgets/qapplication.h:205
// void aboutQt()
extern "C"
void C_ZN12QApplication7aboutQtEv() {
  QApplication::aboutQt();
}
//  main block end
