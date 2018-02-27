//  header block begin
// /usr/include/qt/QtCore/qvariant.h
#ifndef protected
#define protected public
#endif
#include <qvariant.h>
#include <QtCore>
#include "callback_inherit.h"

// QSequentialIterable is pure virtual: false
// QSequentialIterable has virtual projected: false
//  header block end

//  main block begin

class MyQSequentialIterable : public QSequentialIterable {
public:
  virtual ~MyQSequentialIterable() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:623
// [112] QSequentialIterable::const_iterator begin()
extern "C"
void* C_ZNK19QSequentialIterable5beginEv(void *this_) {
  auto rv = ((QSequentialIterable*)this_)->begin();
return new QSequentialIterable::const_iterator(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:624
// [112] QSequentialIterable::const_iterator end()
extern "C"
void* C_ZNK19QSequentialIterable3endEv(void *this_) {
  auto rv = ((QSequentialIterable*)this_)->end();
return new QSequentialIterable::const_iterator(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:626
// [16] QVariant at(int)
extern "C"
void* C_ZNK19QSequentialIterable2atEi(void *this_, int idx) {
  auto rv = ((QSequentialIterable*)this_)->at(idx);
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:627
// [4] int size()
extern "C"
int C_ZNK19QSequentialIterable4sizeEv(void *this_) {
  return (int)((QSequentialIterable*)this_)->size();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:629
// [1] bool canReverseIterate()
extern "C"
bool C_ZNK19QSequentialIterable17canReverseIterateEv(void *this_) {
  return (bool)((QSequentialIterable*)this_)->canReverseIterate();
}


extern "C"
void C_ZN19QSequentialIterableD2Ev(void *this_) {
  delete (QSequentialIterable*)(this_);
}
//  main block end
