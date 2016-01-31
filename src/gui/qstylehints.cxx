// auto generated, do not modify.
// created: Sun Jan 31 12:42:06 2016
// src-file: /QtGui/qstylehints.h
// dst-file: /src/gui/qstylehints.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qstylehints.h>


#include <qnamespace.h>
#include <qchar.h>
#include <qglobal.h>
// <= header block end

// main block begin =>
void __keep_qstylehints_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QStyleHints_Class_Size()
{
  return sizeof(QStyleHints);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qstylehints.h', line 67, column 10>
//   // proto:  void QStyleHints::setMouseDoubleClickInterval(int mouseDoubleClickInterval);
// _ZN11QStyleHints27setMouseDoubleClickIntervalEi setMouseDoubleClickInterval(int)
extern "C"
void
C_ZN11QStyleHints27setMouseDoubleClickIntervalEi(void *qthis,
int arg1) {
  ((QStyleHints*)qthis)->setMouseDoubleClickInterval(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qstylehints.h', line 69, column 9>
//   // proto:  int QStyleHints::mousePressAndHoldInterval();
// _ZNK11QStyleHints25mousePressAndHoldIntervalEv mousePressAndHoldInterval()
extern "C"
int
C_ZNK11QStyleHints25mousePressAndHoldIntervalEv(void *qthis) {
  auto ret =
  ((QStyleHints*)qthis)->mousePressAndHoldInterval();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qstylehints.h', line 81, column 9>
//   // proto:  int QStyleHints::passwordMaskDelay();
// _ZNK11QStyleHints17passwordMaskDelayEv passwordMaskDelay()
extern "C"
int
C_ZNK11QStyleHints17passwordMaskDelayEv(void *qthis) {
  auto ret =
  ((QStyleHints*)qthis)->passwordMaskDelay();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qstylehints.h', line 47, column 5>
//   // proto:  const QMetaObject * QStyleHints::metaObject();
// _ZNK11QStyleHints10metaObjectEv metaObject()
extern "C"
void*
C_ZNK11QStyleHints10metaObjectEv(void *qthis) {
  auto ret =
  ((QStyleHints*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qstylehints.h', line 75, column 10>
//   // proto:  void QStyleHints::setKeyboardInputInterval(int keyboardInputInterval);
// _ZN11QStyleHints24setKeyboardInputIntervalEi setKeyboardInputInterval(int)
extern "C"
void
C_ZN11QStyleHints24setKeyboardInputIntervalEi(void *qthis,
int arg1) {
  ((QStyleHints*)qthis)->setKeyboardInputInterval(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qstylehints.h', line 93, column 10>
//   // proto:  void QStyleHints::startDragDistanceChanged(int startDragDistance);
// _ZN11QStyleHints24startDragDistanceChangedEi startDragDistanceChanged(int)
extern "C"
void
C_ZN11QStyleHints24startDragDistanceChangedEi(void *qthis,
int arg1) {
  ((QStyleHints*)qthis)->startDragDistanceChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qstylehints.h', line 80, column 10>
//   // proto:  bool QStyleHints::showIsFullScreen();
// _ZNK11QStyleHints16showIsFullScreenEv showIsFullScreen()
extern "C"
bool
C_ZNK11QStyleHints16showIsFullScreenEv(void *qthis) {
  auto ret =
  ((QStyleHints*)qthis)->showIsFullScreen();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qstylehints.h', line 84, column 10>
//   // proto:  bool QStyleHints::useRtlExtensions();
// _ZNK11QStyleHints16useRtlExtensionsEv useRtlExtensions()
extern "C"
bool
C_ZNK11QStyleHints16useRtlExtensionsEv(void *qthis) {
  auto ret =
  ((QStyleHints*)qthis)->useRtlExtensions();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qstylehints.h', line 92, column 10>
//   // proto:  void QStyleHints::mouseDoubleClickIntervalChanged(int mouseDoubleClickInterval);
// _ZN11QStyleHints31mouseDoubleClickIntervalChangedEi mouseDoubleClickIntervalChanged(int)
extern "C"
void
C_ZN11QStyleHints31mouseDoubleClickIntervalChangedEi(void *qthis,
int arg1) {
  ((QStyleHints*)qthis)->mouseDoubleClickIntervalChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qstylehints.h', line 70, column 10>
//   // proto:  void QStyleHints::setStartDragDistance(int startDragDistance);
// _ZN11QStyleHints20setStartDragDistanceEi setStartDragDistance(int)
extern "C"
void
C_ZN11QStyleHints20setStartDragDistanceEi(void *qthis,
int arg1) {
  ((QStyleHints*)qthis)->setStartDragDistance(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qstylehints.h', line 86, column 26>
//   // proto:  Qt::TabFocusBehavior QStyleHints::tabFocusBehavior();
// _ZNK11QStyleHints16tabFocusBehaviorEv tabFocusBehavior()
extern "C"
Qt::TabFocusBehavior
C_ZNK11QStyleHints16tabFocusBehaviorEv(void *qthis) {
  auto ret =
  ((QStyleHints*)qthis)->tabFocusBehavior();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qstylehints.h', line 85, column 10>
//   // proto:  bool QStyleHints::setFocusOnTouchRelease();
// _ZNK11QStyleHints22setFocusOnTouchReleaseEv setFocusOnTouchRelease()
extern "C"
bool
C_ZNK11QStyleHints22setFocusOnTouchReleaseEv(void *qthis) {
  auto ret =
  ((QStyleHints*)qthis)->setFocusOnTouchRelease();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qstylehints.h', line 74, column 9>
//   // proto:  int QStyleHints::startDragVelocity();
// _ZNK11QStyleHints17startDragVelocityEv startDragVelocity()
extern "C"
int
C_ZNK11QStyleHints17startDragVelocityEv(void *qthis) {
  auto ret =
  ((QStyleHints*)qthis)->startDragVelocity();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qstylehints.h', line 73, column 9>
//   // proto:  int QStyleHints::startDragTime();
// _ZNK11QStyleHints13startDragTimeEv startDragTime()
extern "C"
int
C_ZNK11QStyleHints13startDragTimeEv(void *qthis) {
  auto ret =
  ((QStyleHints*)qthis)->startDragTime();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qstylehints.h', line 76, column 9>
//   // proto:  int QStyleHints::keyboardInputInterval();
// _ZNK11QStyleHints21keyboardInputIntervalEv keyboardInputInterval()
extern "C"
int
C_ZNK11QStyleHints21keyboardInputIntervalEv(void *qthis) {
  auto ret =
  ((QStyleHints*)qthis)->keyboardInputInterval();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qstylehints.h', line 91, column 10>
//   // proto:  void QStyleHints::keyboardInputIntervalChanged(int keyboardInputInterval);
// _ZN11QStyleHints28keyboardInputIntervalChangedEi keyboardInputIntervalChanged(int)
extern "C"
void
C_ZN11QStyleHints28keyboardInputIntervalChangedEi(void *qthis,
int arg1) {
  ((QStyleHints*)qthis)->keyboardInputIntervalChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qstylehints.h', line 72, column 10>
//   // proto:  void QStyleHints::setStartDragTime(int startDragTime);
// _ZN11QStyleHints16setStartDragTimeEi setStartDragTime(int)
extern "C"
void
C_ZN11QStyleHints16setStartDragTimeEi(void *qthis,
int arg1) {
  ((QStyleHints*)qthis)->setStartDragTime(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qstylehints.h', line 78, column 10>
//   // proto:  void QStyleHints::setCursorFlashTime(int cursorFlashTime);
// _ZN11QStyleHints18setCursorFlashTimeEi setCursorFlashTime(int)
extern "C"
void
C_ZN11QStyleHints18setCursorFlashTimeEi(void *qthis,
int arg1) {
  ((QStyleHints*)qthis)->setCursorFlashTime(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qstylehints.h', line 79, column 9>
//   // proto:  int QStyleHints::cursorFlashTime();
// _ZNK11QStyleHints15cursorFlashTimeEv cursorFlashTime()
extern "C"
int
C_ZNK11QStyleHints15cursorFlashTimeEv(void *qthis) {
  auto ret =
  ((QStyleHints*)qthis)->cursorFlashTime();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qstylehints.h', line 90, column 10>
//   // proto:  void QStyleHints::cursorFlashTimeChanged(int cursorFlashTime);
// _ZN11QStyleHints22cursorFlashTimeChangedEi cursorFlashTimeChanged(int)
extern "C"
void
C_ZN11QStyleHints22cursorFlashTimeChangedEi(void *qthis,
int arg1) {
  ((QStyleHints*)qthis)->cursorFlashTimeChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qstylehints.h', line 82, column 11>
//   // proto:  QChar QStyleHints::passwordMaskCharacter();
// _ZNK11QStyleHints21passwordMaskCharacterEv passwordMaskCharacter()
extern "C"
QChar*
C_ZNK11QStyleHints21passwordMaskCharacterEv(void *qthis) {
  auto ret =
  ((QStyleHints*)qthis)->passwordMaskCharacter();
  return new QChar(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qstylehints.h', line 77, column 9>
//   // proto:  int QStyleHints::keyboardAutoRepeatRate();
// _ZNK11QStyleHints22keyboardAutoRepeatRateEv keyboardAutoRepeatRate()
extern "C"
int
C_ZNK11QStyleHints22keyboardAutoRepeatRateEv(void *qthis) {
  auto ret =
  ((QStyleHints*)qthis)->keyboardAutoRepeatRate();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qstylehints.h', line 71, column 9>
//   // proto:  int QStyleHints::startDragDistance();
// _ZNK11QStyleHints17startDragDistanceEv startDragDistance()
extern "C"
int
C_ZNK11QStyleHints17startDragDistanceEv(void *qthis) {
  auto ret =
  ((QStyleHints*)qthis)->startDragDistance();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qstylehints.h', line 83, column 11>
//   // proto:  qreal QStyleHints::fontSmoothingGamma();
// _ZNK11QStyleHints18fontSmoothingGammaEv fontSmoothingGamma()
extern "C"
double
C_ZNK11QStyleHints18fontSmoothingGammaEv(void *qthis) {
  auto ret =
  ((QStyleHints*)qthis)->fontSmoothingGamma();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtGui/qstylehints.h', line 87, column 10>
//   // proto:  bool QStyleHints::singleClickActivation();
// _ZNK11QStyleHints21singleClickActivationEv singleClickActivation()
extern "C"
bool
C_ZNK11QStyleHints21singleClickActivationEv(void *qthis) {
  auto ret =
  ((QStyleHints*)qthis)->singleClickActivation();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qstylehints.h', line 68, column 9>
//   // proto:  int QStyleHints::mouseDoubleClickInterval();
// _ZNK11QStyleHints24mouseDoubleClickIntervalEv mouseDoubleClickInterval()
extern "C"
int
C_ZNK11QStyleHints24mouseDoubleClickIntervalEv(void *qthis) {
  auto ret =
  ((QStyleHints*)qthis)->mouseDoubleClickInterval();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qstylehints.h', line 94, column 10>
//   // proto:  void QStyleHints::startDragTimeChanged(int startDragTime);
// _ZN11QStyleHints20startDragTimeChangedEi startDragTimeChanged(int)
extern "C"
void
C_ZN11QStyleHints20startDragTimeChangedEi(void *qthis,
int arg1) {
  ((QStyleHints*)qthis)->startDragTimeChanged(arg1);
}
// <= ext block end

// body block begin =>
// QStyleHints_SlotProxy here
class QStyleHints_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QStyleHints_SlotProxy():QObject(){}

public slots:
  // mouseDoubleClickIntervalChanged(int)
  void slot_proxy_func__ZN11QStyleHints31mouseDoubleClickIntervalChangedEi(int arg0);
public:
  void (*slot_func__ZN11QStyleHints31mouseDoubleClickIntervalChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // startDragTimeChanged(int)
  void slot_proxy_func__ZN11QStyleHints20startDragTimeChangedEi(int arg0);
public:
  void (*slot_func__ZN11QStyleHints20startDragTimeChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // keyboardInputIntervalChanged(int)
  void slot_proxy_func__ZN11QStyleHints28keyboardInputIntervalChangedEi(int arg0);
public:
  void (*slot_func__ZN11QStyleHints28keyboardInputIntervalChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // cursorFlashTimeChanged(int)
  void slot_proxy_func__ZN11QStyleHints22cursorFlashTimeChangedEi(int arg0);
public:
  void (*slot_func__ZN11QStyleHints22cursorFlashTimeChangedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // startDragDistanceChanged(int)
  void slot_proxy_func__ZN11QStyleHints24startDragDistanceChangedEi(int arg0);
public:
  void (*slot_func__ZN11QStyleHints24startDragDistanceChangedEi)(void* rsfptr, int arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/gui/qstylehints.moc"

extern "C" {
  QStyleHints_SlotProxy* QStyleHints_SlotProxy_new()
  {
    return new QStyleHints_SlotProxy();
  }
};

void QStyleHints_SlotProxy::slot_proxy_func__ZN11QStyleHints31mouseDoubleClickIntervalChangedEi(int arg0) {
  if (this->slot_func__ZN11QStyleHints31mouseDoubleClickIntervalChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN11QStyleHints31mouseDoubleClickIntervalChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QStyleHints_SlotProxy_connect__ZN11QStyleHints31mouseDoubleClickIntervalChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QStyleHints_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QStyleHints31mouseDoubleClickIntervalChangedEi = (decltype(that->slot_func__ZN11QStyleHints31mouseDoubleClickIntervalChangedEi))ffifptr;
  QObject::connect((QStyleHints*)sender, SIGNAL(mouseDoubleClickIntervalChanged(int)), that, SLOT(slot_proxy_func__ZN11QStyleHints31mouseDoubleClickIntervalChangedEi(int arg0)));
  return that;
}
extern "C"
void QStyleHints_SlotProxy_disconnect__ZN11QStyleHints31mouseDoubleClickIntervalChangedEi(QStyleHints_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QStyleHints_SlotProxy::slot_proxy_func__ZN11QStyleHints20startDragTimeChangedEi(int arg0) {
  if (this->slot_func__ZN11QStyleHints20startDragTimeChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN11QStyleHints20startDragTimeChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QStyleHints_SlotProxy_connect__ZN11QStyleHints20startDragTimeChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QStyleHints_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QStyleHints20startDragTimeChangedEi = (decltype(that->slot_func__ZN11QStyleHints20startDragTimeChangedEi))ffifptr;
  QObject::connect((QStyleHints*)sender, SIGNAL(startDragTimeChanged(int)), that, SLOT(slot_proxy_func__ZN11QStyleHints20startDragTimeChangedEi(int arg0)));
  return that;
}
extern "C"
void QStyleHints_SlotProxy_disconnect__ZN11QStyleHints20startDragTimeChangedEi(QStyleHints_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QStyleHints_SlotProxy::slot_proxy_func__ZN11QStyleHints28keyboardInputIntervalChangedEi(int arg0) {
  if (this->slot_func__ZN11QStyleHints28keyboardInputIntervalChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN11QStyleHints28keyboardInputIntervalChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QStyleHints_SlotProxy_connect__ZN11QStyleHints28keyboardInputIntervalChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QStyleHints_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QStyleHints28keyboardInputIntervalChangedEi = (decltype(that->slot_func__ZN11QStyleHints28keyboardInputIntervalChangedEi))ffifptr;
  QObject::connect((QStyleHints*)sender, SIGNAL(keyboardInputIntervalChanged(int)), that, SLOT(slot_proxy_func__ZN11QStyleHints28keyboardInputIntervalChangedEi(int arg0)));
  return that;
}
extern "C"
void QStyleHints_SlotProxy_disconnect__ZN11QStyleHints28keyboardInputIntervalChangedEi(QStyleHints_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QStyleHints_SlotProxy::slot_proxy_func__ZN11QStyleHints22cursorFlashTimeChangedEi(int arg0) {
  if (this->slot_func__ZN11QStyleHints22cursorFlashTimeChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN11QStyleHints22cursorFlashTimeChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QStyleHints_SlotProxy_connect__ZN11QStyleHints22cursorFlashTimeChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QStyleHints_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QStyleHints22cursorFlashTimeChangedEi = (decltype(that->slot_func__ZN11QStyleHints22cursorFlashTimeChangedEi))ffifptr;
  QObject::connect((QStyleHints*)sender, SIGNAL(cursorFlashTimeChanged(int)), that, SLOT(slot_proxy_func__ZN11QStyleHints22cursorFlashTimeChangedEi(int arg0)));
  return that;
}
extern "C"
void QStyleHints_SlotProxy_disconnect__ZN11QStyleHints22cursorFlashTimeChangedEi(QStyleHints_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QStyleHints_SlotProxy::slot_proxy_func__ZN11QStyleHints24startDragDistanceChangedEi(int arg0) {
  if (this->slot_func__ZN11QStyleHints24startDragDistanceChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN11QStyleHints24startDragDistanceChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QStyleHints_SlotProxy_connect__ZN11QStyleHints24startDragDistanceChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QStyleHints_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QStyleHints24startDragDistanceChangedEi = (decltype(that->slot_func__ZN11QStyleHints24startDragDistanceChangedEi))ffifptr;
  QObject::connect((QStyleHints*)sender, SIGNAL(startDragDistanceChanged(int)), that, SLOT(slot_proxy_func__ZN11QStyleHints24startDragDistanceChangedEi(int arg0)));
  return that;
}
extern "C"
void QStyleHints_SlotProxy_disconnect__ZN11QStyleHints24startDragDistanceChangedEi(QStyleHints_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

