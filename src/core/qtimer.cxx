#include <qnamespace.h>
// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtCore/qtimer.h
// dst-file: /src/core/qtimer.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qtimer.h>

extern "C" {

int QTimer_Class_Size()
{
  return sizeof(QTimer);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qtimer_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qtimer.h', line 60, column 9>
//   // proto:  int QTimer::timerId();
if (false) {
  auto f = []() {
    ((QTimer*)0)->timerId();
  };
}
// _ZNK6QTimer7timerIdEv timerId()
// <SourceLocation file '/usr/include/qt/QtCore/qtimer.h', line 70, column 17>
//   // proto:  void QTimer::setSingleShot(bool singleShot);
if (false) {
  auto f = [](bool arg1) {
    ((QTimer*)0)->setSingleShot(arg1);
  };
}
// _ZN6QTimer13setSingleShotEb setSingleShot(_Bool)
// <SourceLocation file '/usr/include/qt/QtCore/qtimer.h', line 68, column 19>
//   // proto:  Qt::TimerType QTimer::timerType();
if (false) {
  auto f = []() {
    ((QTimer*)0)->timerType();
  };
}
// _ZNK6QTimer9timerTypeEv timerType()
// <SourceLocation file '/usr/include/qt/QtCore/qtimer.h', line 63, column 9>
//   // proto:  int QTimer::interval();
if (false) {
  auto f = []() {
    ((QTimer*)0)->interval();
  };
}
// _ZNK6QTimer8intervalEv interval()
// <SourceLocation file '/usr/include/qt/QtCore/qtimer.h', line 67, column 10>
//   // proto:  void QTimer::setTimerType(Qt::TimerType atype);
if (false) {
  auto f = [](Qt::TimerType arg1) {
    ((QTimer*)0)->setTimerType(arg1);
  };
}
// _ZN6QTimer12setTimerTypeEN2Qt9TimerTypeE setTimerType(Qt::TimerType)
// <SourceLocation file '/usr/include/qt/QtCore/qtimer.h', line 71, column 17>
//   // proto:  bool QTimer::isSingleShot();
if (false) {
  auto f = []() {
    ((QTimer*)0)->isSingleShot();
  };
}
// _ZNK6QTimer12isSingleShotEv isSingleShot()
// <SourceLocation file '/usr/include/qt/QtCore/qtimer.h', line 59, column 17>
//   // proto:  bool QTimer::isActive();
if (false) {
  auto f = []() {
    ((QTimer*)0)->isActive();
  };
}
// _ZNK6QTimer8isActiveEv isActive()
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QTimer_SlotProxy here
class QTimer_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QTimer_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/core/qtimer.moc"

extern "C" {
  QTimer_SlotProxy* QTimer_SlotProxy_new()
  {
    return new QTimer_SlotProxy();
  }
};

// <= body block end

