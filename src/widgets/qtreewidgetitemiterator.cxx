//  header block begin
// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h
#ifndef protected
#define protected public
#endif
#include <qtreewidgetitemiterator.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QTreeWidgetItemIterator is pure virtual: false
// QTreeWidgetItemIterator has virtual projected: false
//  header block end

//  main block begin

class MyQTreeWidgetItemIterator : public QTreeWidgetItemIterator {
public:
  virtual ~MyQTreeWidgetItemIterator() {}
// void QTreeWidgetItemIterator(class QTreeWidget *, QTreeWidgetItemIterator::IteratorFlags)
MyQTreeWidgetItemIterator(QTreeWidget * widget, QFlags<QTreeWidgetItemIterator::IteratorFlag> flags) : QTreeWidgetItemIterator(widget, flags) {}
// void QTreeWidgetItemIterator(class QTreeWidgetItem *, QTreeWidgetItemIterator::IteratorFlags)
MyQTreeWidgetItemIterator(QTreeWidgetItem * item, QFlags<QTreeWidgetItemIterator::IteratorFlag> flags) : QTreeWidgetItemIterator(item, flags) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h:85
// [-2] void QTreeWidgetItemIterator(class QTreeWidget *, QTreeWidgetItemIterator::IteratorFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN23QTreeWidgetItemIteratorC2EP11QTreeWidget6QFlagsINS_12IteratorFlagEE(QTreeWidget * widget, QFlags<QTreeWidgetItemIterator::IteratorFlag> flags) {
  return  new QTreeWidgetItemIterator(widget, flags);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h:86
// [-2] void QTreeWidgetItemIterator(class QTreeWidgetItem *, QTreeWidgetItemIterator::IteratorFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN23QTreeWidgetItemIteratorC2EP15QTreeWidgetItem6QFlagsINS_12IteratorFlagEE(QTreeWidgetItem * item, QFlags<QTreeWidgetItemIterator::IteratorFlag> flags) {
  return  new QTreeWidgetItemIterator(item, flags);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h:87
// [-2] void ~QTreeWidgetItemIterator()
extern "C" Q_DECL_EXPORT
void C_ZN23QTreeWidgetItemIteratorD2Ev(void *this_) {
  delete (QTreeWidgetItemIterator*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h:89
// [24] QTreeWidgetItemIterator & operator=(const class QTreeWidgetItemIterator &)
extern "C" Q_DECL_EXPORT
void* C_ZN23QTreeWidgetItemIteratoraSERKS_(void *this_, QTreeWidgetItemIterator* it) {
  auto& rv = ((QTreeWidgetItemIterator*)this_)->operator=(*it);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h:91
// [24] QTreeWidgetItemIterator & operator++()
extern "C" Q_DECL_EXPORT
void* C_ZN23QTreeWidgetItemIteratorppEv(void *this_) {
  auto& rv = ((QTreeWidgetItemIterator*)this_)->operator++();
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h:92
// [24] const QTreeWidgetItemIterator operator++(int)
extern "C" Q_DECL_EXPORT
void* C_ZN23QTreeWidgetItemIteratorppEi(void *this_, int arg0) {
  auto rv = ((QTreeWidgetItemIterator*)this_)->operator++(arg0);
return new QTreeWidgetItemIterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h:93
// [24] QTreeWidgetItemIterator & operator+=(int)
extern "C" Q_DECL_EXPORT
void* C_ZN23QTreeWidgetItemIteratorpLEi(void *this_, int n) {
  auto& rv = ((QTreeWidgetItemIterator*)this_)->operator+=(n);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h:95
// [24] QTreeWidgetItemIterator & operator--()
extern "C" Q_DECL_EXPORT
void* C_ZN23QTreeWidgetItemIteratormmEv(void *this_) {
  auto& rv = ((QTreeWidgetItemIterator*)this_)->operator--();
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h:96
// [24] const QTreeWidgetItemIterator operator--(int)
extern "C" Q_DECL_EXPORT
void* C_ZN23QTreeWidgetItemIteratormmEi(void *this_, int arg0) {
  auto rv = ((QTreeWidgetItemIterator*)this_)->operator--(arg0);
return new QTreeWidgetItemIterator(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h:97
// [24] QTreeWidgetItemIterator & operator-=(int)
extern "C" Q_DECL_EXPORT
void* C_ZN23QTreeWidgetItemIteratormIEi(void *this_, int n) {
  auto& rv = ((QTreeWidgetItemIterator*)this_)->operator-=(n);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h:99
// [8] QTreeWidgetItem * operator*()
extern "C" Q_DECL_EXPORT
void* C_ZNK23QTreeWidgetItemIteratordeEv(void *this_) {
  return (void*)((QTreeWidgetItemIterator*)this_)->operator*();
}

//  main block end
