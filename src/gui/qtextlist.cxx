// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtGui/qtextlist.h
// dst-file: /src/gui/qtextlist.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qtextlist.h>


#include <qtextobject.h>
#include <qstring.h>
#include <qtextformat.h>
// <= header block end

// main block begin =>
void __keep_qtextlist_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qtextlist.h', line 74, column 17>
//   // proto:  void QTextList::setFormat(const QTextListFormat & format);
if (true) {
  auto f = [](QTextList flythis, const QTextListFormat & arg1) {
    ((QTextList*)0)->setFormat(arg1);
    flythis.setFormat(arg1);
  };
  if (f == nullptr){}
}
// _ZN9QTextList9setFormatERK15QTextListFormat setFormat(const class QTextListFormat &)
// <SourceLocation file '/usr/include/qt/QtGui/qtextlist.h', line 75, column 21>
//   // proto:  QTextListFormat QTextList::format();
if (true) {
  auto f = [](QTextList flythis) {
    ((QTextList*)0)->format();
    flythis.format();
  };
  if (f == nullptr){}
}
// _ZNK9QTextList6formatEv format()
// <SourceLocation file '/usr/include/qt/QtGui/qtextlist.h', line 61, column 17>
//   // proto:  bool QTextList::isEmpty();
if (true) {
  auto f = [](QTextList flythis) {
    ((QTextList*)0)->isEmpty();
    flythis.isEmpty();
  };
  if (f == nullptr){}
}
// _ZNK9QTextList7isEmptyEv isEmpty()
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QTextList_Class_Size()
{
  return sizeof(QTextList);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qtextlist.h', line 64, column 16>
//   // proto:  QTextBlock QTextList::item(int i);
// _ZNK9QTextList4itemEi item(int)
extern "C"
QTextBlock*
C_ZNK9QTextList4itemEi(void *qthis,
int arg1) {
  auto ret =
  ((QTextList*)qthis)->item(arg1);
  return new QTextBlock(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlist.h', line 70, column 10>
//   // proto:  void QTextList::remove(const QTextBlock & );
// _ZN9QTextList6removeERK10QTextBlock remove(const class QTextBlock &)
extern "C"
void
C_ZN9QTextList6removeERK10QTextBlock(void *qthis,
const QTextBlock* arg1) {
  ((QTextList*)qthis)->remove(*((const QTextBlock*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlist.h', line 74, column 17>
//   // proto:  void QTextList::setFormat(const QTextListFormat & format);
// _ZN9QTextList9setFormatERK15QTextListFormat setFormat(const class QTextListFormat &)
extern "C"
void
C_ZN9QTextList9setFormatERK15QTextListFormat(void *qthis,
const QTextListFormat* arg1) {
  ((QTextList*)qthis)->setFormat(*((const QTextListFormat*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlist.h', line 56, column 14>
//   // proto:  void QTextList::QTextList(QTextDocument * doc);
extern "C"
QTextList*
C_ZN9QTextListC2EP13QTextDocument(QTextDocument * arg1) {
  auto ret = new QTextList(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlist.h', line 72, column 10>
//   // proto:  void QTextList::add(const QTextBlock & block);
// _ZN9QTextList3addERK10QTextBlock add(const class QTextBlock &)
extern "C"
void
C_ZN9QTextList3addERK10QTextBlock(void *qthis,
const QTextBlock* arg1) {
  ((QTextList*)qthis)->add(*((const QTextBlock*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlist.h', line 67, column 13>
//   // proto:  QString QTextList::itemText(const QTextBlock & );
// _ZNK9QTextList8itemTextERK10QTextBlock itemText(const class QTextBlock &)
extern "C"
QString*
C_ZNK9QTextList8itemTextERK10QTextBlock(void *qthis,
const QTextBlock* arg1) {
  auto ret =
  ((QTextList*)qthis)->itemText(*((const QTextBlock*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlist.h', line 69, column 10>
//   // proto:  void QTextList::removeItem(int i);
// _ZN9QTextList10removeItemEi removeItem(int)
extern "C"
void
C_ZN9QTextList10removeItemEi(void *qthis,
int arg1) {
  ((QTextList*)qthis)->removeItem(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlist.h', line 66, column 9>
//   // proto:  int QTextList::itemNumber(const QTextBlock & );
// _ZNK9QTextList10itemNumberERK10QTextBlock itemNumber(const class QTextBlock &)
extern "C"
int
C_ZNK9QTextList10itemNumberERK10QTextBlock(void *qthis,
const QTextBlock* arg1) {
  auto ret =
  ((QTextList*)qthis)->itemNumber(*((const QTextBlock*)arg1));
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlist.h', line 59, column 9>
//   // proto:  int QTextList::count();
// _ZNK9QTextList5countEv count()
extern "C"
int
C_ZNK9QTextList5countEv(void *qthis) {
  auto ret =
  ((QTextList*)qthis)->count();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlist.h', line 75, column 21>
//   // proto:  QTextListFormat QTextList::format();
// _ZNK9QTextList6formatEv format()
extern "C"
QTextListFormat*
C_ZNK9QTextList6formatEv(void *qthis) {
  auto ret =
  ((QTextList*)qthis)->format();
  return new QTextListFormat(ret); // 5
}
//   // proto:  void QTextList::~QTextList();
extern "C"
void C_ZN9QTextListD2Ev(void *qthis) {
  delete (QTextList*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlist.h', line 61, column 17>
//   // proto:  bool QTextList::isEmpty();
// _ZNK9QTextList7isEmptyEv isEmpty()
extern "C"
bool
C_ZNK9QTextList7isEmptyEv(void *qthis) {
  auto ret =
  ((QTextList*)qthis)->isEmpty();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextlist.h', line 54, column 5>
//   // proto:  const QMetaObject * QTextList::metaObject();
// _ZNK9QTextList10metaObjectEv metaObject()
extern "C"
void*
C_ZNK9QTextList10metaObjectEv(void *qthis) {
  auto ret =
  ((QTextList*)qthis)->metaObject();
  return (void*)ret;
}
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

