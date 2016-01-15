#include <qtextformat.h>
// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtGui/qtextobject.h
// dst-file: /src/gui/qtextobject.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qtextobject.h>

extern "C" {

int QTextObject_Class_Size()
{
  return sizeof(QTextObject);
}

int QTextBlockUserData_Class_Size()
{
  return sizeof(QTextBlockUserData);
}

int QTextFragment_Class_Size()
{
  return sizeof(QTextFragment);
}

int QTextFrameLayoutData_Class_Size()
{
  return sizeof(QTextFrameLayoutData);
}

int QTextBlock_Class_Size()
{
  return sizeof(QTextBlock);
}

int QTextBlockGroup_Class_Size()
{
  return sizeof(QTextBlockGroup);
}

int QTextFrame_Class_Size()
{
  return sizeof(QTextFrame);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qtextobject_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 293, column 12>
//   // proto:  void QTextFragment::QTextFragment(const QTextFragment & o);
if (false) {
  auto f = [](const QTextFragment & arg1) {
    new QTextFragment(arg1);
  };
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 292, column 12>
//   // proto:  void QTextFragment::QTextFragment();
if (false) {
  auto f = []() {
    new QTextFragment();
  };
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 296, column 17>
//   // proto:  bool QTextFragment::isValid();
if (false) {
  auto f = []() {
    ((QTextFragment*)0)->isValid();
  };
}
// _ZNK13QTextFragment7isValidEv isValid()
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 291, column 12>
//   // proto:  void QTextFragment::QTextFragment(const QTextDocumentPrivate * priv, int f, int fe);
if (false) {
  auto f = [](const QTextDocumentPrivate * arg1, int arg2, int arg3) {
    new QTextFragment(arg1, arg2, arg3);
  };
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 194, column 12>
//   // proto:  void QTextBlock::QTextBlock(const QTextBlock & o);
if (false) {
  auto f = [](const QTextBlock & arg1) {
    new QTextBlock(arg1);
  };
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 274, column 34>
//   // proto:  QTextDocumentPrivate * QTextBlock::docHandle();
if (false) {
  auto f = []() {
    ((QTextBlock*)0)->docHandle();
  };
}
// _ZNK10QTextBlock9docHandleEv docHandle()
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 192, column 12>
//   // proto:  void QTextBlock::QTextBlock(QTextDocumentPrivate * priv, int b);
if (false) {
  auto f = [](QTextDocumentPrivate * arg1, int arg2) {
    new QTextBlock(arg1, arg2);
  };
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 275, column 16>
//   // proto:  int QTextBlock::fragmentIndex();
if (false) {
  auto f = []() {
    ((QTextBlock*)0)->fragmentIndex();
  };
}
// _ZNK10QTextBlock13fragmentIndexEv fragmentIndex()
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 193, column 12>
//   // proto:  void QTextBlock::QTextBlock();
if (false) {
  auto f = []() {
    new QTextBlock();
  };
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 120, column 22>
//   // proto:  QTextFrameFormat QTextFrame::frameFormat();
if (false) {
  auto f = []() {
    ((QTextFrame*)0)->frameFormat();
  };
}
// _ZNK10QTextFrame11frameFormatEv frameFormat()
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 119, column 17>
//   // proto:  void QTextFrame::setFrameFormat(const QTextFrameFormat & format);
if (false) {
  auto f = [](const QTextFrameFormat & arg1) {
    ((QTextFrame*)0)->setFrameFormat(arg1);
  };
}
// _ZN10QTextFrame14setFrameFormatERK16QTextFrameFormat setFrameFormat(const class QTextFrameFormat &)
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QTextObject_SlotProxy here
class QTextObject_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QTextObject_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};

extern "C" {
  QTextObject_SlotProxy* QTextObject_SlotProxy_new()
  {
    return new QTextObject_SlotProxy();
  }
};

// QTextBlockGroup_SlotProxy here
class QTextBlockGroup_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QTextBlockGroup_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};

extern "C" {
  QTextBlockGroup_SlotProxy* QTextBlockGroup_SlotProxy_new()
  {
    return new QTextBlockGroup_SlotProxy();
  }
};

// QTextFrame_SlotProxy here
class QTextFrame_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QTextFrame_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/gui/qtextobject.moc"

extern "C" {
  QTextFrame_SlotProxy* QTextFrame_SlotProxy_new()
  {
    return new QTextFrame_SlotProxy();
  }
};

// <= body block end

