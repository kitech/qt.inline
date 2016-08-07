// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtWidgets/qapplication.h
// dst-file: /src/widgets/qapplication.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qapplication.h>


#include <qstring.h>
#include <qpalette.h>
#include <qfontmetrics.h>
#include <qfont.h>
#include <qwindowdefs.h>
#include <qsize.h>
#include <qicon.h>
// <= header block end

// main block begin =>
void __keep_qapplication_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 138, column 28>
//   // proto: static QWidget * QApplication::widgetAt(int x, int y);
if (true) {
  auto f = [](QApplication flythis, int arg1, int arg2) {
    ((QApplication*)0)->widgetAt(arg1, arg2);
    flythis.widgetAt(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN12QApplication8widgetAtEii widgetAt(int, int)
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 140, column 28>
//   // proto: static QWidget * QApplication::topLevelAt(int x, int y);
if (true) {
  auto f = [](QApplication flythis, int arg1, int arg2) {
    ((QApplication*)0)->topLevelAt(arg1, arg2);
    flythis.topLevelAt(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN12QApplication10topLevelAtEii topLevelAt(int, int)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QApplication_Class_Size()
{
  return sizeof(QApplication);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 193, column 13>
//   // proto:  QString QApplication::styleSheet();
// _ZNK12QApplication10styleSheetEv styleSheet()
extern "C"
QString*
C_ZNK12QApplication10styleSheetEv(void *qthis) {
  auto ret =
  ((QApplication*)qthis)->styleSheet();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 112, column 21>
//   // proto: static QPalette QApplication::palette(const char * className);
// _ZN12QApplication7paletteEPKc palette(const char *)
extern "C"
QPalette*
C_ZN12QApplication7paletteEPKc(const char * arg1) {
  auto ret =
  QApplication::palette(arg1);
  return new QPalette(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 169, column 17>
//   // proto: static bool QApplication::isEffectEnabled(Qt::UIEffect );
// _ZN12QApplication15isEffectEnabledEN2Qt8UIEffectE isEffectEnabled(Qt::UIEffect)
extern "C"
bool
C_ZN12QApplication15isEffectEnabledEN2Qt8UIEffectE(Qt::UIEffect* arg1) {
  auto ret =
  QApplication::isEffectEnabled(*((Qt::UIEffect*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 134, column 21>
//   // proto: static QWidget * QApplication::activeWindow();
// _ZN12QApplication12activeWindowEv activeWindow()
extern "C"
void*
C_ZN12QApplication12activeWindowEv() {
  auto ret =
  QApplication::activeWindow();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 154, column 17>
//   // proto: static void QApplication::setKeyboardInputInterval(int );
// _ZN12QApplication24setKeyboardInputIntervalEi setKeyboardInputInterval(int)
extern "C"
void
C_ZN12QApplication24setKeyboardInputIntervalEi(int arg1) {
  QApplication::setKeyboardInputInterval(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 132, column 21>
//   // proto: static QWidget * QApplication::focusWidget();
// _ZN12QApplication11focusWidgetEv focusWidget()
extern "C"
void*
C_ZN12QApplication11focusWidgetEv() {
  auto ret =
  QApplication::focusWidget();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 118, column 25>
//   // proto: static QFontMetrics QApplication::fontMetrics();
// _ZN12QApplication11fontMetricsEv fontMetrics()
extern "C"
QFontMetrics*
C_ZN12QApplication11fontMetricsEv() {
  auto ret =
  QApplication::fontMetrics();
  return new QFontMetrics(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 116, column 18>
//   // proto: static QFont QApplication::font(const char * className);
// _ZN12QApplication4fontEPKc font(const char *)
extern "C"
QFont*
C_ZN12QApplication4fontEPKc(const char * arg1) {
  auto ret =
  QApplication::font(arg1);
  return new QFont(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 100, column 20>
//   // proto: static QStyle * QApplication::style();
// _ZN12QApplication5styleEv style()
extern "C"
void*
C_ZN12QApplication5styleEv() {
  auto ret =
  QApplication::style();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 137, column 21>
//   // proto: static QWidget * QApplication::widgetAt(const QPoint & p);
// _ZN12QApplication8widgetAtERK6QPoint widgetAt(const class QPoint &)
extern "C"
void*
C_ZN12QApplication8widgetAtERK6QPoint(const QPoint* arg1) {
  auto ret =
  QApplication::widgetAt(*((const QPoint*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 135, column 17>
//   // proto: static void QApplication::setActiveWindow(QWidget * act);
// _ZN12QApplication15setActiveWindowEP7QWidget setActiveWindow(class QWidget *)
extern "C"
void
C_ZN12QApplication15setActiveWindowEP7QWidget(QWidget * arg1) {
  QApplication::setActiveWindow(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 114, column 18>
//   // proto: static QFont QApplication::font();
// _ZN12QApplication4fontEv font()
extern "C"
QFont*
C_ZN12QApplication4fontEv() {
  auto ret =
  QApplication::font();
  return new QFont(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 158, column 17>
//   // proto: static void QApplication::setWheelScrollLines(int );
// _ZN12QApplication19setWheelScrollLinesEi setWheelScrollLines(int)
extern "C"
void
C_ZN12QApplication19setWheelScrollLinesEi(int arg1) {
  QApplication::setWheelScrollLines(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 196, column 10>
//   // proto:  void QApplication::setStyleSheet(const QString & sheet);
// _ZN12QApplication13setStyleSheetERK7QString setStyleSheet(const class QString &)
extern "C"
void
C_ZN12QApplication13setStyleSheetERK7QString(void *qthis,
const QString* arg1) {
  ((QApplication*)qthis)->setStyleSheet(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 202, column 10>
//   // proto:  void QApplication::setAutoSipEnabled(const bool enabled);
// _ZN12QApplication17setAutoSipEnabledEb setAutoSipEnabled(const _Bool)
extern "C"
void
C_ZN12QApplication17setAutoSipEnabledEb(void *qthis,
const bool arg1) {
  ((QApplication*)qthis)->setAutoSipEnabled(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 73, column 5>
//   // proto:  const QMetaObject * QApplication::metaObject();
// _ZNK12QApplication10metaObjectEv metaObject()
extern "C"
void*
C_ZNK12QApplication10metaObjectEv(void *qthis) {
  auto ret =
  ((QApplication*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 155, column 16>
//   // proto: static int QApplication::keyboardInputInterval();
// _ZN12QApplication21keyboardInputIntervalEv keyboardInputInterval()
extern "C"
int
C_ZN12QApplication21keyboardInputIntervalEv() {
  auto ret =
  QApplication::keyboardInputInterval();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 170, column 17>
//   // proto: static void QApplication::setEffectEnabled(Qt::UIEffect , bool enable);
// _ZN12QApplication16setEffectEnabledEN2Qt8UIEffectEb setEffectEnabled(Qt::UIEffect, _Bool)
extern "C"
void
C_ZN12QApplication16setEffectEnabledEN2Qt8UIEffectEb(Qt::UIEffect* arg1,
bool arg2) {
  QApplication::setEffectEnabled(*((Qt::UIEffect*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 149, column 16>
//   // proto: static int QApplication::cursorFlashTime();
// _ZN12QApplication15cursorFlashTimeEv cursorFlashTime()
extern "C"
int
C_ZN12QApplication15cursorFlashTimeEv() {
  auto ret =
  QApplication::cursorFlashTime();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 167, column 16>
//   // proto: static int QApplication::startDragDistance();
// _ZN12QApplication17startDragDistanceEv startDragDistance()
extern "C"
int
C_ZN12QApplication17startDragDistanceEv() {
  auto ret =
  QApplication::startDragDistance();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 128, column 28>
//   // proto: static QDesktopWidget * QApplication::desktop();
// _ZN12QApplication7desktopEv desktop()
extern "C"
void*
C_ZN12QApplication7desktopEv() {
  auto ret =
  QApplication::desktop();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 166, column 17>
//   // proto: static void QApplication::setStartDragDistance(int l);
// _ZN12QApplication20setStartDragDistanceEi setStartDragDistance(int)
extern "C"
void
C_ZN12QApplication20setStartDragDistanceEi(int arg1) {
  QApplication::setStartDragDistance(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 115, column 18>
//   // proto: static QFont QApplication::font(const QWidget * );
// _ZN12QApplication4fontEPK7QWidget font(const class QWidget *)
extern "C"
QFont*
C_ZN12QApplication4fontEPK7QWidget(const QWidget * arg1) {
  auto ret =
  QApplication::font(arg1);
  return new QFont(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 104, column 16>
//   // proto: static int QApplication::colorSpec();
// _ZN12QApplication9colorSpecEv colorSpec()
extern "C"
int
C_ZN12QApplication9colorSpecEv() {
  auto ret =
  QApplication::colorSpec();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 117, column 17>
//   // proto: static void QApplication::setFont(const QFont & , const char * className);
// _ZN12QApplication7setFontERK5QFontPKc setFont(const class QFont &, const char *)
extern "C"
void
C_ZN12QApplication7setFontERK5QFontPKc(const QFont* arg1,
const char * arg2) {
  QApplication::setFont(*((const QFont*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 204, column 17>
//   // proto: static void QApplication::closeAllWindows();
// _ZN12QApplication15closeAllWindowsEv closeAllWindows()
extern "C"
void
C_ZN12QApplication15closeAllWindowsEv() {
  QApplication::closeAllWindows();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 148, column 17>
//   // proto: static void QApplication::setCursorFlashTime(int );
// _ZN12QApplication18setCursorFlashTimeEi setCursorFlashTime(int)
extern "C"
void
C_ZN12QApplication18setCursorFlashTimeEi(int arg1) {
  QApplication::setCursorFlashTime(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 138, column 28>
//   // proto: static QWidget * QApplication::widgetAt(int x, int y);
// _ZN12QApplication8widgetAtEii widgetAt(int, int)
extern "C"
void*
C_ZN12QApplication8widgetAtEii(int arg1,
int arg2) {
  auto ret =
  QApplication::widgetAt(arg1,
arg2);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 146, column 17>
//   // proto: static void QApplication::alert(QWidget * widget, int duration);
// _ZN12QApplication5alertEP7QWidgeti alert(class QWidget *, int)
extern "C"
void
C_ZN12QApplication5alertEP7QWidgeti(QWidget * arg1,
int arg2) {
  QApplication::alert(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 111, column 21>
//   // proto: static QPalette QApplication::palette(const QWidget * );
// _ZN12QApplication7paletteEPK7QWidget palette(const class QWidget *)
extern "C"
QPalette*
C_ZN12QApplication7paletteEPK7QWidget(const QWidget * arg1) {
  auto ret =
  QApplication::palette(arg1);
  return new QPalette(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 159, column 16>
//   // proto: static int QApplication::wheelScrollLines();
// _ZN12QApplication16wheelScrollLinesEv wheelScrollLines()
extern "C"
int
C_ZN12QApplication16wheelScrollLinesEv() {
  auto ret =
  QApplication::wheelScrollLines();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 205, column 17>
//   // proto: static void QApplication::aboutQt();
// _ZN12QApplication7aboutQtEv aboutQt()
extern "C"
void
C_ZN12QApplication7aboutQtEv() {
  QApplication::aboutQt();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 131, column 21>
//   // proto: static QWidget * QApplication::activeModalWidget();
// _ZN12QApplication17activeModalWidgetEv activeModalWidget()
extern "C"
void*
C_ZN12QApplication17activeModalWidgetEv() {
  auto ret =
  QApplication::activeModalWidget();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 130, column 21>
//   // proto: static QWidget * QApplication::activePopupWidget();
// _ZN12QApplication17activePopupWidgetEv activePopupWidget()
extern "C"
void*
C_ZN12QApplication17activePopupWidgetEv() {
  auto ret =
  QApplication::activePopupWidget();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 96, column 5>
//   // proto:  void QApplication::QApplication(int & argc, char ** argv, int );
extern "C"
QApplication*
C_ZN12QApplicationC2ERiPPci(int* arg1,
char ** arg2,
int arg3) {
  auto ret = new QApplication(*((int*)arg1),
arg2,
arg3);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 190, column 10>
//   // proto:  void QApplication::focusChanged(QWidget * old, QWidget * now);
// _ZN12QApplication12focusChangedEP7QWidgetS1_ focusChanged(class QWidget *, class QWidget *)
extern "C"
void
C_ZN12QApplication12focusChangedEP7QWidgetS1_(void *qthis,
QWidget * arg1,
QWidget * arg2) {
  ((QApplication*)qthis)->focusChanged(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 164, column 17>
//   // proto: static void QApplication::setStartDragTime(int ms);
// _ZN12QApplication16setStartDragTimeEi setStartDragTime(int)
extern "C"
void
C_ZN12QApplication16setStartDragTimeEi(int arg1) {
  QApplication::setStartDragTime(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 140, column 28>
//   // proto: static QWidget * QApplication::topLevelAt(int x, int y);
// _ZN12QApplication10topLevelAtEii topLevelAt(int, int)
extern "C"
void*
C_ZN12QApplication10topLevelAtEii(int arg1,
int arg2) {
  auto ret =
  QApplication::topLevelAt(arg1,
arg2);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 101, column 17>
//   // proto: static void QApplication::setStyle(QStyle * );
// _ZN12QApplication8setStyleEP6QStyle setStyle(class QStyle *)
extern "C"
void
C_ZN12QApplication8setStyleEP6QStyle(QStyle * arg1) {
  QApplication::setStyle(arg1);
}
//   // proto:  void QApplication::~QApplication();
extern "C"
void C_ZN12QApplicationD2Ev(void *qthis) {
  delete (QApplication*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 151, column 17>
//   // proto: static void QApplication::setDoubleClickInterval(int );
// _ZN12QApplication22setDoubleClickIntervalEi setDoubleClickInterval(int)
extern "C"
void
C_ZN12QApplication22setDoubleClickIntervalEi(int arg1) {
  QApplication::setDoubleClickInterval(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 161, column 17>
//   // proto: static void QApplication::setGlobalStrut(const QSize & );
// _ZN12QApplication14setGlobalStrutERK5QSize setGlobalStrut(const class QSize &)
extern "C"
void
C_ZN12QApplication14setGlobalStrutERK5QSize(const QSize* arg1) {
  QApplication::setGlobalStrut(*((const QSize*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 105, column 17>
//   // proto: static void QApplication::setColorSpec(int );
// _ZN12QApplication12setColorSpecEi setColorSpec(int)
extern "C"
void
C_ZN12QApplication12setColorSpecEi(int arg1) {
  QApplication::setColorSpec(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 125, column 24>
//   // proto: static QWidgetList QApplication::allWidgets();
// _ZN12QApplication10allWidgetsEv allWidgets()
extern "C"
QList<QWidget *>*
C_ZN12QApplication10allWidgetsEv() {
  auto ret =
  QApplication::allWidgets();
  return new QList<QWidget *>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 162, column 18>
//   // proto: static QSize QApplication::globalStrut();
// _ZN12QApplication11globalStrutEv globalStrut()
extern "C"
QSize*
C_ZN12QApplication11globalStrutEv() {
  auto ret =
  QApplication::globalStrut();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 113, column 17>
//   // proto: static void QApplication::setPalette(const QPalette & , const char * className);
// _ZN12QApplication10setPaletteERK8QPalettePKc setPalette(const class QPalette &, const char *)
extern "C"
void
C_ZN12QApplication10setPaletteERK8QPalettePKc(const QPalette* arg1,
const char * arg2) {
  QApplication::setPalette(*((const QPalette*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 102, column 20>
//   // proto: static QStyle * QApplication::setStyle(const QString & );
// _ZN12QApplication8setStyleERK7QString setStyle(const class QString &)
extern "C"
void*
C_ZN12QApplication8setStyleERK7QString(const QString* arg1) {
  auto ret =
  QApplication::setStyle(*((const QString*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 126, column 24>
//   // proto: static QWidgetList QApplication::topLevelWidgets();
// _ZN12QApplication15topLevelWidgetsEv topLevelWidgets()
extern "C"
QList<QWidget *>*
C_ZN12QApplication15topLevelWidgetsEv() {
  auto ret =
  QApplication::topLevelWidgets();
  return new QList<QWidget *>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 179, column 16>
//   // proto: static int QApplication::exec();
// _ZN12QApplication4execEv exec()
extern "C"
int
C_ZN12QApplication4execEv() {
  auto ret =
  QApplication::exec();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 121, column 17>
//   // proto: static void QApplication::setWindowIcon(const QIcon & icon);
// _ZN12QApplication13setWindowIconERK5QIcon setWindowIcon(const class QIcon &)
extern "C"
void
C_ZN12QApplication13setWindowIconERK5QIcon(const QIcon* arg1) {
  QApplication::setWindowIcon(*((const QIcon*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 145, column 17>
//   // proto: static void QApplication::beep();
// _ZN12QApplication4beepEv beep()
extern "C"
void
C_ZN12QApplication4beepEv() {
  QApplication::beep();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 180, column 10>
//   // proto:  bool QApplication::notify(QObject * , QEvent * );
// _ZN12QApplication6notifyEP7QObjectP6QEvent notify(class QObject *, class QEvent *)
extern "C"
bool
C_ZN12QApplication6notifyEP7QObjectP6QEvent(void *qthis,
QObject * arg1,
QEvent * arg2) {
  auto ret =
  ((QApplication*)qthis)->notify(arg1,
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 203, column 10>
//   // proto:  bool QApplication::autoSipEnabled();
// _ZNK12QApplication14autoSipEnabledEv autoSipEnabled()
extern "C"
bool
C_ZNK12QApplication14autoSipEnabledEv(void *qthis) {
  auto ret =
  ((QApplication*)qthis)->autoSipEnabled();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 139, column 21>
//   // proto: static QWidget * QApplication::topLevelAt(const QPoint & p);
// _ZN12QApplication10topLevelAtERK6QPoint topLevelAt(const class QPoint &)
extern "C"
void*
C_ZN12QApplication10topLevelAtERK6QPoint(const QPoint* arg1) {
  auto ret =
  QApplication::topLevelAt(*((const QPoint*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 165, column 16>
//   // proto: static int QApplication::startDragTime();
// _ZN12QApplication13startDragTimeEv startDragTime()
extern "C"
int
C_ZN12QApplication13startDragTimeEv() {
  auto ret =
  QApplication::startDragTime();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 152, column 16>
//   // proto: static int QApplication::doubleClickInterval();
// _ZN12QApplication19doubleClickIntervalEv doubleClickInterval()
extern "C"
int
C_ZN12QApplication19doubleClickIntervalEv() {
  auto ret =
  QApplication::doubleClickInterval();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qapplication.h', line 122, column 18>
//   // proto: static QIcon QApplication::windowIcon();
// _ZN12QApplication10windowIconEv windowIcon()
extern "C"
QIcon*
C_ZN12QApplication10windowIconEv() {
  auto ret =
  QApplication::windowIcon();
  return new QIcon(ret); // 5
}
// <= ext block end

// body block begin =>
// QApplication_SlotProxy here
class QApplication_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QApplication_SlotProxy():QObject(){}

public slots:
  // focusChanged(class QWidget *, class QWidget *)
  void slot_proxy_func__ZN12QApplication12focusChangedEP7QWidgetS1_(QWidget * arg0, QWidget * arg1);
public:
  void (*slot_func__ZN12QApplication12focusChangedEP7QWidgetS1_)(void* rsfptr, QWidget * arg0, QWidget * arg1) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qapplication.moc"

extern "C" {
  QApplication_SlotProxy* QApplication_SlotProxy_new()
  {
    return new QApplication_SlotProxy();
  }
};

void QApplication_SlotProxy::slot_proxy_func__ZN12QApplication12focusChangedEP7QWidgetS1_(QWidget * arg0, QWidget * arg1) {
  if (this->slot_func__ZN12QApplication12focusChangedEP7QWidgetS1_ != NULL) {
    // do smth...
    this->slot_func__ZN12QApplication12focusChangedEP7QWidgetS1_(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QApplication_SlotProxy_connect__ZN12QApplication12focusChangedEP7QWidgetS1_(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QApplication_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN12QApplication12focusChangedEP7QWidgetS1_ = (decltype(that->slot_func__ZN12QApplication12focusChangedEP7QWidgetS1_))ffifptr;
  QObject::connect((QApplication*)sender, SIGNAL(focusChanged(class QWidget *, class QWidget *)), that, SLOT(slot_proxy_func__ZN12QApplication12focusChangedEP7QWidgetS1_(QWidget * arg0, QWidget * arg1)));
  return that;
}
extern "C"
void QApplication_SlotProxy_disconnect__ZN12QApplication12focusChangedEP7QWidgetS1_(QApplication_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

