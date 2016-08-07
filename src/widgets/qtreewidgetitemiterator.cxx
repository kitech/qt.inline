// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtWidgets/qtreewidgetitemiterator.h
// dst-file: /src/widgets/qtreewidgetitemiterator.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qtreewidgetitemiterator.h>


// <= header block end

// main block begin =>
void __keep_qtreewidgetitemiterator_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QTreeWidgetItemIterator_Class_Size()
{
  return sizeof(QTreeWidgetItemIterator);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidgetitemiterator.h', line 86, column 14>
//   // proto:  void QTreeWidgetItemIterator::QTreeWidgetItemIterator(QTreeWidget * widget, IteratorFlags flags);
extern "C"
QTreeWidgetItemIterator*
C_ZN23QTreeWidgetItemIteratorC2EP11QTreeWidget6QFlagsINS_12IteratorFlagEE(QTreeWidget * arg1,
QTreeWidgetItemIterator::IteratorFlags arg2) {
  auto ret = new QTreeWidgetItemIterator(arg1,
arg2);
  return ret;
}
//   // proto:  void QTreeWidgetItemIterator::~QTreeWidgetItemIterator();
extern "C"
void C_ZN23QTreeWidgetItemIteratorD2Ev(void *qthis) {
  delete (QTreeWidgetItemIterator*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidgetitemiterator.h', line 87, column 14>
//   // proto:  void QTreeWidgetItemIterator::QTreeWidgetItemIterator(QTreeWidgetItem * item, IteratorFlags flags);
extern "C"
QTreeWidgetItemIterator*
C_ZN23QTreeWidgetItemIteratorC2EP15QTreeWidgetItem6QFlagsINS_12IteratorFlagEE(QTreeWidgetItem * arg1,
QTreeWidgetItemIterator::IteratorFlags arg2) {
  auto ret = new QTreeWidgetItemIterator(arg1,
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qtreewidgetitemiterator.h', line 85, column 5>
//   // proto:  void QTreeWidgetItemIterator::QTreeWidgetItemIterator(const QTreeWidgetItemIterator & it);
extern "C"
QTreeWidgetItemIterator*
C_ZN23QTreeWidgetItemIteratorC2ERKS_(const QTreeWidgetItemIterator* arg1) {
  auto ret = new QTreeWidgetItemIterator(*((const QTreeWidgetItemIterator*)arg1));
  return ret;
}
// <= ext block end

// body block begin =>
// <= body block end

