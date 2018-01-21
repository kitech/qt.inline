//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qevent.h:570
// void QInputMethodQueryEvent(Qt::InputMethodQueries)
extern "C"
void* C_ZN22QInputMethodQueryEventC1E6QFlagsIN2Qt16InputMethodQueryEE(QFlags<Qt::InputMethodQuery> queries) {
  return new QInputMethodQueryEvent(queries);
}
// virtual
// /usr/include/qt/QtGui/qevent.h:571
// void ~QInputMethodQueryEvent()
extern "C"
void C_ZN22QInputMethodQueryEventD1Ev(void *this_) {
  delete (QInputMethodQueryEvent*)(this_);
}
// inline
// /usr/include/qt/QtGui/qevent.h:573
// Qt::InputMethodQueries queries()
extern "C"
void C_ZNK22QInputMethodQueryEvent7queriesEv(void *this_) {
  /*return*/ ((QInputMethodQueryEvent*)this_)->queries();
}
// /usr/include/qt/QtGui/qevent.h:575
// void setValue(Qt::InputMethodQuery, const class QVariant &)
extern "C"
void C_ZN22QInputMethodQueryEvent8setValueEN2Qt16InputMethodQueryERK8QVariant(void *this_, Qt::InputMethodQuery query, const QVariant & value) {
  ((QInputMethodQueryEvent*)this_)->setValue(query, value);
}
// /usr/include/qt/QtGui/qevent.h:576
// QVariant value(Qt::InputMethodQuery)
extern "C"
void C_ZNK22QInputMethodQueryEvent5valueEN2Qt16InputMethodQueryE(void *this_, Qt::InputMethodQuery query) {
  /*return*/ ((QInputMethodQueryEvent*)this_)->value(query);
}
//  main block end
