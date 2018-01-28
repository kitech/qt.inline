//  header block begin
// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h
#include <qtreewidgetitemiterator.h>
#include <QtWidgets>

// QTreeWidgetItemIterator is pure virtual: false
//  header block end

//  main block begin

class MyQTreeWidgetItemIterator : public QTreeWidgetItemIterator {
public:
MyQTreeWidgetItemIterator(QTreeWidget * widget, QFlags<QTreeWidgetItemIterator::IteratorFlag> flags) : QTreeWidgetItemIterator(widget, flags) {}
MyQTreeWidgetItemIterator(QTreeWidgetItem * item, QFlags<QTreeWidgetItemIterator::IteratorFlag> flags) : QTreeWidgetItemIterator(item, flags) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h:85
// [-2] void QTreeWidgetItemIterator(class QTreeWidget *, QTreeWidgetItemIterator::IteratorFlags)
extern "C"
void* C_ZN23QTreeWidgetItemIteratorC1EP11QTreeWidget6QFlagsINS_12IteratorFlagEE(QTreeWidget * widget, QFlags<QTreeWidgetItemIterator::IteratorFlag> flags) {
  (MyQTreeWidgetItemIterator*)(0);
  return  new MyQTreeWidgetItemIterator(widget, flags);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h:86
// [-2] void QTreeWidgetItemIterator(class QTreeWidgetItem *, QTreeWidgetItemIterator::IteratorFlags)
extern "C"
void* C_ZN23QTreeWidgetItemIteratorC1EP15QTreeWidgetItem6QFlagsINS_12IteratorFlagEE(QTreeWidgetItem * item, QFlags<QTreeWidgetItemIterator::IteratorFlag> flags) {
  (MyQTreeWidgetItemIterator*)(0);
  return  new MyQTreeWidgetItemIterator(item, flags);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h:87
// [-2] void ~QTreeWidgetItemIterator()
extern "C"
void C_ZN23QTreeWidgetItemIteratorD1Ev(void *this_) {
  delete (QTreeWidgetItemIterator*)(this_);
}
//  main block end
