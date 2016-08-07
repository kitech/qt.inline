// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtGui/qtextobject.h
// dst-file: /src/gui/qtextobject.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qtextobject.h>


#include <qtextformat.h>
#include <qstring.h>
#include <qlist.h>
#include <qfontdatabase.h>
#include <qvector.h>
#include <qimage.h>
#include <qnamespace.h>
#include <qtextcursor.h>
// <= header block end

// main block begin =>
void __keep_qtextobject_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 307, column 12>
//   // proto:  void QTextFragment::QTextFragment(const QTextFragment & o);
if (true) {
  auto f = [](const QTextFragment & arg1) {
    new QTextFragment(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 306, column 12>
//   // proto:  void QTextFragment::QTextFragment();
if (true) {
  auto f = []() {
    new QTextFragment();
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 310, column 17>
//   // proto:  bool QTextFragment::isValid();
if (true) {
  auto f = [](QTextFragment flythis) {
    ((QTextFragment*)0)->isValid();
    flythis.isValid();
  };
  if (f == nullptr){}
}
// _ZNK13QTextFragment7isValidEv isValid()
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 305, column 12>
//   // proto:  void QTextFragment::QTextFragment(const QTextDocumentPrivate * priv, int f, int fe);
if (true) {
  auto f = [](const QTextDocumentPrivate * arg1, int arg2, int arg3) {
    new QTextFragment(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 206, column 12>
//   // proto:  void QTextBlock::QTextBlock(const QTextBlock & o);
if (true) {
  auto f = [](const QTextBlock & arg1) {
    new QTextBlock(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 288, column 34>
//   // proto:  QTextDocumentPrivate * QTextBlock::docHandle();
if (true) {
  auto f = [](QTextBlock flythis) {
    ((QTextBlock*)0)->docHandle();
    flythis.docHandle();
  };
  if (f == nullptr){}
}
// _ZNK10QTextBlock9docHandleEv docHandle()
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 204, column 12>
//   // proto:  void QTextBlock::QTextBlock(QTextDocumentPrivate * priv, int b);
if (true) {
  auto f = [](QTextDocumentPrivate * arg1, int arg2) {
    new QTextBlock(arg1, arg2);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 289, column 16>
//   // proto:  int QTextBlock::fragmentIndex();
if (true) {
  auto f = [](QTextBlock flythis) {
    ((QTextBlock*)0)->fragmentIndex();
    flythis.fragmentIndex();
  };
  if (f == nullptr){}
}
// _ZNK10QTextBlock13fragmentIndexEv fragmentIndex()
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 205, column 12>
//   // proto:  void QTextBlock::QTextBlock();
if (true) {
  auto f = []() {
    new QTextBlock();
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 126, column 22>
//   // proto:  QTextFrameFormat QTextFrame::frameFormat();
if (true) {
  auto f = [](QTextFrame flythis) {
    ((QTextFrame*)0)->frameFormat();
    flythis.frameFormat();
  };
  if (f == nullptr){}
}
// _ZNK10QTextFrame11frameFormatEv frameFormat()
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 125, column 17>
//   // proto:  void QTextFrame::setFrameFormat(const QTextFrameFormat & format);
if (true) {
  auto f = [](QTextFrame flythis, const QTextFrameFormat & arg1) {
    ((QTextFrame*)0)->setFrameFormat(arg1);
    flythis.setFrameFormat(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QTextFrame14setFrameFormatERK16QTextFrameFormat setFrameFormat(const class QTextFrameFormat &)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QTextObject_Class_Size()
{
  return sizeof(QTextObject);
}

extern "C"
int QTextBlockUserData_Class_Size()
{
  return sizeof(QTextBlockUserData);
}

extern "C"
int QTextFragment_Class_Size()
{
  return sizeof(QTextFragment);
}

extern "C"
int QTextFrameLayoutData_Class_Size()
{
  return sizeof(QTextFrameLayoutData);
}

extern "C"
int QTextBlock_Class_Size()
{
  return sizeof(QTextBlock);
}

extern "C"
int QTextBlockGroup_Class_Size()
{
  return sizeof(QTextBlockGroup);
}

extern "C"
int QTextFrame_Class_Size()
{
  return sizeof(QTextFrame);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 77, column 27>
//   // proto:  QTextDocumentPrivate * QTextObject::docHandle();
// _ZNK11QTextObject9docHandleEv docHandle()
extern "C"
void*
C_ZNK11QTextObject9docHandleEv(void *qthis) {
  auto ret =
  ((QTextObject*)qthis)->docHandle();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 70, column 17>
//   // proto:  QTextFormat QTextObject::format();
// _ZNK11QTextObject6formatEv format()
extern "C"
QTextFormat*
C_ZNK11QTextObject6formatEv(void *qthis) {
  auto ret =
  ((QTextObject*)qthis)->format();
  return new QTextFormat(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 71, column 9>
//   // proto:  int QTextObject::formatIndex();
// _ZNK11QTextObject11formatIndexEv formatIndex()
extern "C"
int
C_ZNK11QTextObject11formatIndexEv(void *qthis) {
  auto ret =
  ((QTextObject*)qthis)->formatIndex();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 73, column 20>
//   // proto:  QTextDocument * QTextObject::document();
// _ZNK11QTextObject8documentEv document()
extern "C"
void*
C_ZNK11QTextObject8documentEv(void *qthis) {
  auto ret =
  ((QTextObject*)qthis)->document();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 75, column 9>
//   // proto:  int QTextObject::objectIndex();
// _ZNK11QTextObject11objectIndexEv objectIndex()
extern "C"
int
C_ZNK11QTextObject11objectIndexEv(void *qthis) {
  auto ret =
  ((QTextObject*)qthis)->objectIndex();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 61, column 5>
//   // proto:  const QMetaObject * QTextObject::metaObject();
// _ZNK11QTextObject10metaObjectEv metaObject()
extern "C"
void*
C_ZNK11QTextObject10metaObjectEv(void *qthis) {
  auto ret =
  ((QTextObject*)qthis)->metaObject();
  return (void*)ret;
}
//   // proto:  void QTextBlockUserData::~QTextBlockUserData();
extern "C"
void C_ZN18QTextBlockUserDataD2Ev(void *qthis) {
  delete (QTextBlockUserData*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 321, column 9>
//   // proto:  int QTextFragment::charFormatIndex();
// _ZNK13QTextFragment15charFormatIndexEv charFormatIndex()
extern "C"
int
C_ZNK13QTextFragment15charFormatIndexEv(void *qthis) {
  auto ret =
  ((QTextFragment*)qthis)->charFormatIndex();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 316, column 9>
//   // proto:  int QTextFragment::position();
// _ZNK13QTextFragment8positionEv position()
extern "C"
int
C_ZNK13QTextFragment8positionEv(void *qthis) {
  auto ret =
  ((QTextFragment*)qthis)->position();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 307, column 12>
//   // proto:  void QTextFragment::QTextFragment(const QTextFragment & o);
extern "C"
QTextFragment*
C_ZN13QTextFragmentC2ERKS_(const QTextFragment* arg1) {
  auto ret = new QTextFragment(*((const QTextFragment*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 318, column 10>
//   // proto:  bool QTextFragment::contains(int position);
// _ZNK13QTextFragment8containsEi contains(int)
extern "C"
bool
C_ZNK13QTextFragment8containsEi(void *qthis,
int arg1) {
  auto ret =
  ((QTextFragment*)qthis)->contains(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 306, column 12>
//   // proto:  void QTextFragment::QTextFragment();
extern "C"
QTextFragment*
C_ZN13QTextFragmentC2Ev() {
  auto ret = new QTextFragment();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 322, column 13>
//   // proto:  QString QTextFragment::text();
// _ZNK13QTextFragment4textEv text()
extern "C"
QString*
C_ZNK13QTextFragment4textEv(void *qthis) {
  auto ret =
  ((QTextFragment*)qthis)->text();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 325, column 22>
//   // proto:  QList<QGlyphRun> QTextFragment::glyphRuns(int from, int length);
// _ZNK13QTextFragment9glyphRunsEii glyphRuns(int, int)
extern "C"
QList<QGlyphRun>*
C_ZNK13QTextFragment9glyphRunsEii(void *qthis,
int arg1,
int arg2) {
  auto ret =
  ((QTextFragment*)qthis)->glyphRuns(arg1,
arg2);
  return new QList<QGlyphRun>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 310, column 17>
//   // proto:  bool QTextFragment::isValid();
// _ZNK13QTextFragment7isValidEv isValid()
extern "C"
bool
C_ZNK13QTextFragment7isValidEv(void *qthis) {
  auto ret =
  ((QTextFragment*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 305, column 12>
//   // proto:  void QTextFragment::QTextFragment(const QTextDocumentPrivate * priv, int f, int fe);
extern "C"
QTextFragment*
C_ZN13QTextFragmentC2EPK20QTextDocumentPrivateii(const QTextDocumentPrivate * arg1,
int arg2,
int arg3) {
  auto ret = new QTextFragment(arg1,
arg2,
arg3);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 320, column 21>
//   // proto:  QTextCharFormat QTextFragment::charFormat();
// _ZNK13QTextFragment10charFormatEv charFormat()
extern "C"
QTextCharFormat*
C_ZNK13QTextFragment10charFormatEv(void *qthis) {
  auto ret =
  ((QTextFragment*)qthis)->charFormat();
  return new QTextCharFormat(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 317, column 9>
//   // proto:  int QTextFragment::length();
// _ZNK13QTextFragment6lengthEv length()
extern "C"
int
C_ZNK13QTextFragment6lengthEv(void *qthis) {
  auto ret =
  ((QTextFragment*)qthis)->length();
  return ret; // 0 TypeKind.INT
}
//   // proto:  void QTextFrameLayoutData::~QTextFrameLayoutData();
extern "C"
void C_ZN20QTextFrameLayoutDataD2Ev(void *qthis) {
  delete (QTextFrameLayoutData*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 232, column 26>
//   // proto:  const QTextDocument * QTextBlock::document();
// _ZNK10QTextBlock8documentEv document()
extern "C"
void*
C_ZNK10QTextBlock8documentEv(void *qthis) {
  auto ret =
  ((QTextBlock*)qthis)->document();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 286, column 16>
//   // proto:  QTextBlock QTextBlock::previous();
// _ZNK10QTextBlock8previousEv previous()
extern "C"
QTextBlock*
C_ZNK10QTextBlock8previousEv(void *qthis) {
  auto ret =
  ((QTextBlock*)qthis)->previous();
  return new QTextBlock(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 216, column 9>
//   // proto:  int QTextBlock::length();
// _ZNK10QTextBlock6lengthEv length()
extern "C"
int
C_ZNK10QTextBlock6lengthEv(void *qthis) {
  auto ret =
  ((QTextBlock*)qthis)->length();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 236, column 25>
//   // proto:  QTextBlockUserData * QTextBlock::userData();
// _ZNK10QTextBlock8userDataEv userData()
extern "C"
void*
C_ZNK10QTextBlock8userDataEv(void *qthis) {
  auto ret =
  ((QTextBlock*)qthis)->userData();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 283, column 14>
//   // proto:  QTextBlock::iterator QTextBlock::end();
// _ZNK10QTextBlock3endEv end()
extern "C"
QTextBlock::iterator*
C_ZNK10QTextBlock3endEv(void *qthis) {
  auto ret =
  ((QTextBlock*)qthis)->end();
  return new QTextBlock::iterator(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 206, column 12>
//   // proto:  void QTextBlock::QTextBlock(const QTextBlock & o);
extern "C"
QTextBlock*
C_ZN10QTextBlockC2ERKS_(const QTextBlock* arg1) {
  auto ret = new QTextBlock(*((const QTextBlock*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 228, column 13>
//   // proto:  QString QTextBlock::text();
// _ZNK10QTextBlock4textEv text()
extern "C"
QString*
C_ZNK10QTextBlock4textEv(void *qthis) {
  auto ret =
  ((QTextBlock*)qthis)->text();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 252, column 9>
//   // proto:  int QTextBlock::lineCount();
// _ZNK10QTextBlock9lineCountEv lineCount()
extern "C"
int
C_ZNK10QTextBlock9lineCountEv(void *qthis) {
  auto ret =
  ((QTextBlock*)qthis)->lineCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 217, column 10>
//   // proto:  bool QTextBlock::contains(int position);
// _ZNK10QTextBlock8containsEi contains(int)
extern "C"
bool
C_ZNK10QTextBlock8containsEi(void *qthis,
int arg1) {
  auto ret =
  ((QTextBlock*)qthis)->contains(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 248, column 9>
//   // proto:  int QTextBlock::blockNumber();
// _ZNK10QTextBlock11blockNumberEv blockNumber()
extern "C"
int
C_ZNK10QTextBlock11blockNumberEv(void *qthis) {
  auto ret =
  ((QTextBlock*)qthis)->blockNumber();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 243, column 10>
//   // proto:  void QTextBlock::setRevision(int rev);
// _ZN10QTextBlock11setRevisionEi setRevision(int)
extern "C"
void
C_ZN10QTextBlock11setRevisionEi(void *qthis,
int arg1) {
  ((QTextBlock*)qthis)->setRevision(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 246, column 10>
//   // proto:  void QTextBlock::setVisible(bool visible);
// _ZN10QTextBlock10setVisibleEb setVisible(_Bool)
extern "C"
void
C_ZN10QTextBlock10setVisibleEb(void *qthis,
bool arg1) {
  ((QTextBlock*)qthis)->setVisible(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 220, column 10>
//   // proto:  void QTextBlock::clearLayout();
// _ZN10QTextBlock11clearLayoutEv clearLayout()
extern "C"
void
C_ZN10QTextBlock11clearLayoutEv(void *qthis) {
  ((QTextBlock*)qthis)->clearLayout();
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 288, column 34>
//   // proto:  QTextDocumentPrivate * QTextBlock::docHandle();
// _ZNK10QTextBlock9docHandleEv docHandle()
extern "C"
void*
C_ZNK10QTextBlock9docHandleEv(void *qthis) {
  auto ret =
  ((QTextBlock*)qthis)->docHandle();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 239, column 9>
//   // proto:  int QTextBlock::userState();
// _ZNK10QTextBlock9userStateEv userState()
extern "C"
int
C_ZNK10QTextBlock9userStateEv(void *qthis) {
  auto ret =
  ((QTextBlock*)qthis)->userState();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 224, column 9>
//   // proto:  int QTextBlock::charFormatIndex();
// _ZNK10QTextBlock15charFormatIndexEv charFormatIndex()
extern "C"
int
C_ZNK10QTextBlock15charFormatIndexEv(void *qthis) {
  auto ret =
  ((QTextBlock*)qthis)->charFormatIndex();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 230, column 39>
//   // proto:  QVector<QTextLayout::FormatRange> QTextBlock::textFormats();
// _ZNK10QTextBlock11textFormatsEv textFormats()
extern "C"
QVector<QTextLayout::FormatRange>*
C_ZNK10QTextBlock11textFormatsEv(void *qthis) {
  auto ret =
  ((QTextBlock*)qthis)->textFormats();
  return new QVector<QTextLayout::FormatRange>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 242, column 9>
//   // proto:  int QTextBlock::revision();
// _ZNK10QTextBlock8revisionEv revision()
extern "C"
int
C_ZNK10QTextBlock8revisionEv(void *qthis) {
  auto ret =
  ((QTextBlock*)qthis)->revision();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 282, column 14>
//   // proto:  QTextBlock::iterator QTextBlock::begin();
// _ZNK10QTextBlock5beginEv begin()
extern "C"
QTextBlock::iterator*
C_ZNK10QTextBlock5beginEv(void *qthis) {
  auto ret =
  ((QTextBlock*)qthis)->begin();
  return new QTextBlock::iterator(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 215, column 9>
//   // proto:  int QTextBlock::position();
// _ZNK10QTextBlock8positionEv position()
extern "C"
int
C_ZNK10QTextBlock8positionEv(void *qthis) {
  auto ret =
  ((QTextBlock*)qthis)->position();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 209, column 10>
//   // proto:  bool QTextBlock::isValid();
// _ZNK10QTextBlock7isValidEv isValid()
extern "C"
bool
C_ZNK10QTextBlock7isValidEv(void *qthis) {
  auto ret =
  ((QTextBlock*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 234, column 16>
//   // proto:  QTextList * QTextBlock::textList();
// _ZNK10QTextBlock8textListEv textList()
extern "C"
void*
C_ZNK10QTextBlock8textListEv(void *qthis) {
  auto ret =
  ((QTextBlock*)qthis)->textList();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 219, column 18>
//   // proto:  QTextLayout * QTextBlock::layout();
// _ZNK10QTextBlock6layoutEv layout()
extern "C"
void*
C_ZNK10QTextBlock6layoutEv(void *qthis) {
  auto ret =
  ((QTextBlock*)qthis)->layout();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 237, column 10>
//   // proto:  void QTextBlock::setUserData(QTextBlockUserData * data);
// _ZN10QTextBlock11setUserDataEP18QTextBlockUserData setUserData(class QTextBlockUserData *)
extern "C"
void
C_ZN10QTextBlock11setUserDataEP18QTextBlockUserData(void *qthis,
QTextBlockUserData * arg1) {
  ((QTextBlock*)qthis)->setUserData(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 222, column 9>
//   // proto:  int QTextBlock::blockFormatIndex();
// _ZNK10QTextBlock16blockFormatIndexEv blockFormatIndex()
extern "C"
int
C_ZNK10QTextBlock16blockFormatIndexEv(void *qthis) {
  auto ret =
  ((QTextBlock*)qthis)->blockFormatIndex();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 240, column 10>
//   // proto:  void QTextBlock::setUserState(int state);
// _ZN10QTextBlock12setUserStateEi setUserState(int)
extern "C"
void
C_ZN10QTextBlock12setUserStateEi(void *qthis,
int arg1) {
  ((QTextBlock*)qthis)->setUserState(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 204, column 12>
//   // proto:  void QTextBlock::QTextBlock(QTextDocumentPrivate * priv, int b);
extern "C"
QTextBlock*
C_ZN10QTextBlockC2EP20QTextDocumentPrivatei(QTextDocumentPrivate * arg1,
int arg2) {
  auto ret = new QTextBlock(arg1,
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 226, column 25>
//   // proto:  Qt::LayoutDirection QTextBlock::textDirection();
// _ZNK10QTextBlock13textDirectionEv textDirection()
extern "C"
Qt::LayoutDirection
C_ZNK10QTextBlock13textDirectionEv(void *qthis) {
  auto ret =
  ((QTextBlock*)qthis)->textDirection();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 289, column 16>
//   // proto:  int QTextBlock::fragmentIndex();
// _ZNK10QTextBlock13fragmentIndexEv fragmentIndex()
extern "C"
int
C_ZNK10QTextBlock13fragmentIndexEv(void *qthis) {
  auto ret =
  ((QTextBlock*)qthis)->fragmentIndex();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 245, column 10>
//   // proto:  bool QTextBlock::isVisible();
// _ZNK10QTextBlock9isVisibleEv isVisible()
extern "C"
bool
C_ZNK10QTextBlock9isVisibleEv(void *qthis) {
  auto ret =
  ((QTextBlock*)qthis)->isVisible();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 251, column 10>
//   // proto:  void QTextBlock::setLineCount(int count);
// _ZN10QTextBlock12setLineCountEi setLineCount(int)
extern "C"
void
C_ZN10QTextBlock12setLineCountEi(void *qthis,
int arg1) {
  ((QTextBlock*)qthis)->setLineCount(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 285, column 16>
//   // proto:  QTextBlock QTextBlock::next();
// _ZNK10QTextBlock4nextEv next()
extern "C"
QTextBlock*
C_ZNK10QTextBlock4nextEv(void *qthis) {
  auto ret =
  ((QTextBlock*)qthis)->next();
  return new QTextBlock(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 221, column 22>
//   // proto:  QTextBlockFormat QTextBlock::blockFormat();
// _ZNK10QTextBlock11blockFormatEv blockFormat()
extern "C"
QTextBlockFormat*
C_ZNK10QTextBlock11blockFormatEv(void *qthis) {
  auto ret =
  ((QTextBlock*)qthis)->blockFormat();
  return new QTextBlockFormat(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 205, column 12>
//   // proto:  void QTextBlock::QTextBlock();
extern "C"
QTextBlock*
C_ZN10QTextBlockC2Ev() {
  auto ret = new QTextBlock();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 249, column 9>
//   // proto:  int QTextBlock::firstLineNumber();
// _ZNK10QTextBlock15firstLineNumberEv firstLineNumber()
extern "C"
int
C_ZNK10QTextBlock15firstLineNumberEv(void *qthis) {
  auto ret =
  ((QTextBlock*)qthis)->firstLineNumber();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 223, column 21>
//   // proto:  QTextCharFormat QTextBlock::charFormat();
// _ZNK10QTextBlock10charFormatEv charFormat()
extern "C"
QTextCharFormat*
C_ZNK10QTextBlock10charFormatEv(void *qthis) {
  auto ret =
  ((QTextBlock*)qthis)->charFormat();
  return new QTextCharFormat(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 91, column 5>
//   // proto:  const QMetaObject * QTextBlockGroup::metaObject();
// _ZNK15QTextBlockGroup10metaObjectEv metaObject()
extern "C"
void*
C_ZNK15QTextBlockGroup10metaObjectEv(void *qthis) {
  auto ret =
  ((QTextBlockGroup*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 126, column 22>
//   // proto:  QTextFrameFormat QTextFrame::frameFormat();
// _ZNK10QTextFrame11frameFormatEv frameFormat()
extern "C"
QTextFrameFormat*
C_ZNK10QTextFrame11frameFormatEv(void *qthis) {
  auto ret =
  ((QTextFrame*)qthis)->frameFormat();
  return new QTextFrameFormat(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 133, column 27>
//   // proto:  QTextFrameLayoutData * QTextFrame::layoutData();
// _ZNK10QTextFrame10layoutDataEv layoutData()
extern "C"
void*
C_ZNK10QTextFrame10layoutDataEv(void *qthis) {
  auto ret =
  ((QTextFrame*)qthis)->layoutData();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 134, column 10>
//   // proto:  void QTextFrame::setLayoutData(QTextFrameLayoutData * data);
// _ZN10QTextFrame13setLayoutDataEP20QTextFrameLayoutData setLayoutData(class QTextFrameLayoutData *)
extern "C"
void
C_ZN10QTextFrame13setLayoutDataEP20QTextFrameLayoutData(void *qthis,
QTextFrameLayoutData * arg1) {
  ((QTextFrame*)qthis)->setLayoutData(arg1);
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 180, column 14>
//   // proto:  QTextFrame::iterator QTextFrame::begin();
// _ZNK10QTextFrame5beginEv begin()
extern "C"
QTextFrame::iterator*
C_ZNK10QTextFrame5beginEv(void *qthis) {
  auto ret =
  ((QTextFrame*)qthis)->begin();
  return new QTextFrame::iterator(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 181, column 14>
//   // proto:  QTextFrame::iterator QTextFrame::end();
// _ZNK10QTextFrame3endEv end()
extern "C"
QTextFrame::iterator*
C_ZNK10QTextFrame3endEv(void *qthis) {
  auto ret =
  ((QTextFrame*)qthis)->end();
  return new QTextFrame::iterator(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 125, column 17>
//   // proto:  void QTextFrame::setFrameFormat(const QTextFrameFormat & format);
// _ZN10QTextFrame14setFrameFormatERK16QTextFrameFormat setFrameFormat(const class QTextFrameFormat &)
extern "C"
void
C_ZN10QTextFrame14setFrameFormatERK16QTextFrameFormat(void *qthis,
const QTextFrameFormat* arg1) {
  ((QTextFrame*)qthis)->setFrameFormat(*((const QTextFrameFormat*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 119, column 5>
//   // proto:  const QMetaObject * QTextFrame::metaObject();
// _ZNK10QTextFrame10metaObjectEv metaObject()
extern "C"
void*
C_ZNK10QTextFrame10metaObjectEv(void *qthis) {
  auto ret =
  ((QTextFrame*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 137, column 17>
//   // proto:  QTextFrame * QTextFrame::parentFrame();
// _ZNK10QTextFrame11parentFrameEv parentFrame()
extern "C"
void*
C_ZNK10QTextFrame11parentFrameEv(void *qthis) {
  auto ret =
  ((QTextFrame*)qthis)->parentFrame();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 130, column 9>
//   // proto:  int QTextFrame::firstPosition();
// _ZNK10QTextFrame13firstPositionEv firstPosition()
extern "C"
int
C_ZNK10QTextFrame13firstPositionEv(void *qthis) {
  auto ret =
  ((QTextFrame*)qthis)->firstPosition();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 136, column 25>
//   // proto:  QList<QTextFrame *> QTextFrame::childFrames();
// _ZNK10QTextFrame11childFramesEv childFrames()
extern "C"
QList<QTextFrame *>*
C_ZNK10QTextFrame11childFramesEv(void *qthis) {
  auto ret =
  ((QTextFrame*)qthis)->childFrames();
  return new QList<QTextFrame *>(ret); // 5
}
//   // proto:  void QTextFrame::~QTextFrame();
extern "C"
void C_ZN10QTextFrameD2Ev(void *qthis) {
  delete (QTextFrame*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 129, column 17>
//   // proto:  QTextCursor QTextFrame::lastCursorPosition();
// _ZNK10QTextFrame18lastCursorPositionEv lastCursorPosition()
extern "C"
QTextCursor*
C_ZNK10QTextFrame18lastCursorPositionEv(void *qthis) {
  auto ret =
  ((QTextFrame*)qthis)->lastCursorPosition();
  return new QTextCursor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 122, column 14>
//   // proto:  void QTextFrame::QTextFrame(QTextDocument * doc);
extern "C"
QTextFrame*
C_ZN10QTextFrameC2EP13QTextDocument(QTextDocument * arg1) {
  auto ret = new QTextFrame(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 131, column 9>
//   // proto:  int QTextFrame::lastPosition();
// _ZNK10QTextFrame12lastPositionEv lastPosition()
extern "C"
int
C_ZNK10QTextFrame12lastPositionEv(void *qthis) {
  auto ret =
  ((QTextFrame*)qthis)->lastPosition();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtGui/qtextobject.h', line 128, column 17>
//   // proto:  QTextCursor QTextFrame::firstCursorPosition();
// _ZNK10QTextFrame19firstCursorPositionEv firstCursorPosition()
extern "C"
QTextCursor*
C_ZNK10QTextFrame19firstCursorPositionEv(void *qthis) {
  auto ret =
  ((QTextFrame*)qthis)->firstCursorPosition();
  return new QTextCursor(ret); // 5
}
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

