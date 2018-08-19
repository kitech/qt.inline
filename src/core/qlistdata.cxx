//  header block begin
// /usr/include/qt/QtCore/qlist.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qlist.h>
#include <QtCore>
#include "callback_inherit.h"

// QListData is pure virtual: false
// QListData has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQListData : public QListData {
public:
  virtual ~MyQListData() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlist.h:96
// [8] QListData::Data * detach(int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QListData6detachEi(void *this_, int alloc) {
  return (void*)((QListData*)this_)->detach(alloc);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlist.h:97
// [8] QListData::Data * detach_grow(int *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QListData11detach_growEPii(void *this_, int * i, int n) {
  return (void*)((QListData*)this_)->detach_grow(i, n);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlist.h:98
// [-2] void realloc(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QListData7reallocEi(void *this_, int alloc) {
  ((QListData*)this_)->realloc(alloc);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlist.h:99
// [-2] void realloc_grow(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QListData12realloc_growEi(void *this_, int growth) {
  ((QListData*)this_)->realloc_grow(growth);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlist.h:100
// [-2] void dispose()
extern "C" Q_DECL_EXPORT
void C_ZN9QListData7disposeEv(void *this_) {
  ((QListData*)this_)->dispose();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlist.h:101
// [-2] void dispose(QListData::Data *)
extern "C" Q_DECL_EXPORT
void C_ZN9QListData7disposeEPNS_4DataE(QListData::Data * d) {
  QListData::dispose(d);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlist.h:104
// [8] void ** erase(void **)
extern "C" Q_DECL_EXPORT
void* C_ZN9QListData5eraseEPPv(void *this_, void ** xi) {
  return (void*)((QListData*)this_)->erase(xi);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlist.h:105
// [8] void ** append(int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QListData6appendEi(void *this_, int n) {
  return (void*)((QListData*)this_)->append(n);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlist.h:106
// [8] void ** append()
extern "C" Q_DECL_EXPORT
void* C_ZN9QListData6appendEv(void *this_) {
  return (void*)((QListData*)this_)->append();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlist.h:107
// [8] void ** append(const QListData &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QListData6appendERKS_(void *this_, QListData* l) {
  return (void*)((QListData*)this_)->append(*l);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlist.h:108
// [8] void ** prepend()
extern "C" Q_DECL_EXPORT
void* C_ZN9QListData7prependEv(void *this_) {
  return (void*)((QListData*)this_)->prepend();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlist.h:109
// [8] void ** insert(int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QListData6insertEi(void *this_, int i) {
  return (void*)((QListData*)this_)->insert(i);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlist.h:110
// [-2] void remove(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QListData6removeEi(void *this_, int i) {
  ((QListData*)this_)->remove(i);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlist.h:111
// [-2] void remove(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN9QListData6removeEii(void *this_, int i, int n) {
  ((QListData*)this_)->remove(i, n);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlist.h:112
// [-2] void move(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN9QListData4moveEii(void *this_, int from, int to) {
  ((QListData*)this_)->move(from, to);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlist.h:113
// [4] int size()
extern "C" Q_DECL_EXPORT
int C_ZNK9QListData4sizeEv(void *this_) {
  return (int)((QListData*)this_)->size();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlist.h:114
// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QListData7isEmptyEv(void *this_) {
  return (bool)((QListData*)this_)->isEmpty();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlist.h:115
// [8] void ** at(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QListData2atEi(void *this_, int i) {
  return (void*)((QListData*)this_)->at(i);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlist.h:116
// [8] void ** begin()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QListData5beginEv(void *this_) {
  return (void*)((QListData*)this_)->begin();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlist.h:117
// [8] void ** end()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QListData3endEv(void *this_) {
  return (void*)((QListData*)this_)->end();
}


extern "C" Q_DECL_EXPORT
void C_ZN9QListDataD2Ev(void *this_) {
  delete (QListData*)(this_);
}
//  main block end
