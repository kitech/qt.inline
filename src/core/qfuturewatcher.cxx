//  header block begin
// since 0x040400
// /usr/include/qt/QtCore/qfuturewatcher.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfuturewatcher.h>
#include <QtCore>
#include "callback_inherit.h"

// QFutureWatcher is pure virtual: false
// QFutureWatcher has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQFutureWatcher : public QFutureWatcher<void> {
public:
  virtual ~MyQFutureWatcher() {}
// void QFutureWatcher(QObject *)
MyQFutureWatcher(QObject * _parent) : QFutureWatcher<void>(_parent) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:188
// [-2] void QFutureWatcher(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QFutureWatcherIvEC2EP7QObject(QObject * _parent) {
  return  new QFutureWatcher<void>(_parent);
}

// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:191
// [-2] void ~QFutureWatcher()
extern "C" Q_DECL_EXPORT
void C_ZN14QFutureWatcherIvED2Ev(void *this_) {
  delete (QFutureWatcher<void>*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:194
// [-2] void setFuture(const QFuture<void> &)
extern "C" Q_DECL_EXPORT
void C_ZN14QFutureWatcherIvE9setFutureERK7QFutureIvE(void *this_, QFuture<void>* future) {
  ((QFutureWatcher<void>*)this_)->setFuture(*future);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfuturewatcher.h:195
// [16] QFuture<void> future()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QFutureWatcherIvE6futureEv(void *this_) {
  auto rv = ((QFutureWatcher<void>*)this_)->future();
return new QFuture<void>(rv);
}

//  main block end
