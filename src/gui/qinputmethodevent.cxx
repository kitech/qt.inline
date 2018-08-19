//  header block begin
// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QInputMethodEvent is pure virtual: false
// QInputMethodEvent has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQInputMethodEvent : public QInputMethodEvent {
public:
  virtual ~MyQInputMethodEvent() {}
// void QInputMethodEvent()
MyQInputMethodEvent() : QInputMethodEvent() {}
// void QInputMethodEvent(const QString &, const QList<QInputMethodEvent::Attribute> &)
MyQInputMethodEvent(const QString & preeditText, const QList<QInputMethodEvent::Attribute> & attributes) : QInputMethodEvent(preeditText, attributes) {}
// void QInputMethodEvent(const QInputMethodEvent &)
MyQInputMethodEvent(const QInputMethodEvent & other) : QInputMethodEvent(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:555
// [-2] void QInputMethodEvent()
extern "C" Q_DECL_EXPORT
void* C_ZN17QInputMethodEventC2Ev() {
  return  new QInputMethodEvent();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:556
// [-2] void QInputMethodEvent(const QString &, const QList<QInputMethodEvent::Attribute> &)
extern "C" Q_DECL_EXPORT
void* C_ZN17QInputMethodEventC2ERK7QStringRK5QListINS_9AttributeEE(QString* preeditText, const QList<QInputMethodEvent::Attribute> & attributes) {
  return  new QInputMethodEvent(*preeditText, attributes);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:557
// [-2] void ~QInputMethodEvent()
extern "C" Q_DECL_EXPORT
void C_ZN17QInputMethodEventD2Ev(void *this_) {
  delete (QInputMethodEvent*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:559
// [-2] void setCommitString(const QString &, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN17QInputMethodEvent15setCommitStringERK7QStringii(void *this_, QString* commitString, int replaceFrom, int replaceLength) {
  ((QInputMethodEvent*)this_)->setCommitString(*commitString, replaceFrom, replaceLength);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:560
// [8] const QList<QInputMethodEvent::Attribute> & attributes()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QInputMethodEvent10attributesEv(void *this_) {
  auto& rv = ((QInputMethodEvent*)this_)->attributes();
return new QList<QInputMethodEvent::Attribute>(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:561
// [8] const QString & preeditString()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QInputMethodEvent13preeditStringEv(void *this_) {
  auto& rv = ((QInputMethodEvent*)this_)->preeditString();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:563
// [8] const QString & commitString()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QInputMethodEvent12commitStringEv(void *this_) {
  auto& rv = ((QInputMethodEvent*)this_)->commitString();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:564
// [4] int replacementStart()
extern "C" Q_DECL_EXPORT
int C_ZNK17QInputMethodEvent16replacementStartEv(void *this_) {
  return (int)((QInputMethodEvent*)this_)->replacementStart();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:565
// [4] int replacementLength()
extern "C" Q_DECL_EXPORT
int C_ZNK17QInputMethodEvent17replacementLengthEv(void *this_) {
  return (int)((QInputMethodEvent*)this_)->replacementLength();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:567
// [-2] void QInputMethodEvent(const QInputMethodEvent &)
extern "C" Q_DECL_EXPORT
void* C_ZN17QInputMethodEventC2ERKS_(QInputMethodEvent* other) {
  return  new QInputMethodEvent(*other);
}

//  main block end
