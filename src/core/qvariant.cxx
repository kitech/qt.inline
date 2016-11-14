// /usr/include/qt/QtCore/qvariant.h
#include <qvariant.h>
#include <QtCore>

// /usr/include/qt/QtCore/qvariant.h:675
// void QAssociativeIterable(QtMetaTypePrivate::QAssociativeIterableImpl)
extern "C"
void* C_ZN20QAssociativeIterableC1EN17QtMetaTypePrivate24QAssociativeIterableImplE(QtMetaTypePrivate::QAssociativeIterableImpl impl) {
  return new QAssociativeIterable(impl);
}
// /usr/include/qt/QtCore/qvariant.h:680
// QAssociativeIterable::const_iterator begin()
extern "C"
void C_ZNK20QAssociativeIterable5beginEv(void *this_) {
  /*return*/ ((QAssociativeIterable*)this_)->begin();
}
// /usr/include/qt/QtCore/qvariant.h:681
// QAssociativeIterable::const_iterator end()
extern "C"
void C_ZNK20QAssociativeIterable3endEv(void *this_) {
  /*return*/ ((QAssociativeIterable*)this_)->end();
}
// /usr/include/qt/QtCore/qvariant.h:682
// QAssociativeIterable::const_iterator find(const class QVariant &)
extern "C"
void C_ZNK20QAssociativeIterable4findERK8QVariant(void *this_, const QVariant & key) {
  /*return*/ ((QAssociativeIterable*)this_)->find(key);
}
// /usr/include/qt/QtCore/qvariant.h:684
// QVariant value(const class QVariant &)
extern "C"
void C_ZNK20QAssociativeIterable5valueERK8QVariant(void *this_, const QVariant & key) {
  /*return*/ ((QAssociativeIterable*)this_)->value(key);
}
// /usr/include/qt/QtCore/qvariant.h:686
// int size()
extern "C"
void C_ZNK20QAssociativeIterable4sizeEv(void *this_) {
  /*return*/ ((QAssociativeIterable*)this_)->size();
}