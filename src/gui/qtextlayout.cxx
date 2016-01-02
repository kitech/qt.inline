// auto generated, do not modify.
// created: Sat Jan  2 19:51:33 2016
// src-file: /QtGui/qtextlayout.h
// dst-file: /src/gui/qtextlayout.cxx
//

// header block begin =>
#include <qtextlayout.h>

extern "C" {

int QTextLine_Class_Size()
{
  return sizeof(QTextLine);
}

// QTextLine()
QTextLine* dector_ZN9QTextLineC1Ev()
{
  // static_assert(sizeof(QTextLine) == 32, "tyszerr");
  QTextLine* rthis = new QTextLine();
  return rthis;
}

  // proto:  qreal QTextLine::cursorToX(int cursorPos, QTextLine::Edge edge);
qreal demth_ZNK9QTextLine9cursorToXEiNS_4EdgeE(void *that, int cursorPos, QTextLine::Edge edge)
{
  QTextLine *cthat = (QTextLine *)that;
  return cthat->cursorToX(cursorPos, edge);
}

  // proto:  void QTextLine::QTextLine();
void demth_ZN9QTextLineC1Ev(void *that)
{
  QTextLine *cthat = (QTextLine *)that;
  auto _o = new(that) QTextLine();
}

  // proto:  bool QTextLine::isValid();
bool demth_ZNK9QTextLine7isValidEv(void *that)
{
  QTextLine *cthat = (QTextLine *)that;
  return cthat->isValid();
}

int QTextLayout_Class_Size()
{
  return sizeof(QTextLayout);
}

// QTextLayout(const class QString &, const class QFont &, class QPaintDevice *)
QTextLayout* dector_ZN11QTextLayoutC1ERK7QStringRK5QFontP12QPaintDevice(const QString & text, const QFont & font, QPaintDevice * paintdevice)
{
  // static_assert(sizeof(QTextLayout) == 32, "tyszerr");
  QTextLayout* rthis = new QTextLayout(text, font, paintdevice);
  return rthis;
}

// ~QTextLayout()
void dedtor_ZN11QTextLayoutD0Ev(QTextLayout* that)
{
  QTextLayout* rthis = (QTextLayout*)that;
  delete rthis;
}

// QTextLayout(const class QTextBlock &)
QTextLayout* dector_ZN11QTextLayoutC1ERK10QTextBlock(const QTextBlock & b)
{
  // static_assert(sizeof(QTextLayout) == 32, "tyszerr");
  QTextLayout* rthis = new QTextLayout(b);
  return rthis;
}

// QTextLayout(const class QString &)
QTextLayout* dector_ZN11QTextLayoutC1ERK7QString(const QString & text)
{
  // static_assert(sizeof(QTextLayout) == 32, "tyszerr");
  QTextLayout* rthis = new QTextLayout(text);
  return rthis;
}

// QTextLayout()
QTextLayout* dector_ZN11QTextLayoutC1Ev()
{
  // static_assert(sizeof(QTextLayout) == 32, "tyszerr");
  QTextLayout* rthis = new QTextLayout();
  return rthis;
}

int QTextInlineObject_Class_Size()
{
  return sizeof(QTextInlineObject);
}

// QTextInlineObject(int, class QTextEngine *)
QTextInlineObject* dector_ZN17QTextInlineObjectC1EiP11QTextEngine(int i, QTextEngine * e)
{
  // static_assert(sizeof(QTextInlineObject) == 32, "tyszerr");
  QTextInlineObject* rthis = new QTextInlineObject(i, e);
  return rthis;
}

// QTextInlineObject()
QTextInlineObject* dector_ZN17QTextInlineObjectC1Ev()
{
  // static_assert(sizeof(QTextInlineObject) == 32, "tyszerr");
  QTextInlineObject* rthis = new QTextInlineObject();
  return rthis;
}

  // proto:  void QTextInlineObject::QTextInlineObject(int i, QTextEngine * e);
void demth_ZN17QTextInlineObjectC1EiP11QTextEngine(void *that, int i, QTextEngine * e)
{
  QTextInlineObject *cthat = (QTextInlineObject *)that;
  auto _o = new(that) QTextInlineObject(i, e);
}

  // proto:  bool QTextInlineObject::isValid();
bool demth_ZNK17QTextInlineObject7isValidEv(void *that)
{
  QTextInlineObject *cthat = (QTextInlineObject *)that;
  return cthat->isValid();
}

  // proto:  void QTextInlineObject::QTextInlineObject();
void demth_ZN17QTextInlineObjectC1Ev(void *that)
{
  QTextInlineObject *cthat = (QTextInlineObject *)that;
  auto _o = new(that) QTextInlineObject();
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

