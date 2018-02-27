//  header block begin
// /usr/include/qt/QtGui/qtextobject.h
#ifndef protected
#define protected public
#endif
#include <qtextobject.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextFragment is pure virtual: false
// QTextFragment has virtual projected: false
//  header block end

//  main block begin

class MyQTextFragment : public QTextFragment {
public:
  virtual ~MyQTextFragment() {}
// void QTextFragment()
MyQTextFragment() : QTextFragment() {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:307
// [-2] void QTextFragment()
extern "C"
void* C_ZN13QTextFragmentC2Ev() {
  return  new QTextFragment();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:309
// [16] QTextFragment & operator=(const class QTextFragment &)
extern "C"
void* C_ZN13QTextFragmentaSERKS_(void *this_, QTextFragment* o) {
  auto& rv = ((QTextFragment*)this_)->operator=(*o);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:311
// [1] bool isValid()
extern "C"
bool C_ZNK13QTextFragment7isValidEv(void *this_) {
  return (bool)((QTextFragment*)this_)->isValid();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:313
// [1] bool operator==(const class QTextFragment &)
extern "C"
bool C_ZNK13QTextFragmenteqERKS_(void *this_, QTextFragment* o) {
  return (bool)((QTextFragment*)this_)->operator==(*o);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:314
// [1] bool operator!=(const class QTextFragment &)
extern "C"
bool C_ZNK13QTextFragmentneERKS_(void *this_, QTextFragment* o) {
  return (bool)((QTextFragment*)this_)->operator!=(*o);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:315
// [1] bool operator<(const class QTextFragment &)
extern "C"
bool C_ZNK13QTextFragmentltERKS_(void *this_, QTextFragment* o) {
  return (bool)((QTextFragment*)this_)->operator<(*o);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:317
// [4] int position()
extern "C"
int C_ZNK13QTextFragment8positionEv(void *this_) {
  return (int)((QTextFragment*)this_)->position();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:318
// [4] int length()
extern "C"
int C_ZNK13QTextFragment6lengthEv(void *this_) {
  return (int)((QTextFragment*)this_)->length();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:319
// [1] bool contains(int)
extern "C"
bool C_ZNK13QTextFragment8containsEi(void *this_, int position) {
  return (bool)((QTextFragment*)this_)->contains(position);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:321
// [16] QTextCharFormat charFormat()
extern "C"
void* C_ZNK13QTextFragment10charFormatEv(void *this_) {
  auto rv = ((QTextFragment*)this_)->charFormat();
return new QTextCharFormat(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:322
// [4] int charFormatIndex()
extern "C"
int C_ZNK13QTextFragment15charFormatIndexEv(void *this_) {
  return (int)((QTextFragment*)this_)->charFormatIndex();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextobject.h:323
// [8] QString text()
extern "C"
void* C_ZNK13QTextFragment4textEv(void *this_) {
  auto rv = ((QTextFragment*)this_)->text();
return new QString(rv);
}


extern "C"
void C_ZN13QTextFragmentD2Ev(void *this_) {
  delete (QTextFragment*)(this_);
}
//  main block end
