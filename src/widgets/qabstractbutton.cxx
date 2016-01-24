// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtWidgets/qabstractbutton.h
// dst-file: /src/widgets/qabstractbutton.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qabstractbutton.h>


#include <qsize.h>
#include <qkeysequence.h>
#include <qstring.h>
#include <qicon.h>
// <= header block end

// main block begin =>
void __keep_qabstractbutton_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QAbstractButton_Class_Size()
{
  return sizeof(QAbstractButton);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractbutton.h', line 75, column 11>
//   // proto:  QSize QAbstractButton::iconSize();
// _ZNK15QAbstractButton8iconSizeEv iconSize()
extern "C"
QSize*
C_ZNK15QAbstractButton8iconSizeEv(void *qthis) {
  auto ret =
  ((QAbstractButton*)qthis)->iconSize();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractbutton.h', line 109, column 10>
//   // proto:  void QAbstractButton::click();
// _ZN15QAbstractButton5clickEv click()
extern "C"
void
C_ZN15QAbstractButton5clickEv(void *qthis) {
  ((QAbstractButton*)qthis)->click();
}
//   // proto:  void QAbstractButton::~QAbstractButton();
extern "C"
void C_ZN15QAbstractButtonD2Ev(void *qthis) {
  delete (QAbstractButton*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractbutton.h', line 111, column 10>
//   // proto:  void QAbstractButton::setChecked(bool );
// _ZN15QAbstractButton10setCheckedEb setChecked(_Bool)
extern "C"
void
C_ZN15QAbstractButton10setCheckedEb(void *qthis,
bool arg1) {
  ((QAbstractButton*)qthis)->setChecked(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractbutton.h', line 79, column 18>
//   // proto:  QKeySequence QAbstractButton::shortcut();
// _ZNK15QAbstractButton8shortcutEv shortcut()
extern "C"
QKeySequence*
C_ZNK15QAbstractButton8shortcutEv(void *qthis) {
  auto ret =
  ((QAbstractButton*)qthis)->shortcut();
  return new QKeySequence(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractbutton.h', line 103, column 19>
//   // proto:  QButtonGroup * QAbstractButton::group();
// _ZNK15QAbstractButton5groupEv group()
extern "C"
void*
C_ZNK15QAbstractButton5groupEv(void *qthis) {
  auto ret =
  ((QAbstractButton*)qthis)->group();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractbutton.h', line 83, column 10>
//   // proto:  bool QAbstractButton::isCheckable();
// _ZNK15QAbstractButton11isCheckableEv isCheckable()
extern "C"
bool
C_ZNK15QAbstractButton11isCheckableEv(void *qthis) {
  auto ret =
  ((QAbstractButton*)qthis)->isCheckable();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractbutton.h', line 66, column 14>
//   // proto:  void QAbstractButton::QAbstractButton(QWidget * parent);
extern "C"
QAbstractButton*
C_ZN15QAbstractButtonC2EP7QWidget(QWidget * arg1) {
  // auto ret = new QAbstractButton(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractbutton.h', line 88, column 10>
//   // proto:  bool QAbstractButton::isDown();
// _ZNK15QAbstractButton6isDownEv isDown()
extern "C"
bool
C_ZNK15QAbstractButton6isDownEv(void *qthis) {
  auto ret =
  ((QAbstractButton*)qthis)->isDown();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractbutton.h', line 117, column 10>
//   // proto:  void QAbstractButton::toggled(bool checked);
// _ZN15QAbstractButton7toggledEb toggled(_Bool)
extern "C"
void
C_ZN15QAbstractButton7toggledEb(void *qthis,
bool arg1) {
  ((QAbstractButton*)qthis)->toggled(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractbutton.h', line 99, column 10>
//   // proto:  void QAbstractButton::setAutoExclusive(bool );
// _ZN15QAbstractButton16setAutoExclusiveEb setAutoExclusive(_Bool)
extern "C"
void
C_ZN15QAbstractButton16setAutoExclusiveEb(void *qthis,
bool arg1) {
  ((QAbstractButton*)qthis)->setAutoExclusive(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractbutton.h', line 49, column 5>
//   // proto:  const QMetaObject * QAbstractButton::metaObject();
// _ZNK15QAbstractButton10metaObjectEv metaObject()
extern "C"
void*
C_ZNK15QAbstractButton10metaObjectEv(void *qthis) {
  auto ret =
  ((QAbstractButton*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractbutton.h', line 85, column 10>
//   // proto:  bool QAbstractButton::isChecked();
// _ZNK15QAbstractButton9isCheckedEv isChecked()
extern "C"
bool
C_ZNK15QAbstractButton9isCheckedEv(void *qthis) {
  auto ret =
  ((QAbstractButton*)qthis)->isChecked();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractbutton.h', line 93, column 10>
//   // proto:  void QAbstractButton::setAutoRepeatDelay(int );
// _ZN15QAbstractButton18setAutoRepeatDelayEi setAutoRepeatDelay(int)
extern "C"
void
C_ZN15QAbstractButton18setAutoRepeatDelayEi(void *qthis,
int arg1) {
  ((QAbstractButton*)qthis)->setAutoRepeatDelay(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractbutton.h', line 94, column 9>
//   // proto:  int QAbstractButton::autoRepeatDelay();
// _ZNK15QAbstractButton15autoRepeatDelayEv autoRepeatDelay()
extern "C"
int
C_ZNK15QAbstractButton15autoRepeatDelayEv(void *qthis) {
  auto ret =
  ((QAbstractButton*)qthis)->autoRepeatDelay();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractbutton.h', line 100, column 10>
//   // proto:  bool QAbstractButton::autoExclusive();
// _ZNK15QAbstractButton13autoExclusiveEv autoExclusive()
extern "C"
bool
C_ZNK15QAbstractButton13autoExclusiveEv(void *qthis) {
  auto ret =
  ((QAbstractButton*)qthis)->autoExclusive();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractbutton.h', line 116, column 10>
//   // proto:  void QAbstractButton::clicked(bool checked);
// _ZN15QAbstractButton7clickedEb clicked(_Bool)
extern "C"
void
C_ZN15QAbstractButton7clickedEb(void *qthis,
bool arg1) {
  ((QAbstractButton*)qthis)->clicked(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractbutton.h', line 115, column 10>
//   // proto:  void QAbstractButton::released();
// _ZN15QAbstractButton8releasedEv released()
extern "C"
void
C_ZN15QAbstractButton8releasedEv(void *qthis) {
  ((QAbstractButton*)qthis)->released();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractbutton.h', line 110, column 10>
//   // proto:  void QAbstractButton::toggle();
// _ZN15QAbstractButton6toggleEv toggle()
extern "C"
void
C_ZN15QAbstractButton6toggleEv(void *qthis) {
  ((QAbstractButton*)qthis)->toggle();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractbutton.h', line 72, column 10>
//   // proto:  void QAbstractButton::setIcon(const QIcon & icon);
// _ZN15QAbstractButton7setIconERK5QIcon setIcon(const class QIcon &)
extern "C"
void
C_ZN15QAbstractButton7setIconERK5QIcon(void *qthis,
const QIcon* arg1) {
  ((QAbstractButton*)qthis)->setIcon(*((const QIcon*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractbutton.h', line 96, column 10>
//   // proto:  void QAbstractButton::setAutoRepeatInterval(int );
// _ZN15QAbstractButton21setAutoRepeatIntervalEi setAutoRepeatInterval(int)
extern "C"
void
C_ZN15QAbstractButton21setAutoRepeatIntervalEi(void *qthis,
int arg1) {
  ((QAbstractButton*)qthis)->setAutoRepeatInterval(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractbutton.h', line 90, column 10>
//   // proto:  void QAbstractButton::setAutoRepeat(bool );
// _ZN15QAbstractButton13setAutoRepeatEb setAutoRepeat(_Bool)
extern "C"
void
C_ZN15QAbstractButton13setAutoRepeatEb(void *qthis,
bool arg1) {
  ((QAbstractButton*)qthis)->setAutoRepeat(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractbutton.h', line 108, column 10>
//   // proto:  void QAbstractButton::animateClick(int msec);
// _ZN15QAbstractButton12animateClickEi animateClick(int)
extern "C"
void
C_ZN15QAbstractButton12animateClickEi(void *qthis,
int arg1) {
  ((QAbstractButton*)qthis)->animateClick(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractbutton.h', line 87, column 10>
//   // proto:  void QAbstractButton::setDown(bool );
// _ZN15QAbstractButton7setDownEb setDown(_Bool)
extern "C"
void
C_ZN15QAbstractButton7setDownEb(void *qthis,
bool arg1) {
  ((QAbstractButton*)qthis)->setDown(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractbutton.h', line 70, column 13>
//   // proto:  QString QAbstractButton::text();
// _ZNK15QAbstractButton4textEv text()
extern "C"
QString*
C_ZNK15QAbstractButton4textEv(void *qthis) {
  auto ret =
  ((QAbstractButton*)qthis)->text();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractbutton.h', line 78, column 10>
//   // proto:  void QAbstractButton::setShortcut(const QKeySequence & key);
// _ZN15QAbstractButton11setShortcutERK12QKeySequence setShortcut(const class QKeySequence &)
extern "C"
void
C_ZN15QAbstractButton11setShortcutERK12QKeySequence(void *qthis,
const QKeySequence* arg1) {
  ((QAbstractButton*)qthis)->setShortcut(*((const QKeySequence*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractbutton.h', line 82, column 10>
//   // proto:  void QAbstractButton::setCheckable(bool );
// _ZN15QAbstractButton12setCheckableEb setCheckable(_Bool)
extern "C"
void
C_ZN15QAbstractButton12setCheckableEb(void *qthis,
bool arg1) {
  ((QAbstractButton*)qthis)->setCheckable(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractbutton.h', line 73, column 11>
//   // proto:  QIcon QAbstractButton::icon();
// _ZNK15QAbstractButton4iconEv icon()
extern "C"
QIcon*
C_ZNK15QAbstractButton4iconEv(void *qthis) {
  auto ret =
  ((QAbstractButton*)qthis)->icon();
  return new QIcon(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractbutton.h', line 69, column 10>
//   // proto:  void QAbstractButton::setText(const QString & text);
// _ZN15QAbstractButton7setTextERK7QString setText(const class QString &)
extern "C"
void
C_ZN15QAbstractButton7setTextERK7QString(void *qthis,
const QString* arg1) {
  ((QAbstractButton*)qthis)->setText(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractbutton.h', line 97, column 9>
//   // proto:  int QAbstractButton::autoRepeatInterval();
// _ZNK15QAbstractButton18autoRepeatIntervalEv autoRepeatInterval()
extern "C"
int
C_ZNK15QAbstractButton18autoRepeatIntervalEv(void *qthis) {
  auto ret =
  ((QAbstractButton*)qthis)->autoRepeatInterval();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractbutton.h', line 91, column 10>
//   // proto:  bool QAbstractButton::autoRepeat();
// _ZNK15QAbstractButton10autoRepeatEv autoRepeat()
extern "C"
bool
C_ZNK15QAbstractButton10autoRepeatEv(void *qthis) {
  auto ret =
  ((QAbstractButton*)qthis)->autoRepeat();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractbutton.h', line 107, column 10>
//   // proto:  void QAbstractButton::setIconSize(const QSize & size);
// _ZN15QAbstractButton11setIconSizeERK5QSize setIconSize(const class QSize &)
extern "C"
void
C_ZN15QAbstractButton11setIconSizeERK5QSize(void *qthis,
const QSize* arg1) {
  ((QAbstractButton*)qthis)->setIconSize(*((const QSize*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qabstractbutton.h', line 114, column 10>
//   // proto:  void QAbstractButton::pressed();
// _ZN15QAbstractButton7pressedEv pressed()
extern "C"
void
C_ZN15QAbstractButton7pressedEv(void *qthis) {
  ((QAbstractButton*)qthis)->pressed();
}
// <= ext block end

// body block begin =>
// QAbstractButton_SlotProxy here
class QAbstractButton_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QAbstractButton_SlotProxy():QObject(){}

public slots:
  // clicked(_Bool)
  void slot_proxy_func__ZN15QAbstractButton7clickedEb(bool arg0);
public:
  void (*slot_func__ZN15QAbstractButton7clickedEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // toggled(_Bool)
  void slot_proxy_func__ZN15QAbstractButton7toggledEb(bool arg0);
public:
  void (*slot_func__ZN15QAbstractButton7toggledEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // pressed()
  void slot_proxy_func__ZN15QAbstractButton7pressedEv();
public:
  void (*slot_func__ZN15QAbstractButton7pressedEv)(void* rsfptr) = NULL;
public slots:
  // released()
  void slot_proxy_func__ZN15QAbstractButton8releasedEv();
public:
  void (*slot_func__ZN15QAbstractButton8releasedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qabstractbutton.moc"

extern "C" {
  QAbstractButton_SlotProxy* QAbstractButton_SlotProxy_new()
  {
    return new QAbstractButton_SlotProxy();
  }
};

void QAbstractButton_SlotProxy::slot_proxy_func__ZN15QAbstractButton7clickedEb(bool arg0) {
  if (this->slot_func__ZN15QAbstractButton7clickedEb != NULL) {
    // do smth...
    this->slot_func__ZN15QAbstractButton7clickedEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QAbstractButton_SlotProxy_connect__ZN15QAbstractButton7clickedEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractButton_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QAbstractButton7clickedEb = (decltype(that->slot_func__ZN15QAbstractButton7clickedEb))ffifptr;
  QObject::connect((QAbstractButton*)sender, SIGNAL(clicked(_Bool)), that, SLOT(slot_proxy_func__ZN15QAbstractButton7clickedEb(bool arg0)));
  return that;
}
extern "C"
void QAbstractButton_SlotProxy_disconnect__ZN15QAbstractButton7clickedEb(QAbstractButton_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractButton_SlotProxy::slot_proxy_func__ZN15QAbstractButton7toggledEb(bool arg0) {
  if (this->slot_func__ZN15QAbstractButton7toggledEb != NULL) {
    // do smth...
    this->slot_func__ZN15QAbstractButton7toggledEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QAbstractButton_SlotProxy_connect__ZN15QAbstractButton7toggledEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractButton_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QAbstractButton7toggledEb = (decltype(that->slot_func__ZN15QAbstractButton7toggledEb))ffifptr;
  QObject::connect((QAbstractButton*)sender, SIGNAL(toggled(_Bool)), that, SLOT(slot_proxy_func__ZN15QAbstractButton7toggledEb(bool arg0)));
  return that;
}
extern "C"
void QAbstractButton_SlotProxy_disconnect__ZN15QAbstractButton7toggledEb(QAbstractButton_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractButton_SlotProxy::slot_proxy_func__ZN15QAbstractButton7pressedEv() {
  if (this->slot_func__ZN15QAbstractButton7pressedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QAbstractButton7pressedEv(this->rsfptr);
  }
}
extern "C"
void* QAbstractButton_SlotProxy_connect__ZN15QAbstractButton7pressedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractButton_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QAbstractButton7pressedEv = (decltype(that->slot_func__ZN15QAbstractButton7pressedEv))ffifptr;
  QObject::connect((QAbstractButton*)sender, SIGNAL(pressed()), that, SLOT(slot_proxy_func__ZN15QAbstractButton7pressedEv()));
  return that;
}
extern "C"
void QAbstractButton_SlotProxy_disconnect__ZN15QAbstractButton7pressedEv(QAbstractButton_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QAbstractButton_SlotProxy::slot_proxy_func__ZN15QAbstractButton8releasedEv() {
  if (this->slot_func__ZN15QAbstractButton8releasedEv != NULL) {
    // do smth...
    this->slot_func__ZN15QAbstractButton8releasedEv(this->rsfptr);
  }
}
extern "C"
void* QAbstractButton_SlotProxy_connect__ZN15QAbstractButton8releasedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QAbstractButton_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN15QAbstractButton8releasedEv = (decltype(that->slot_func__ZN15QAbstractButton8releasedEv))ffifptr;
  QObject::connect((QAbstractButton*)sender, SIGNAL(released()), that, SLOT(slot_proxy_func__ZN15QAbstractButton8releasedEv()));
  return that;
}
extern "C"
void QAbstractButton_SlotProxy_disconnect__ZN15QAbstractButton8releasedEv(QAbstractButton_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

