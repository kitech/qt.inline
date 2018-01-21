//  header block begin
// /usr/include/qt/QtCore/qvariant.h
#include <qvariant.h>
#include <QtCore>

//  header block end

//  main block begin
// /usr/include/qt/QtCore/qvariant.h:618
// void QSequentialIterable(QtMetaTypePrivate::QSequentialIterableImpl)
extern "C"
void* C_ZN19QSequentialIterableC1EN17QtMetaTypePrivate23QSequentialIterableImplE(QtMetaTypePrivate::QSequentialIterableImpl impl) {
  return new QSequentialIterable(impl);
}
// /usr/include/qt/QtCore/qvariant.h:623
// QSequentialIterable::const_iterator begin()
extern "C"
void C_ZNK19QSequentialIterable5beginEv(void *this_) {
  /*return*/ ((QSequentialIterable*)this_)->begin();
}
// /usr/include/qt/QtCore/qvariant.h:624
// QSequentialIterable::const_iterator end()
extern "C"
void C_ZNK19QSequentialIterable3endEv(void *this_) {
  /*return*/ ((QSequentialIterable*)this_)->end();
}
// /usr/include/qt/QtCore/qvariant.h:626
// QVariant at(int)
extern "C"
void C_ZNK19QSequentialIterable2atEi(void *this_, int idx) {
  /*return*/ ((QSequentialIterable*)this_)->at(idx);
}
// /usr/include/qt/QtCore/qvariant.h:627
// int size()
extern "C"
void C_ZNK19QSequentialIterable4sizeEv(void *this_) {
  /*return*/ ((QSequentialIterable*)this_)->size();
}
// /usr/include/qt/QtCore/qvariant.h:629
// bool canReverseIterate()
extern "C"
void C_ZNK19QSequentialIterable17canReverseIterateEv(void *this_) {
  /*return*/ ((QSequentialIterable*)this_)->canReverseIterate();
}
//  main block end
