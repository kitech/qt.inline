#include <qtextformat.h>
// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtGui/qtextlist.h
// dst-file: /src/gui/qtextlist.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qtextlist.h>

extern "C" {

int QTextList_Class_Size()
{
  return sizeof(QTextList);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qtextlist_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qtextlist.h', line 68, column 17>
//   // proto:  void QTextList::setFormat(const QTextListFormat & format);
if (false) {
  auto f = [](const QTextListFormat & arg1) {
    ((QTextList*)0)->setFormat(arg1);
  };
}
// _ZN9QTextList9setFormatERK15QTextListFormat setFormat(const class QTextListFormat &)
// <SourceLocation file '/usr/include/qt/QtGui/qtextlist.h', line 69, column 21>
//   // proto:  QTextListFormat QTextList::format();
if (false) {
  auto f = []() {
    ((QTextList*)0)->format();
  };
}
// _ZNK9QTextList6formatEv format()
// <SourceLocation file '/usr/include/qt/QtGui/qtextlist.h', line 55, column 17>
//   // proto:  bool QTextList::isEmpty();
if (false) {
  auto f = []() {
    ((QTextList*)0)->isEmpty();
  };
}
// _ZNK9QTextList7isEmptyEv isEmpty()
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QTextList_SlotProxy here
class QTextList_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QTextList_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/gui/qtextlist.moc"

extern "C" {
  QTextList_SlotProxy* QTextList_SlotProxy_new()
  {
    return new QTextList_SlotProxy();
  }
};

// <= body block end

