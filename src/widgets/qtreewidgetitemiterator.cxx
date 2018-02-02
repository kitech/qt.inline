//  header block begin
// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h
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
extern "C"
void* C_ZN23QTreeWidgetItemIteratorC2EP11QTreeWidget6QFlagsINS_12IteratorFlagEE(QTreeWidget * widget, QFlags<QTreeWidgetItemIterator::IteratorFlag> flags) {
  return  new QTreeWidgetItemIterator(widget, flags);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h:86
// [-2] void QTreeWidgetItemIterator(class QTreeWidgetItem *, QTreeWidgetItemIterator::IteratorFlags)
extern "C"
void* C_ZN23QTreeWidgetItemIteratorC2EP15QTreeWidgetItem6QFlagsINS_12IteratorFlagEE(QTreeWidgetItem * item, QFlags<QTreeWidgetItemIterator::IteratorFlag> flags) {
  return  new QTreeWidgetItemIterator(item, flags);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h:87
// [-2] void ~QTreeWidgetItemIterator()
extern "C"
void C_ZN23QTreeWidgetItemIteratorD2Ev(void *this_) {
  delete (QTreeWidgetItemIterator*)(this_);
}
//  main block end
