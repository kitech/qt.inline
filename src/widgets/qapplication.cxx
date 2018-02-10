//  header block begin
// /usr/include/qt/QtWidgets/qapplication.h
#include <qapplication.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QApplication is pure virtual: false
// QApplication has virtual projected: true
//  header block end

//  main block begin

class MyQApplication : public QApplication {
public:
  virtual ~MyQApplication() {}
// void QApplication(int &, char **, int)
MyQApplication(int & argc, char** argv, int arg2) : QApplication(argc, argv, arg2) {}
// bool event(class QEvent *)
  virtual bool event(QEvent * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"event", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QApplication::event(arg0);
  }
  }

};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:74
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK12QApplication10metaObjectEv(void *this_) {
  return (void*)((QApplication*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:94
// [-2] void QApplication(int &, char **, int)
extern "C"
void* C_ZN12QApplicationC2ERiPPci(int & argc, char** argv, int arg2) {
  auto _nilp = (MyQApplication*)(0);
  return  new MyQApplication(argc, argv, arg2);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:96
// [-2] void ~QApplication()
extern "C"
void C_ZN12QApplicationD2Ev(void *this_) {
  delete (QApplication*)(this_);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:98
// [8] QStyle * style()
extern "C"
void* C_ZN12QApplication5styleEv() {
  return (void*)QApplication::style();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:99
// [-2] void setStyle(class QStyle *)
extern "C"
void C_ZN12QApplication8setStyleEP6QStyle(QStyle * arg0) {
  QApplication::setStyle(arg0);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:100
// [8] QStyle * setStyle(const class QString &)
extern "C"
void* C_ZN12QApplication8setStyleERK7QString(QString* arg0) {
  return (void*)QApplication::setStyle(*arg0);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:103
// [4] int colorSpec()
extern "C"
int C_ZN12QApplication9colorSpecEv() {
  return (int)QApplication::colorSpec();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:104
// [-2] void setColorSpec(int)
extern "C"
void C_ZN12QApplication12setColorSpecEi(int arg0) {
  QApplication::setColorSpec(arg0);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:111
// [16] QPalette palette(const class QWidget *)
extern "C"
void* C_ZN12QApplication7paletteEPK7QWidget(const QWidget * arg0) {
  auto rv = QApplication::palette(arg0);
return new QPalette(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:112
// [16] QPalette palette(const char *)
extern "C"
void* C_ZN12QApplication7paletteEPKc(const char * className) {
  auto rv = QApplication::palette(className);
return new QPalette(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:113
// [-2] void setPalette(const class QPalette &, const char *)
extern "C"
void C_ZN12QApplication10setPaletteERK8QPalettePKc(QPalette* arg0, const char * className) {
  QApplication::setPalette(*arg0, className);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:114
// [16] QFont font()
extern "C"
void* C_ZN12QApplication4fontEv() {
  auto rv = QApplication::font();
return new QFont(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:115
// [16] QFont font(const class QWidget *)
extern "C"
void* C_ZN12QApplication4fontEPK7QWidget(const QWidget * arg0) {
  auto rv = QApplication::font(arg0);
return new QFont(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:116
// [16] QFont font(const char *)
extern "C"
void* C_ZN12QApplication4fontEPKc(const char * className) {
  auto rv = QApplication::font(className);
return new QFont(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:117
// [-2] void setFont(const class QFont &, const char *)
extern "C"
void C_ZN12QApplication7setFontERK5QFontPKc(QFont* arg0, const char * className) {
  QApplication::setFont(*arg0, className);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:118
// [8] QFontMetrics fontMetrics()
extern "C"
void* C_ZN12QApplication11fontMetricsEv() {
  auto rv = QApplication::fontMetrics();
return new QFontMetrics(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:121
// [-2] void setWindowIcon(const class QIcon &)
extern "C"
void C_ZN12QApplication13setWindowIconERK5QIcon(QIcon* icon) {
  QApplication::setWindowIcon(*icon);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:122
// [8] QIcon windowIcon()
extern "C"
void* C_ZN12QApplication10windowIconEv() {
  auto rv = QApplication::windowIcon();
return new QIcon(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:125
// [-2] QWidgetList allWidgets()
extern "C"
void C_ZN12QApplication10allWidgetsEv() {
  auto rv = QApplication::allWidgets();
/*return rv;*/
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:126
// [-2] QWidgetList topLevelWidgets()
extern "C"
void C_ZN12QApplication15topLevelWidgetsEv() {
  auto rv = QApplication::topLevelWidgets();
/*return rv;*/
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:128
// [8] QDesktopWidget * desktop()
extern "C"
void* C_ZN12QApplication7desktopEv() {
  return (void*)QApplication::desktop();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:130
// [8] QWidget * activePopupWidget()
extern "C"
void* C_ZN12QApplication17activePopupWidgetEv() {
  return (void*)QApplication::activePopupWidget();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:131
// [8] QWidget * activeModalWidget()
extern "C"
void* C_ZN12QApplication17activeModalWidgetEv() {
  return (void*)QApplication::activeModalWidget();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:132
// [8] QWidget * focusWidget()
extern "C"
void* C_ZN12QApplication11focusWidgetEv() {
  return (void*)QApplication::focusWidget();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:134
// [8] QWidget * activeWindow()
extern "C"
void* C_ZN12QApplication12activeWindowEv() {
  return (void*)QApplication::activeWindow();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:135
// [-2] void setActiveWindow(class QWidget *)
extern "C"
void C_ZN12QApplication15setActiveWindowEP7QWidget(QWidget * act) {
  QApplication::setActiveWindow(act);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:137
// [8] QWidget * widgetAt(const class QPoint &)
extern "C"
void* C_ZN12QApplication8widgetAtERK6QPoint(QPoint* p) {
  return (void*)QApplication::widgetAt(*p);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:138
// [8] QWidget * widgetAt(int, int)
extern "C"
void* C_ZN12QApplication8widgetAtEii(int x, int y) {
  return (void*)QApplication::widgetAt(x, y);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:139
// [8] QWidget * topLevelAt(const class QPoint &)
extern "C"
void* C_ZN12QApplication10topLevelAtERK6QPoint(QPoint* p) {
  return (void*)QApplication::topLevelAt(*p);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:140
// [8] QWidget * topLevelAt(int, int)
extern "C"
void* C_ZN12QApplication10topLevelAtEii(int x, int y) {
  return (void*)QApplication::topLevelAt(x, y);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:145
// [-2] void beep()
extern "C"
void C_ZN12QApplication4beepEv() {
  QApplication::beep();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:146
// [-2] void alert(class QWidget *, int)
extern "C"
void C_ZN12QApplication5alertEP7QWidgeti(QWidget * widget, int duration) {
  QApplication::alert(widget, duration);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:148
// [-2] void setCursorFlashTime(int)
extern "C"
void C_ZN12QApplication18setCursorFlashTimeEi(int arg0) {
  QApplication::setCursorFlashTime(arg0);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:149
// [4] int cursorFlashTime()
extern "C"
int C_ZN12QApplication15cursorFlashTimeEv() {
  return (int)QApplication::cursorFlashTime();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:151
// [-2] void setDoubleClickInterval(int)
extern "C"
void C_ZN12QApplication22setDoubleClickIntervalEi(int arg0) {
  QApplication::setDoubleClickInterval(arg0);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:152
// [4] int doubleClickInterval()
extern "C"
int C_ZN12QApplication19doubleClickIntervalEv() {
  return (int)QApplication::doubleClickInterval();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:154
// [-2] void setKeyboardInputInterval(int)
extern "C"
void C_ZN12QApplication24setKeyboardInputIntervalEi(int arg0) {
  QApplication::setKeyboardInputInterval(arg0);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:155
// [4] int keyboardInputInterval()
extern "C"
int C_ZN12QApplication21keyboardInputIntervalEv() {
  return (int)QApplication::keyboardInputInterval();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:158
// [-2] void setWheelScrollLines(int)
extern "C"
void C_ZN12QApplication19setWheelScrollLinesEi(int arg0) {
  QApplication::setWheelScrollLines(arg0);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:159
// [4] int wheelScrollLines()
extern "C"
int C_ZN12QApplication16wheelScrollLinesEv() {
  return (int)QApplication::wheelScrollLines();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:161
// [-2] void setGlobalStrut(const class QSize &)
extern "C"
void C_ZN12QApplication14setGlobalStrutERK5QSize(QSize* arg0) {
  QApplication::setGlobalStrut(*arg0);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:162
// [8] QSize globalStrut()
extern "C"
void* C_ZN12QApplication11globalStrutEv() {
  auto rv = QApplication::globalStrut();
return new QSize(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:164
// [-2] void setStartDragTime(int)
extern "C"
void C_ZN12QApplication16setStartDragTimeEi(int ms) {
  QApplication::setStartDragTime(ms);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:165
// [4] int startDragTime()
extern "C"
int C_ZN12QApplication13startDragTimeEv() {
  return (int)QApplication::startDragTime();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:166
// [-2] void setStartDragDistance(int)
extern "C"
void C_ZN12QApplication20setStartDragDistanceEi(int l) {
  QApplication::setStartDragDistance(l);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:167
// [4] int startDragDistance()
extern "C"
int C_ZN12QApplication17startDragDistanceEv() {
  return (int)QApplication::startDragDistance();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:169
// [1] bool isEffectEnabled(Qt::UIEffect)
extern "C"
bool C_ZN12QApplication15isEffectEnabledEN2Qt8UIEffectE(Qt::UIEffect arg0) {
  return (bool)QApplication::isEffectEnabled(arg0);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:170
// [-2] void setEffectEnabled(Qt::UIEffect, _Bool)
extern "C"
void C_ZN12QApplication16setEffectEnabledEN2Qt8UIEffectEb(Qt::UIEffect arg0, bool enable) {
  QApplication::setEffectEnabled(arg0, enable);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:179
// [4] int exec()
extern "C"
int C_ZN12QApplication4execEv() {
  return (int)QApplication::exec();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:180
// [1] bool notify(class QObject *, class QEvent *)
extern "C"
bool C_ZN12QApplication6notifyEP7QObjectP6QEvent(void *this_, QObject * arg0, QEvent * arg1) {
  return (bool)((QApplication*)this_)->notify(arg0, arg1);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:190
// [-2] void focusChanged(class QWidget *, class QWidget *)
extern "C"
void C_ZN12QApplication12focusChangedEP7QWidgetS1_(void *this_, QWidget * old, QWidget * now) {
  ((QApplication*)this_)->focusChanged(old, now);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:193
// [8] QString styleSheet()
extern "C"
void* C_ZNK12QApplication10styleSheetEv(void *this_) {
  auto rv = ((QApplication*)this_)->styleSheet();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:196
// [-2] void setStyleSheet(const class QString &)
extern "C"
void C_ZN12QApplication13setStyleSheetERK7QString(void *this_, QString* sheet) {
  ((QApplication*)this_)->setStyleSheet(*sheet);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:198
// [-2] void setAutoSipEnabled(const _Bool)
extern "C"
void C_ZN12QApplication17setAutoSipEnabledEb(void *this_, const bool enabled) {
  ((QApplication*)this_)->setAutoSipEnabled(enabled);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:199
// [1] bool autoSipEnabled()
extern "C"
bool C_ZNK12QApplication14autoSipEnabledEv(void *this_) {
  return (bool)((QApplication*)this_)->autoSipEnabled();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:200
// [-2] void closeAllWindows()
extern "C"
void C_ZN12QApplication15closeAllWindowsEv() {
  QApplication::closeAllWindows();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qapplication.h:201
// [-2] void aboutQt()
extern "C"
void C_ZN12QApplication7aboutQtEv() {
  QApplication::aboutQt();
}
//  main block end
