// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h
#include <qtreewidgetitemiterator.h>
#include <QtWidgets>

// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h:86
// void QTreeWidgetItemIterator(class QTreeWidget *, IteratorFlags)
extern "C"
void* C_ZN23QTreeWidgetItemIteratorC1EP11QTreeWidget6QFlagsINS_12IteratorFlagEE(QTreeWidget * widget, QFlags<QTreeWidgetItemIterator::IteratorFlag> flags) {
  return new QTreeWidgetItemIterator(widget, flags);
}
// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h:87
// void QTreeWidgetItemIterator(class QTreeWidgetItem *, IteratorFlags)
extern "C"
void* C_ZN23QTreeWidgetItemIteratorC1EP15QTreeWidgetItem6QFlagsINS_12IteratorFlagEE(QTreeWidgetItem * item, QFlags<QTreeWidgetItemIterator::IteratorFlag> flags) {
  return new QTreeWidgetItemIterator(item, flags);
}
// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h:88
// void ~QTreeWidgetItemIterator()
extern "C"
void C_ZN23QTreeWidgetItemIteratorD1Ev(void *this_) {
  delete (QTreeWidgetItemIterator*)(this_);
}