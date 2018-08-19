//  header block begin
// since 0x050000
// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QInputMethodQueryEvent is pure virtual: false
// QInputMethodQueryEvent has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQInputMethodQueryEvent : public QInputMethodQueryEvent {
public:
  virtual ~MyQInputMethodQueryEvent() {}
// void QInputMethodQueryEvent(Qt::InputMethodQueries)
MyQInputMethodQueryEvent(QFlags<Qt::InputMethodQuery> queries) : QInputMethodQueryEvent(queries) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:581
// [-2] void QInputMethodQueryEvent(Qt::InputMethodQueries)
extern "C" Q_DECL_EXPORT
void* C_ZN22QInputMethodQueryEventC2E6QFlagsIN2Qt16InputMethodQueryEE(QFlags<Qt::InputMethodQuery> queries) {
  return  new QInputMethodQueryEvent(queries);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:582
// [-2] void ~QInputMethodQueryEvent()
extern "C" Q_DECL_EXPORT
void C_ZN22QInputMethodQueryEventD2Ev(void *this_) {
  delete (QInputMethodQueryEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:584
// [4] Qt::InputMethodQueries queries()
extern "C" Q_DECL_EXPORT
Qt::InputMethodQueries C_ZNK22QInputMethodQueryEvent7queriesEv(void *this_) {
  return (Qt::InputMethodQueries)((QInputMethodQueryEvent*)this_)->queries();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:586
// [-2] void setValue(Qt::InputMethodQuery, const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN22QInputMethodQueryEvent8setValueEN2Qt16InputMethodQueryERK8QVariant(void *this_, Qt::InputMethodQuery query, QVariant* value) {
  ((QInputMethodQueryEvent*)this_)->setValue(query, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:587
// [16] QVariant value(Qt::InputMethodQuery)
extern "C" Q_DECL_EXPORT
void* C_ZNK22QInputMethodQueryEvent5valueEN2Qt16InputMethodQueryE(void *this_, Qt::InputMethodQuery query) {
  auto rv = ((QInputMethodQueryEvent*)this_)->value(query);
return new QVariant(rv);
}

//  main block end
